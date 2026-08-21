
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
                    /* catch() { ... } // from try @ 00aacda0 with catch @ 00aad0f0 */
      SSL_shutdown(*(SSL **)(param_1 + 0x2b0));
    }
    close(iVar1);
    SSL_free(*(SSL **)(param_1 + 0x2b0));
    lVar3 = *(long *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
                    /* catch() { ... } // from try @ 00aac7fc with catch @ 00aad128
                       catch() { ... } // from try @ 00aac97c with catch @ 00aad128 */
    if ((*(int *)(lVar3 + 0xc8c) != 0) &&
       (iVar1 = *(int *)(lVar3 + 0xc90), *(int *)(lVar3 + 0xc90) = iVar1 + -1,
       iVar1 == *(int *)(lVar3 + 0xc8c))) {
                    /* catch() { ... } // from try @ 00aac33c with catch @ 00aad12c */
      lVar4 = *(long *)(lVar3 + 0x830);
      *(byte *)(lVar3 + 0xc94) = *(byte *)(lVar3 + 0xc94) & 0xdf;
      for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x158)) {
                    /* catch() { ... } // from try @ 00aac708 with catch @ 00aad144 */
        if ((*(int *)(lVar4 + 0x1f8) != 0) && (*(long *)(lVar4 + 0x168) != 0)) {
          FUN_00aa3be0(*(long *)(lVar4 + 0x168),0,1);
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

