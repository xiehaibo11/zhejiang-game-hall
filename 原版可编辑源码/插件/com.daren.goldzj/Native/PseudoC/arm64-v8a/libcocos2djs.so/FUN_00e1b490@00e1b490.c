
undefined8 FUN_00e1b490(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"darkening-parameters");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
    param_3[1] = *(undefined4 *)(param_1 + 0x44);
    param_3[2] = *(undefined4 *)(param_1 + 0x48);
    param_3[3] = *(undefined4 *)(param_1 + 0x4c);
    param_3[4] = *(undefined4 *)(param_1 + 0x50);
    param_3[5] = *(undefined4 *)(param_1 + 0x54);
    param_3[6] = *(undefined4 *)(param_1 + 0x58);
    param_3[7] = *(undefined4 *)(param_1 + 0x5c);
    return 0;
  }
  iVar1 = strcmp(param_2,"hinting-engine");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"no-stem-darkening");
    if (iVar1 != 0) {
      return 0xc;
    }
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x3c);
    return 0;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  return 0;
}

