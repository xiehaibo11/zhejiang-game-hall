
undefined8 FUN_00b8d9b0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  BIO *pBVar2;
  CMS_ContentInfo *cms;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1 - 10U < 4)) {
    cms = (CMS_ContentInfo *)*param_2;
    switch(param_1) {
    case 10:
      iVar1 = CMS_stream((uchar ***)(param_4 + 2),cms);
      if (iVar1 < 1) {
        return 0;
      }
    case 0xc:
      pBVar2 = CMS_dataInit(cms,(BIO *)*param_4);
      param_4[1] = pBVar2;
      if (pBVar2 == (BIO *)0x0) {
        return 0;
      }
      break;
    default:
      iVar1 = CMS_dataFinal(cms,(BIO *)param_4[1]);
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
  return 1;
}

