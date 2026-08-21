
/* btBoxBoxCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btBoxBoxCollisionAlgorithm::processCollision
          (btBoxBoxCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btPersistentManifold *this_00;
  btBoxShape *pbVar1;
  btBoxShape *pbVar2;
  undefined8 *puVar3;
  btBoxBoxDetector abStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (*(long *)(this + 0x18) != 0) {
    pbVar1 = *(btBoxShape **)(param_1 + 8);
    pbVar2 = *(btBoxShape **)(param_2 + 8);
    *(long *)(param_4 + 8) = *(long *)(this + 0x18);
    local_40 = 0x5d5e0b6b;
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    uStack_b8 = puVar3[1];
    local_c0 = *puVar3;
    uStack_a8 = puVar3[3];
    local_b0 = puVar3[2];
    uStack_98 = puVar3[5];
    local_a0 = puVar3[4];
    uStack_88 = puVar3[7];
    local_90 = puVar3[6];
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    uStack_68 = puVar3[3];
    local_70 = puVar3[2];
    uStack_58 = puVar3[5];
    local_60 = puVar3[4];
    uStack_48 = puVar3[7];
    local_50 = puVar3[6];
    btBoxBoxDetector::btBoxBoxDetector(abStack_d8,pbVar1,pbVar2);
    btBoxBoxDetector::getClosestPoints
              ((ClosestPointInput *)abStack_d8,(Result *)&local_c0,(btIDebugDraw *)param_4,
               SUB81(*(undefined8 *)(param_3 + 0x18),0));
    if ((this[0x10] != (btBoxBoxCollisionAlgorithm)0x0) &&
       (this_00 = *(btPersistentManifold **)(param_4 + 8), *(int *)(this_00 + 0x318) != 0)) {
      if (*(long *)(this_00 + 0x308) == *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        btPersistentManifold::refreshContactPoints
                  (this_00,(btTransform *)(*(long *)(this_00 + 0x308) + 8),
                   (btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8));
      }
      else {
        btPersistentManifold::refreshContactPoints
                  (this_00,(btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8),
                   (btTransform *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 8));
      }
    }
  }
  return;
}

