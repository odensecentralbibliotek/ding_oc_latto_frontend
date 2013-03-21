<?php
/**
 * @file
 * ding_oc_latto_frontend.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ding_oc_latto_frontend_default_rules_configuration() {
  $items = array();
  $items['rules_ding_tabroll_node_update'] = entity_import('rules_config', '{ "rules_ding_tabroll_node_update" : {
      "LABEL" : "Ding tabroll node update",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "ding", "node", "tabroll" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_update", "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ding_tabroll" : "ding_tabroll" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_panels_pane_cache" : { "panes" : { "value" : { "50e6dc83a64d3" : "50e6dc83a64d3" } } } }
      ]
    }
  }');
  return $items;
}
