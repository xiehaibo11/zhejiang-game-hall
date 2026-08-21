
undefined8 FT_Set_Renderer(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    if ((param_3 != 0) && (param_4 == (undefined8 *)0x0)) {
      return 6;
    }
    plVar3 = *(long **)(param_1 + 0x118);
    plVar4 = plVar3;
    if (plVar3 == (long *)0x0) {
      return 6;
    }
    while (plVar4[2] != param_2) {
      plVar1 = plVar4 + 1;
      plVar4 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) {
        return 6;
      }
    }
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      plVar6 = (long *)plVar4[1];
      *(long **)(lVar5 + 8) = plVar6;
      plVar1 = (long *)(param_1 + 0x120);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6;
      }
      *plVar1 = lVar5;
      *plVar4 = 0;
      plVar4[1] = (long)plVar3;
      *plVar3 = (long)plVar4;
      *(long **)(param_1 + 0x118) = plVar4;
    }
    if (*(int *)(param_2 + 0x20) == 0x6f75746c) {
      *(long *)(param_1 + 0x128) = param_2;
    }
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      pcVar7 = *(code **)(*(long *)(param_2 + 0x18) + 0x68);
      do {
        uVar2 = (*pcVar7)(param_2,*param_4,param_4[1]);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        param_3 = param_3 + -1;
        param_4 = param_4 + 2;
      } while (param_3 != 0);
    }
    return uVar2;
  }
  return 6;
}

