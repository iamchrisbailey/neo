<?php
/**
 * @file
 * neo_press.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neo_press_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function neo_press_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function neo_press_node_info() {
  $items = array(
    'press' => array(
      'name' => t('Press'),
      'base' => 'node_content',
      'description' => t('This will be used for displaying press items.'),
      'has_title' => '1',
      'title_label' => t('Resource'),
      'help' => t('The website, publication or organization that has written about New England Outerwear Co.'),
    ),
  );
  return $items;
}
