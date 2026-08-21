
void FUN_00e03bec(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00de9834(*(undefined8 *)((long)param_1 + 0x18));
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    WebPSafeFree(param_1);
    return;
  }
  return;
}

