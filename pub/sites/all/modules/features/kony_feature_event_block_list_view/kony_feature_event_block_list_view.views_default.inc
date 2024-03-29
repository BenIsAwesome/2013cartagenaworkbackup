<?php
/**
 * @file
 * kony_feature_event_block_list_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kony_feature_event_block_list_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kony_event_block_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Block List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_kony_event_date']['id'] = 'field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['table'] = 'field_data_field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['field'] = 'field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kony_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kony_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_kony_event_headline']['id'] = 'field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['table'] = 'field_data_field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['field'] = 'field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['label'] = '';
  $handler->display->display_options['fields']['field_kony_event_headline']['element_label_colon'] = FALSE;
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
    'kony_event' => 'kony_event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_kony_event_headline']['id'] = 'field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['table'] = 'field_data_field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['field'] = 'field_kony_event_headline';
  $handler->display->display_options['fields']['field_kony_event_headline']['label'] = '';
  $handler->display->display_options['fields']['field_kony_event_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_kony_event_date']['id'] = 'field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['table'] = 'field_data_field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['field'] = 'field_kony_event_date';
  $handler->display->display_options['fields']['field_kony_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_kony_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kony_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_kony_event_date) */
  $handler->display->display_options['sorts']['field_kony_event_date_value']['id'] = 'field_kony_event_date_value';
  $handler->display->display_options['sorts']['field_kony_event_date_value']['table'] = 'field_data_field_kony_event_date';
  $handler->display->display_options['sorts']['field_kony_event_date_value']['field'] = 'field_kony_event_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'kony_event' => 'kony_event',
  );
  /* Filter criterion: Content: Date - end date (field_kony_event_date:value2) */
  $handler->display->display_options['filters']['field_kony_event_date_value2']['id'] = 'field_kony_event_date_value2';
  $handler->display->display_options['filters']['field_kony_event_date_value2']['table'] = 'field_data_field_kony_event_date';
  $handler->display->display_options['filters']['field_kony_event_date_value2']['field'] = 'field_kony_event_date_value2';
  $handler->display->display_options['filters']['field_kony_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_kony_event_date_value2']['default_date'] = 'now';
  $export['kony_event_block_list'] = $view;

  return $export;
}
