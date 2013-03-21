<?php
/**
 * @file
 * ding_oc_latto_frontend.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_oc_latto_frontend_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_frontpage.default_handlers|odense_page_ding_frontpage_panel_context_1"] = (object) array(
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
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context_2"] = (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'page_ding_frontpage_panel_context_2',
      'task' => 'page',
      'subtask' => 'ding_frontpage',
      'handler' => 'panel_context',
      'weight' => 1,
      'conf' => array(
        'title' => 'tweg',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'body_classes_to_remove' => '',
        'body_classes_to_add' => '',
        'css_id' => '',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
        'display' => unserialize('O:14:"panels_display":15:{s:4:"args";a:0:{}s:7:"content";a:0:{}s:6:"panels";a:0:{}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:6:"twocol";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:3:{s:7:"default";N;s:4:"left";N;s:5:"right";N;}}s:5:"cache";a:0:{}s:5:"title";s:0:"";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
      ),
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-10"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-11"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-15"] = (object) array(
      'pid' => 'new-15',
      'panel' => 'left',
      'type' => 'views',
      'subtype' => 'ding_news',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => '4',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 1,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => 'news',
        'display' => 'ctools_context_teaser_list',
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(
        'method' => 'rules',
        'settings' => array(
          'granularity' => 'context',
          'language' => 1,
          'cache_key' => '50bf11a50b20f',
          'new' => TRUE,
        ),
      ),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => '',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-16"] = (object) array(
      'pid' => 'new-16',
      'panel' => 'left',
      'type' => 'views',
      'subtype' => 'ding_event',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => '6',
        'pager_id' => '0',
        'offset' => '0',
        'more_link' => 1,
        'feed_icons' => 1,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => 'events',
        'display' => 'ctools_context_teaser_list',
        'override_title' => 0,
        'override_title_text' => 'Calendar',
      ),
      'cache' => array(
        'method' => 'rules',
        'settings' => array(
          'granularity' => 'none',
          'language' => 1,
          'cache_key' => '50bf11a4e997d',
          'new' => TRUE,
        ),
      ),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'ding-event-teaser-list',
      ),
      'extras' => array(),
      'position' => 1,
      'locks' => '',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-17"] = (object) array(
      'pid' => 'new-17',
      'panel' => 'right',
      'type' => 'campaign',
      'subtype' => 'campaign',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'ding_campaign_count' => 3,
        'ding_campaign_offset' => 0,
        'context' => array(
          0 => 'empty',
          1 => 'empty',
          2 => 'empty',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(
        'method' => 'simple',
        'settings' => array(
          'lifetime' => '300',
          'granularity' => 'none',
        ),
      ),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => '',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-18"] = (object) array(
      'pid' => 'new-18',
      'panel' => 'top',
      'type' => 'carousel',
      'subtype' => 'carousel',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => '',
    );
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-8"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-9"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|left|0"] = 'new-15';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|left|1"] = 'new-16';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|right|0"] = 'new-17';
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|top|0"] = 'new-18';

 return $overrides;
}
