
undefined4 FT_Stroker_BeginSubPath(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = 6;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    bVar1 = true;
    *(undefined1 *)(param_1 + 5) = 1;
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *(char *)((long)param_1 + 0x29) = param_3;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    if (*(int *)(param_1 + 0xb) == 0) {
      if (param_3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)((long)param_1 + 0x54) == 0;
      }
    }
    *(bool *)(param_1 + 10) = bVar1;
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar2 = 0;
    *param_1 = 0;
    param_1[8] = uVar4;
    param_1[7] = uVar3;
  }
  return uVar2;
}

