
void CRYPTO_get_mem_functions(m **m,r **r,f **f)

{
  if (m != (m **)0x0) {
    *m = (m *)PTR_CRYPTO_malloc_0176ea70;
  }
  if (r != (r **)0x0) {
    *r = (r *)PTR_CRYPTO_realloc_0176ea78;
  }
  if (f != (f **)0x0) {
    *f = (f *)PTR_CRYPTO_free_0176ea80;
  }
  return;
}

