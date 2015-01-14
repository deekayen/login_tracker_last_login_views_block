<?php
/**
 * @file
 * login_tracker_last_login_views_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function login_tracker_last_login_views_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'last_login';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'login_tracker';
  $view->human_name = 'Last login';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Last login';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Login tracker: Login timestamp */
  $handler->display->display_options['fields']['login_timestamp']['id'] = 'login_timestamp';
  $handler->display->display_options['fields']['login_timestamp']['table'] = 'login_tracker';
  $handler->display->display_options['fields']['login_timestamp']['field'] = 'login_timestamp';
  $handler->display->display_options['fields']['login_timestamp']['label'] = 'You last logged in at';
  $handler->display->display_options['fields']['login_timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['login_timestamp']['second_date_format'] = 'long';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['last_login'] = $view;

  return $export;
}
