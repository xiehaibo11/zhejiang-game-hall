
void ft_lzwstate_done(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x1a];
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  if ((undefined8 *)param_1[0xe] != param_1 + 0x11) {
    ft_mem_free(uVar1);
    param_1[0xe] = 0;
  }
  ft_mem_free(uVar1,param_1[0xb]);
  memset(param_1,0,0xd8);
  return;
}

