
ulong FUN_00b27e70(BIO *param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x20);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) {
    iVar1 = BIO_printf(param_1,"%*s<INVALID PRIVATE KEY>\n",(ulong)param_3,&DAT_013c996e);
    return (ulong)(0 < iVar1);
  }
  iVar1 = BIO_printf(param_1,"%*sX25519 Private-Key:\n",(ulong)param_3,&DAT_013c996e);
  if ((0 < iVar1) &&
     (iVar1 = BIO_printf(param_1,"%*spriv:\n",(ulong)param_3,&DAT_013c996e), 0 < iVar1)) {
    uVar2 = ASN1_buf_print(param_1,*(undefined8 *)(lVar3 + 0x20),0x20,param_3 + 4);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = BIO_printf(param_1,"%*spub:\n",(ulong)param_3,&DAT_013c996e);
    if (0 < iVar1) {
      iVar1 = ASN1_buf_print(param_1,lVar3,0x20,param_3 + 4);
      return (ulong)(iVar1 != 0);
    }
  }
  return 0;
}

