
void FUN_00a5ce24(long param_1,int param_2)

{
  undefined8 *puVar1;
  SSL *pSVar2;
  SSL_CTX *pSVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 00a5ce2c to 00b5cf33 has its CatchHandler @ 00a5cb24 */
  lVar4 = param_1 + (long)param_2 * 0x28;
  pSVar2 = *(SSL **)(lVar4 + 0x2b0);
  lVar5 = (long)param_2;
  if (pSVar2 != (SSL *)0x0) {
    puVar1 = (undefined8 *)(lVar4 + 0x2b0);
    SSL_shutdown(pSVar2);
    SSL_set_connect_state((SSL *)*puVar1);
    SSL_free((SSL *)*puVar1);
    *puVar1 = 0;
  }
  lVar4 = param_1 + lVar5 * 0x28;
  pSVar3 = *(SSL_CTX **)(lVar4 + 0x2a8);
  if (pSVar3 != (SSL_CTX *)0x0) {
    SSL_CTX_free(pSVar3);
    *(undefined8 *)(lVar4 + 0x2a8) = 0;
  }
  lVar4 = param_1 + lVar5 * 0x28;
  pSVar2 = *(SSL **)(lVar4 + 0x300);
  if (pSVar2 != (SSL *)0x0) {
    puVar1 = (undefined8 *)(lVar4 + 0x300);
    SSL_shutdown(pSVar2);
    SSL_set_connect_state((SSL *)*puVar1);
    SSL_free((SSL *)*puVar1);
    *puVar1 = 0;
  }
  param_1 = param_1 + lVar5 * 0x28;
  pSVar3 = *(SSL_CTX **)(param_1 + 0x2f8);
                    /* catch() { ... } // from try @ 00a5cc60 with catch @ 00a5cebc */
  if (pSVar3 != (SSL_CTX *)0x0) {
                    /* catch() { ... } // from try @ 00a5cde0 with catch @ 00a5cec0 */
                    /* catch() { ... } // from try @ 00a5cb94 with catch @ 00a5cec4
                       catch() { ... } // from try @ 00a5cd88 with catch @ 00a5cec4 */
    SSL_CTX_free(pSVar3);
                    /* catch() { ... } // from try @ 00a5cca4 with catch @ 00a5cec8
                       catch() { ... } // from try @ 00a5cda4 with catch @ 00a5cec8
                       catch() { ... } // from try @ 00a5ce18 with catch @ 00a5cec8 */
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  return;
}

