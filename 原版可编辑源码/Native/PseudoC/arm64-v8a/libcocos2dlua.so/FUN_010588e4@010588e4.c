
undefined8 FUN_010588e4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if ((*(byte *)((long)__ptr + 0x16c) & 1) != 0) {
    inflateEnd((long)__ptr + 0x60);
  }
  (**(code **)(*(long *)(*(long *)((long)__ptr + 0x30) + 8) + 8))();
  free(__ptr);
  *param_1 = 0;
  return 0;
}

