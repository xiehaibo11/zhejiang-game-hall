
bool TIFFInitLZW(long param_1)

{
  void *pvVar1;
  
  pvVar1 = _TIFFmalloc(0x120);
  *(void **)(param_1 + 0x350) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFInitLZW","No space for LZW state block");
                    /* try { // try from 0113ab88 to 0123ab9f has its CatchHandler @ 0113af08 */
  }
  else {
    *(undefined8 *)((long)pvVar1 + 0xe0) = 0;
    *(undefined8 *)((long)pvVar1 + 0xb8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x118) = 0;
    *(undefined4 *)((long)pvVar1 + 0x98) = *(undefined4 *)(param_1 + 0xc);
    *(code **)(param_1 + 0x2d0) = FUN_0113ac80;
    *(code **)(param_1 + 0x2d8) = FUN_0113b25c;
    *(code **)(param_1 + 0x2e8) = FUN_0113b2b4;
    *(code **)(param_1 + 0x2c8) = FUN_0113aba0;
    *(code **)(param_1 + 0x2c0) = FUN_0113ab98;
    *(code **)(param_1 + 0x2f0) = FUN_0113b3b4;
                    /* try { // try from 0113ab50 to 0123ab5f has its CatchHandler @ 0113af34 */
    *(code **)(param_1 + 0x300) = FUN_0113b4cc;
    *(code **)(param_1 + 0x2f8) = FUN_0113ad94;
    *(code **)(param_1 + 0x310) = FUN_0113b4cc;
    *(code **)(param_1 + 0x308) = FUN_0113ad94;
    *(code **)(param_1 + 800) = FUN_0113b4cc;
    *(code **)(param_1 + 0x318) = FUN_0113ad94;
    *(code **)(param_1 + 0x338) = FUN_0113b910;
    TIFFPredictorInit(param_1);
  }
  return pvVar1 != (void *)0x0;
}

