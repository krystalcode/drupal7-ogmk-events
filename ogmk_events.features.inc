<?php
/**
 * @file
 * ogmk_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ogmk_events_node_info() {
  $items = array(
    'ogmk_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ogmk_recommendation' => array(
      'name' => t('Product Recommendation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_og_membership_type().
 */
function ogmk_events_default_og_membership_type() {
  $items = array();
  $items['ogmk_event_item'] = entity_import('og_membership_type', '{
    "name" : "ogmk_event_item",
    "description" : "Event Item",
    "language" : ""
  }');
  $items['ogmk_event_member'] = entity_import('og_membership_type', '{
    "name" : "ogmk_event_member",
    "description" : "Event Member",
    "language" : ""
  }');
  return $items;
}
