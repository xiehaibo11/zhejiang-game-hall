
int CRYPTO_set_mem_functions(m *m,r *r,f *f)

{
  if ((DAT_01784988 & 1) != 0) {
    return 0;
  }
  if (m != (m *)0x0) {
    PTR_CRYPTO_malloc_0176ea70 = m;
  }
  if (r != (r *)0x0) {
    PTR_CRYPTO_realloc_0176ea78 = r;
  }
  if (f != (f *)0x0) {
    PTR_CRYPTO_free_0176ea80 = f;
  }
  return 1;
}

