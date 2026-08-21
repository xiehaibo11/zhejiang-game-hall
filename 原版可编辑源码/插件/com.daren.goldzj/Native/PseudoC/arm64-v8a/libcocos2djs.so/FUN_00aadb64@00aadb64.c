
undefined8 FUN_00aadb64(SSL *param_1,undefined8 param_2,long param_3)

{
  SSL_CTX *pSVar1;
  char *pcVar2;
  long lVar3;
  SSL_CTX *pSVar4;
  
  if (param_1 == (SSL *)0x0) {
                    /* try { // try from 00aadbc4 to 00badbcb has its CatchHandler @ 00aadc34 */
                    /* try { // try from 00aadbcc to 00badc13 has its CatchHandler @ 00aad90c */
    return 3;
  }
  lVar3 = *(long *)(param_3 + 0x830);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (((*(byte *)(lVar3 + 0x200) >> 2 & 1) == 0) &&
       (pSVar4 = *(SSL_CTX **)(lVar3 + 0x1b0), pSVar1 = SSL_get_SSL_CTX(param_1), pSVar4 == pSVar1))
    break;
    lVar3 = *(long *)(lVar3 + 0x158);
  }
  pcVar2 = SSL_get_servername(param_1,0);
  if (pcVar2 != (char *)0x0) {
    lVar3 = FUN_00ab00d0(param_3,*(undefined4 *)(lVar3 + 0x1d0),pcVar2);
    if (lVar3 != 0) {
      SSL_set_SSL_CTX(param_1,*(SSL_CTX **)(lVar3 + 0x1b0));
      return 0;
    }
    return 0;
  }
  return 0;
}

