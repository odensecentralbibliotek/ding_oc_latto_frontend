<?php
/**
 * @file
 * ding_oc_latto_frontend.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ding_oc_latto_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-kviklinks.
  $menus['menu-kviklinks'] = array(
    'menu_name' => 'menu-kviklinks',
    'title' => 'Kviklinks',
    'description' => 'Kviklinks',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Kviklinks');


  return $menus;
}
