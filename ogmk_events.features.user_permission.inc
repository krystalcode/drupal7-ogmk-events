<?php
/**
 * @file
 * ogmk_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ogmk_event content'.
  $permissions['create ogmk_event content'] = array(
    'name' => 'create ogmk_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ogmk_recommendation content'.
  $permissions['create ogmk_recommendation content'] = array(
    'name' => 'create ogmk_recommendation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_event content'.
  $permissions['delete any ogmk_event content'] = array(
    'name' => 'delete any ogmk_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_recommendation content'.
  $permissions['delete any ogmk_recommendation content'] = array(
    'name' => 'delete any ogmk_recommendation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_event content'.
  $permissions['delete own ogmk_event content'] = array(
    'name' => 'delete own ogmk_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_recommendation content'.
  $permissions['delete own ogmk_recommendation content'] = array(
    'name' => 'delete own ogmk_recommendation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_event content'.
  $permissions['edit any ogmk_event content'] = array(
    'name' => 'edit any ogmk_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_recommendation content'.
  $permissions['edit any ogmk_recommendation content'] = array(
    'name' => 'edit any ogmk_recommendation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_event content'.
  $permissions['edit own ogmk_event content'] = array(
    'name' => 'edit own ogmk_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_recommendation content'.
  $permissions['edit own ogmk_recommendation content'] = array(
    'name' => 'edit own ogmk_recommendation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set ogmk_event published on date'.
  $permissions['set ogmk_event published on date'] = array(
    'name' => 'set ogmk_event published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  // Exported permission: 'set ogmk_recommendation published on date'.
  $permissions['set ogmk_recommendation published on date'] = array(
    'name' => 'set ogmk_recommendation published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  return $permissions;
}
