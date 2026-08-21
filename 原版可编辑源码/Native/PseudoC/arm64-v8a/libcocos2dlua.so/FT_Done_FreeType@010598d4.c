
undefined8 FT_Done_FreeType(undefined8 *param_1)

{
  void *__ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    FT_Done_Library();
    FT_Done_Memory(__ptr);
    return 0;
  }
                    /* try { // try from 01059904 to 01159913 has its CatchHandler @ 01059924 */
  return 0x21;
}

