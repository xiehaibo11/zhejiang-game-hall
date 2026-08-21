
void EC_ec_pre_comp_free(void *param_1)

{
  long *ptr;
  EC_POINT *point;
  int local_24;
  
  if ((param_1 != (void *)0x0) &&
     (CRYPTO_atomic_add((long)param_1 + 0x30,0xffffffff,&local_24,
                        *(undefined8 *)((long)param_1 + 0x38)), local_24 < 1)) {
    ptr = *(long **)((long)param_1 + 0x20);
    if (ptr != (long *)0x0) {
      point = (EC_POINT *)*ptr;
      if (point != (EC_POINT *)0x0) {
        do {
          ptr = ptr + 1;
          EC_POINT_free(point);
          point = (EC_POINT *)*ptr;
        } while (point != (EC_POINT *)0x0);
        ptr = *(long **)((long)param_1 + 0x20);
      }
      CRYPTO_free(ptr);
    }
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x38));
    CRYPTO_free(param_1);
  }
  return;
}

