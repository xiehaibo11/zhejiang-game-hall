
int BIO_accept(int sock,char **ip_port)

{
  int iVar1;
  char *__s;
  char *__s_00;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 auStack_b0 [112];
  
  iVar1 = BIO_accept_ex(sock,auStack_b0,0);
  if (iVar1 == -1) {
    iVar1 = BIO_sock_should_retry(-1);
    if (iVar1 != 0) {
      return -2;
    }
    piVar5 = (int *)__errno();
    ERR_put_error(2,8,*piVar5,"crypto/bio/b_sock.c",0x102);
    ERR_put_error(0x20,0x65,100,"crypto/bio/b_sock.c",0x103);
    return -1;
  }
  if (ip_port == (char **)0x0) {
    return iVar1;
  }
  __s = (char *)BIO_ADDR_hostname_string(auStack_b0,1);
  __s_00 = (char *)BIO_ADDR_service_string(auStack_b0,1);
  if ((__s == (char *)0x0) || (__s_00 == (char *)0x0)) {
    *ip_port = (char *)0x0;
  }
  else {
    sVar2 = strlen(__s);
    sVar3 = strlen(__s_00);
    pcVar4 = (char *)CRYPTO_zalloc(sVar2 + sVar3 + 2,"crypto/bio/b_sock.c",0x10b);
    *ip_port = pcVar4;
    if (pcVar4 != (char *)0x0) {
      strcpy(pcVar4,__s);
      pcVar4 = *ip_port;
      sVar2 = strlen(pcVar4);
      pcVar4 = pcVar4 + sVar2;
      pcVar4[0] = ':';
      pcVar4[1] = '\0';
      strcat(*ip_port,__s_00);
      goto LAB_00b0506c;
    }
  }
  ERR_put_error(0x20,0x65,0x41,"crypto/bio/b_sock.c",0x110);
  BIO_closesocket(iVar1);
  iVar1 = -1;
LAB_00b0506c:
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
  return iVar1;
}

