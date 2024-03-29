<?php
/**
 * @file
 * kony_feature_kony_downloads_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kony_feature_kony_downloads_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kony_downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kony Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kony Downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_kony_white_paper_file']['id'] = 'field_kony_white_paper_file';
  $handler->display->display_options['fields']['field_kony_white_paper_file']['table'] = 'field_data_field_kony_white_paper_file';
  $handler->display->display_options['fields']['field_kony_white_paper_file']['field'] = 'field_kony_white_paper_file';
  $handler->display->display_options['fields']['field_kony_white_paper_file']['label'] = '';
  $handler->display->display_options['fields']['field_kony_white_paper_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kony_white_paper_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kony_white_paper_file']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_kony_white_paper_image']['id'] = 'field_kony_white_paper_image';
  $handler->display->display_options['fields']['field_kony_white_paper_image']['table'] = 'field_data_field_kony_white_paper_image';
  $handler->display->display_options['fields']['field_kony_white_paper_image']['field'] = 'field_kony_white_paper_image';
  $handler->display->display_options['fields']['field_kony_white_paper_image']['label'] = '';
  $handler->display->display_options['fields']['field_kony_white_paper_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kony_white_paper_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kony_white_paper_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'kony_white_paper' => 'kony_white_paper',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'kony-downloads';
  $export['kony_downloads'] = $view;

  return $export;
}
