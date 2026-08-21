
int CRYPTO_set_mem_functions(m *m,r *r,f *f)

{
  if ((DAT_01d3ac08 & 1) != 0) {
    return 0;
  }
  if (m != (m *)0x0) {
    PTR_CRYPTO_malloc_01d20820 = m;
  }
  if (r != (r *)0x0) {
    PTR_CRYPTO_realloc_01d20828 = r;
  }
  if (f != (f *)0x0) {
    PTR_CRYPTO_free_01d20830 = f;
  }
  return 1;
}

