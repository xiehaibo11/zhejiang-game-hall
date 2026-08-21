
int FUN_00bc7cbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_CIPHER *pEVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = DAT_01d3b380;
    if (DAT_01d3b370 != '\x01') {
      pEVar4 = (EVP_CIPHER *)FUN_00bc7ef8();
      if (pEVar4 != (EVP_CIPHER *)0x0) {
        iVar1 = EVP_CIPHER_nid(pEVar4);
        lVar5 = (long)DAT_01d3b380;
        DAT_01d3b380 = DAT_01d3b380 + 1;
        *(int *)(&DAT_01d3b3a8 + lVar5 * 4) = iVar1;
      }
      pEVar4 = (EVP_CIPHER *)FUN_00bc7fa4();
      iVar1 = DAT_01d3b380;
      if (pEVar4 != (EVP_CIPHER *)0x0) {
        iVar2 = EVP_CIPHER_nid(pEVar4);
        lVar5 = (long)DAT_01d3b380;
        iVar1 = DAT_01d3b380 + 1;
        DAT_01d3b380 = iVar1;
        *(int *)(&DAT_01d3b3a8 + lVar5 * 4) = iVar2;
      }
      *(undefined4 *)(&DAT_01d3b3a8 + (long)iVar1 * 4) = 0;
      DAT_01d3b370 = '\x01';
    }
    *param_3 = &DAT_01d3b3a8;
  }
  else {
    if (param_4 == 0x61) {
      uVar3 = FUN_00bc7fa4();
    }
    else {
      if (param_4 != 5) {
        *param_2 = 0;
        return 0;
      }
      uVar3 = FUN_00bc7ef8();
    }
    *param_2 = uVar3;
    iVar1 = 1;
  }
  return iVar1;
}

