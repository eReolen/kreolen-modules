<?php
/**
 * @file
 * kreol_campaign.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function kreol_campaign_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'kreol_campaign';
  $layout->admin_title = 'Campaign';
  $layout->admin_description = '';
  $layout->category = 'Campaign';
  $layout->plugin = 'flexible';
  $layout->settings = array();
  $export['kreol_campaign'] = $layout;

  return $export;
}
