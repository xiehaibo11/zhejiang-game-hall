
ulong lws_ssl_capable_read_no_ssl(long param_1,void *param_2,int param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = recv(*(int *)(param_1 + 0x2d0),param_2,(long)param_3,0);
  if ((int)uVar1 < 0) {
    piVar2 = (int *)__errno();
    uVar1 = 0xfffffffe;
    if ((*piVar2 != 4) && (*piVar2 != 0xb)) {
                    /* try { // try from 010474f4 to 011475f3 has its CatchHandler @ 010474f4
                       catch() { ... } // from try @ 010474f4 with catch @ 010474f4
                       catch() { ... } // from try @ 010475fc with catch @ 010474f4 */
      _lws_log(4,"error on reading from skt : %d\n");
      return 0xffffffff;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x228);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x100) = *(long *)(lVar3 + 0x100) + (long)(int)uVar1;
    }
    FUN_01044614(param_1);
  }
  return uVar1 & 0xffffffff;
}

