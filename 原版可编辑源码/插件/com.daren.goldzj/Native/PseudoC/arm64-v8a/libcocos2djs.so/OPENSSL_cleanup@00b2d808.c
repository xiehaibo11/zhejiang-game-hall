
void OPENSSL_cleanup(void)

{
  undefined8 *ptr;
  int *ptr_00;
  undefined8 *puVar1;
  
  if ((DAT_01d3ab60 == '\x01') && ((DAT_01d3ab64 & 1) == 0)) {
    DAT_01d3ab64 = 1;
    ptr_00 = (int *)CRYPTO_THREAD_get_local(&DAT_01d3abb0);
    CRYPTO_THREAD_set_local(&DAT_01d3abb0,0);
    ptr = DAT_01d3abf0;
    if (ptr_00 != (int *)0x0) {
      if (*ptr_00 != 0) {
        ASYNC_cleanup_thread();
      }
      if (ptr_00[1] != 0) {
        err_delete_thread_state();
      }
      CRYPTO_free(ptr_00);
      ptr = DAT_01d3abf0;
    }
    while (ptr != (undefined8 *)0x0) {
      (*(code *)*ptr)();
      puVar1 = (undefined8 *)ptr[1];
      CRYPTO_free(ptr);
      ptr = puVar1;
    }
    DAT_01d3abf0 = (undefined8 *)0x0;
    CRYPTO_THREAD_lock_free(DAT_01d3abf8);
    if (DAT_01d3ab68 == '\x01') {
      comp_zlib_cleanup_int();
    }
    if (DAT_01d3ab6c == '\x01') {
      async_deinit();
    }
    if (DAT_01d3ab70 == '\x01') {
      err_free_strings_int();
    }
    CRYPTO_THREAD_cleanup_local(&DAT_01d3abb0);
    rand_cleanup_int();
    conf_modules_free_int();
    engine_cleanup_int();
    crypto_cleanup_all_ex_data_int();
    bio_cleanup();
    evp_cleanup_int();
    obj_cleanup_int();
    err_cleanup();
    DAT_01d3ab60 = '\0';
  }
  return;
}

