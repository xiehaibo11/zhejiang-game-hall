
undefined8 CMS_RecipientInfo_kari_get0_reks(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x20);
  }
  ERR_put_error(0x2e,0xac,0xb5,"crypto/cms/cms_kari.c",0x2d);
  return 0;
}

