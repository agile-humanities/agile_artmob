<?php

function agile_artmob_discussions($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $nid = $node->nid;
  $discussions = artmob_get_attached($nid, 'discussion', 'field_is_discussion_of');
  $link = l(t('Add new discussion'), "artmob/discussion/$nid", array('attributes' => array('class' => 'buttonize')));
  $output = t('No discussions found.');
  $output = "<p>$output</p>";
  if ($discussions) {
    $output = '';
    foreach ($discussions as $discussion) {
      $node = node_load($discussion);
      $view = node_view($node, 'teaser');
      $output .= drupal_render($view);
    }
  }
  return $link . $output;
}
