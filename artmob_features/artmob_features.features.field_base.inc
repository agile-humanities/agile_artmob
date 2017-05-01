<?php
/**
 * @file
 * artmob_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function artmob_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_add_dimensiosn'.
  $field_bases['field_add_dimensiosn'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_add_dimensiosn',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_attribute_contributor'.
  $field_bases['field_attribute_contributor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attribute_contributor',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contributors',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_attribute_identifier'.
  $field_bases['field_attribute_identifier'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attribute_identifier',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_attribute_information'.
  $field_bases['field_attribute_information'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attribute_information',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_attribute_role'.
  $field_bases['field_attribute_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_attribute_role',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Digitized by' => 'Digitized by',
        'Editor' => 'Editor',
        'Producer' => 'Producer',
        'Scanned by' => 'Scanned by',
        'Technical Editor' => 'Technical Editor',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_citation_description'.
  $field_bases['field_citation_description'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_citation_description',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_citation_description_value'.
  $field_bases['field_citation_description_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_citation_description_value',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_citation_license'.
  $field_bases['field_citation_license'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_citation_license',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contained_information'.
  $field_bases['field_contained_information'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contained_information',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contained_work'.
  $field_bases['field_contained_work'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contained_work',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contrbutor_first_name'.
  $field_bases['field_contrbutor_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contrbutor_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contributor'.
  $field_bases['field_contributor'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contributor_last_name'.
  $field_bases['field_contributor_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor_last_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contributor_profile'.
  $field_bases['field_contributor_profile'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor_profile',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contributor_role'.
  $field_bases['field_contributor_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor_role',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Author' => 'Author',
        'With' => 'With',
        'Screenwriter' => 'Screenwriter',
        'Librettist' => 'Librettist',
        'Lyricist' => 'Lyricist',
        'Composer' => 'Composer',
        'Artist' => 'Artist',
        'Photographer' => 'Photographer',
        'From an idea by' => 'From an idea by',
        'Designer' => 'Designer',
        'Illustrator' => 'Illustrator',
        'Text by' => 'Text by',
        'Preface by' => 'Preface by',
        'Prologue by' => 'Prologue by',
        'Summary by' => 'Summary by',
        'Supplement by' => 'Supplement by',
        'Afterword by' => 'Afterword by',
        'Notes by' => 'Notes by',
        'Commentaries by' => 'Commentaries by',
        'Epilogue by' => 'Epilogue by',
        'Foreword by' => 'Foreword by',
        'Introduction by' => 'Introduction by',
        'Footnotes by' => 'Footnotes by',
        'Memoir by' => 'Memoir by',
        'Experiments by' => 'Experiments by',
        'Introduction and notes by' => 'Introduction and notes by',
        'Software written by' => 'Software written by',
        'Book and lyrics by' => 'Book and lyrics by',
        'Contributions by' => 'Contributions by',
        'Appendix by' => 'Appendix by',
        'Index by' => 'Index by',
        'Drawings by' => 'Drawings by',
        'Cover designer' => 'Cover designer',
        'Preliminary work by' => 'Preliminary work by',
        'Original author' => 'Original author',
        'Playwright' => 'Playwright',
        'Arranger' => 'Arranger',
        'Engraver' => 'Engraver',
        'Sculptor' => 'Sculptor',
        'Architect' => 'Architect',
        'Architectural designer' => 'Architectural designer',
        'Curator' => 'Curator',
        'Cartographer' => 'Cartographer',
        'Other primary creator' => 'Other primary creator',
        'Editor' => 'Editor',
        'Revised by' => 'Revised by',
        'Retold by' => 'Retold by',
        'Abridged by' => 'Abridged by',
        'Adapted by' => 'Adapted by',
        'Translator' => 'Translator',
        'As told by' => 'As told by',
        'Translated with commentary by' => 'Translated with commentary by',
        'Series editor' => 'Series editor',
        'Editor-in-chief' => 'Editor-in-chief',
        'Guest editor' => 'Guest editor',
        'Volume editor' => 'Volume editor',
        'Editorial board member' => 'Editorial board member',
        'Editorial coordination by' => 'Editorial coordination by',
        'Managing editor' => 'Managing editor',
        'Founded by' => 'Founded by',
        'Prepared for publication by' => 'Prepared for publication by',
        'Associate editor' => 'Associate editor',
        'Consultant editor' => 'Consultant editor',
        'General editor' => 'General editor',
        'Dramatist' => 'Dramatist',
        'General rapporteur' => 'General rapporteur',
        'Publisher' => 'Publisher',
        'Arranged by' => 'Arranged by',
        'Technical Editor' => 'Technical Editor',
        'Set designer' => 'Set designer',
        'Lighting designer' => 'Lighting designer',
        'Sound Designer' => 'Sound Designer',
        'Stage Manager' => 'Stage Manager',
        'Literary Edito' => 'Literary Edito',
        'Other adaptation by' => 'Other adaptation by',
        'Compiled by' => 'Compiled by',
        'Selected by' => 'Selected by',
        'Other compilation by' => 'Other compilation by',
        'Producer' => 'Producer',
        'Director' => 'Director',
        'Conductor' => 'Conductor',
        'Choreographer' => 'Choreographer',
        'Dance Company' => 'Dance Company',
        'Theatre Company' => 'Theatre Company',
        'Other direction by' => 'Other direction by',
        'Actor' => 'Actor',
        'Dancer' => 'Dancer',
        'Narrator' => 'Narrator',
        'Commentator' => 'Commentator',
        'Vocalist' => 'Vocalist',
        'Instrumentalist' => 'Instrumentalist',
        'Read by' => 'Read by',
        'Performed by orchestra, band, ensemble' => 'Performed by orchestra, band, ensemble',
        'Broadcaster' => 'Broadcaster',
        'Host' => 'Host',
        'Moderator' => 'Moderator',
        'Speaker' => 'Speaker',
        'Performer' => 'Performer',
        'Filmed/photographed by' => 'Filmed/photographed by',
        'Cinematographer' => 'Cinematographer',
        'Distributor' => 'Distributor',
        'Production Company' => 'Production Company',
        'Film editor' => 'Film editor',
        'Videographer' => 'Videographer',
        'Recording engineer' => 'Recording engineer',
        'Other recording by' => 'Other recording by',
        'Assisted by' => 'Assisted by',
        'Scanned by' => 'Scanned by',
        'Digitized by' => 'Digitized by',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_contributor_type'.
  $field_bases['field_contributor_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Person' => 'Person',
        'Corporation' => 'Corporation',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_corporate_contributor'.
  $field_bases['field_corporate_contributor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corporate_contributor',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_description_type'.
  $field_bases['field_description_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'provenance' => 'provenance',
        'catalog copy' => 'catalog copy',
        'features and distinctions' => 'features and distinctions',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_dimension_value'.
  $field_bases['field_dimension_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dimension_value',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_document'.
  $field_bases['field_document'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_document',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_document_language'.
  $field_bases['field_document_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_document_language',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Afar' => 'Afar',
        'Abkhaz' => 'Abkhaz',
        'Achinese' => 'Achinese',
        'Acoli' => 'Acoli',
        'Adangme' => 'Adangme',
        'Adygei' => 'Adygei',
        'Afroasiatic (Other)' => 'Afroasiatic (Other)',
        'Afrihili (Artificial language)' => 'Afrihili (Artificial language)',
        'Afrikaans' => 'Afrikaans',
        'Ainu' => 'Ainu',
        'Akan' => 'Akan',
        'Akkadian' => 'Akkadian',
        'Albanian' => 'Albanian',
        'Aleut' => 'Aleut',
        'Algonquian (Other)' => 'Algonquian (Other)',
        'Altai' => 'Altai',
        'Amharic' => 'Amharic',
        'English, Old (ca. 450-1100)' => 'English, Old (ca. 450-1100)',
        'Angika' => 'Angika',
        'Apache languages' => 'Apache languages',
        'Arabic' => 'Arabic',
        'Aramaic' => 'Aramaic',
        'Aragonese' => 'Aragonese',
        'Armenian' => 'Armenian',
        'Mapuche' => 'Mapuche',
        'Arapaho' => 'Arapaho',
        'Artificial (Other)' => 'Artificial (Other)',
        'Arawak' => 'Arawak',
        'Assamese' => 'Assamese',
        'Bable' => 'Bable',
        'Athapascan (Other)' => 'Athapascan (Other)',
        'Australian languages' => 'Australian languages',
        'Avaric' => 'Avaric',
        'Avestan' => 'Avestan',
        'Awadhi' => 'Awadhi',
        'Aymara' => 'Aymara',
        'Azerbaijani' => 'Azerbaijani',
        'Banda languages' => 'Banda languages',
        'Bamileke languages' => 'Bamileke languages',
        'Bashkir' => 'Bashkir',
        'Baluchi' => 'Baluchi',
        'Bambara' => 'Bambara',
        'Balinese' => 'Balinese',
        'Basque' => 'Basque',
        'Basa' => 'Basa',
        'Baltic (Other)' => 'Baltic (Other)',
        'Beja' => 'Beja',
        'Belarusian' => 'Belarusian',
        'Bemba' => 'Bemba',
        'Bengali' => 'Bengali',
        'Berber (Other)' => 'Berber (Other)',
        'Bhojpuri' => 'Bhojpuri',
        'Bihari' => 'Bihari',
        'Bikol' => 'Bikol',
        'Edo' => 'Edo',
        'Bislama' => 'Bislama',
        'Siksika' => 'Siksika',
        'Bantu (Other)' => 'Bantu (Other)',
        'Bosnian' => 'Bosnian',
        'Braj' => 'Braj',
        'Breton' => 'Breton',
        'Batak' => 'Batak',
        'Buriat' => 'Buriat',
        'Bugis' => 'Bugis',
        'Bulgarian' => 'Bulgarian',
        'Burmese' => 'Burmese',
        'Bilin' => 'Bilin',
        'Caddo' => 'Caddo',
        'Central American Indian (Other)' => 'Central American Indian (Other)',
        'Carib' => 'Carib',
        'Catalan' => 'Catalan',
        'Caucasian (Other)' => 'Caucasian (Other)',
        'Cebuano' => 'Cebuano',
        'Celtic (Other)' => 'Celtic (Other)',
        'Chamorro' => 'Chamorro',
        'Chibcha' => 'Chibcha',
        'Chechen' => 'Chechen',
        'Chagatai' => 'Chagatai',
        'Chinese' => 'Chinese',
        'Chuukese' => 'Chuukese',
        'Mari' => 'Mari',
        'Chinook jargon' => 'Chinook jargon',
        'Choctaw' => 'Choctaw',
        'Chipewyan' => 'Chipewyan',
        'Cherokee' => 'Cherokee',
        'Church Slavic' => 'Church Slavic',
        'Chuvash' => 'Chuvash',
        'Cheyenne' => 'Cheyenne',
        'Chamic languages' => 'Chamic languages',
        'Coptic' => 'Coptic',
        'Cornish' => 'Cornish',
        'Corsican' => 'Corsican',
        'Creoles and Pidgins, English-based (Other)' => 'Creoles and Pidgins, English-based (Other)',
        'Creoles and Pidgins, French-based (Other)' => 'Creoles and Pidgins, French-based (Other)',
        'Creoles and Pidgins, Portuguese-based (Other)' => 'Creoles and Pidgins, Portuguese-based (Other)',
        'Cree' => 'Cree',
        'Crimean Tatar' => 'Crimean Tatar',
        'Creoles and Pidgins (Other)' => 'Creoles and Pidgins (Other)',
        'Kashubian' => 'Kashubian',
        'Cushitic (Other)' => 'Cushitic (Other)',
        'Czech' => 'Czech',
        'Dakota' => 'Dakota',
        'Danish' => 'Danish',
        'Dargwa' => 'Dargwa',
        'Dayak' => 'Dayak',
        'Delaware' => 'Delaware',
        'Slave' => 'Slave',
        'Dogrib' => 'Dogrib',
        'Dinka' => 'Dinka',
        'Divehi' => 'Divehi',
        'Dogri' => 'Dogri',
        'Dravidian (Other)' => 'Dravidian (Other)',
        'Lower Sorbian' => 'Lower Sorbian',
        'Duala' => 'Duala',
        'Dutch, Middle (ca. 1050-1350)' => 'Dutch, Middle (ca. 1050-1350)',
        'Dutch' => 'Dutch',
        'Dyula' => 'Dyula',
        'Dzongkha' => 'Dzongkha',
        'Efik' => 'Efik',
        'Egyptian' => 'Egyptian',
        'Ekajuk' => 'Ekajuk',
        'Elamite' => 'Elamite',
        'English' => 'English',
        'English, Middle (1100-1500)' => 'English, Middle (1100-1500)',
        'Esperanto' => 'Esperanto',
        'Estonian' => 'Estonian',
        'Ewe' => 'Ewe',
        'Ewondo' => 'Ewondo',
        'Fang' => 'Fang',
        'Faroese' => 'Faroese',
        'Fanti' => 'Fanti',
        'Fijian' => 'Fijian',
        'Filipino' => 'Filipino',
        'Finnish' => 'Finnish',
        'Finno-Ugrian (Other)' => 'Finno-Ugrian (Other)',
        'Fon' => 'Fon',
        'French' => 'French',
        'French, Middle (ca. 1300-1600)' => 'French, Middle (ca. 1300-1600)',
        'French, Old (ca. 842-1300)' => 'French, Old (ca. 842-1300)',
        'North Frisian' => 'North Frisian',
        'East Frisian' => 'East Frisian',
        'Frisian' => 'Frisian',
        'Fula' => 'Fula',
        'Friulian' => 'Friulian',
        'G„' => 'G„',
        'Gayo' => 'Gayo',
        'Gbaya' => 'Gbaya',
        'Germanic (Other)' => 'Germanic (Other)',
        'Georgian' => 'Georgian',
        'German' => 'German',
        'Ethiopic' => 'Ethiopic',
        'Gilbertese' => 'Gilbertese',
        'Scottish Gaelic' => 'Scottish Gaelic',
        'Irish' => 'Irish',
        'Galician' => 'Galician',
        'Manx' => 'Manx',
        'German, Middle High (ca. 1050-1500)' => 'German, Middle High (ca. 1050-1500)',
        'German, Old High (ca. 750-1050)' => 'German, Old High (ca. 750-1050)',
        'Gondi' => 'Gondi',
        'Gorontalo' => 'Gorontalo',
        'Gothic' => 'Gothic',
        'Grebo' => 'Grebo',
        'Greek, Ancient (to 1453)' => 'Greek, Ancient (to 1453)',
        'Greek, Modern (1453-)' => 'Greek, Modern (1453-)',
        'Guarani' => 'Guarani',
        'Swiss German' => 'Swiss German',
        'Gujarati' => 'Gujarati',
        'Gwich\'in' => 'Gwich\'in',
        'Haida' => 'Haida',
        'Haitian French Creole' => 'Haitian French Creole',
        'Hausa' => 'Hausa',
        'Hawaiian' => 'Hawaiian',
        'Hebrew' => 'Hebrew',
        'Herero' => 'Herero',
        'Hiligaynon' => 'Hiligaynon',
        'Western Pahari languages' => 'Western Pahari languages',
        'Hindi' => 'Hindi',
        'Hittite' => 'Hittite',
        'Hmong' => 'Hmong',
        'Hiri Motu' => 'Hiri Motu',
        'Croatian' => 'Croatian',
        'Upper Sorbian' => 'Upper Sorbian',
        'Hungarian' => 'Hungarian',
        'Hupa' => 'Hupa',
        'Iban' => 'Iban',
        'Igbo' => 'Igbo',
        'Icelandic' => 'Icelandic',
        'Ido' => 'Ido',
        'Sichuan Yi' => 'Sichuan Yi',
        'Ijo' => 'Ijo',
        'Inuktitut' => 'Inuktitut',
        'Interlingue' => 'Interlingue',
        'Iloko' => 'Iloko',
        'Interlingua (International Auxiliary Language Association)' => 'Interlingua (International Auxiliary Language Association)',
        'Indic (Other)' => 'Indic (Other)',
        'Indonesian' => 'Indonesian',
        'Indo-European (Other)' => 'Indo-European (Other)',
        'Ingush' => 'Ingush',
        'Inupiaq' => 'Inupiaq',
        'Iranian (Other)' => 'Iranian (Other)',
        'Iroquoian (Other)' => 'Iroquoian (Other)',
        'Italian' => 'Italian',
        'Javanese' => 'Javanese',
        'Lojban (Artificial language)' => 'Lojban (Artificial language)',
        'Japanese' => 'Japanese',
        'Judeo-Persian' => 'Judeo-Persian',
        'Judeo-Arabic' => 'Judeo-Arabic',
        'Kara-Kalpak' => 'Kara-Kalpak',
        'Kabyle' => 'Kabyle',
        'Kachin' => 'Kachin',
        'Kal‚tdlisut' => 'Kal‚tdlisut',
        'Kamba' => 'Kamba',
        'Kannada' => 'Kannada',
        'Karen languages' => 'Karen languages',
        'Kashmiri' => 'Kashmiri',
        'Kanuri' => 'Kanuri',
        'Kawi' => 'Kawi',
        'Kazakh' => 'Kazakh',
        'Kabardian' => 'Kabardian',
        'Khasi' => 'Khasi',
        'Khoisan (Other)' => 'Khoisan (Other)',
        'Khmer' => 'Khmer',
        'Khotanese' => 'Khotanese',
        'Kikuyu' => 'Kikuyu',
        'Kinyarwanda' => 'Kinyarwanda',
        'Kyrgyz' => 'Kyrgyz',
        'Kimbundu' => 'Kimbundu',
        'Konkani' => 'Konkani',
        'Komi' => 'Komi',
        'Kongo' => 'Kongo',
        'Korean' => 'Korean',
        'Kusaie' => 'Kusaie',
        'Kpelle' => 'Kpelle',
        'Karachay-Balkar' => 'Karachay-Balkar',
        'Karelian' => 'Karelian',
        'Kru (Other)' => 'Kru (Other)',
        'Kurukh' => 'Kurukh',
        'Kuanyama' => 'Kuanyama',
        'Kumyk' => 'Kumyk',
        'Kurdish' => 'Kurdish',
        'Kootenai' => 'Kootenai',
        'Ladino' => 'Ladino',
        'Lahnd?' => 'Lahnd?',
        'Lamba (Zambia and Congo)' => 'Lamba (Zambia and Congo)',
        'Lao' => 'Lao',
        'Latin' => 'Latin',
        'Latvian' => 'Latvian',
        'Lezgian' => 'Lezgian',
        'Limburgish' => 'Limburgish',
        'Lingala' => 'Lingala',
        'Lithuanian' => 'Lithuanian',
        'Mongo-Nkundu' => 'Mongo-Nkundu',
        'Lozi' => 'Lozi',
        'Luxembourgish' => 'Luxembourgish',
        'Luba-Lulua' => 'Luba-Lulua',
        'Luba-Katanga' => 'Luba-Katanga',
        'Ganda' => 'Ganda',
        'LuiseÒo' => 'LuiseÒo',
        'Lunda' => 'Lunda',
        'Luo (Kenya and Tanzania)' => 'Luo (Kenya and Tanzania)',
        'Lushai' => 'Lushai',
        'Macedonian' => 'Macedonian',
        'Madurese' => 'Madurese',
        'Magahi' => 'Magahi',
        'Marshallese' => 'Marshallese',
        'Maithili' => 'Maithili',
        'Makasar' => 'Makasar',
        'Malayalam' => 'Malayalam',
        'Mandingo' => 'Mandingo',
        'Maori' => 'Maori',
        'Austronesian (Other)' => 'Austronesian (Other)',
        'Marathi' => 'Marathi',
        'Masai' => 'Masai',
        'Malay' => 'Malay',
        'Moksha' => 'Moksha',
        'Mandar' => 'Mandar',
        'Mende' => 'Mende',
        'Irish, Middle (ca. 1100-1550)' => 'Irish, Middle (ca. 1100-1550)',
        'Micmac' => 'Micmac',
        'Minangkabau' => 'Minangkabau',
        'Miscellaneous languages' => 'Miscellaneous languages',
        'Mon-Khmer (Other)' => 'Mon-Khmer (Other)',
        'Malagasy' => 'Malagasy',
        'Maltese' => 'Maltese',
        'Manchu' => 'Manchu',
        'Manipuri' => 'Manipuri',
        'Manobo languages' => 'Manobo languages',
        'Mohawk' => 'Mohawk',
        'Mongolian' => 'Mongolian',
        'MoorÈ' => 'MoorÈ',
        'Multiple languages' => 'Multiple languages',
        'Munda (Other)' => 'Munda (Other)',
        'Creek' => 'Creek',
        'Mirandese' => 'Mirandese',
        'Marwari' => 'Marwari',
        'Mayan languages' => 'Mayan languages',
        'Erzya' => 'Erzya',
        'Nahuatl' => 'Nahuatl',
        'North American Indian (Other)' => 'North American Indian (Other)',
        'Neapolitan Italian' => 'Neapolitan Italian',
        'Nauru' => 'Nauru',
        'Navajo' => 'Navajo',
        'Ndebele (South Africa)' => 'Ndebele (South Africa)',
        'Ndebele (Zimbabwe)' => 'Ndebele (Zimbabwe)',
        'Ndonga' => 'Ndonga',
        'Low German' => 'Low German',
        'Nepali' => 'Nepali',
        'Newari' => 'Newari',
        'Nias' => 'Nias',
        'Niger-Kordofanian (Other)' => 'Niger-Kordofanian (Other)',
        'Niuean' => 'Niuean',
        'Norwegian (Nynorsk)' => 'Norwegian (Nynorsk)',
        'Norwegian (BokmÂl)' => 'Norwegian (BokmÂl)',
        'Nogai' => 'Nogai',
        'Old Norse' => 'Old Norse',
        'Norwegian' => 'Norwegian',
        'N\'Ko' => 'N\'Ko',
        'Northern Sotho' => 'Northern Sotho',
        'Nubian languages' => 'Nubian languages',
        'Newari, Old' => 'Newari, Old',
        'Nyanja' => 'Nyanja',
        'Nyamwezi' => 'Nyamwezi',
        'Nyankole' => 'Nyankole',
        'Nyoro' => 'Nyoro',
        'Nzima' => 'Nzima',
        'Occitan (post 1500)' => 'Occitan (post 1500)',
        'Ojibwa' => 'Ojibwa',
        'Oriya' => 'Oriya',
        'Oromo' => 'Oromo',
        'Osage' => 'Osage',
        'Ossetic' => 'Ossetic',
        'Turkish, Ottoman' => 'Turkish, Ottoman',
        'Otomian languages' => 'Otomian languages',
        'Papuan (Other)' => 'Papuan (Other)',
        'Pangasinan' => 'Pangasinan',
        'Pahlavi' => 'Pahlavi',
        'Pampanga' => 'Pampanga',
        'Panjabi' => 'Panjabi',
        'Papiamento' => 'Papiamento',
        'Palauan' => 'Palauan',
        'Old Persian (ca. 600-400 B.C.)' => 'Old Persian (ca. 600-400 B.C.)',
        'Persian' => 'Persian',
        'Philippine (Other)' => 'Philippine (Other)',
        'Phoenician' => 'Phoenician',
        'Pali' => 'Pali',
        'Polish' => 'Polish',
        'Ponape' => 'Ponape',
        'Portuguese' => 'Portuguese',
        'Prakrit languages' => 'Prakrit languages',
        'ProvenÁal (to 1500)' => 'ProvenÁal (to 1500)',
        'Pushto' => 'Pushto',
        'Quechua' => 'Quechua',
        'Rajasthani' => 'Rajasthani',
        'Rapanui' => 'Rapanui',
        'Rarotongan' => 'Rarotongan',
        'Romance (Other)' => 'Romance (Other)',
        'Raeto-Romance' => 'Raeto-Romance',
        'Romani' => 'Romani',
        'Romanian' => 'Romanian',
        'Rundi' => 'Rundi',
        'Aromanian' => 'Aromanian',
        'Russian' => 'Russian',
        'Sandawe' => 'Sandawe',
        'Sango (Ubangi Creole)' => 'Sango (Ubangi Creole)',
        'Yakut' => 'Yakut',
        'South American Indian (Other)' => 'South American Indian (Other)',
        'Salishan languages' => 'Salishan languages',
        'Samaritan Aramaic' => 'Samaritan Aramaic',
        'Sanskrit' => 'Sanskrit',
        'Sasak' => 'Sasak',
        'Santali' => 'Santali',
        'Sicilian Italian' => 'Sicilian Italian',
        'Scots' => 'Scots',
        'Selkup' => 'Selkup',
        'Semitic (Other)' => 'Semitic (Other)',
        'Irish, Old (to 1100)' => 'Irish, Old (to 1100)',
        'Sign languages' => 'Sign languages',
        'Shan' => 'Shan',
        'Sidamo' => 'Sidamo',
        'Sinhalese' => 'Sinhalese',
        'Siouan (Other)' => 'Siouan (Other)',
        'Sino-Tibetan (Other)' => 'Sino-Tibetan (Other)',
        'Slavic (Other)' => 'Slavic (Other)',
        'Slovak' => 'Slovak',
        'Slovenian' => 'Slovenian',
        'Southern Sami' => 'Southern Sami',
        'Northern Sami' => 'Northern Sami',
        'Sami' => 'Sami',
        'Lule Sami' => 'Lule Sami',
        'Inari Sami' => 'Inari Sami',
        'Samoan' => 'Samoan',
        'Skolt Sami' => 'Skolt Sami',
        'Shona' => 'Shona',
        'Sindhi' => 'Sindhi',
        'Soninke' => 'Soninke',
        'Sogdian' => 'Sogdian',
        'Somali' => 'Somali',
        'Songhai' => 'Songhai',
        'Sotho' => 'Sotho',
        'Spanish' => 'Spanish',
        'Sardinian' => 'Sardinian',
        'Sranan' => 'Sranan',
        'Serbian' => 'Serbian',
        'Serer' => 'Serer',
        'Nilo-Saharan (Other)' => 'Nilo-Saharan (Other)',
        'Swazi' => 'Swazi',
        'Sukuma' => 'Sukuma',
        'Sundanese' => 'Sundanese',
        'Susu' => 'Susu',
        'Sumerian' => 'Sumerian',
        'Swahili' => 'Swahili',
        'Swedish' => 'Swedish',
        'Syriac' => 'Syriac',
        'Syriac, Modern' => 'Syriac, Modern',
        'Tahitian' => 'Tahitian',
        'Tai (Other)' => 'Tai (Other)',
        'Tamil' => 'Tamil',
        'Tatar' => 'Tatar',
        'Telugu' => 'Telugu',
        'Temne' => 'Temne',
        'Terena' => 'Terena',
        'Tetum' => 'Tetum',
        'Tajik' => 'Tajik',
        'Tagalog' => 'Tagalog',
        'Thai' => 'Thai',
        'Tibetan' => 'Tibetan',
        'TigrÈ' => 'TigrÈ',
        'Tigrinya' => 'Tigrinya',
        'Tiv' => 'Tiv',
        'Tokelauan' => 'Tokelauan',
        'Klingon (Artificial language)' => 'Klingon (Artificial language)',
        'Tlingit' => 'Tlingit',
        'Tamashek' => 'Tamashek',
        'Tonga (Nyasa)' => 'Tonga (Nyasa)',
        'Tongan' => 'Tongan',
        'Tok Pisin' => 'Tok Pisin',
        'Tsimshian' => 'Tsimshian',
        'Tswana' => 'Tswana',
        'Tsonga' => 'Tsonga',
        'Turkmen' => 'Turkmen',
        'Tumbuka' => 'Tumbuka',
        'Tupi languages' => 'Tupi languages',
        'Turkish' => 'Turkish',
        'Altaic (Other)' => 'Altaic (Other)',
        'Tuvaluan' => 'Tuvaluan',
        'Twi' => 'Twi',
        'Tuvinian' => 'Tuvinian',
        'Udmurt' => 'Udmurt',
        'Ugaritic' => 'Ugaritic',
        'Uighur' => 'Uighur',
        'Ukrainian' => 'Ukrainian',
        'Umbundu' => 'Umbundu',
        'Undetermined' => 'Undetermined',
        'Urdu' => 'Urdu',
        'Uzbek' => 'Uzbek',
        'Vai' => 'Vai',
        'Venda' => 'Venda',
        'Vietnamese' => 'Vietnamese',
        'Volap¸k' => 'Volap¸k',
        'Votic' => 'Votic',
        'Wakashan languages' => 'Wakashan languages',
        'Wolayta' => 'Wolayta',
        'Waray' => 'Waray',
        'Washo' => 'Washo',
        'Welsh' => 'Welsh',
        'Sorbian (Other)' => 'Sorbian (Other)',
        'Walloon' => 'Walloon',
        'Wolof' => 'Wolof',
        'Oirat' => 'Oirat',
        'Xhosa' => 'Xhosa',
        'Yao (Africa)' => 'Yao (Africa)',
        'Yapese' => 'Yapese',
        'Yiddish' => 'Yiddish',
        'Yoruba' => 'Yoruba',
        'Yupik languages' => 'Yupik languages',
        'Zapotec' => 'Zapotec',
        'Blissymbolics' => 'Blissymbolics',
        'Zenaga' => 'Zenaga',
        'Zhuang' => 'Zhuang',
        'Zande languages' => 'Zande languages',
        'Zulu' => 'Zulu',
        'Zuni' => 'Zuni',
        'No linguistic content' => 'No linguistic content',
        'Zaza' => 'Zaza',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_document_running_time'.
  $field_bases['field_document_running_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_document_running_time',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'hms_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'hms_field',
  );

  // Exported field_base: 'field_edition'.
  $field_bases['field_edition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_edition',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_identifier_name'.
  $field_bases['field_identifier_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_identifier_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_identifier_type'.
  $field_bases['field_identifier_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_identifier_type',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_identifier_value'.
  $field_bases['field_identifier_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_identifier_value',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_imprint_name'.
  $field_bases['field_imprint_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_imprint_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_info_type'.
  $field_bases['field_info_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_info_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Subtitle' => 'Subtitle',
        'Series Title' => 'Series Title',
        'Series Number' => 'Series Number',
        'Series Year' => 'Series Year',
        'Series Description' => 'Series Description',
        'Edition' => 'Edition',
        'Set Title' => 'Set Title',
        'Set Item Number' => 'Set Item Number',
        'Number of Pages' => 'Number of Pages',
        'Edition /Version' => 'Edition /Version',
        'Publisher Name' => 'Publisher Name',
        'Imprint' => 'Imprint',
        'Features and Distinctions' => 'Features and Distinctions',
        'Date Created' => 'Date Created',
        'Date First Released' => 'Date First Released',
        'Date First Published' => 'Date First Published',
        'Date Published' => 'Date Published',
        'Date Recorded' => 'Date Recorded',
        'Date Broadcast' => 'Date Broadcast',
        'Date Performed' => 'Date Performed',
        'Date Updated' => 'Date Updated',
        'Identifier' => 'Identifier',
        'Corporate Contributor' => 'Corporate Contributor',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_is_attribution_of'.
  $field_bases['field_is_attribution_of'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_is_attribution_of',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'drupal_fedora_pdf' => 'drupal_fedora_pdf',
          'mods_image' => 'mods_image',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_is_citation_of'.
  $field_bases['field_is_citation_of'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_is_citation_of',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'drupal_fedora_pdf' => 'drupal_fedora_pdf',
          'mods_image' => 'mods_image',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_item_number_within_set'.
  $field_bases['field_item_number_within_set'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_item_number_within_set',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_key_name'.
  $field_bases['field_key_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_license_contributor'.
  $field_bases['field_license_contributor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_license_contributor',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contributors',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_license_first_name'.
  $field_bases['field_license_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_license_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_measurement_type_code'.
  $field_bases['field_measurement_type_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_measurement_type_code',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Height' => 'Height',
        'Width' => 'Width',
        'Thickness' => 'Thickness',
        'Page trim height' => 'Page trim height',
        'Page trim width' => 'Page trim width',
        'Unit weight' => 'Unit weight',
        'Diameter(sphere)' => 'Diameter(sphere)',
        'Unfolded/unrolled sheet height' => 'Unfolded/unrolled sheet height',
        'Unfolded/unrolled sheet width' => 'Unfolded/unrolled sheet width',
        'Diameter (tube or cylinder)' => 'Diameter (tube or cylinder)',
        'Rolled sheet package side measure' => 'Rolled sheet package side measure',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_medium'.
  $field_bases['field_medium'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_medium',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_number_of_pages'.
  $field_bases['field_number_of_pages'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_pages',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_number_within_series'.
  $field_bases['field_number_within_series'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_within_series',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_other_contributor'.
  $field_bases['field_other_contributor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_contributor',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_pdf'.
  $field_bases['field_pdf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pdf',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_print_run'.
  $field_bases['field_print_run'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_print_run',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_profile'.
  $field_bases['field_profile'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contributors',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_publishers_name'.
  $field_bases['field_publishers_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publishers_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_running_time'.
  $field_bases['field_running_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_running_time',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'hms_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'hms_field',
  );

  // Exported field_base: 'field_sequence_description'.
  $field_bases['field_sequence_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sequence_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sequence_type'.
  $field_bases['field_sequence_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sequence_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Integer' => 'Integer',
        'Timecode (HH:MM:SS)' => 'Timecode (HH:MM:SS)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sequence_value'.
  $field_bases['field_sequence_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sequence_value',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_series_contributor_from_pr'.
  $field_bases['field_series_contributor_from_pr'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_series_contributor_from_pr',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_series_description'.
  $field_bases['field_series_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_series_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_series_profile'.
  $field_bases['field_series_profile'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_series_profile',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'contributors',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_subtitle'.
  $field_bases['field_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subtitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_title_of_series'.
  $field_bases['field_title_of_series'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_of_series',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_title_of_set'.
  $field_bases['field_title_of_set'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_of_set',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_title_of_set_without_prefi'.
  $field_bases['field_title_of_set_without_prefi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_of_set_without_prefi',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_title_without_prefix'.
  $field_bases['field_title_without_prefix'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_without_prefix',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_type_of_contained_work'.
  $field_bases['field_type_of_contained_work'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_type_of_contained_work',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Visual Artistic' => 'Visual Artistic',
        'Photograph' => 'Photograph',
        'Painting' => 'Painting',
        'Drawing' => 'Drawing',
        'Engraving' => 'Engraving',
        'Sculpture' => 'Sculpture',
        'Architectural Work' => 'Architectural Work',
        'Map/Plan/Chart' => 'Map/Plan/Chart',
        'Artistic Compilation' => 'Artistic Compilation',
        'Design' => 'Design',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_unique_identifier_type'.
  $field_bases['field_unique_identifier_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_unique_identifier_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Proprietary' => 'Proprietary',
        'ISBN-10' => 'ISBN-10',
        'EAN.UCC-13' => 'EAN.UCC-13',
        'UPC' => 'UPC',
        'ISMN' => 'ISMN',
        'DOI' => 'DOI',
        'LCCN' => 'LCCN',
        'GTIN-1' => 'GTIN-1',
        'ISBN-13' => 'ISBN-13',
        'Legal deposit number' => 'Legal deposit number',
        'URN' => 'URN',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_units'.
  $field_bases['field_units'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_units',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Centimeters' => 'Centimeters',
        'Grams, ),' => 'Grams, ),',
        'Inches (US)' => 'Inches (US)',
        'Pounds (US)' => 'Pounds (US)',
        'Millimeters' => 'Millimeters',
        'Ounces (US)' => 'Ounces (US)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_work_type'.
  $field_bases['field_work_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_work_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Author' => 'Author',
        'With' => 'With',
        'Screenwriter' => 'Screenwriter',
        'Librettist' => 'Librettist',
        'Lyricist' => 'Lyricist',
        'Composer' => 'Composer',
        'Artist' => 'Artist',
        'Photographer' => 'Photographer',
        'From an idea by' => 'From an idea by',
        'Designer' => 'Designer',
        'Illustrator' => 'Illustrator',
        'Text by' => 'Text by',
        'Preface by' => 'Preface by',
        'Prologue by' => 'Prologue by',
        'Summary by' => 'Summary by',
        'Supplement by' => 'Supplement by',
        'Afterword by' => 'Afterword by',
        'Notes by' => 'Notes by',
        'Commentaries by' => 'Commentaries by',
        'Epilogue by' => 'Epilogue by',
        'Foreword by' => 'Foreword by',
        'Introduction by' => 'Introduction by',
        'Footnotes by' => 'Footnotes by',
        'Memoir by' => 'Memoir by',
        'Experiments by' => 'Experiments by',
        'Introduction and notes by' => 'Introduction and notes by',
        'Software written by' => 'Software written by',
        'Book and lyrics by' => 'Book and lyrics by',
        'Contributions by' => 'Contributions by',
        'Appendix by' => 'Appendix by',
        'Index by' => 'Index by',
        'Drawings by' => 'Drawings by',
        'Cover designer' => 'Cover designer',
        'Preliminary work by' => 'Preliminary work by',
        'Original author' => 'Original author',
        'Playwright' => 'Playwright',
        'Arranger' => 'Arranger',
        'Engraver' => 'Engraver',
        'Sculptor' => 'Sculptor',
        'Architect' => 'Architect',
        'Architectural designer' => 'Architectural designer',
        'Curator' => 'Curator',
        'Cartographer' => 'Cartographer',
        'Other primary creator' => 'Other primary creator',
        'Editor' => 'Editor',
        'Revised by' => 'Revised by',
        'Retold by' => 'Retold by',
        'Abridged by' => 'Abridged by',
        'Adapted by' => 'Adapted by',
        'Translator' => 'Translator',
        'As told by' => 'As told by',
        'Translated with commentary by' => 'Translated with commentary by',
        'Series editor' => 'Series editor',
        'Editor-in-chief' => 'Editor-in-chief',
        'Guest editor' => 'Guest editor',
        'Volume editor' => 'Volume editor',
        'Editorial board member' => 'Editorial board member',
        'Editorial coordination by' => 'Editorial coordination by',
        'Managing editor' => 'Managing editor',
        'Founded by' => 'Founded by',
        'Prepared for publication by' => 'Prepared for publication by',
        'Associate editor' => 'Associate editor',
        'Consultant editor' => 'Consultant editor',
        'General editor' => 'General editor',
        'Dramatist' => 'Dramatist',
        'General rapporteur' => 'General rapporteur',
        'Publisher' => 'Publisher',
        'Arranged by' => 'Arranged by',
        'Technical Editor' => 'Technical Editor',
        'Set designer' => 'Set designer',
        'Lighting designer' => 'Lighting designer',
        'Sound Designer' => 'Sound Designer',
        'Stage Manager' => 'Stage Manager',
        'Literary Edito' => 'Literary Edito',
        'Other adaptation by' => 'Other adaptation by',
        'Compiled by' => 'Compiled by',
        'Selected by' => 'Selected by',
        'Other compilation by' => 'Other compilation by',
        'Producer' => 'Producer',
        'Director' => 'Director',
        'Conductor' => 'Conductor',
        'Choreographer' => 'Choreographer',
        'Dance Company' => 'Dance Company',
        'Theatre Company' => 'Theatre Company',
        'Other direction by' => 'Other direction by',
        'Actor' => 'Actor',
        'Dancer' => 'Dancer',
        'Narrator' => 'Narrator',
        'Commentator' => 'Commentator',
        'Vocalist' => 'Vocalist',
        'Instrumentalist' => 'Instrumentalist',
        'Read by' => 'Read by',
        'Performed by orchestra, band, ensemble' => 'Performed by orchestra, band, ensemble',
        'Broadcaster' => 'Broadcaster',
        'Host' => 'Host',
        'Moderator' => 'Moderator',
        'Speaker' => 'Speaker',
        'Performer' => 'Performer',
        'Filmed/photographed by' => 'Filmed/photographed by',
        'Cinematographer' => 'Cinematographer',
        'Distributor' => 'Distributor',
        'Production Company' => 'Production Company',
        'Film editor' => 'Film editor',
        'Videographer' => 'Videographer',
        'Recording engineer' => 'Recording engineer',
        'Other recording by' => 'Other recording by',
        'Assisted by' => 'Assisted by',
        'Scanned by' => 'Scanned by',
        'Digitized by' => 'Digitized by',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_year_of_annual'.
  $field_bases['field_year_of_annual'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_year_of_annual',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
