<?php
/**
 * @file
 * neo_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function neo_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slide_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slide test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'slider test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: FlexSlider Example Slideshow */
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['id'] = 'field_flexslider_example_slidesh';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['table'] = 'field_data_field_flexslider_example_slidesh';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['field'] = 'field_flexslider_example_slidesh';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['label'] = '';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['element_type'] = '0';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_flexslider_example_slidesh']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flexslider_example' => 'flexslider_example',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'slide-test';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $export['slide_test'] = $view;

  return $export;
}
