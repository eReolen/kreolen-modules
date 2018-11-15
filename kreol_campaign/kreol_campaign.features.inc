<?php
/**
 * @file
 * kreol_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kreol_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kreol_campaign_node_info() {
  $items = array(
    'kreol_campaign' => array(
      'name' => t('Kampagneside'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function kreol_campaign_paragraphs_info() {
  $items = array(
    'campaign_text' => array(
      'name' => 'Tekst',
      'bundle' => 'campaign_text',
      'locked' => '1',
    ),
  );
  return $items;
}
