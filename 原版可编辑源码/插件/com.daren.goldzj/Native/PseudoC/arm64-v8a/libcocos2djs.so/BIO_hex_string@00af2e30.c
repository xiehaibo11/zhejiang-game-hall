
undefined8 BIO_hex_string(BIO *param_1,uint param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (0 < param_5) {
    if (param_5 != 1) {
      lVar4 = 0;
      iVar3 = 0;
      bVar2 = true;
      do {
        if (!bVar2) {
          BIO_printf(param_1,"%*s",(ulong)param_2,&DAT_0189703a);
        }
        BIO_printf(param_1,"%02X:",(ulong)*(byte *)(param_4 + lVar4));
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = (iVar3 + 1) / param_3;
        }
                    /* try { // try from 00af2ed4 to 00bf2edf has its CatchHandler @ 00af2fb8 */
        iVar3 = (iVar3 + 1) - iVar1 * param_3;
        if (iVar3 == 0) {
                    /* try { // try from 00af2ee0 to 00bf302f has its CatchHandler @ 00af2d94 */
          BIO_printf(param_1,"\n");
        }
        lVar4 = lVar4 + 1;
        bVar2 = iVar3 != 0;
      } while (lVar4 < (int)((long)param_5 + -1));
      if (iVar3 == 0) {
        BIO_printf(param_1,"%*s",(ulong)param_2,&DAT_0189703a);
      }
    }
    BIO_printf(param_1,"%02X",(ulong)*(byte *)(param_4 + (long)param_5 + -1));
  }
  return 1;
}

