<?php
/**
 * @file
 * This file contains all license functions.
 */

/**
 * Discussions callback.
 *
 * @param node $node
 *   Node with licenses attached.
 *
 * @return HTML
 *   License HTML
 */
function agile_artmob_license($node) {
  $path = drupal_get_path('module', 'agile_artmob');
  drupal_add_css("$path/css/artmob_custom.css");
  module_load_include('inc', 'agile_artmob', 'includes/utilities');
  $nid = $node->nid;
  $licenses = artmob_get_attached($nid, 'assigned_licenses', 'field_licensed_asset');
  $link = l(t('Assign license'), "artmob/license/$nid", array('attributes' => array('class' => 'buttonize')));

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
  $new_license = l(t('Add new license type'), "node/add/licences", array('attributes' => array('class' => 'buttonize')));
  return $link . $new_license . $output;
}
