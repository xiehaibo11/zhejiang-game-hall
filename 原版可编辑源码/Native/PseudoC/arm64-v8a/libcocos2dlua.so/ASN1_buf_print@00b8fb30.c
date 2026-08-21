
bool ASN1_buf_print(BIO *param_1,long param_2,ulong param_3,int param_4)

{
  undefined *puVar1;
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
      puVar1 = &DAT_013c996e;
      if (param_3 - 1 != uVar3) {
        puVar1 = &DAT_012f06b7;
      }
      iVar2 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2 + uVar3),puVar1);
                    /* try { // try from 00b8fbe8 to 00c8fbeb has its CatchHandler @ 00b8fca0 */
                    /* try { // try from 00b8fbec to 00c8fc93 has its CatchHandler @ 00b8fa78 */
      if (iVar2 < 1) {
        return false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  iVar2 = BIO_write(param_1,&DAT_013c61e6,1);
  return 0 < iVar2;
}

