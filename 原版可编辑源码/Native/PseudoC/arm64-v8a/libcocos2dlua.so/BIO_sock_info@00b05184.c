
undefined8 BIO_sock_info(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  sockaddr *__addr;
  int *piVar2;
  int line;
  socklen_t local_14;
  
  if (param_2 == 0) {
    local_14 = 0x70;
    __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(*param_3);
    iVar1 = getsockname(param_1,__addr,&local_14);
    if (iVar1 == -1) {
      piVar2 = (int *)__errno();
      ERR_put_error(2,0x10,*piVar2,"crypto/bio/b_sock.c",0x16c);
      iVar1 = 0x84;
      line = 0x16d;
    }
    else {
      if (local_14 < 0x71) {
        return 1;
      }
      iVar1 = 0x85;
      line = 0x171;
    }
  }
  else {
    iVar1 = 0x8c;
    line = 0x177;
  }
  ERR_put_error(0x20,0x8d,iVar1,"crypto/bio/b_sock.c",line);
  return 0;
}

