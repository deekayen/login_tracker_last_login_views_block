<?php
/**
 * @file
 * login_tracker_last_login_views_block.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function login_tracker_last_login_views_block_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'login_notifications';
  $layout->admin_title = 'Login notifications';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.98203883124518',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '30.01796116875482',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'left-pane',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
        ),
        'parent' => '1',
        'class' => 'left-row',
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'left-region',
      ),
    ),
  );
  $export['login_notifications'] = $layout;

  return $export;
}
