
undefined4 BIO_connect(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  socklen_t __len;
  int *piVar2;
  sockaddr *__addr;
  int line;
  undefined4 local_24;
  
  local_24 = 1;
  if (param_1 == -1) {
    iVar1 = 0x87;
    line = 0x52;
  }
  else {
    iVar1 = BIO_socket_nbio(param_1,param_3 >> 3 & 1);
    if (iVar1 == 0) {
      return 0;
    }
    if (((param_3 >> 2 & 1) == 0) || (iVar1 = setsockopt(param_1,1,9,&local_24,4), iVar1 == 0)) {
                    /* catch() { ... } // from try @ 00b05358 with catch @ 00b053b0 */
      if (((param_3 >> 4 & 1) == 0) || (iVar1 = setsockopt(param_1,6,1,&local_24,4), iVar1 == 0)) {
        __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
        __len = BIO_ADDR_sockaddr_size(param_2);
        iVar1 = connect(param_1,__addr,__len);
        if (iVar1 != -1) {
          return 1;
        }
        iVar1 = BIO_sock_should_retry(-1);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)__errno();
        ERR_put_error(2,2,*piVar2,"crypto/bio/b_sock2.c",0x6c);
        iVar1 = 0x67;
        line = 0x6d;
      }
      else {
        piVar2 = (int *)__errno();
        ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",99);
        iVar1 = 0x8a;
        line = 100;
      }
    }
    else {
      piVar2 = (int *)__errno();
                    /* try { // try from 00b05358 to 00c05363 has its CatchHandler @ 00b053b0 */
                    /* try { // try from 00b05364 to 00c053c3 has its CatchHandler @ 00b052c8 */
      ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",0x5b);
      iVar1 = 0x89;
      line = 0x5c;
    }
  }
  ERR_put_error(0x20,0x8a,iVar1,"crypto/bio/b_sock2.c",line);
  return 0;
}

