
void FUN_00b9fe10(long param_1)

{
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x28);
  if (ptr != (undefined8 *)0x0) {
    EC_GROUP_free((EC_GROUP *)*ptr);
    EC_KEY_free((EC_KEY *)ptr[2]);
    CRYPTO_free((void *)ptr[5]);
    CRYPTO_free(ptr);
    return;
  }
  return;
}

