
void uv__io_close(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uv__io_stop(param_1,param_2,0x2005);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  **(undefined8 **)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(*(long *)(param_2 + 8) + 8) = *(undefined8 *)(param_2 + 0x10);
  uv__platform_invalidate_fd(param_1,uVar1);
  return;
}

