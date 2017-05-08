<?php

function agile_artmob_licensex($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $wrapper = entity_metadata_wrapper('node', $node);
  $license = $wrapper->field_license->value();
  $link = l(t('Add license type'), "admin/structure/taxonomy/licenses/add", array('attributes' => array('class' => 'buttonize')));
  $link = "<p>$link</p>";
  $output = t('There is no license associated with this asset.');
  if (isset($license)) {
    $output = "<h2>{$license->name}</h2>";
    $output .= "<p>{$license->description}</p>";
  }
  return $link . $output;
}

function agile_artmob_license($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $nid = $node->nid;
  $licenses = artmob_get_attached($nid, 'assigned_licenses', 'field_licensed_asset');
  $link = l(t('Add license'), "artmob/license/$nid", array('attributes' => array('class' => 'buttonize')));
  $modify_link = l(t('Change license'), "artmob/license/$nid", array('attributes' => array('class' => 'buttonize')));
  $output = t('No license assigned.');
  $output = "<p>$output</p>";
  if ($licenses) {
    $node = node_load($licenses[0]);
    $link = l(t('Change license'), "node/{$node->nid}/edit", array('attributes' => array('class' => 'buttonize')));
    $output = '';
    $view = node_view($node);
    $output .= drupal_render($view);
  }
  return $link . $output;
}
