
void unw_map_cursor_destroy(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x78);
    if (*(char *)(lVar1 + 0x5a) != '\0') {
      munmap(*(void **)(lVar1 + 0x60),*(size_t *)(lVar1 + 0x68));
    }
    if (*(void **)(lVar1 + 0x28) != (void *)0x0) {
      free(*(void **)(lVar1 + 0x28));
    }
    FUN_0011e848(&DAT_00177490,lVar1);
    lVar1 = lVar2;
  }
  return;
}

