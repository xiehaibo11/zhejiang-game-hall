
/* btDbvtBroadphase::setAabb(btBroadphaseProxy*, btVector3 const&, btVector3 const&, btDispatcher*)
    */

void btDbvtBroadphase::setAabb
               (btBroadphaseProxy *param_1,btVector3 *param_2,btVector3 *param_3,
               btDispatcher *param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  btDbvtNode *pbVar5;
  btBroadphaseProxy *pbVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  btBroadphaseProxy *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_58 = *(undefined8 *)(param_3 + 8);
  local_60 = *(undefined8 *)param_3;
  uStack_48 = *(undefined8 *)(param_4 + 8);
  local_50 = *(undefined8 *)param_4;
  if (*(int *)(param_2 + 0x58) == 2) {
    btDbvt::remove((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_2 + 0x40));
    uVar3 = btDbvt::insert((btDbvt *)(param_1 + 8),(btDbvtAabbMm *)&local_60,param_2);
    *(undefined8 *)(param_2 + 0x40) = uVar3;
  }
  else {
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    pbVar5 = *(btDbvtNode **)(param_2 + 0x40);
    if ((((((float)local_50 < *(float *)pbVar5) || (*(float *)(pbVar5 + 0x10) < (float)local_60)) ||
         (local_50._4_4_ = (float)((ulong)local_50 >> 0x20), local_50._4_4_ < *(float *)(pbVar5 + 4)
         )) || ((local_60._4_4_ = (float)((ulong)local_60 >> 0x20),
                *(float *)(pbVar5 + 0x14) < local_60._4_4_ ||
                ((float)uStack_48 < *(float *)(pbVar5 + 8))))) ||
       (*(float *)(pbVar5 + 0x18) < (float)uStack_58)) {
      btDbvt::update((btDbvt *)(param_1 + 8),pbVar5,(btDbvtAabbMm *)&local_60);
    }
    else {
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar8 = (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x1c)) * 0.5 * fVar9;
      fVar7 = (*(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x20)) * 0.5 * fVar9;
      fVar9 = fVar9 * (*(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x24)) * 0.5;
      if (*(float *)param_3 - *(float *)(param_2 + 0x1c) < 0.0) {
        fVar8 = -fVar8;
      }
      if (*(float *)(param_3 + 4) - *(float *)(param_2 + 0x20) < 0.0) {
        fVar7 = -fVar7;
      }
      local_78 = (undefined **)CONCAT44(fVar7,fVar8);
      if (*(float *)(param_3 + 8) - *(float *)(param_2 + 0x24) < 0.0) {
        fVar9 = -fVar9;
      }
      local_70 = (btBroadphaseProxy *)(ulong)(uint)fVar9;
      uVar4 = btDbvt::update((btDbvt *)(param_1 + 8),pbVar5,(btDbvtAabbMm *)&local_60,
                             (btVector3 *)&local_78,0.05);
      if ((uVar4 & 1) == 0) {
        bVar2 = false;
        goto LAB_01214eb4;
      }
    }
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  bVar2 = true;
LAB_01214eb4:
  pbVar6 = param_1 + (long)*(int *)(param_2 + 0x58) * 8 + 200;
  if (*(long *)(param_2 + 0x48) != 0) {
    pbVar6 = (btBroadphaseProxy *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *(undefined8 *)pbVar6 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)param_4;
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_2 + 0x2c) = uVar3;
  iVar1 = *(int *)(param_1 + 0xec);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(int *)(param_2 + 0x58) = iVar1;
  pbVar6 = param_1 + (long)iVar1 * 8 + 200;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)pbVar6;
  if (*(long *)pbVar6 != 0) {
    *(btVector3 **)(*(long *)pbVar6 + 0x48) = param_2;
  }
  *(btVector3 **)pbVar6 = param_2;
  if ((bVar2) && (param_1[0x11e] = (btBroadphaseProxy)0x1, param_1[0x11d] == (btBroadphaseProxy)0x0)
     ) {
    local_78 = &PTR__ICollide_01731568;
    local_70 = param_1;
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_78);
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_78);
  }
  return;
}

