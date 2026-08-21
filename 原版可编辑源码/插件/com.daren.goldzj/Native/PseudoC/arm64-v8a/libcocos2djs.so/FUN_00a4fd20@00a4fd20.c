
undefined8 FUN_00a4fd20(undefined8 param_1,byte *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((((param_3 < 4) || (9 < *param_2 - 0x30)) || (9 < param_2[1] - 0x30)) ||
     ((9 < param_2[2] - 0x30 || (param_2[3] != 0x20)))) {
    uVar2 = 0;
  }
  else {
    strtol((char *)param_2,(char **)0x0,10);
    uVar1 = FUN_00a16cfc();
    *param_4 = uVar1;
    uVar2 = 1;
  }
  return uVar2;
}

