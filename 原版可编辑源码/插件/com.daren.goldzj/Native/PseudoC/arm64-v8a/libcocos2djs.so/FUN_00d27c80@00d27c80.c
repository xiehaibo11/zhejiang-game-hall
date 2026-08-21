
int FUN_00d27c80(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  
  iVar1 = FUN_00d27adc();
  plVar4 = (long *)*param_4;
  iVar6 = iVar1;
  if ((plVar4 != (long *)0x0) && (plVar7 = (long *)*param_3, plVar7 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
    uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7);
    if (uVar2 < uVar3) {
      lVar5 = *param_3;
      iVar6 = iVar1 + 1;
      *param_3 = *param_4;
      *param_4 = lVar5;
      if (((long *)*param_3 != (long *)0x0) && (plVar4 = (long *)*param_2, plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*(long *)*param_3 + 0x30))();
        uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
        if (uVar2 < uVar3) {
          lVar5 = *param_2;
          iVar6 = iVar1 + 2;
          *param_2 = *param_3;
          *param_3 = lVar5;
          if (((long *)*param_2 != (long *)0x0) &&
             (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
            uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
            uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
            if (uVar2 < uVar3) {
              lVar5 = *param_1;
              iVar6 = iVar1 + 3;
              *param_1 = *param_2;
              *param_2 = lVar5;
            }
          }
        }
      }
    }
  }
  return iVar6;
}

