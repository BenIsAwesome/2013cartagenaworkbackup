<?php
/**
 * @file
 * kony_feature_company_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kony_feature_company_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kony_view_company_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Company Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_company_profile_info_detai']['id'] = 'field_company_profile_info_detai';
  $handler->display->display_options['fields']['field_company_profile_info_detai']['table'] = 'field_data_field_company_profile_info_detai';
  $handler->display->display_options['fields']['field_company_profile_info_detai']['field'] = 'field_company_profile_info_detai';
  $handler->display->display_options['fields']['field_company_profile_info_detai']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_profile_info_detai']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_company_profile_info_detai']['element_default_classes'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_company_profile_info_detai_1']['id'] = 'field_company_profile_info_detai_1';
  $handler->display->display_options['fields']['field_company_profile_info_detai_1']['table'] = 'field_data_field_company_profile_info_detai';
  $handler->display->display_options['fields']['field_company_profile_info_detai_1']['field'] = 'field_company_profile_info_detai';
  $handler->display->display_options['path'] = 'company-profile';
  $export['kony_view_company_profile'] = $view;

  return $export;
}
