
void UI_free(UI *ui)

{
  if (ui != (UI *)0x0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(ui + 8),FUN_00b63cd8);
    CRYPTO_free_ex_data(0xb,ui,(CRYPTO_EX_DATA *)(ui + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ui + 0x28));
    CRYPTO_free(ui);
    return;
  }
  return;
}

