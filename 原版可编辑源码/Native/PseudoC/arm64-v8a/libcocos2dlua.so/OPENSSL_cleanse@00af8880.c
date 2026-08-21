
void OPENSSL_cleanse(void *ptr,size_t len)

{
  undefined8 *puVar1;
  
  if (len != 0) {
    if (0xf < len) {
      for (; puVar1 = ptr, ((ulong)ptr & 7) != 0; ptr = (void *)((long)ptr + 1)) {
        *(undefined1 *)ptr = 0;
        len = len - 1;
      }
      do {
        ptr = puVar1 + 1;
        *puVar1 = 0;
        len = len - 8;
        puVar1 = ptr;
      } while ((len & 0xfffffffffffffff8) != 0);
      if (len == 0) {
        return;
      }
    }
    do {
      *(undefined1 *)ptr = 0;
      len = len - 1;
      ptr = (undefined8 *)((long)ptr + 1);
    } while (len != 0);
  }
  return;
}

