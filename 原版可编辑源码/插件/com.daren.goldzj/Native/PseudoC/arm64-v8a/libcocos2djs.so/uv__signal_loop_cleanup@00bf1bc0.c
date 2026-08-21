
void uv__signal_loop_cleanup(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x10);
  for (plVar1 = (long *)*plVar2; plVar1 != plVar2; plVar1 = (long *)*plVar1) {
    while (((int)plVar1[-2] == 0x10 && ((int)plVar1[9] != 0))) {
      FUN_00bf0f6c();
      plVar1 = (long *)*plVar1;
      if (plVar1 == plVar2) goto LAB_00bf1c18;
    }
  }
LAB_00bf1c18:
  if (*(int *)(param_1 + 0x228) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x22c) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  }
  return;
}

