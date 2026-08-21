
void uv_ip4_addr(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined2 *)param_3 = 2;
  *(ushort *)((long)param_3 + 2) =
       (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff00ff00ff) << 8);
  uv_inet_pton(2,param_1,(long)param_3 + 4);
  return;
}

