<?php


$plugin = array(
  'title' => t("Current timestamp"),
  'description' => t('Provide token for current timestamp'),
  'context' => 'wdg_test_create_current_timestamp',
  'context name' => 'current_timestamp',
  'keyword' => 'current_timestamp',
);


function wdg_test_create_current_timestamp($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('current_timestamp');
  $context->plugin = 'current_timestamp';
  $time = time();
  $context->data = ($time % 2 == 0) ? FALSE : TRUE;
  return $context;
}
