
void uv_ip4_addr(undefined8 param_1,uint param_2,undefined2 *param_3)

{
  *(undefined8 *)(param_3 + 2) = 0;
  *param_3 = 2;
  *(undefined4 *)(param_3 + 6) = 0;
  param_3[1] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  uv_inet_pton(2,param_1,param_3 + 2);
  return;
}

