
undefined8 FUN_0013548c(long param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  FILE *pFVar2;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    pFVar2 = fopen(param_2,"wb+");
    uVar1 = 0;
    if (pFVar2 != (FILE *)0x0) {
      *(FILE **)(param_1 + 0x20) = pFVar2;
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
      *(long *)param_1 = param_1;
      *(undefined8 *)(param_1 + 8) = param_3;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(code **)(param_1 + 0x10) = FUN_00135500;
      *(code **)(param_1 + 0x18) = FUN_0013558c;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

