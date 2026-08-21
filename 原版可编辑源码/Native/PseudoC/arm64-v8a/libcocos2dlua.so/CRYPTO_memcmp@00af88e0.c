
int CRYPTO_memcmp(void *a,void *b,size_t len)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; len != 0; len = len - 1) {
    uVar1 = uVar1 | *(byte *)a ^ *(byte *)b;
    a = (byte *)((long)a + 1);
    b = (byte *)((long)b + 1);
  }
  return -uVar1 >> 0x1f;
}

