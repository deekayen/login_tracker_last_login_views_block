<?php
/**
 * @file
 * login_tracker_last_login_views_block.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function login_tracker_last_login_views_block_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'login_notifications';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:login_notifications';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ed53472e-d0b8-4d13-a1ac-5e1efb980427';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bb3887d9-cb93-4580-8c5c-2a81c295c8c9';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Login notifications test',
      'title' => 'Login notifications test',
      'body' => 'Hi Jeannie.

This content is just a quick insert of custom content in the right side of a panels pane. The Navigation and Management blocks to the left are standard blocks from Drupal core. I edited those blocks to show only on admin/* paths, then edited the custom layout I created in Panels to add them back to display on the left panel (fluid 30% width). Alternatively, I could have selected the "Disable Drupal blocks/regions" for the panel, but opted not to.

I set the path of the Panels page to /login_notifications, then set that as the front page so you\'d be able to see it right away for this test.

The Login notifications display is from a Views block, which I used to list the last login based on the current logged in user. The permissions to hide the View from anonymous users is handled by the View rather than the Visibility rules on the panel. The collapsing is assisted by Ctools and https://www.drupal.org/project/panels_style_collapsible.

A field I added to the user profile can be edited by each user to add a supplemental message per user. I changed it to be hidden from the user profile page by default since only the logged-in user should be able to see the contents of that field (through their Login notifications block) in the left pane of the panel.

Here\'s a quick link to review the contents of this panel: https://phpdev.net/admin/structure/pages/nojs/operation/page-front_page/handlers/page_front_page_panel_context/content',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb3887d9-cb93-4580-8c5c-2a81c295c8c9';
    $display->content['new-bb3887d9-cb93-4580-8c5c-2a81c295c8c9'] = $pane;
    $display->panels['center'][0] = 'new-bb3887d9-cb93-4580-8c5c-2a81c295c8c9';
    $pane = new stdClass();
    $pane->pid = 'new-64a45a9d-54e6-4ae5-84ce-6964637b4d85';
    $pane->panel = 'left_region';
    $pane->type = 'views';
    $pane->subtype = 'last_login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Login notifications',
        'pane_collapsed' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '64a45a9d-54e6-4ae5-84ce-6964637b4d85';
    $display->content['new-64a45a9d-54e6-4ae5-84ce-6964637b4d85'] = $pane;
    $display->panels['left_region'][0] = 'new-64a45a9d-54e6-4ae5-84ce-6964637b4d85';
    $pane = new stdClass();
    $pane->pid = 'new-1c4e03d2-ccad-4b9a-a97f-f08a9e408f5a';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c4e03d2-ccad-4b9a-a97f-f08a9e408f5a';
    $display->content['new-1c4e03d2-ccad-4b9a-a97f-f08a9e408f5a'] = $pane;
    $display->panels['left_region'][1] = 'new-1c4e03d2-ccad-4b9a-a97f-f08a9e408f5a';
    $pane = new stdClass();
    $pane->pid = 'new-9093cc51-8648-4d0d-a4b9-d3584719f6b5';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'system-management';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9093cc51-8648-4d0d-a4b9-d3584719f6b5';
    $display->content['new-9093cc51-8648-4d0d-a4b9-d3584719f6b5'] = $pane;
    $display->panels['left_region'][2] = 'new-9093cc51-8648-4d0d-a4b9-d3584719f6b5';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
