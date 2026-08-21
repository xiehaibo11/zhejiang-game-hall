
undefined8
cms_SignerIdentifier_get0_signer_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (*param_1 == 1) {
                    /* try { // try from 00b9fef0 to 00c9fefb has its CatchHandler @ 00ba09f4 */
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 2);
    }
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = **(undefined8 **)(param_1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
      return 1;
    }
  }
  return 1;
}

