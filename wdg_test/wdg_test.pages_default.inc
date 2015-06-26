<?php
/**
 * @file
 * wdg_test.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wdg_test_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'test_time';
  $page->task = 'page';
  $page->admin_title = 'Test time';
  $page->admin_description = '';
  $page->path = 'test-time';
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
  $handler->name = 'page_test_time__panel_context_4bd355da-afb3-431a-a4c3-417cf265f59c';
  $handler->task = 'page';
  $handler->subtask = 'test_time';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Current timestamp',
        'keyword' => 'current_timestamp',
        'name' => 'current_timestamp',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'wdg_test_time_access',
          'settings' => array(
            'timestamp' => 0,
          ),
          'context' => array(
            0 => 'context_current_timestamp_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ada59cfa-f777-45a9-a828-ea6e868adb5d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b8dd3ec0-2669-4a19-8d4b-1ddafe1e830d';
    $pane->panel = 'center';
    $pane->type = 'wdg_test_time_ct';
    $pane->subtype = 'wdg_test_time_ct';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b8dd3ec0-2669-4a19-8d4b-1ddafe1e830d';
    $display->content['new-b8dd3ec0-2669-4a19-8d4b-1ddafe1e830d'] = $pane;
    $display->panels['center'][0] = 'new-b8dd3ec0-2669-4a19-8d4b-1ddafe1e830d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['test_time'] = $page;

  return $pages;

}
