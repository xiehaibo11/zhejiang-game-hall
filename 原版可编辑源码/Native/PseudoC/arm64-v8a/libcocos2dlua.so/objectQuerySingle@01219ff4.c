
/* btCollisionWorld::objectQuerySingle(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionObject*, btCollisionShape const*, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float) */

void btCollisionWorld::objectQuerySingle
               (btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
               btCollisionObject *param_4,btCollisionShape *param_5,btTransform *param_6,
               ConvexResultCallback *param_7,float param_8)

{
  undefined8 local_38;
  btCollisionShape *pbStack_30;
  btCollisionObject *local_28;
  btTransform *pbStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_18 = 0xffffffffffffffff;
  pbStack_30 = param_5;
  local_28 = param_4;
  pbStack_20 = param_6;
  objectQuerySingleInternal
            (param_1,param_2,param_3,(btCollisionObjectWrapper *)&local_38,param_7,param_8);
  return;
}

