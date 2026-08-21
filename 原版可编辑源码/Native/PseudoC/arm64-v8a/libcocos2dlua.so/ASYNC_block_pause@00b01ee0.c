
void ASYNC_block_pause(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (((iVar1 != 0) && (lVar2 = CRYPTO_THREAD_get_local(&DAT_01782dd0), lVar2 != 0)) &&
     (*(long *)(lVar2 + 8) != 0)) {
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  return;
}

