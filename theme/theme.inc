<?php

function agile_artmob_preprocess_artmob_visualization(&$variables) {
  $module_path = drupal_get_path('module', 'agile_artmob');
  drupal_add_js("$module_path/js/agile_artmob.js");
  drupal_add_js("$module_path/js/fairdealing_var.js");
  drupal_add_js("$module_path/js/fairdealing_menu.js");
  drupal_add_js("$module_path/js/fairdealing_init.js");
  drupal_add_js("$module_path/js/fairdealing_visualizations.js");
}

function preprocess_mods_image(&$variables) {
  module_load_include('inc', 'agile_artmob', 'includes/db');
  $node = $variables['node'];
  $pid = agile_artmob_get_pids_from_nid($node->nid);
  $variables['islandora_object_link'] = $pid ? l(t('Edit Metadata'), "islandora/edit_form/$pid/MODS") : "";
  $wrapper = entity_metadata_wrapper('node', $node);
  $term = isset($wrapper->field_license) ? $wrapper->field_license->value() : "";
  $variables['license_link'] = "";
  $tid = 0;
  if ($term) {
    $text = $term->name;
    $tid = $term->tid;
    $variables['license_link'] = l($text, "/taxonomy/term/$tid");
    $variables['license'] = "/taxonomy/term/$tid";
  }

}

function preprocess_citations(&$variables) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  $wrapper = entity_metadata_wrapper('node', $variables['node']);
  $variables['parent_link'] = '';
  if ($variables['view_mode'] == 'full' && isset($wrapper->field_is_citation_of)) {
    $parent_link = render($variables['content']['field_is_citation_of']);
    $variables['parent_link'] = "<hr />Citation of $parent_link<hr />";
  }
}
