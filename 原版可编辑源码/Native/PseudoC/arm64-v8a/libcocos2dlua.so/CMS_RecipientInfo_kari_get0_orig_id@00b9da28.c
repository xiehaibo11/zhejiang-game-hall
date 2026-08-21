
undefined8
CMS_RecipientInfo_kari_get0_orig_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  
                    /* try { // try from 00b9da2c to 00c9da33 has its CatchHandler @ 00b9dba8 */
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xad,0xb5,"crypto/cms/cms_kari.c",0x3d);
    return 0;
  }
                    /* try { // try from 00b9da34 to 00c9dbab has its CatchHandler @ 00b9d9e0 */
  piVar2 = *(int **)(*(long *)(param_1 + 2) + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
    }
  }
  else if (iVar1 == 1) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar2 + 2);
      return 1;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
      return 1;
    }
  }
  return 1;
}

