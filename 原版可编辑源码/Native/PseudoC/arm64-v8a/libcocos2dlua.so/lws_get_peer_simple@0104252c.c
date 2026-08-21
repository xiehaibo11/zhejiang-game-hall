
void lws_get_peer_simple(long param_1,char *param_2,socklen_t param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int __af;
  uint uVar5;
  socklen_t local_6c;
  sockaddr asStack_68 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x2f6) >> 4 & 1) != 0) {
    param_1 = *(long *)(param_1 + 0x230);
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x228) + 0x150) + 0xc78) >> 5 & 1) == 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x228) + 0x1d8) >> 5 & 1) == 0)) {
    uVar5 = 0x1c;
    local_6c = 0x1c;
    pcVar3 = asStack_68[0].sa_data + 6;
    __af = 10;
    iVar2 = getpeername(*(int *)(param_1 + 0x2d0),asStack_68,&local_6c);
  }
  else {
    uVar5 = 0x10;
    pcVar3 = (char *)((ulong)asStack_68 | 4);
    __af = 2;
    local_6c = 0x10;
    iVar2 = getpeername(*(int *)(param_1 + 0x2d0),asStack_68,&local_6c);
  }
  if ((iVar2 < 0) || (uVar5 < local_6c)) {
    piVar4 = (int *)__errno();
    pcVar3 = strerror(*piVar4);
    _lws_log(2,"getpeername: %s\n",pcVar3);
    pcVar3 = (char *)0x0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    pcVar3 = lws_plat_inet_ntop(__af,pcVar3,param_2,param_3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}

