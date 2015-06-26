<?php

/**
 * @file
 * Ctools access plugin.
 */


$plugin = array(
  'title' => t('Check curent time'),
  'description' => t('Controls access depends on curent time'),
  'required context' => array(new ctools_context_required(t('Current timestamp'), 'current_timestamp')),
  'callback' => 'wdg_test_timestamp_access',
  'settings form' => 'wdg_test_timestamp_access_settings_form',
  'summary' => 'wdg_test_timestamp_access_summary',
);

/**
 * Settings form for our access plugin.
 */
function wdg_test_timestamp_access_settings_form(&$form, &$form_state, $conf) {
  $form['settings']['timestamp'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show in odd timestamp'),
    '#default_value' => !empty($conf['timestamp']) ? TRUE : FALSE,
  );
  return $form;
}

/**
 * Check for access.
 */
function wdg_test_timestamp_access($conf, $context) {
  if (!empty($context[0])) {
    return $context[0]->data;
  }
  return FALSE;
}

/**
 * Provide a summary description based on selected settings.
 */
function wdg_test_timestamp_access_summary($conf, $context) {
  return !empty($conf['timestamp']) ?
  t('Will grant access if current timestamp odd') :
  t('Will grant access if current timestamp even');
}
