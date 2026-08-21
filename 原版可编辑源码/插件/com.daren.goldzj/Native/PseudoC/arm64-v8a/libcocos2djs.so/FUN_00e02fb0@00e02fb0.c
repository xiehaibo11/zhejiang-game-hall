
void FUN_00e02fb0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    WebPSafeFree((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

