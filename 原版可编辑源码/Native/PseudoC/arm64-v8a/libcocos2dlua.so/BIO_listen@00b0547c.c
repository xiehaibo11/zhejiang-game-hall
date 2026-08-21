
/* WARNING: Type propagation algorithm not settling */

undefined4 BIO_listen(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  socklen_t __len;
  int *piVar2;
  sockaddr *__addr;
  int line;
  socklen_t local_34;
  int local_28 [2];
  
  local_28[1] = 1;
  local_34 = 4;
  if (param_1 == -1) {
    iVar1 = 0x87;
    line = 0xa0;
  }
  else {
    iVar1 = getsockopt(param_1,1,3,local_28,&local_34);
    if ((iVar1 == 0) && (local_34 == 4)) {
      iVar1 = BIO_socket_nbio(param_1,param_3 >> 3 & 1);
      if (iVar1 == 0) {
        return 0;
      }
      if (((param_3 & 1) == 0) || (iVar1 = setsockopt(param_1,1,2,local_28 + 1,4), iVar1 == 0)) {
        if (((param_3 >> 2 & 1) == 0) ||
           (iVar1 = setsockopt(param_1,1,9,local_28 + 1,4), iVar1 == 0)) {
          if (((param_3 >> 4 & 1) == 0) ||
             (iVar1 = setsockopt(param_1,6,1,local_28 + 1,4), iVar1 == 0)) {
            if (((param_3 >> 1 & 1) == 0) ||
               ((iVar1 = BIO_ADDR_family(param_2), iVar1 != 10 ||
                (iVar1 = setsockopt(param_1,0x29,0x1a,local_28 + 1,4), iVar1 == 0)))) {
              __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
              __len = BIO_ADDR_sockaddr_size(param_2);
              iVar1 = bind(param_1,__addr,__len);
              if (iVar1 == 0) {
                if ((local_28[0] == 2) || (iVar1 = listen(param_1,0x80), iVar1 != -1)) {
                  return 1;
                }
                piVar2 = (int *)__errno();
                ERR_put_error(2,7,*piVar2,"crypto/bio/b_sock2.c",0xdb);
                iVar1 = 0x77;
                line = 0xdc;
              }
              else {
                piVar2 = (int *)__errno();
                ERR_put_error(2,6,*piVar2,"crypto/bio/b_sock2.c",0xd5);
                iVar1 = 0x75;
                line = 0xd6;
              }
            }
            else {
              piVar2 = (int *)__errno();
              ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",0xcd);
              iVar1 = 0x88;
              line = 0xce;
            }
          }
          else {
            piVar2 = (int *)__errno();
            ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",0xc4);
            iVar1 = 0x8a;
            line = 0xc5;
          }
        }
        else {
          piVar2 = (int *)__errno();
          ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",0xbc);
          iVar1 = 0x89;
          line = 0xbd;
        }
      }
      else {
        piVar2 = (int *)__errno();
        ERR_put_error(2,0xe,*piVar2,"crypto/bio/b_sock2.c",0xb3);
        iVar1 = 0x8b;
        line = 0xb4;
      }
    }
    else {
      piVar2 = (int *)__errno();
      ERR_put_error(2,0xf,*piVar2,"crypto/bio/b_sock2.c",0xa6);
      iVar1 = 0x86;
      line = 0xa7;
    }
  }
  ERR_put_error(0x20,0x8b,iVar1,"crypto/bio/b_sock2.c",line);
  return 0;
}

