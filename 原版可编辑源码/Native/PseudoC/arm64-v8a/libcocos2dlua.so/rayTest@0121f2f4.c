
/* btGhostObject::rayTest(btVector3 const&, btVector3 const&, btCollisionWorld::RayResultCallback&)
   const */

void __thiscall
btGhostObject::rayTest
          (btGhostObject *this,btVector3 *param_1,btVector3 *param_2,RayResultCallback *param_3)

{
  ulong uVar1;
  btCollisionObject *pbVar2;
  long lVar3;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_70 = 0x3f800000;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = *(undefined8 *)param_1;
  local_b0 = 0x3f800000;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0x3f800000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3f800000;
  uStack_78 = *(undefined8 *)(param_2 + 8);
  local_80 = *(undefined8 *)param_2;
  if (0 < *(int *)(this + 300)) {
    lVar3 = 0;
    do {
      pbVar2 = *(btCollisionObject **)(*(long *)(this + 0x138) + lVar3 * 8);
      uVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3,*(undefined8 *)(pbVar2 + 0xc0));
      if ((uVar1 & 1) != 0) {
        btCollisionWorld::rayTestSingle
                  ((btTransform *)&local_70,(btTransform *)&local_b0,pbVar2,
                   *(btCollisionShape **)(pbVar2 + 200),(btTransform *)(pbVar2 + 8),param_3);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 300));
  }
  return;
}

