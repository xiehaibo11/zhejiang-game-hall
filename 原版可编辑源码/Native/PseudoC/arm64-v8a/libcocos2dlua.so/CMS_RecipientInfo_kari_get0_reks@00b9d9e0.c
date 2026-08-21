
undefined8 CMS_RecipientInfo_kari_get0_reks(int *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9da34 with catch @ 00b9d9e0
                        */
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x20);
  }
  ERR_put_error(0x2e,0xac,0xb5,"crypto/cms/cms_kari.c",0x2d);
  return 0;
}

