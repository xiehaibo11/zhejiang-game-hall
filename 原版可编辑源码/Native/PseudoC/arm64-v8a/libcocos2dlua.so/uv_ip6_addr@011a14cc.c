
void uv_ip6_addr(char *param_1,uint param_2,undefined2 *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  size_t __n;
  char acStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *param_3 = 10;
  param_3[1] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  pcVar3 = strchr(param_1,0x25);
  if (pcVar3 != (char *)0x0) {
    __n = (long)pcVar3 - (long)param_1;
    if (0x26 < __n) {
      __n = 0x27;
    }
    memcpy(acStack_70,param_1,__n);
    acStack_70[__n] = '\0';
    uVar2 = if_nametoindex(pcVar3 + 1);
    *(uint *)(param_3 + 0xc) = uVar2;
    param_1 = acStack_70;
  }
  uv_inet_pton(10,param_1,param_3 + 4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

