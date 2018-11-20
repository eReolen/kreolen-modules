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

  // Exported field_instance: 'node-kreol_campaign-field_campaign_add_on'.
  $field_instances['node-kreol_campaign-field_campaign_add_on'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_campaign_add_on',
    'label' => 'campaign add-on',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-kreol_campaign-field_geofencing_max_distance'.
  $field_instances['node-kreol_campaign-field_geofencing_max_distance'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Maksimal afstand i meter til et af punkterne angivet ovenfor.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geofencing_max_distance',
    'label' => 'geofencing max distance',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-kreol_campaign-field_geofencing_origin'.
  $field_instances['node-kreol_campaign-field_geofencing_origin'] = array(
    'bundle' => 'kreol_campaign',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Koordinater for hospitalet. Brug <a href="http://maps.google.com/">Google Maps<a/> eller lignende til at finde koordinaterne (se fx “<a href="https://support.google.com/maps/answer/18539">Get the coordinates of a place</a>”)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geofencing_origin',
    'label' => 'geofencing origin',
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
      'weight' => 5,
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
        'audio_preview' => -1,
        'campaign_audio_book' => -1,
        'campaign_audio_books' => 'campaign_audio_books',
        'campaign_material' => -1,
        'campaign_materials' => 'campaign_materials',
        'campaign_text' => 'campaign_text',
        'linkbox' => -1,
        'material_carousel' => -1,
        'picked_article_carousel' => -1,
        'recommended_material' => -1,
        'review' => -1,
        'spotlight_box' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'article_carousel' => 2,
        'audio_preview' => 16,
        'campaign_audio_book' => 13,
        'campaign_audio_books' => 21,
        'campaign_material' => 27,
        'campaign_materials' => 28,
        'campaign_text' => 3,
        'linkbox' => 4,
        'material_carousel' => 5,
        'picked_article_carousel' => 6,
        'recommended_material' => 7,
        'review' => 8,
        'spotlight_box' => 9,
        'video' => 10,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_audio_book-field_material_url'.
  $field_instances['paragraphs_item-campaign_audio_book-field_material_url'] = array(
    'bundle' => 'campaign_audio_book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_material_url',
    'label' => 'material_url',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_audio_books-field_audio_books'.
  $field_instances['paragraphs_item-campaign_audio_books-field_audio_books'] = array(
    'bundle' => 'campaign_audio_books',
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
    'field_name' => 'field_audio_books',
    'label' => 'Audio books',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'article_carousel' => -1,
        'audio_preview' => -1,
        'campaign_audio_book' => 'campaign_audio_book',
        'campaign_audio_books' => -1,
        'campaign_text' => -1,
        'linkbox' => -1,
        'material_carousel' => -1,
        'picked_article_carousel' => -1,
        'recommended_material' => -1,
        'review' => -1,
        'spotlight_box' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'article_carousel' => 2,
        'audio_preview' => 3,
        'campaign_audio_book' => 4,
        'campaign_audio_books' => 5,
        'campaign_text' => 6,
        'linkbox' => 7,
        'material_carousel' => 8,
        'picked_article_carousel' => 9,
        'recommended_material' => 10,
        'review' => 11,
        'spotlight_box' => 12,
        'video' => 13,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_audio_books-field_heading'.
  $field_instances['paragraphs_item-campaign_audio_books-field_heading'] = array(
    'bundle' => 'campaign_audio_books',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_material-field_material_url'.
  $field_instances['paragraphs_item-campaign_material-field_material_url'] = array(
    'bundle' => 'campaign_material',
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
    'field_name' => 'field_material_url',
    'label' => 'material_url',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_materials-field_heading'.
  $field_instances['paragraphs_item-campaign_materials-field_heading'] = array(
    'bundle' => 'campaign_materials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-campaign_materials-field_materials'.
  $field_instances['paragraphs_item-campaign_materials-field_materials'] = array(
    'bundle' => 'campaign_materials',
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
    'field_name' => 'field_materials',
    'label' => 'materials',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'article_carousel' => -1,
        'audio_preview' => -1,
        'campaign_audio_book' => -1,
        'campaign_audio_books' => -1,
        'campaign_material' => 'campaign_material',
        'campaign_materials' => -1,
        'campaign_text' => -1,
        'linkbox' => -1,
        'material_carousel' => -1,
        'picked_article_carousel' => -1,
        'recommended_material' => -1,
        'review' => -1,
        'spotlight_box' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'article_carousel' => 2,
        'audio_preview' => 3,
        'campaign_audio_book' => 4,
        'campaign_audio_books' => 5,
        'campaign_material' => 6,
        'campaign_materials' => 7,
        'campaign_text' => 8,
        'linkbox' => 9,
        'material_carousel' => 10,
        'picked_article_carousel' => 11,
        'recommended_material' => 12,
        'review' => 13,
        'spotlight_box' => 14,
        'video' => 15,
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
      'weight' => 1,
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
  t('Audio books');
  t('Footer');
  t('Heading');
  t('Koordinater for hospitalet. Brug <a href="http://maps.google.com/">Google Maps<a/> eller lignende til at finde koordinaterne (se fx “<a href="https://support.google.com/maps/answer/18539">Get the coordinates of a place</a>”)');
  t('Maksimal afstand i meter til et af punkterne angivet ovenfor.');
  t('Paragraphs');
  t('Tagline');
  t('Text');
  t('campaign add-on');
  t('geofencing max distance');
  t('geofencing origin');
  t('material_url');
  t('materials');

  return $field_instances;
}
