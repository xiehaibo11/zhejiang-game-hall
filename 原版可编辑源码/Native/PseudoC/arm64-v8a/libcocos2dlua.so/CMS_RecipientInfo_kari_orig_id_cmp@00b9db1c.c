
undefined8 CMS_RecipientInfo_kari_orig_id_cmp(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (*param_1 != 1) {
    ERR_put_error(0x2e,0xae,0xb5,"crypto/cms/cms_kari.c",0x62);
    return 0xfffffffe;
  }
  piVar2 = *(int **)(*(long *)(param_1 + 2) + 8);
  if (*piVar2 != 1) {
    if (*piVar2 == 0) {
      uVar1 = cms_ias_cert_cmp(*(undefined8 *)(piVar2 + 2));
      return uVar1;
    }
    return 0xffffffff;
  }
  uVar1 = cms_keyid_cert_cmp(*(undefined8 *)(piVar2 + 2));
  return uVar1;
}

