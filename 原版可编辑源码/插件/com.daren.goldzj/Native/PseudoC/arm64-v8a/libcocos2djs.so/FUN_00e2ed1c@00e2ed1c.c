
undefined8
FUN_00e2ed1c(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4c0);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(puVar1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x10);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = *(undefined8 *)(*(long *)(param_1 + 0x4c0) + 0x18);
      return 0;
    }
  }
  return 0;
}

