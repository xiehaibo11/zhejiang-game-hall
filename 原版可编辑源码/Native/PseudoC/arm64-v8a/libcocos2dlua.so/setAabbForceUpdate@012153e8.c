
/* btDbvtBroadphase::setAabbForceUpdate(btBroadphaseProxy*, btVector3 const&, btVector3 const&,
   btDispatcher*) */

void btDbvtBroadphase::setAabbForceUpdate
               (btBroadphaseProxy *param_1,btVector3 *param_2,btVector3 *param_3,
               btDispatcher *param_4)

{
  int iVar1;
  undefined8 uVar2;
  btBroadphaseProxy *pbVar3;
  undefined **local_78;
  btBroadphaseProxy *pbStack_70;
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
    uVar2 = btDbvt::insert((btDbvt *)(param_1 + 8),(btDbvtAabbMm *)&local_60,param_2);
    *(undefined8 *)(param_2 + 0x40) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    btDbvt::update((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_2 + 0x40),
                   (btDbvtAabbMm *)&local_60);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  pbVar3 = param_1 + (long)*(int *)(param_2 + 0x58) * 8 + 200;
  if (*(long *)(param_2 + 0x48) != 0) {
    pbVar3 = (btBroadphaseProxy *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *(undefined8 *)pbVar3 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0x1c) = uVar2;
  uVar2 = *(undefined8 *)param_4;
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_2 + 0x2c) = uVar2;
  iVar1 = *(int *)(param_1 + 0xec);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(int *)(param_2 + 0x58) = iVar1;
  pbVar3 = param_1 + (long)iVar1 * 8 + 200;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)pbVar3;
  if (*(long *)pbVar3 != 0) {
    *(btVector3 **)(*(long *)pbVar3 + 0x48) = param_2;
  }
  *(btVector3 **)pbVar3 = param_2;
  param_1[0x11e] = (btBroadphaseProxy)0x1;
  if (param_1[0x11d] == (btBroadphaseProxy)0x0) {
    local_78 = &PTR__ICollide_01731568;
    pbStack_70 = param_1;
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_78);
    btDbvt::collideTTpersistentStack
              ((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
               *(btDbvtNode **)(param_2 + 0x40),(ICollide *)&local_78);
  }
  return;
}

