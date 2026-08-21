
undefined8 FUN_00ac2154(BUF_MEM *param_1,long *param_2,X509 *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uchar *local_38;
  
                    /* try { // try from 00ac2164 to 00bc2177 has its CatchHandler @ 00ac2600 */
  iVar1 = i2d_X509(param_3,(uchar **)0x0);
  if ((iVar1 < 0) ||
     (iVar2 = BUF_MEM_grow_clean(param_1,(long)(((ulong)(uint)((int)*param_2 + iVar1) << 0x20) +
                                               0x300000000) >> 0x20), iVar2 == 0)) {
                    /* try { // try from 00ac220c to 00bc2237 has its CatchHandler @ 00ac1c74 */
    iVar1 = 0x2f0;
  }
  else {
    pcVar3 = param_1->data;
    lVar4 = *param_2;
    pcVar3[lVar4] = (char)((uint)iVar1 >> 0x10);
    pcVar3[lVar4 + 1] = (char)((uint)iVar1 >> 8);
    pcVar3[lVar4 + 2] = (char)iVar1;
    local_38 = (uchar *)(pcVar3 + lVar4 + 3);
    iVar1 = i2d_X509(param_3,&local_38);
    if (-1 < iVar1) {
      *param_2 = *param_2 + (long)(iVar1 + 3);
      return 1;
                    /* try { // try from 00ac2204 to 00bc220b has its CatchHandler @ 00ac256c */
    }
                    /* try { // try from 00ac2238 to 00bc2247 has its CatchHandler @ 00ac25ec */
    iVar1 = 0x2f8;
  }
  ERR_put_error(0x14,0x13f,7,"ssl/ssl_cert.c",iVar1);
  return 0;
}

