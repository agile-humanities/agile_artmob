<?php

function artmob_citation_form($form, $form_state, $parent_node) {
  $upload_size = min((int) ini_get('post_max_size'), (int) ini_get('upload_max_filesize'));

  $form['attached_file'] = array(
    '#type' => 'fieldset',
    '#title' => t('Attached File'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['attached_file']['file'] = array(
    '#title' => t('Attach new file.'),
    '#type' => 'managed_file',
    '#required' => FALSE,
    '#upload_location' => 'temporary://',
    '#upload_validators' => array(
      'file_validate_size' => array($upload_size * 1024 * 1024),
    ),
  );
  $form['citation'] = array(
    '#type' => 'fieldset',
    '#title' => t('Citation'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['citation']['date_of_birth'] = array(
    '#title' => t('Add Date'),
    '#type' => 'date_fields',
  );
  $form['identifiers'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add Identifiers'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['identifiers']['identifier'] = array(
    '#title' => t('Add Date'),
    '#type' => 'date_fields',
  );
  
  
  
  
  
  
  return $form;
}
