<?php
/**
 * @file
 * neo_featured_products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function neo_featured_products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/featured-products-manager
  $menu_links['management:admin/featured-products-manager'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/featured-products-manager',
    'router_path' => 'admin/featured-products-manager',
    'link_title' => 'Featured Products Manager',
    'options' => array(
      'attributes' => array(),
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/site-config/layout',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Products Manager');


  return $menu_links;
}
