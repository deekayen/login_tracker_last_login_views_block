<?php
/**
 * @file
 * login_tracker_last_login_views_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function login_tracker_last_login_views_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_additional_login_notificat'
  $field_instances['user-user-field_additional_login_notificat'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'This sentence can be edited in your user profile.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_additional_login_notificat',
    'label' => 'Additional login notifications text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional login notifications text');

  return $field_instances;
}
