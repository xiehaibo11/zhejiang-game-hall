
void SSL3_RECORD_clear(void *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    do {
      uVar2 = *(undefined8 *)((long)param_1 + 0x28);
      memset(param_1,0,0x48);
      *(undefined8 *)((long)param_1 + 0x28) = uVar2;
      uVar1 = uVar1 - 1;
      param_1 = (void *)((long)param_1 + 0x48);
    } while (uVar1 != 0);
  }
  return;
}

