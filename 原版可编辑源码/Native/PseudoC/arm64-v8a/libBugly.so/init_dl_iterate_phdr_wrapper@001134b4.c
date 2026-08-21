
bool init_dl_iterate_phdr_wrapper(void)

{
  DAT_0013f348 = get_libraray_function("libc.so","dl_iterate_phdr");
  return DAT_0013f348 != 0;
}

