
undefined8 CMS_RecipientInfo_kari_get0_alg(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 == 1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x18);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x10);
    }
    return 1;
  }
  ERR_put_error(0x2e,0xaf,0xb5,"crypto/cms/cms_kari.c",0x1c);
  return 0;
}

