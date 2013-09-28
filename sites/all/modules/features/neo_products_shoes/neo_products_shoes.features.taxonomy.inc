<?php
/**
 * @file
 * neo_products_shoes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function neo_products_shoes_taxonomy_default_vocabularies() {
  return array(
    'shoe_sizes' => array(
      'name' => 'Shoe Sizes',
      'machine_name' => 'shoe_sizes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
