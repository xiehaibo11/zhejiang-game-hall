
void err_delete_thread_state(void)

{
  ERR_STATE *pEVar1;
  
  pEVar1 = ERR_get_state();
  if (pEVar1 != (ERR_STATE *)0x0) {
    CRYPTO_THREAD_set_local(&DAT_01d39288,0);
    FUN_00b1e6ac(pEVar1);
    return;
  }
  return;
}

