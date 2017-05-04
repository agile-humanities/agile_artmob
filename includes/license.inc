<?php

function agile_artmob_license($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $wrapper = entity_metadata_wrapper('node', $node);
  $license = $wrapper->field_license->value();
  $output = t('There is no license associated with this asset.');
  if (isset($license)) {
    $output = "<h2>{$license->name}</h2>";
    $output .= "<p>{$license->description}</p>";
  }
  return $output;
}
