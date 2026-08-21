
/* btSphereTriangleCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSphereTriangleCollisionAlgorithm::processCollision
          (btSphereTriangleCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  btPersistentManifold *pbVar2;
  undefined8 *puVar3;
  btSphereShape *pbVar4;
  btTriangleShape *pbVar5;
  float fVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  SphereTriangleDetector aSStack_70 [32];
  
  pbVar2 = *(btPersistentManifold **)(this + 0x18);
  if (pbVar2 != (btPersistentManifold *)0x0) {
    pbVar1 = param_1;
    if (this[0x20] == (btSphereTriangleCollisionAlgorithm)0x0) {
      pbVar1 = param_2;
      param_2 = param_1;
    }
    pbVar4 = *(btSphereShape **)(param_2 + 8);
    pbVar5 = *(btTriangleShape **)(pbVar1 + 8);
    *(btPersistentManifold **)(param_4 + 8) = pbVar2;
    fVar6 = (float)btPersistentManifold::getContactBreakingThreshold(pbVar2);
    SphereTriangleDetector::SphereTriangleDetector(aSStack_70,pbVar4,pbVar5,fVar6);
    local_80 = 0x5d5e0b6b;
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    uStack_f8 = puVar3[1];
    local_100 = *puVar3;
    uStack_e8 = puVar3[3];
    local_f0 = puVar3[2];
    uStack_d8 = puVar3[5];
    local_e0 = puVar3[4];
    uStack_c8 = puVar3[7];
    local_d0 = puVar3[6];
    puVar3 = *(undefined8 **)(pbVar1 + 0x18);
    uStack_b8 = puVar3[1];
    local_c0 = *puVar3;
    uStack_a8 = puVar3[3];
    local_b0 = puVar3[2];
    uStack_98 = puVar3[5];
    local_a0 = puVar3[4];
    uStack_88 = puVar3[7];
    local_90 = puVar3[6];
    SphereTriangleDetector::getClosestPoints
              (aSStack_70,(ClosestPointInput *)&local_100,(Result *)param_4,
               *(btIDebugDraw **)(param_3 + 0x18),(bool)this[0x20]);
    if ((this[0x10] != (btSphereTriangleCollisionAlgorithm)0x0) &&
       (pbVar2 = *(btPersistentManifold **)(param_4 + 8), *(int *)(pbVar2 + 0x318) != 0)) {
      if (*(long *)(pbVar2 + 0x308) == *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        btPersistentManifold::refreshContactPoints
                  (pbVar2,(btTransform *)(*(long *)(pbVar2 + 0x308) + 8),
                   (btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8));
      }
      else {
        btPersistentManifold::refreshContactPoints
                  (pbVar2,(btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8),
                   (btTransform *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 8));
      }
    }
  }
  return;
}

