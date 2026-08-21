
undefined8 FT_Done_FreeType(undefined8 *param_1)

{
  void *__ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    FT_Done_Library();
    free(__ptr);
    return 0;
  }
  return 0x21;
}

