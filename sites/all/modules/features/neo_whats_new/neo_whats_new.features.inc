<?php
/**
 * @file
 * neo_whats_new.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neo_whats_new_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function neo_whats_new_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function neo_whats_new_node_info() {
  $items = array(
    'whats_new' => array(
      'name' => t('Whats New'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}