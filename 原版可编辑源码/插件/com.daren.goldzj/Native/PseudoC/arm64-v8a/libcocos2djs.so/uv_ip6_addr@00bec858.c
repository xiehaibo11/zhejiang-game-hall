
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_ip6_addr(char *param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  size_t __n;
  char *__dest;
  char acStack_30 [40];
  long local_8;
  
  param_3[2] = 0;
  local_8 = ___stack_chk_guard;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined2 *)param_3 = 10;
  *(ushort *)((long)param_3 + 2) =
       (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  pcVar2 = strchr(param_1,0x25);
  __dest = param_1;
  if (pcVar2 != (char *)0x0) {
    __n = (long)pcVar2 - (long)param_1;
    __dest = acStack_30;
    if (0x27 < __n) {
      __n = 0x27;
    }
    memcpy(__dest,param_1,__n);
    __dest[__n] = '\0';
    uVar1 = if_nametoindex(pcVar2 + 1);
    *(uint *)(param_3 + 3) = uVar1;
  }
  uv_inet_pton(10,__dest,param_3 + 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

