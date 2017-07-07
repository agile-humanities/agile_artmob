<?php
/**
 * @file
 * This file contains all db functions.
 */

/**
 * Gets associated PIDS from NID.
 *
 * @param string $nid
 *   NID of Node beign examined
 *
 * @return array
 *   Associatred PIDS
 */
function agile_artmob_get_pids_from_nid($nid) {
  $pids = db_query("SELECT pid FROM {islandora_sync_map} WHERE entity_id = :nid",
    array(':nid' => $nid)
  )->fetchCol();
  return $pids ? $pids[0] : NULL;
}
