
undefined8 cms_SignerIdentifier_cert_cmp(int *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00b9ff14 to 00c9ff1f has its CatchHandler @ 00ba0a8c */
  if (*param_1 == 1) {
    uVar1 = cms_keyid_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 == 0) {
                    /* try { // try from 00b9ff20 to 00ca008b has its CatchHandler @ 00b9fb6c */
    uVar1 = cms_ias_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  return 0xffffffff;
}

