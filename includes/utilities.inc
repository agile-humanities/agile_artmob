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
 * Gets all citations associated with node.
 *
 * @param integer PID of parent node
 * 
 * @return array
 *   nids of all attached citations
 */
function artmob_get_citations($target_id) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'citations')
      ->propertyCondition('status', NODE_PUBLISHED)
      ->fieldCondition('field_is_citation_of', 'target_id', $target_id)
      // Run the query as user 1.
      ->addMetaData('account', user_load(1));

  $result = $query->execute();
  $citation_nids = array();
  if (isset($result['node'])) {
    $citation_nids = array_keys($result['node']);
  }
  return $citation_nids;
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
  $entity = entity_create('node', array('type' => 'attributes'));
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
 * Gets all attributions associated with node.
 *
 * @param integer PID of parent node
 * 
 * @return array
 *   nids of all attached attributions
 */
function artmob_get_attributes($target_id) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'attribute')
      ->propertyCondition('status', NODE_PUBLISHED)
      ->fieldCondition('field_is_attribution_of', 'target_id', $target_id)
      // Run the query as user 1.
      ->addMetaData('account', user_load(1));

  $result = $query->execute();
  $attribute_nids = array();
  if (isset($result['node'])) {
    $attribute_nids = array_keys($result['node']);
  }
  return $attribute_nids;
}
