<?php
/**
 * @file
 * neo_stockists.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neo_stockists_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function neo_stockists_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function neo_stockists_node_info() {
  $items = array(
    'stockist' => array(
      'name' => t('Stockist'),
      'base' => 'node_content',
      'description' => t('This will be used for showing re-sellers on a map.'),
      'has_title' => '1',
      'title_label' => t('Stockist Name'),
      'help' => '',
    ),
  );
  return $items;
}
