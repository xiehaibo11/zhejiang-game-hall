
void EC_nistz256_pre_comp_free(void *param_1)

{
  int local_24;
  
  if ((param_1 != (void *)0x0) &&
     (CRYPTO_atomic_add((long)param_1 + 0x20,0xffffffff,&local_24,
                        *(undefined8 *)((long)param_1 + 0x28)), local_24 < 1)) {
    CRYPTO_free(*(void **)((long)param_1 + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x28));
    CRYPTO_free(param_1);
  }
  return;
}

