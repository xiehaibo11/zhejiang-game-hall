
undefined8 cms_set1_SignerIdentifier(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    uVar2 = cms_set1_keyid(param_1 + 2);
    iVar1 = (int)uVar2;
  }
  else {
    if (param_3 != 0) {
      ERR_put_error(0x2e,0x92,0x96,"crypto/cms/cms_sd.c",0xa5);
      return 0;
    }
    uVar2 = cms_set1_ias(param_1 + 2);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    uVar2 = 1;
    *param_1 = param_3;
  }
  return uVar2;
}

