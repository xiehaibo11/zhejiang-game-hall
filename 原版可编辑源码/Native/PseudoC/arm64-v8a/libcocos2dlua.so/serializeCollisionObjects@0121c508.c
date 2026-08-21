
/* btCollisionWorld::serializeCollisionObjects(btSerializer*) */

void __thiscall
btCollisionWorld::serializeCollisionObjects(btCollisionWorld *this,btSerializer *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  btCollisionShape *local_c0;
  btCollisionShape *local_b8;
  btHashMap<btHashPtr,btCollisionShape*> abStack_b0 [4];
  undefined8 local_ac;
  long local_a0;
  undefined1 local_98;
  undefined8 local_8c;
  long local_80;
  undefined1 local_78;
  undefined8 local_6c;
  long local_60;
  undefined1 local_58;
  undefined8 local_4c;
  long local_40;
  undefined1 local_38;
  
  iVar4 = *(int *)(this + 0xc);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar3 = *(long **)(*(long *)(this + 0x18) + lVar5 * 8);
      if ((int)plVar3[0x20] == 1) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
        iVar4 = *(int *)(this + 0xc);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  local_98 = 1;
  local_a0 = 0;
  local_ac = 0;
  local_78 = 1;
  local_80 = 0;
  local_8c = 0;
  local_58 = 1;
  local_60 = 0;
  local_6c = 0;
  local_38 = 1;
  local_40 = 0;
  local_4c = 0;
  if (0 < iVar4) {
    local_ac._0_4_ = 0;
    local_6c._4_4_ = 0;
    lVar5 = 0;
    do {
      local_b8 = *(btCollisionShape **)(*(long *)(*(long *)(this + 0x18) + lVar5 * 8) + 200);
      iVar1 = (int)((ulong)local_b8 >> 0x20) + (int)local_b8;
      uVar2 = iVar1 + (iVar1 * 0x8000 ^ 0xffffffffU);
      uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
      uVar2 = uVar2 ^ (int)uVar2 >> 6;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      uVar2 = (uVar2 ^ (int)uVar2 >> 0x10) & local_6c._4_4_ - 1U;
      if (uVar2 < (uint)local_ac) {
        for (iVar1 = *(int *)(local_a0 + (long)(int)uVar2 * 4); iVar1 != -1;
            iVar1 = *(int *)(local_80 + (long)iVar1 * 4)) {
          if (*(btCollisionShape **)(local_40 + (long)iVar1 * 8) == local_b8) {
            if (local_60 + (long)iVar1 * 8 != 0) goto LAB_0121c5f0;
            break;
          }
        }
      }
      local_c0 = local_b8;
      btHashMap<btHashPtr,btCollisionShape*>::insert(abStack_b0,(btHashPtr *)&local_c0,&local_b8);
      (**(code **)(*(long *)local_b8 + 0x78))(local_b8,param_1);
      iVar4 = *(int *)(this + 0xc);
LAB_0121c5f0:
      lVar5 = lVar5 + 1;
      if (iVar4 <= lVar5) break;
    } while( true );
  }
  btHashMap<btHashPtr,btCollisionShape*>::~btHashMap(abStack_b0);
  return;
}

