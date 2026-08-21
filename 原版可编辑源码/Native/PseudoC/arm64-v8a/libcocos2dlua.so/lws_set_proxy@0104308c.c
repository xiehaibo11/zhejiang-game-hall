
void lws_set_proxy(char *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong __n;
  char acStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != (char *)0x0) {
    iVar2 = strncmp(param_2,"http://",7);
    pcVar4 = param_2 + 7;
    if (iVar2 != 0) {
      pcVar4 = param_2;
    }
    pcVar3 = strrchr(pcVar4,0x40);
    if (pcVar3 == (char *)0x0) {
      param_1[0x80] = '\0';
LAB_01043170:
      strncpy(param_1,pcVar4,0x7f);
      param_1[0x7f] = '\0';
      pcVar4 = strchr(param_1,0x3a);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        iVar2 = atoi(pcVar4 + 1);
        uVar5 = 0;
        *(int *)(param_1 + 0x1d4) = iVar2;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_010431b8;
      }
      if (*(int *)(param_1 + 0x1d4) != 0) {
        uVar5 = 0;
                    /* try { // try from 010431c8 to 01143337 has its CatchHandler @ 010431c8
                       catch() { ... } // from try @ 010431c8 with catch @ 010431c8
                       catch() { ... } // from try @ 0104333c with catch @ 010431c8
                       catch() { ... } // from try @ 010433f0 with catch @ 010431c8 */
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_010431b8;
      }
      pcVar4 = "http_proxy needs to be ads:port\n";
    }
    else {
      __n = (long)pcVar3 - (long)pcVar4;
      if ((__n & 0xffffffe0) < 0x60) {
        strncpy(acStack_a8,pcVar4,__n);
        iVar2 = lws_b64_encode_string(acStack_a8,__n & 0xffffffff,param_1 + 0x80,0x80);
        if (-1 < iVar2) {
          pcVar4 = pcVar3 + 1;
          goto LAB_01043170;
        }
      }
      pcVar4 = "proxy auth too long\n";
    }
    _lws_log(1,pcVar4);
  }
  uVar5 = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_010431b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

