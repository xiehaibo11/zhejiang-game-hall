
undefined8 h(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
    lVar5 = (long)iVar2;
    uVar3 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
    puVar6 = auStack_60 + -(lVar5 + 0x10U & 0xfffffffffffffff0);
    thunk_EXT_FUN_00002bb0(puVar6,uVar3,lVar5);
    puVar6[lVar5] = 0;
    uVar4 = thunk_EXT_FUN_00002bb0(param_1,puVar6);
    (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar3,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
  uVar4 = thunk_EXT_FUN_00002bb0();
  return uVar4;
}

