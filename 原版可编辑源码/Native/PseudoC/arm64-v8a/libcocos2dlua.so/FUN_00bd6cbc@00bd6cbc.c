
int FUN_00bd6cbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_CIPHER *pEVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = DAT_01785100;
    if (DAT_017850f0 != '\x01') {
      pEVar4 = (EVP_CIPHER *)FUN_00bd6ef8();
      if (pEVar4 != (EVP_CIPHER *)0x0) {
        iVar1 = EVP_CIPHER_nid(pEVar4);
        lVar5 = (long)DAT_01785100;
        DAT_01785100 = DAT_01785100 + 1;
        *(int *)(&DAT_01785128 + lVar5 * 4) = iVar1;
      }
      pEVar4 = (EVP_CIPHER *)FUN_00bd6fa4();
      iVar1 = DAT_01785100;
      if (pEVar4 != (EVP_CIPHER *)0x0) {
        iVar2 = EVP_CIPHER_nid(pEVar4);
        lVar5 = (long)DAT_01785100;
        iVar1 = DAT_01785100 + 1;
        DAT_01785100 = iVar1;
        *(int *)(&DAT_01785128 + lVar5 * 4) = iVar2;
      }
      *(undefined4 *)(&DAT_01785128 + (long)iVar1 * 4) = 0;
      DAT_017850f0 = '\x01';
    }
    *param_3 = &DAT_01785128;
  }
  else {
    if (param_4 == 0x61) {
      uVar3 = FUN_00bd6fa4();
    }
    else {
      if (param_4 != 5) {
        *param_2 = 0;
        return 0;
      }
      uVar3 = FUN_00bd6ef8();
    }
    *param_2 = uVar3;
    iVar1 = 1;
  }
  return iVar1;
}

