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
                "514ad6e87d7cf" : "514ad6e87d7cf",
                "514ad70b6b2d0" : "514ad70b6b2d0",
                "514ad714c68a7" : "514ad714c68a7",
                "514ad71cd6022" : "514ad71cd6022",
                "514ad7e82eeff" : "514ad7e82eeff",
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
