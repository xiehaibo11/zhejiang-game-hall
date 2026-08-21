
/* btSphereSphereCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSphereSphereCollisionAlgorithm::processCollision
          (btSphereSphereCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btPersistentManifold *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  ulong local_58;
  
  if (*(long *)(this + 0x18) != 0) {
    *(long *)(param_4 + 8) = *(long *)(this + 0x18);
    lVar2 = *(long *)(param_2 + 0x18);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_2 + 8);
    fVar11 = *(float *)(lVar3 + 0x30) - *(float *)(lVar2 + 0x30);
    fVar13 = *(float *)(lVar3 + 0x34) - *(float *)(lVar2 + 0x34);
    fVar12 = *(float *)(lVar3 + 0x38) - *(float *)(lVar2 + 0x38);
    fVar6 = fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12;
    fVar7 = SQRT(fVar6);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar6);
    }
    fVar9 = *(float *)(lVar4 + 0x28) * *(float *)(lVar4 + 0x18);
    fVar6 = *(float *)(lVar5 + 0x28) * *(float *)(lVar5 + 0x18) + fVar9;
    if (fVar7 <= fVar6) {
      local_60 = 0x3f800000;
      local_58 = 0;
      fVar10 = 1.0;
      if (fVar7 <= 1.1920929e-07) {
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      else {
        fVar8 = 1.0 / fVar7;
        fVar10 = fVar11 * fVar8;
        fVar13 = fVar13 * fVar8;
        fVar12 = fVar12 * fVar8;
        local_60 = CONCAT44(fVar13,fVar10);
        local_58 = (ulong)(uint)fVar12;
      }
      lVar2 = *(long *)(param_2 + 0x18);
      local_64 = 0;
      local_70 = fVar9 * fVar10 + *(float *)(lVar2 + 0x30);
      fStack_6c = fVar9 * fVar13 + *(float *)(lVar2 + 0x34);
      local_68 = fVar9 * fVar12 + *(float *)(lVar2 + 0x38);
      (**(code **)(*(long *)param_4 + 0x20))(fVar7 - fVar6,param_4,&local_60,&local_70);
      pbVar1 = *(btPersistentManifold **)(param_4 + 8);
      if (*(int *)(pbVar1 + 0x318) != 0) {
        lVar2 = *(long *)(pbVar1 + 0x308);
        lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
        if (lVar2 == lVar3) {
          lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        }
        else {
          lVar2 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        }
        btPersistentManifold::refreshContactPoints
                  (pbVar1,(btTransform *)(lVar2 + 8),(btTransform *)(lVar3 + 8));
      }
    }
    else {
      pbVar1 = *(btPersistentManifold **)(param_4 + 8);
      if (*(int *)(pbVar1 + 0x318) != 0) {
        lVar2 = *(long *)(pbVar1 + 0x308);
        lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
        if (lVar2 == lVar3) {
          lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        }
        else {
          lVar2 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        }
        btPersistentManifold::refreshContactPoints
                  (pbVar1,(btTransform *)(lVar2 + 8),(btTransform *)(lVar3 + 8));
        return;
      }
    }
  }
  return;
}

