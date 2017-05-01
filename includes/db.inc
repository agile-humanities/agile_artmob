<?php
/**
 * 
 * @param type $nid
 * @return type
 */

function agile_artmob_get_pids_from_nid($nid) {
  $pids = db_query("SELECT pid FROM {islandora_sync_map} WHERE entity_id = :nid",
    array(':nid' => $nid)
  )->fetchCol();
  return $pids ? $pids[0] : NULL;
}
