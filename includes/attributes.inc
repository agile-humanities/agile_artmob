<?php

function agile_artmob_attributes($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $nid = $node->nid;
  $attributes = artmob_get_attached($nid, 'attribute', 'field_is_attribution_of');
  $link = l(t('Add new attribute'), "artmob/attribute/$nid", array('attributes' => array('class' => 'buttonize')));
  $output = t('No attributes found.');
  $output = "<p>$output</p>";
  if ($attributes) {
    $output = '';
    foreach ($attributes as $attribute) {
      $node = node_load($attribute);
      $view = node_view( $node, 'teaser' );
      $output  .= drupal_render($view);

    }
  }
  return $link . $output;
}
