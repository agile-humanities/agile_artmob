<?php

/**
 * Creates virtually empty citation to be completed by user.
 *
 * @param node $node
 *   Parent node to which citation is attached.
 */
function agile_artmob_attach_citation($node) {
  global $user;
  $title = $node->title;
  $entity = entity_create('node', array('type' => 'citations'));
  $wrapper = entity_metadata_wrapper('node', $entity);
  $wrapper->author = $user->uid;
  $wrapper->field_is_citation_of->set($node);
  $wrapper->title->set("Citation for $title");
  $wrapper->save();
  $nid = $wrapper->nid->value();
  drupal_goto("/node/$nid/edit");
}



/**
 * Creates virtually empty attribution to be completed by user.
 *
 * @param node $node
 *   Parent node to which attribution is attached.
 */
function agile_artmob_attach_attribute($node) {
  global $user;
  $title = $node->title;
  $entity = entity_create('node', array('type' => 'attribute'));
  $wrapper = entity_metadata_wrapper('node', $entity);
  $wrapper->author = $user->uid;
  $info = $wrapper->getPropertyInfo();
  $wrapper->field_is_attribution_of->set($node);
  $wrapper->title->set("Attribute for $title");
  $wrapper->save();
  $nid = $wrapper->nid->value();
  drupal_goto("/node/$nid/edit");
}

/**
 * Creates virtually empty citation to be completed by user.
 *
 * @param node $node
 *   Parent node to which citation is attached.
 */
function agile_artmob_attach_license($node) {
  global $user;
  $title = $node->title;
  $entity = entity_create('node', array('type' => 'assigned_licenses'));
  $wrapper = entity_metadata_wrapper('node', $entity);
  $wrapper->author = $user->uid;
  $wrapper->field_licensed_asset->set($node);
  $wrapper->title->set("License for $title");
  $wrapper->save();
  $nid = $wrapper->nid->value();
  drupal_goto("/node/$nid/edit");
}

/**
 * Creates virtually empty discussion to be completed by user.
 *
 * @param node $node
 *   Parent node to which attribution is attached.
 */
function agile_artmob_attach_discussion($node) {
  global $user;
  $title = $node->title;
  $entity = entity_create('node', array('type' => 'discussion'));
  $wrapper = entity_metadata_wrapper('node', $entity);
  $wrapper->author = $user->uid;
  $info = $wrapper->getPropertyInfo();
  $wrapper->field_is_discussion_of->set($node);
  $wrapper->title->set("discussion for $title");
  $wrapper->save();
  $nid = $wrapper->nid->value();
  drupal_goto("/node/$nid/edit");
}

/**
 * Gets all assets associated with node.
 *
 * @param integer PID of parent node
 * 
 * @return array
 *   nids of all attached assets
 */
function artmob_get_attached($target_id, $bundle_type, $field) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $bundle_type)
      ->propertyCondition('status', NODE_PUBLISHED)
      ->fieldCondition($field, 'target_id', $target_id)
      // Run the query as user 1.
      ->addMetaData('account', user_load(1));

  $result = $query->execute();
  $nids = array();
  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
  }
  return $nids;
}