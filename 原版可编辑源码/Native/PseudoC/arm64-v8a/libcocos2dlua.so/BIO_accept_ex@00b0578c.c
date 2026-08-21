
int BIO_accept_ex(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  sockaddr *__addr;
  int *piVar4;
  undefined1 auStack_98 [116];
  socklen_t local_24;
  
  puVar1 = auStack_98;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  local_24 = 0x70;
  __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(puVar1);
  iVar2 = accept(param_1,__addr,&local_24);
  if (iVar2 == -1) {
    iVar2 = BIO_sock_should_retry(-1);
    if (iVar2 != 0) {
      return -1;
    }
    piVar4 = (int *)__errno();
    ERR_put_error(2,8,*piVar4,"crypto/bio/b_sock2.c",0xf6);
    ERR_put_error(0x20,0x89,100,"crypto/bio/b_sock2.c",0xf7);
  }
  else {
    iVar3 = BIO_socket_nbio(iVar2,param_3 >> 3 & 1);
    if (iVar3 != 0) {
      return iVar2;
    }
    close(iVar2);
  }
  return -1;
}

