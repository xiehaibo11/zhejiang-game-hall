
/* btCollisionWorld::rayTestSingle(btTransform const&, btTransform const&, btCollisionObject*,
   btCollisionShape const*, btTransform const&, btCollisionWorld::RayResultCallback&) */

void btCollisionWorld::rayTestSingle
               (btTransform *param_1,btTransform *param_2,btCollisionObject *param_3,
               btCollisionShape *param_4,btTransform *param_5,RayResultCallback *param_6)

{
  undefined8 local_38;
  btCollisionShape *pbStack_30;
  btCollisionObject *local_28;
  btTransform *pbStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_18 = 0xffffffffffffffff;
  pbStack_30 = param_4;
  local_28 = param_3;
  pbStack_20 = param_5;
  rayTestSingleInternal(param_1,param_2,(btCollisionObjectWrapper *)&local_38,param_6);
  return;
}

