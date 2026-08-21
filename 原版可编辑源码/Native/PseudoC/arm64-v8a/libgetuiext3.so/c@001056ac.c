
int c(void *param_1,void *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x2;
  long in_x3;
  long in_x4;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 *local_70;
  long local_68;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = 0;
  if (((in_x2 != 0) && (auVar10 = auVar2, in_x3 != 0)) && (auVar10 = auVar3, in_x4 != 0)) {
    iVar4 = (**(code **)(*(long *)param_1 + 0x558))(param_1);
    lVar8 = (long)iVar4;
    local_78 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1);
    puVar9 = auStack_80 + -(lVar8 + 0x10U & 0xfffffffffffffff0);
    local_70 = auStack_80;
    thunk_EXT_FUN_00002bb0(puVar9,local_78,lVar8);
    puVar9[lVar8] = 0;
    uVar6 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1);
    uVar7 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1);
    iVar4 = (**(code **)(*(long *)param_1 + 0x558))(param_1);
    iVar5 = (**(code **)(*(long *)param_1 + 0x558))(param_1);
    lVar8 = (long)puVar9 - ((ulong)(iVar4 + 1) + 0xf & 0x1fffffff0);
    iVar5 = thunk_EXT_FUN_00002bb0(puVar9,uVar6,(long)iVar4,uVar7,(long)iVar5,lVar8);
    uVar6 = 0;
    if (iVar5 == 0) {
      uVar6 = (**(code **)(*(long *)param_1 + 0x580))(param_1,iVar4);
      (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar6,0,iVar4,lVar8);
    }
    iVar4 = (int)uVar6;
    (**(code **)(*(long *)param_1 + 0x600))(param_1);
    (**(code **)(*(long *)param_1 + 0x600))(param_1);
    auVar10 = (**(code **)(*(long *)param_1 + 0x600))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar4;
  }
  iVar4 = thunk_EXT_FUN_00002bb0(auVar10._0_8_,auVar10._8_8_);
  return iVar4;
}

