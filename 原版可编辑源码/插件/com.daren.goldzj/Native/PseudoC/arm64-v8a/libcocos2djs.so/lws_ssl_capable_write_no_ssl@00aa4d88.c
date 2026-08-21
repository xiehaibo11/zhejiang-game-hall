
ssize_t lws_ssl_capable_write_no_ssl(long param_1,void *param_2,int param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  sVar1 = send(*(int *)(param_1 + 0x2d0),param_2,(long)param_3,0x4000);
  if ((int)sVar1 < 0) {
    piVar2 = (int *)__errno();
    sVar1 = 0xfffffffe;
    if ((*piVar2 != 4) && (*piVar2 != 0xb)) {
      return 0xffffffff;
    }
  }
  return sVar1;
}

