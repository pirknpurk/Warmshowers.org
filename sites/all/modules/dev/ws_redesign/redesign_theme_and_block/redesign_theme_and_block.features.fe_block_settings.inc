<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function redesign_theme_and_block_default_fe_block_settings() {
  $export = array();

  // warmshowers_zen
  $theme = array();

  $theme['follow-site'] = array(
    'module' => 'follow',
    'delta' => 'site',
    'status' => 0,
    'weight' => '-20',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '',
    'cache' => '1',
  );

  $theme['locale-0'] = array(
    'module' => 'locale',
    'delta' => '0',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-anon_main_menu'] = array(
    'module' => 'menu',
    'delta' => 'anon_main_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-footer_menu'] = array(
    'module' => 'menu',
    'delta' => 'footer_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-logged_in_main_menu'] = array(
    'module' => 'menu',
    'delta' => 'logged_in_main_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['wsmap-0'] = array(
    'module' => 'wsmap',
    'delta' => '0',
    'status' => 0,
    'weight' => '11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowers_zen',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['warmshowers_zen'] = $theme;

  // warmshowerspb
  $theme = array();

  $theme['follow-site'] = array(
    'module' => 'follow',
    'delta' => 'site',
    'status' => '1',
    'weight' => '-20',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '',
    'cache' => '1',
  );

  $theme['locale-0'] = array(
    'module' => 'locale',
    'delta' => '0',
    'status' => '1',
    'weight' => '-19',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-anon_main_menu'] = array(
    'module' => 'menu',
    'delta' => 'anon_main_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-footer_menu'] = array(
    'module' => 'menu',
    'delta' => 'footer_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-logged_in_main_menu'] = array(
    'module' => 'menu',
    'delta' => 'logged_in_main_menu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['wsmap-0'] = array(
    'module' => 'wsmap',
    'delta' => '0',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'theme' => 'warmshowerspb',
    'title' => '<none>',
    'cache' => '1',
  );

  $export['warmshowerspb'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}