<?php

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
      $view = node_view($node, 'teaser');
      $output .= drupal_render($view);
    }
  }
  return $link . $output;
}
