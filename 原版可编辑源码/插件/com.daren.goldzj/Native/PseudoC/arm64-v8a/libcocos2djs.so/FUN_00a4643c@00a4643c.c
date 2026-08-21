
void FUN_00a4643c(long param_1,int param_2)

{
  undefined8 *puVar1;
  SSL *pSVar2;
  SSL_CTX *pSVar3;
  long lVar4;
  long lVar5;
  
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
  if (pSVar3 != (SSL_CTX *)0x0) {
    SSL_CTX_free(pSVar3);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  return;
}

