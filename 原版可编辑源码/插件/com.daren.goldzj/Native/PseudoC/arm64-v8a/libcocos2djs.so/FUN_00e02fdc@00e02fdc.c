
void FUN_00e02fdc(undefined8 *param_1,undefined8 *param_2)

{
  memcpy((void *)*param_2,(void *)*param_1,4L << ((ulong)*(uint *)((long)param_2 + 0xc) & 0x3f));
  return;
}

