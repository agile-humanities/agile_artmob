<?php
/**
 * @file
 * artmob_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artmob_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function artmob_features_node_info() {
  $items = array(
    'attribute' => array(
      'name' => t('Attribute'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'citations' => array(
      'name' => t('Citations'),
      'base' => 'node_content',
      'description' => t('Citations to be attached to Artmob Assets'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drupal_fedora_pdf' => array(
      'name' => t('Drupal Fedora PDF'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
