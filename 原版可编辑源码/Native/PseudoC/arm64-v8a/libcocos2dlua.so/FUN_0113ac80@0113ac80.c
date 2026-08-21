
undefined8 FUN_0113ac80(long param_1)

{
  void *__s;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x350);
  if (*(long *)(lVar1 + 0xe0) == 0) {
    (**(code **)(param_1 + 0x2c8))(param_1);
  }
  if ((**(char **)(param_1 + 0x368) == '\0') && (((*(char **)(param_1 + 0x368))[1] & 1U) != 0)) {
    if (*(long *)(lVar1 + 0xb8) == 0) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"LZWPreDecode",
                     "Old-style LZW codes, convert file");
      *(code **)(param_1 + 0x2f8) = FUN_0113b968;
      *(code **)(param_1 + 0x308) = FUN_0113b968;
      *(code **)(param_1 + 0x318) = FUN_0113b968;
      (**(code **)(param_1 + 0x2c8))(param_1);
      *(code **)(lVar1 + 0xb8) = FUN_0113b968;
    }
    *(undefined2 *)(lVar1 + 0x82) = 0x1ff;
                    /* try { // try from 0113ad90 to 0123ad97 has its CatchHandler @ 0113aef8 */
  }
  else {
    *(undefined2 *)(lVar1 + 0x82) = 0x1fe;
    *(code **)(lVar1 + 0xb8) = FUN_0113ad94;
  }
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined2 *)(lVar1 + 0x80) = 9;
  *(undefined8 *)(lVar1 + 0xa0) = 0x1ff;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
                    /* try { // try from 0113ace8 to 0123acef has its CatchHandler @ 0113af04 */
  __s = (void *)(*(long *)(lVar1 + 0xe0) + 0x1020);
  *(long *)(lVar1 + 0xb0) = *(long *)(param_1 + 0x390) << 3;
  *(void **)(lVar1 + 0xd0) = __s;
  _TIFFmemset(__s,0,0x12fd0);
  *(long *)(lVar1 + 200) = *(long *)(lVar1 + 0xe0) + -0x10;
                    /* try { // try from 0113ad30 to 0123ad5f has its CatchHandler @ 0113af0c */
  *(long *)(lVar1 + 0xd8) = *(long *)(lVar1 + 0xe0) + *(long *)(lVar1 + 0xa0) * 0x10 + -0x10;
  return 1;
}

