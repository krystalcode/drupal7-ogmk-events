<?php
/**
 * @file
 * ogmk_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ogmk_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:ogmk_event:access authoring options of ogmk_event content'
  $permissions['node:ogmk_event:access authoring options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access authoring options of ogmk_recommendation content'
  $permissions['node:ogmk_event:access authoring options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access authoring options of product content'
  $permissions['node:ogmk_event:access authoring options of product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access authoring options of review content'
  $permissions['node:ogmk_event:access authoring options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access publishing options of ogmk_event content'
  $permissions['node:ogmk_event:access publishing options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access publishing options of ogmk_recommendation content'
  $permissions['node:ogmk_event:access publishing options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access publishing options of product content'
  $permissions['node:ogmk_event:access publishing options of product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access publishing options of review content'
  $permissions['node:ogmk_event:access publishing options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access revisions options of ogmk_event content'
  $permissions['node:ogmk_event:access revisions options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access revisions options of ogmk_recommendation content'
  $permissions['node:ogmk_event:access revisions options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access revisions options of product content'
  $permissions['node:ogmk_event:access revisions options of product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:access revisions options of review content'
  $permissions['node:ogmk_event:access revisions options of review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:add user'
  $permissions['node:ogmk_event:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:administer group'
  $permissions['node:ogmk_event:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:approve and deny subscription'
  $permissions['node:ogmk_event:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:create ogmk_event content'
  $permissions['node:ogmk_event:create ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:create ogmk_recommendation content'
  $permissions['node:ogmk_event:create ogmk_recommendation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:ogmk_event:create product content'
  $permissions['node:ogmk_event:create product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:create review content'
  $permissions['node:ogmk_event:create review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete any ogmk_event content'
  $permissions['node:ogmk_event:delete any ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete any ogmk_recommendation content'
  $permissions['node:ogmk_event:delete any ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete any product content'
  $permissions['node:ogmk_event:delete any product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete any review content'
  $permissions['node:ogmk_event:delete any review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete own ogmk_event content'
  $permissions['node:ogmk_event:delete own ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete own ogmk_recommendation content'
  $permissions['node:ogmk_event:delete own ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete own product content'
  $permissions['node:ogmk_event:delete own product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:delete own review content'
  $permissions['node:ogmk_event:delete own review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:manage members'
  $permissions['node:ogmk_event:manage members'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:manage permissions'
  $permissions['node:ogmk_event:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:manage roles'
  $permissions['node:ogmk_event:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:subscribe'
  $permissions['node:ogmk_event:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:subscribe without approval'
  $permissions['node:ogmk_event:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:ogmk_event:unsubscribe'
  $permissions['node:ogmk_event:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:ogmk_event:update any ogmk_event content'
  $permissions['node:ogmk_event:update any ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update any ogmk_recommendation content'
  $permissions['node:ogmk_event:update any ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update any product content'
  $permissions['node:ogmk_event:update any product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update any review content'
  $permissions['node:ogmk_event:update any review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update group'
  $permissions['node:ogmk_event:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ogmk_event:update own ogmk_event content'
  $permissions['node:ogmk_event:update own ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update own ogmk_recommendation content'
  $permissions['node:ogmk_event:update own ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update own product content'
  $permissions['node:ogmk_event:update own product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:update own review content'
  $permissions['node:ogmk_event:update own review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:view any unpublished ogmk_event content'
  $permissions['node:ogmk_event:view any unpublished ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:view any unpublished ogmk_recommendation content'
  $permissions['node:ogmk_event:view any unpublished ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:view any unpublished product content'
  $permissions['node:ogmk_event:view any unpublished product content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ogmk_event:view any unpublished review content'
  $permissions['node:ogmk_event:view any unpublished review content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access authoring options of ogmk_event content'
  $permissions['node:shop:access authoring options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access authoring options of ogmk_recommendation content'
  $permissions['node:shop:access authoring options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access publishing options of ogmk_event content'
  $permissions['node:shop:access publishing options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access publishing options of ogmk_recommendation content'
  $permissions['node:shop:access publishing options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access revisions options of ogmk_event content'
  $permissions['node:shop:access revisions options of ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:access revisions options of ogmk_recommendation content'
  $permissions['node:shop:access revisions options of ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:create ogmk_event content'
  $permissions['node:shop:create ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:create ogmk_recommendation content'
  $permissions['node:shop:create ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete any ogmk_event content'
  $permissions['node:shop:delete any ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete any ogmk_recommendation content'
  $permissions['node:shop:delete any ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete own ogmk_event content'
  $permissions['node:shop:delete own ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:delete own ogmk_recommendation content'
  $permissions['node:shop:delete own ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update any ogmk_event content'
  $permissions['node:shop:update any ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update any ogmk_recommendation content'
  $permissions['node:shop:update any ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update own ogmk_event content'
  $permissions['node:shop:update own ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:update own ogmk_recommendation content'
  $permissions['node:shop:update own ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:view any unpublished ogmk_event content'
  $permissions['node:shop:view any unpublished ogmk_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:shop:view any unpublished ogmk_recommendation content'
  $permissions['node:shop:view any unpublished ogmk_recommendation content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
