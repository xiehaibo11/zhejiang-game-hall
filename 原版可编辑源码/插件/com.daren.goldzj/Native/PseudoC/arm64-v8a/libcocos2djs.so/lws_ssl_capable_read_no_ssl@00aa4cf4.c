
ulong lws_ssl_capable_read_no_ssl(long param_1,void *param_2,int param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = recv(*(int *)(param_1 + 0x2d0),param_2,(long)param_3,0);
  if ((int)uVar1 < 0) {
    piVar2 = (int *)__errno();
                    /* try { // try from 00aa4d4c to 00ba4e2f has its CatchHandler @ 00aa4d4c
                       catch() { ... } // from try @ 00aa4d4c with catch @ 00aa4d4c
                       catch() { ... } // from try @ 00aa4e38 with catch @ 00aa4d4c
                       catch() { ... } // from try @ 00aa4e6c with catch @ 00aa4d4c
                       catch() { ... } // from try @ 00aa4ee4 with catch @ 00aa4d4c */
    uVar1 = 0xfffffffe;
    if ((*piVar2 != 4) && (*piVar2 != 0xb)) {
      _lws_log(4,"error on reading from skt : %d\n");
      return 0xffffffff;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x228);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x100) = *(long *)(lVar3 + 0x100) + (long)(int)uVar1;
    }
    FUN_00aa1e90(param_1);
  }
  return uVar1 & 0xffffffff;
}

