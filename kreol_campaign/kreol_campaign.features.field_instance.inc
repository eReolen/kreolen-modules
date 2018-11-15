<?php
/**
 * @file
 * kreol_campaign.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kreol_campaign_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-kreol_campaign-field_footer'.
  $field_instances['node-kreol_campaign-field_footer'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => array(
      0 => array(
        'value' => '<h3>Siden her er leveret af eReolen i samarbejde med hospitalet</h3><p>De frie titler her på siden er kun til gængelige i forbindelse med ophold på hospitalet. Denne side vil ikke kunne tilgås fra andre steder end her på hospitalet.</p>',
        'format' => 'ding_wysiwyg',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_footer',
    'label' => 'Footer',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-kreol_campaign-field_paragraphs'.
  $field_instances['node-kreol_campaign-field_paragraphs'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'article_carousel' => -1,
        'campaign_text' => 'campaign_text',
        'linkbox' => 'linkbox',
        'material_carousel' => 'material_carousel',
        'picked_article_carousel' => -1,
        'recommended_material' => -1,
        'review' => -1,
        'spotlight_box' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'article_carousel' => 2,
        'campaign_text' => 3,
        'linkbox' => 4,
        'material_carousel' => 5,
        'picked_article_carousel' => 6,
        'recommended_material' => 7,
        'review' => 8,
        'spotlight_box' => 9,
        'video' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-kreol_campaign-field_tagline'.
  $field_instances['node-kreol_campaign-field_tagline'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => array(
      0 => array(
        'value' => 'Velkommen til eReolen på hospitalet',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tagline',
    'label' => 'Tagline',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'paragraphs_item-campaign_text-field_heading'.
  $field_instances['paragraphs_item-campaign_text-field_heading'] = array(
    'bundle' => 'campaign_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-campaign_text-field_text'.
  $field_instances['paragraphs_item-campaign_text-field_text'] = array(
    'bundle' => 'campaign_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Heading');
  t('Paragraphs');
  t('Tagline');
  t('Text');

  return $field_instances;
}
