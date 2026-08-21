
undefined8 g(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = 0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
    lVar6 = (long)iVar2;
    local_78 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
    puVar8 = auStack_80 + -(lVar6 + 0x10U & 0xfffffffffffffff0);
    local_70 = auStack_80;
    thunk_EXT_FUN_00002bb0(puVar8,local_78,lVar6);
    puVar8[lVar6] = 0;
    uVar4 = (**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
    uVar5 = (**(code **)(*param_1 + 0x5c0))(param_1,param_5,0);
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
    iVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_5);
    lVar6 = (long)puVar8 - ((ulong)(iVar2 + 1) + 0xf & 0x1fffffff0);
    iVar3 = thunk_EXT_FUN_00002bb0(puVar8,uVar4,(long)iVar2,uVar5,(long)iVar3,lVar6);
    uVar7 = 0;
    if (iVar3 == 0) {
      uVar7 = (**(code **)(*param_1 + 0x580))(param_1,iVar2);
      (**(code **)(*param_1 + 0x680))(param_1,uVar7,0,iVar2,lVar6);
    }
    (**(code **)(*param_1 + 0x600))(param_1,param_3,local_78,0);
    (**(code **)(*param_1 + 0x600))(param_1,param_4,uVar4,0);
    (**(code **)(*param_1 + 0x600))(param_1,param_5,uVar5,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar7;
  }
  uVar7 = thunk_EXT_FUN_00002bb0();
  return uVar7;
}

