<?php
/**
 * @file
 * kreol_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kreol_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
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
    'kreol_campaign_tv' => array(
      'name' => t('Tv-reol'),
      'base' => 'node_content',
      'description' => t('Kampagneside til brug på tv-skærme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
    'campaign_audio_book' => array(
      'name' => 'Audio book',
      'bundle' => 'campaign_audio_book',
      'locked' => '1',
    ),
    'campaign_audio_books' => array(
      'name' => 'Audio books',
      'bundle' => 'campaign_audio_books',
      'locked' => '1',
    ),
    'campaign_material' => array(
      'name' => 'campaign material',
      'bundle' => 'campaign_material',
      'locked' => '1',
    ),
    'campaign_materials' => array(
      'name' => 'campaign materials',
      'bundle' => 'campaign_materials',
      'locked' => '1',
    ),
    'campaign_text' => array(
      'name' => 'Tekst',
      'bundle' => 'campaign_text',
      'locked' => '1',
    ),
  );
  return $items;
}
