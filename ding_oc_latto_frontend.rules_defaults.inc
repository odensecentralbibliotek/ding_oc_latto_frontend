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
  $items['rules_menu_links'] = entity_import('rules_config', '{ "rules_menu_links" : {
      "LABEL" : "Menu links",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "menu links" ],
      "REQUIRES" : [ "cache_actions", "menu_rules" ],
      "ON" : [ "menu_rules_menu_link_change" ],
      "DO" : [
        { "cache_actions_action_clear_panels_pane_cache" : { "panes" : { "value" : {
                "50bf11a45311a" : "50bf11a45311a",
                "50bf11a45d23b" : "50bf11a45d23b",
                "50bf11a46e048" : "50bf11a46e048",
                "50bf11a4783d2" : "50bf11a4783d2",
                "514181064dc49" : "514181064dc49",
                "50e6de8f5cb22" : "50e6de8f5cb22"
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
