
undefined8 CMS_RecipientEncryptedKey_cert_cmp(undefined8 *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 == 1) {
    uVar1 = cms_keyid_cert_cmp(**(undefined8 **)(piVar2 + 2));
    return uVar1;
  }
  if (*piVar2 == 0) {
    uVar1 = cms_ias_cert_cmp(*(undefined8 *)(piVar2 + 2));
    return uVar1;
  }
  return 0xffffffff;
}

