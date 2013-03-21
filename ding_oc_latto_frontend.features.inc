<?php
/**
 * @file
 * ding_oc_latto_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_oc_latto_frontend_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ding_oc_latto_frontend_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function ding_oc_latto_frontend_default_page_manager_pages_alter(&$data) {
  if (isset($data['ding_frontpage'])) {
    $data['ding_frontpage']->default_handlers['odense_page_ding_frontpage_panel_context_1'] = (object) array(
          'disabled' => FALSE,
          'api_version' => 1,
          'name' => 'odense_page_ding_frontpage_panel_context_1',
          'task' => 'page',
          'subtask' => 'ding_frontpage',
          'handler' => 'panel_context',
          'weight' => -30,
          'conf' => array(
            'title' => 'Odense Ding frontpage',
            'no_blocks' => 1,
            'pipeline' => 'standard',
            'css_id' => '',
            'css' => '',
            'contexts' => array(),
            'relationships' => array(),
            'body_classes_to_remove' => '',
            'body_classes_to_add' => 'front',
            'display' => unserialize('O:14:"panels_display":15:{s:4:"args";a:0:{}s:7:"content";a:7:{s:5:"new-8";O:8:"stdClass":13:{s:3:"pid";s:5:"new-8";s:5:"panel";s:12:"grid_12_left";s:4:"type";s:11:"views_panes";s:7:"subtype";s:25:"ding_tabroll-panel_pane_1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:0:{}s:5:"cache";a:2:{s:6:"method";s:5:"rules";s:8:"settings";a:7:{s:11:"granularity";s:4:"none";s:8:"language";i:1;s:16:"language_content";i:1;s:8:"advanced";a:0:{}s:9:"cache_key";s:13:"50e6dc83a64d3";s:10:"substitute";i:0;s:3:"new";b:1;}}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:2:{s:6:"css_id";s:0:"";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}}s:5:"new-9";O:8:"stdClass":13:{s:3:"pid";s:5:"new-9";s:5:"panel";s:26:"grid_4_bottom_center_right";s:4:"type";s:11:"views_panes";s:7:"subtype";s:37:"ding_event-ding_event_date_list_icons";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:0:{}s:5:"cache";a:2:{s:6:"method";s:5:"rules";s:8:"settings";a:7:{s:11:"granularity";s:4:"none";s:8:"language";i:1;s:16:"language_content";i:1;s:8:"advanced";a:0:{}s:9:"cache_key";s:13:"50e6deb1cab8b";s:10:"substitute";i:0;s:3:"new";b:1;}}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}}s:6:"new-10";O:8:"stdClass":13:{s:3:"pid";s:6:"new-10";s:5:"panel";s:19:"grid_4_bottom_right";s:4:"type";s:8:"campaign";s:7:"subtype";s:8:"campaign";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:5:{s:19:"ding_campaign_count";i:3;s:20:"ding_campaign_offset";i:0;s:7:"context";a:3:{i:0;s:5:"empty";i:1;s:5:"empty";i:2;s:5:"empty";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:2:{s:6:"method";s:6:"simple";s:8:"settings";a:2:{s:8:"lifetime";s:3:"300";s:11:"granularity";s:4:"none";}}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";s:0:"";}s:6:"new-11";O:8:"stdClass":13:{s:3:"pid";s:6:"new-11";s:5:"panel";s:19:"grid_4_bottom_right";s:4:"type";s:5:"block";s:7:"subtype";s:25:"finurlig_widget-fffWidget";s:5:"shown";b:0;s:6:"access";a:0:{}s:13:"configuration";a:2:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:5:"cache";a:0:{}s:5:"style";a:2:{s:8:"settings";N;s:5:"style";s:15:"rounded_corners";}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}}s:6:"new-12";O:8:"stdClass":13:{s:3:"pid";s:6:"new-12";s:5:"panel";s:12:"grid_4_right";s:4:"type";s:9:"menu_tree";s:7:"subtype";s:14:"menu-kviklinks";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:11:{s:9:"menu_name";s:14:"menu-kviklinks";s:11:"parent_mlid";s:16:"menu-kviklinks:0";s:10:"title_link";i:0;s:11:"admin_title";s:0:"";s:5:"level";s:1:"1";s:6:"follow";i:0;s:5:"depth";i:0;s:8:"expanded";i:0;s:4:"sort";i:0;s:14:"override_title";i:1;s:19:"override_title_text";s:14:"Kom let til...";}s:5:"cache";a:2:{s:6:"method";s:5:"rules";s:8:"settings";a:7:{s:11:"granularity";s:4:"none";s:8:"language";i:1;s:16:"language_content";i:1;s:8:"advanced";a:0:{}s:9:"cache_key";s:13:"50e6de8f5cb22";s:10:"substitute";i:0;s:3:"new";b:1;}}s:5:"style";a:2:{s:8:"settings";N;s:5:"style";s:7:"default";}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}}s:6:"new-13";O:8:"stdClass":13:{s:3:"pid";s:6:"new-13";s:5:"panel";s:18:"grid_8_bottom_left";s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:5:{s:11:"admin_title";s:20:"nyheder til forsiden";s:5:"title";s:7:"Nyheder";s:4:"body";s:0:"";s:6:"format";s:12:"ding_wysiwyg";s:10:"substitute";b:1;}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}}s:6:"new-14";O:8:"stdClass":13:{s:3:"pid";s:6:"new-14";s:5:"panel";s:18:"grid_8_bottom_left";s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"ding_news-panel_pane_1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:0:{}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}}}s:6:"panels";a:5:{s:12:"grid_12_left";a:1:{i:0;s:5:"new-8";}s:26:"grid_4_bottom_center_right";a:1:{i:0;s:5:"new-9";}s:19:"grid_4_bottom_right";a:2:{i:0;s:6:"new-10";i:1;s:6:"new-11";}s:12:"grid_4_right";a:1:{i:0;s:6:"new-12";}s:18:"grid_8_bottom_left";a:2:{i:0;s:6:"new-13";i:1;s:6:"new-14";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:21:"stacked_8_4_4_reverse";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:7:{s:14:"style_settings";a:24:{s:7:"default";N;s:3:"top";N;s:4:"left";N;s:5:"right";N;s:6:"bottom";N;s:16:"grid_16_top_full";N;s:12:"grid_13_left";N;s:12:"grid_3_right";N;s:15:"grid_4_top_left";N;s:22:"grid_4_top_center_left";N;s:23:"grid_4_top_center_right";N;s:16:"grid_4_top_right";N;s:11:"grid_8_left";a:2:{s:12:"region_title";s:7:"Nyheder";s:16:"region_collapsed";i:1;}s:12:"grid_8_right";a:2:{s:12:"region_title";s:13:"Arrangementer";s:16:"region_collapsed";i:1;}s:18:"grid_4_bottom_left";N;s:25:"grid_4_bottom_center_left";N;s:19:"grid_4_bottom_right";N;s:12:"grid_10_left";a:2:{s:12:"region_title";s:7:"Nyheder";s:16:"region_collapsed";i:1;}s:19:"grid_3_center_right";a:2:{s:12:"region_title";s:13:"Arrangementer";s:16:"region_collapsed";i:1;}s:19:"grid_16_bottom_full";N;s:12:"grid_12_left";N;s:12:"grid_4_right";N;s:18:"grid_8_bottom_left";N;s:26:"grid_4_bottom_center_right";N;}s:12:"grid_10_left";a:1:{s:5:"style";s:11:"collapsible";}s:19:"grid_3_center_right";a:1:{s:5:"style";s:11:"collapsible";}s:11:"grid_8_left";a:1:{s:5:"style";s:11:"collapsible";}s:12:"grid_8_right";a:1:{s:5:"style";s:11:"collapsible";}s:18:"grid_8_bottom_left";a:1:{s:5:"style";s:7:"default";}s:26:"grid_4_bottom_center_right";a:1:{s:5:"style";s:7:"default";}}s:5:"cache";a:0:{}s:5:"title";s:0:"";s:10:"hide_title";i:1;s:10:"title_pane";s:1:"0";}'),
          ),
        ); /* WAS: '' */
  }
}
