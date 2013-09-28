<?php
/**
 * @file
 * neo_products_shoes.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function neo_products_shoes_commerce_product_default_types() {
  $items = array(
    'shoes' => array(
      'type' => 'shoes',
      'name' => 'Shoes',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function neo_products_shoes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function neo_products_shoes_node_info() {
  $items = array(
    'shoes' => array(
      'name' => t('Shoes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
