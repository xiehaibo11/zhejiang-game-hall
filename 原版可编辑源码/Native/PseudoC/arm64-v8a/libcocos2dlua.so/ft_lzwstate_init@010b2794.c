
void ft_lzwstate_init(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  memset(param_1 + 1,0,0xc0);
  param_1[0x19] = param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[0xe] = param_1 + 0x11;
  param_1[0x10] = 0x40;
  param_1[0x1a] = uVar1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  return;
}

