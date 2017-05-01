<?php
/**
 * @file
 * artmob_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function artmob_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citation_information|node|citations|form';
  $field_group->group_name = 'group_citation_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_citation';
  $field_group->data = array(
    'label' => 'Citation Information',
    'weight' => '36',
    'children' => array(
      0 => 'field_title_without_prefix',
      1 => 'field_subtitle',
      2 => 'field_edition',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-citation-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_citation_information|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citation_set|node|citations|form';
  $field_group->group_name = 'group_citation_set';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_citation';
  $field_group->data = array(
    'label' => 'Set',
    'weight' => '42',
    'children' => array(
      0 => 'field_title_of_set',
      1 => 'field_title_of_set_without_prefi',
      2 => 'field_item_number_within_set',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Set',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-citation-set field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_citation_set|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citation|node|citations|form';
  $field_group->group_name = 'group_citation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Citation',
    'weight' => '3',
    'children' => array(
      0 => 'field_date',
      1 => 'field_identifier_type',
      2 => 'field_citation_description',
      3 => 'field_work_type',
      4 => 'field_contributor_profile',
      5 => 'field_citation_license',
      6 => 'field_corporate_contributor',
      7 => 'field_add_dimensiosn',
      8 => 'field_sequence_description',
      9 => 'group_citation_information',
      10 => 'group_series',
      11 => 'group_citation_set',
      12 => 'group_media',
      13 => 'group_digital_documents',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Citation',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-citation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_citation|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_digital_documents|node|citations|form';
  $field_group->group_name = 'group_digital_documents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_citation';
  $field_group->data = array(
    'label' => 'Digital Documents',
    'weight' => '45',
    'children' => array(
      0 => 'field_publishers_name',
      1 => 'field_imprint_name',
      2 => 'field_print_run',
      3 => 'field_document_language',
      4 => 'field_medium',
      5 => 'field_number_of_pages',
      6 => 'field_document_running_time',
      7 => 'field_sequence_type',
      8 => 'field_sequence_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Digital Documents',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-digital-documents field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_digital_documents|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_wrapper|node|citations|form';
  $field_group->group_name = 'group_document_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Document',
    'weight' => '1',
    'children' => array(
      0 => 'field_document',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Document',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-document-wrapper field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_document_wrapper|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|citations|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_citation';
  $field_group->data = array(
    'label' => 'Audio and Video',
    'weight' => '43',
    'children' => array(
      0 => 'field_running_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Audio and Video',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-media field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_media|node|citations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_series|node|citations|form';
  $field_group->group_name = 'group_series';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'citations';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_citation';
  $field_group->data = array(
    'label' => 'series',
    'weight' => '41',
    'children' => array(
      0 => 'field_title_of_series',
      1 => 'field_series_contributor_from_pr',
      2 => 'field_number_within_series',
      3 => 'field_year_of_annual',
      4 => 'field_series_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-series field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_series|node|citations|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio and Video');
  t('Citation');
  t('Citation Information');
  t('Digital Documents');
  t('Document');
  t('Set');
  t('series');

  return $field_groups;
}
