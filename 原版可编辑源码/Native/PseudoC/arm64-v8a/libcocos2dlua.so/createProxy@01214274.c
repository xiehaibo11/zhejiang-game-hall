
/* btDbvtBroadphase::createProxy(btVector3 const&, btVector3 const&, int, void*, short, short,
   btDispatcher*, void*) */

ulong * btDbvtBroadphase::createProxy
                  (btVector3 *param_1,btVector3 *param_2,int param_3,void *param_4,short param_5,
                  short param_6,btDispatcher *param_7,void *param_8)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  btVector3 *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **local_88;
  btVector3 *pbStack_80;
  ulong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar4 = (undefined8 *)(ulong)(uint)param_3;
  puVar2 = (ulong *)btAlignedAllocInternal(0x60,0x10);
  *puVar2 = (ulong)(ushort)param_5;
  *(short *)(puVar2 + 1) = param_6;
  *(short *)((long)puVar2 + 10) = (short)param_7;
  uVar6 = *(undefined8 *)param_2;
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar6;
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  puVar2[2] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar7;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar6;
  uStack_68 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)param_2;
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0xec);
  iVar1 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar1 + 1;
  *(int *)(puVar2 + 3) = iVar1 + 1;
  uVar3 = btDbvt::insert((btDbvt *)(param_1 + 8),(btDbvtAabbMm *)&local_70,puVar2);
  puVar2[8] = uVar3;
  iVar1 = *(int *)(param_1 + 0xec);
  puVar2[9] = 0;
  pbVar5 = param_1 + (long)iVar1 * 8 + 200;
  puVar2[10] = *(ulong *)pbVar5;
  if (*(long *)pbVar5 != 0) {
    *(ulong **)(*(long *)pbVar5 + 0x48) = puVar2;
  }
  *(ulong **)pbVar5 = puVar2;
  if (param_1[0x11d] == (btVector3)0x0) {
    local_88 = &PTR__ICollide_01731568;
    pbStack_80 = param_1;
    local_78 = puVar2;
    btDbvt::collideTV((btDbvt *)(param_1 + 8),*(btDbvtNode **)(param_1 + 8),
                      (btDbvtAabbMm *)&local_70,(ICollide *)&local_88);
    btDbvt::collideTV((btDbvt *)(param_1 + 0x68),*(btDbvtNode **)(param_1 + 0x68),
                      (btDbvtAabbMm *)&local_70,(ICollide *)&local_88);
  }
  return puVar2;
}

