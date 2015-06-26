<?php

/**
 * @file
 * Plugin for the WDG timestamp check.
 */
$plugin = array(
  'title' => t('WDG timestamp'),
  'single' => TRUE,
  'description' => t('WDG timestamp'),
  'category' => t('WDG'),
  'render callback' => 'wdg_test_time_ct_content_type_render',
);

/**
 * Implementation of render callback
 */
function wdg_test_time_ct_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass;
  $content_table = views_embed_view('content_table', 'block');
  $block->content = render($content_table);
  return $block;
}
