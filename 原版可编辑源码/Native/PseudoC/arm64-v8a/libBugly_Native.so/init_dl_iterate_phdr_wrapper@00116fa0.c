
bool init_dl_iterate_phdr_wrapper(void)

{
  DAT_001403a8 = get_libraray_function("libc.so","dl_iterate_phdr");
  return DAT_001403a8 != 0;
}

