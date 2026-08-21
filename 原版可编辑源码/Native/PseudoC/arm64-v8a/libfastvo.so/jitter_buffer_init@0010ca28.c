
undefined4 * jitter_buffer_init(undefined4 param_1)

{
  undefined4 *puVar1;
  void *__ptr;
  long lVar2;
  
  puVar1 = calloc(0x1f70,1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x70e] = param_1;
    puVar1[0x70f] = param_1;
    puVar1[0x714] = 1;
    lVar2 = -0x1900;
    puVar1[0x712] = 0x32;
    puVar1[0x7d8] = 4;
    *(undefined8 *)(puVar1 + 0x7d6) = 0x14d000003e8;
    do {
      __ptr = *(void **)((long)puVar1 + lVar2 + 0x1910);
      if (__ptr != (void *)0x0) {
        if (*(code **)(puVar1 + 0x70c) == (code *)0x0) {
          free(__ptr);
        }
        else {
          (**(code **)(puVar1 + 0x70c))();
        }
        *(undefined8 *)((long)puVar1 + lVar2 + 0x1910) = 0;
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != 0);
    puVar1[0x710] = 1;
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 0x7da) = 32000;
    *(undefined8 *)(puVar1 + 0x715) = 0;
    *(undefined4 **)(puVar1 + 2000) = puVar1 + 0x715;
    *(undefined8 *)(puVar1 + 0x753) = 0;
    *(undefined4 **)(puVar1 + 0x7d2) = puVar1 + 0x753;
    *(undefined8 *)(puVar1 + 0x791) = 0;
    *(undefined4 **)(puVar1 + 0x7d4) = puVar1 + 0x791;
  }
  return puVar1;
}

