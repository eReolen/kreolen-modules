<?php
/**
 * @file
 * kreol_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kreol_campaign_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geofencing|node|kreol_campaign|form';
  $field_group->group_name = 'group_geofencing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kreol_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geofencing',
    'weight' => '5',
    'children' => array(
      0 => 'field_geofencing_max_distance',
      1 => 'field_geofencing_origin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Geofencing',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-geofencing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_geofencing|node|kreol_campaign|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Geofencing');

  return $field_groups;
}
