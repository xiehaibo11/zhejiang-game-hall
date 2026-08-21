
undefined8 uv_pipe_init(undefined8 param_1,long param_2,undefined4 param_3)

{
  FUN_011a7f30(param_1,param_2,7);
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0xf8) = param_3;
  return 0;
}

