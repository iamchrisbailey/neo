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
