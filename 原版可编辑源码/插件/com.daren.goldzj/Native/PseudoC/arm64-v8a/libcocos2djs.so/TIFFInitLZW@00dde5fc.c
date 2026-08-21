
bool TIFFInitLZW(long param_1)

{
  void *pvVar1;
  
  pvVar1 = _TIFFmalloc(0x120);
  *(void **)(param_1 + 0x350) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFInitLZW","No space for LZW state block");
  }
  else {
    *(undefined8 *)((long)pvVar1 + 0xe0) = 0;
    *(undefined8 *)((long)pvVar1 + 0xb8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x118) = 0;
    *(undefined4 *)((long)pvVar1 + 0x98) = *(undefined4 *)(param_1 + 0xc);
    *(code **)(param_1 + 0x2d0) = FUN_00dde7d8;
    *(code **)(param_1 + 0x2d8) = FUN_00ddedb4;
    *(code **)(param_1 + 0x2e8) = FUN_00ddee0c;
    *(code **)(param_1 + 0x2c8) = FUN_00dde6f8;
    *(code **)(param_1 + 0x2c0) = FUN_00dde6f0;
    *(code **)(param_1 + 0x2f0) = FUN_00ddef0c;
    *(code **)(param_1 + 0x300) = FUN_00ddf024;
    *(code **)(param_1 + 0x2f8) = FUN_00dde8ec;
    *(code **)(param_1 + 0x310) = FUN_00ddf024;
    *(code **)(param_1 + 0x308) = FUN_00dde8ec;
    *(code **)(param_1 + 800) = FUN_00ddf024;
    *(code **)(param_1 + 0x318) = FUN_00dde8ec;
    *(code **)(param_1 + 0x338) = FUN_00ddf468;
    TIFFPredictorInit(param_1);
  }
  return pvVar1 != (void *)0x0;
}

