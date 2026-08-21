
void FT_Set_Transform(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0xf0);
    *(undefined4 *)(plVar1 + 6) = 0;
    if (param_2 == (long *)0x0) {
      *plVar1 = 0x10000;
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[3] = 0x10000;
      param_2 = plVar1;
    }
    else {
      lVar3 = param_2[2];
      plVar1[3] = param_2[3];
      plVar1[2] = lVar3;
      lVar3 = *param_2;
      plVar1[1] = param_2[1];
      *plVar1 = lVar3;
    }
    if (((param_2[2] == 0 && param_2[1] == 0) && (*param_2 == 0x10000)) && (param_2[3] == 0x10000))
    {
      uVar2 = 2;
    }
    else {
      *(undefined4 *)(plVar1 + 6) = 1;
      uVar2 = 3;
    }
    if (param_3 == (long *)0x0) {
      param_3 = plVar1 + 4;
      lVar3 = 0;
      *param_3 = 0;
      plVar1[5] = 0;
    }
    else {
      lVar3 = *param_3;
      plVar1[5] = param_3[1];
      plVar1[4] = lVar3;
      lVar3 = *param_3;
    }
    if (param_3[1] != 0 || lVar3 != 0) {
      *(undefined4 *)(plVar1 + 6) = uVar2;
    }
    return;
  }
  return;
}

