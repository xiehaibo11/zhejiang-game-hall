
int FUN_00bc7db8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_MD *md;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar2 = DAT_01d3b384;
    if (DAT_01d3b374 != '\x01') {
      md = (EVP_MD *)FUN_00bc8138();
      iVar2 = DAT_01d3b384;
      if (md != (EVP_MD *)0x0) {
        iVar1 = EVP_MD_type(md);
        lVar4 = (long)DAT_01d3b384;
        iVar2 = DAT_01d3b384 + 1;
        DAT_01d3b384 = iVar2;
        *(int *)(&DAT_01d3b3a0 + lVar4 * 4) = iVar1;
      }
      *(undefined4 *)(&DAT_01d3b3a0 + (long)iVar2 * 4) = 0;
      DAT_01d3b374 = '\x01';
    }
    *param_3 = &DAT_01d3b3a0;
  }
  else if (param_4 == 0x40) {
    uVar3 = FUN_00bc8138();
    *param_2 = uVar3;
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    *param_2 = 0;
  }
  return iVar2;
}

