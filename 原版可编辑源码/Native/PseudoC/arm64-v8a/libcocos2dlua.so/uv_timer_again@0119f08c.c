
undefined8 uv_timer_again(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(long *)(param_1 + 0x88) != 0) {
      uv_timer_stop(param_1);
      uv_timer_start(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x88),
                     *(undefined8 *)(param_1 + 0x88));
    }
    return 0;
  }
  return 0xffffffea;
}

