<?php
/**
 * @file
 * This file contains all citation functions.
 */

/**
 * Citations callback.
 *
 * @param node $node
 *   Node with attributes attached.
 *
 * @return HTML
 *   Citations HTML
 */
function agile_artmob_citations($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $nid = $node->nid;
  $citations = artmob_get_attached($nid, 'citations', 'field_is_citation_of');
  $link = l(t('Add new citation'), "artmob/citation/$nid", array('attributes' => array('class' => 'buttonize')));
  $output = t('No citations found.');
  $output = "<p>$output</p>";
  if ($citations) {
    $output = '';
    foreach ($citations as $citation) {
      $node = node_load($citation);
      if (isset($node->body) && $node->body) {
        $view = node_view($node, 'teaser');
        $output .= drupal_render($view);
      }
      else {
        node_delete($node->nid);
      }
    }
  }
  return $link . $output;
}
