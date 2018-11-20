<?php
/**
 * @file
 * kreol_campaign.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function kreol_campaign_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9cffaf5e-fe08-499e-9cc4-617e9cf405f9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Campaign',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'kreol_campaign' => 'kreol_campaign',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '870427ac-c1c0-4bb5-bc00-22b707d12a07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4241262-a4b6-4a4e-b00a-cb77c217428a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tagline';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'body_snippet_length' => '100',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4241262-a4b6-4a4e-b00a-cb77c217428a';
    $display->content['new-c4241262-a4b6-4a4e-b00a-cb77c217428a'] = $pane;
    $display->panels['middle'][0] = 'new-c4241262-a4b6-4a4e-b00a-cb77c217428a';
    $pane = new stdClass();
    $pane->pid = 'new-7ed5e715-7aff-4ad0-8fc5-c688e09ca919';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_paragraphs';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ed5e715-7aff-4ad0-8fc5-c688e09ca919';
    $display->content['new-7ed5e715-7aff-4ad0-8fc5-c688e09ca919'] = $pane;
    $display->panels['middle'][1] = 'new-7ed5e715-7aff-4ad0-8fc5-c688e09ca919';
    $pane = new stdClass();
    $pane->pid = 'new-0563bbca-efdd-458f-a7ef-3ca1adcad9ae';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0563bbca-efdd-458f-a7ef-3ca1adcad9ae';
    $display->content['new-0563bbca-efdd-458f-a7ef-3ca1adcad9ae'] = $pane;
    $display->panels['middle'][2] = 'new-0563bbca-efdd-458f-a7ef-3ca1adcad9ae';
    $pane = new stdClass();
    $pane->pid = 'new-8c42a553-600d-47a6-a894-7c5197a2f5cf';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_footer';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8c42a553-600d-47a6-a894-7c5197a2f5cf';
    $display->content['new-8c42a553-600d-47a6-a894-7c5197a2f5cf'] = $pane;
    $display->panels['middle'][3] = 'new-8c42a553-600d-47a6-a894-7c5197a2f5cf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9cffaf5e-fe08-499e-9cc4-617e9cf405f9'] = $handler;

  return $export;
}
