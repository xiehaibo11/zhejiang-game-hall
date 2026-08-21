
undefined8 l(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
    uVar5 = (**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
    iVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
    iVar3 = thunk_EXT_FUN_00002bb0
                      (uVar4,(long)iVar2,uVar5,(long)iVar3,
                       auStack_70 + -((long)iVar2 + 0x10U & 0xfffffffffffffff0));
    uVar6 = 0;
    if (iVar3 == 0) {
      uVar6 = (**(code **)(*param_1 + 0x580))(param_1,iVar2);
      (**(code **)(*param_1 + 0x680))
                (param_1,uVar6,0,iVar2,auStack_70 + -((long)iVar2 + 0x10U & 0xfffffffffffffff0));
    }
    (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar4,0);
    (**(code **)(*param_1 + 0x600))(param_1,param_4,uVar5,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
  uVar6 = thunk_EXT_FUN_00002bb0();
  return uVar6;
}

