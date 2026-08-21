
bool ASN1_buf_print(BIO *param_1,long param_2,ulong param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      if (uVar3 % 0xf == 0) {
        if ((uVar3 != 0) && (iVar2 = BIO_puts(param_1,"\n"), iVar2 < 1)) {
          return false;
        }
        iVar2 = BIO_indent(param_1,param_4,0x80);
        if (iVar2 == 0) {
          return false;
        }
      }
      pcVar1 = "";
      if (param_3 - 1 != uVar3) {
        pcVar1 = ":";
      }
      iVar2 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2 + uVar3),pcVar1);
      if (iVar2 < 1) {
        return false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  iVar2 = BIO_write(param_1,&DAT_018938a8,1);
  return 0 < iVar2;
}

