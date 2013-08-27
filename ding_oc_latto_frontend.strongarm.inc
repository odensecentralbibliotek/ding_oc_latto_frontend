<?php
/**
 * @file
 * ding_oc_latto_frontend.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_oc_latto_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_opening_hours_opening_hours';
  $strongarm->value = 1;
  $export['admin_theme_opening_hours_opening_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_keep_theme_css';
  $strongarm->value = 0;
  $export['print_keep_theme_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'latto_odense';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_latto_odense_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.ico',
    'favicon_upload' => '',
    'latto_classes_menu_leaf' => 1,
    'latto_classes_menu_has_children' => 1,
    'latto_classes_menu_items_mlid' => 1,
    'main_menu_sticky' => 0,
    'load_html5js' => 1,
    'load_selectivizr' => 1,
    'load_scalefixjs' => 1,
    'load_equalize' => 1,
    'enable_exclude_css' => 0,
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_latto_odense_settings'] = $strongarm;

  return $export;
}
