
undefined8 FUN_010502e8(SSL *param_1,undefined8 param_2,long param_3)

{
  SSL_CTX *pSVar1;
  char *pcVar2;
  long lVar3;
  SSL_CTX *pSVar4;
  
  if (param_1 == (SSL *)0x0) {
    return 3;
  }
  lVar3 = *(long *)(param_3 + 0x830);
  while( true ) {
    if (lVar3 == 0) {
                    /* try { // try from 01050340 to 011503b7 has its CatchHandler @ 01050340
                       catch() { ... } // from try @ 01050340 with catch @ 01050340
                       catch() { ... } // from try @ 01050bdc with catch @ 01050340
                       catch() { ... } // from try @ 01053484 with catch @ 01050340 */
      return 0;
    }
    if (((*(byte *)(lVar3 + 0x200) >> 2 & 1) == 0) &&
       (pSVar4 = *(SSL_CTX **)(lVar3 + 0x1b0), pSVar1 = SSL_get_SSL_CTX(param_1), pSVar4 == pSVar1))
    break;
    lVar3 = *(long *)(lVar3 + 0x158);
  }
  pcVar2 = SSL_get_servername(param_1,0);
  if (pcVar2 != (char *)0x0) {
    lVar3 = FUN_01052854(param_3,*(undefined4 *)(lVar3 + 0x1d0),pcVar2);
    if (lVar3 != 0) {
      SSL_set_SSL_CTX(param_1,*(SSL_CTX **)(lVar3 + 0x1b0));
      return 0;
    }
    return 0;
  }
  return 0;
}

