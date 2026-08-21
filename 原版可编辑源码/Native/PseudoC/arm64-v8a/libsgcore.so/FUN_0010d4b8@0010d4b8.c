
void FUN_0010d4b8(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    PTR_malloc_00113048 = malloc;
    PTR_free_00113050 = free;
  }
  else {
    PTR_malloc_00113048 = malloc;
    if ((code *)*param_1 != (code *)0x0) {
      PTR_malloc_00113048 = (code *)*param_1;
    }
    PTR_free_00113050 = free;
    if ((code *)param_1[1] != (code *)0x0) {
      PTR_free_00113050 = (code *)param_1[1];
    }
  }
  return;
}

