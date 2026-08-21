
void FUN_0119f130(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x208);
  while ((lVar1 != 0 && (*(ulong *)(lVar1 + 0x18) <= *(ulong *)(param_1 + 0x220)))) {
    lVar2 = lVar1 + -0x68;
    uv_timer_stop(lVar2);
    if (*(long *)(lVar1 + 0x20) != 0) {
      uv_timer_stop(lVar2);
      uv_timer_start(lVar2,*(undefined8 *)(lVar1 + -8),*(undefined8 *)(lVar1 + 0x20),
                     *(undefined8 *)(lVar1 + 0x20));
    }
    (**(code **)(lVar1 + -8))(lVar2);
    lVar1 = *(long *)(param_1 + 0x208);
  }
  return;
}

