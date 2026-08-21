
undefined8 uv_timer_again(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x88) != 0) {
      uv_timer_stop();
      uv_timer_start(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x88),
                     *(undefined8 *)(param_1 + 0x88));
    }
  }
  return uVar1;
}

