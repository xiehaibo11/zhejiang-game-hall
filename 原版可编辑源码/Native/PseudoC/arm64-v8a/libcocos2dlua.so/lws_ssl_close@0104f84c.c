
undefined8 lws_ssl_close(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0;
  if (*(SSL **)(param_1 + 0x2b0) != (SSL *)0x0) {
    iVar1 = SSL_get_fd(*(SSL **)(param_1 + 0x2b0));
    if ((*(byte *)(param_1 + 0x2f4) >> 6 & 1) == 0) {
      SSL_shutdown(*(SSL **)(param_1 + 0x2b0));
    }
                    /* try { // try from 0104f87c to 0114f88b has its CatchHandler @ 0104f904 */
    close(iVar1);
    SSL_free(*(SSL **)(param_1 + 0x2b0));
                    /* try { // try from 0104f88c to 0114f943 has its CatchHandler @ 0104f784 */
    lVar3 = *(long *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    if ((*(int *)(lVar3 + 0xc8c) != 0) &&
       (iVar1 = *(int *)(lVar3 + 0xc90), *(int *)(lVar3 + 0xc90) = iVar1 + -1,
       iVar1 == *(int *)(lVar3 + 0xc8c))) {
      lVar4 = *(long *)(lVar3 + 0x830);
      *(byte *)(lVar3 + 0xc94) = *(byte *)(lVar3 + 0xc94) & 0xdf;
      for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x158)) {
        if ((*(int *)(lVar4 + 0x1f8) != 0) && (*(long *)(lVar4 + 0x168) != 0)) {
          FUN_01046364(*(long *)(lVar4 + 0x168),0,1);
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

