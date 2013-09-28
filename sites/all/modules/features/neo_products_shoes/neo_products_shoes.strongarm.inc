<?php
/**
 * @file
 * neo_products_shoes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function neo_products_shoes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__shoes';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_size' => array(
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__shoes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shoes';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_shoes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_shoes';
  $strongarm->value = 0;
  $export['node_submitted_shoes'] = $strongarm;

  return $export;
}
