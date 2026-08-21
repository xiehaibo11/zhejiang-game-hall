
undefined8 cms_SignerIdentifier_cert_cmp(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 1) {
    uVar1 = cms_keyid_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 == 0) {
    uVar1 = cms_ias_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  return 0xffffffff;
}

