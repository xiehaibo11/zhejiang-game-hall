
undefined8
CMS_RecipientEncryptedKey_get0_id
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar1 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(piVar1 + 2) + 0x10);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
  }
  else {
    if (*piVar1 != 0) {
      return 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar1 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      return 1;
    }
  }
  return 1;
}

