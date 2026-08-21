
void FUN_01160094(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_01145cdc(*(undefined8 *)((long)param_1 + 0x18));
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    WebPSafeFree(param_1);
    return;
  }
  return;
}

