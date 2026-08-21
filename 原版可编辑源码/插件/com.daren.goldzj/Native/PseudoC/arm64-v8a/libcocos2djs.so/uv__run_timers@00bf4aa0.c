
void uv__run_timers(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x208);
  if ((lVar1 != 0) && (*(ulong *)(lVar1 + 0x18) <= *(ulong *)(param_1 + 0x220))) {
    do {
      lVar2 = lVar1 + -0x68;
      uv_timer_stop(lVar2);
      uv_timer_again(lVar2);
      (**(code **)(lVar1 + -8))(lVar2);
      lVar1 = *(long *)(param_1 + 0x208);
      if (lVar1 == 0) {
        return;
      }
    } while (*(ulong *)(lVar1 + 0x18) <= *(ulong *)(param_1 + 0x220));
  }
  return;
}

