
void m(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [8];
  long local_68;
  
  uVar7 = (ulong)(uint)param_2;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    uVar4 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1,param_3,0,param_4,param_5);
    uVar5 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1,param_4,0);
    iVar2 = (**(code **)(*(long *)param_1 + 0x558))(param_1,param_3);
    iVar3 = (**(code **)(*(long *)param_1 + 0x558))(param_1,param_4);
    iVar3 = thunk_EXT_FUN_00002bb0
                      (uVar4,(long)iVar2,uVar5,(long)iVar3,
                       auStack_70 + -((long)iVar2 + 0x10U & 0xfffffffffffffff0));
    if (iVar3 == 0) {
      uVar6 = (**(code **)(*(long *)param_1 + 0x580))(param_1,iVar2);
      (**(code **)(*(long *)param_1 + 0x680))
                (param_1,uVar6,0,iVar2,auStack_70 + -((long)iVar2 + 0x10U & 0xfffffffffffffff0));
    }
    (**(code **)(*(long *)param_1 + 0x600))(param_1,param_3,uVar4,0);
    auVar8 = (**(code **)(*(long *)param_1 + 0x600))(param_1,param_4,uVar5,0);
    uVar7 = auVar8._8_8_;
    param_1 = auVar8._0_8_;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0(param_1,uVar7);
  return;
}

