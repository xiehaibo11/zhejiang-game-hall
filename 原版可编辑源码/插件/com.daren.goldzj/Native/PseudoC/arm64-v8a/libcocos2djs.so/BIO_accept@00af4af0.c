
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
  
                    /* try { // try from 00af4afc to 00bf4b03 has its CatchHandler @ 00af4b54 */
                    /* try { // try from 00af4b04 to 00bf4ba7 has its CatchHandler @ 00af419c */
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
                    /* catch() { ... } // from try @ 00af4a18 with catch @ 00af4b3c */
  __s_00 = (char *)BIO_ADDR_service_string(auStack_b0,1);
  if ((__s == (char *)0x0) || (__s_00 == (char *)0x0)) {
    *ip_port = (char *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00af4afc with catch @ 00af4b54 */
    sVar2 = strlen(__s);
    sVar3 = strlen(__s_00);
                    /* catch() { ... } // from try @ 00af4adc with catch @ 00af4b70 */
                    /* catch() { ... } // from try @ 00af4ac4 with catch @ 00af4b74 */
    pcVar4 = (char *)CRYPTO_zalloc(sVar2 + sVar3 + 2,"crypto/bio/b_sock.c",0x10b);
    *ip_port = pcVar4;
    if (pcVar4 != (char *)0x0) {
      strcpy(pcVar4,__s);
                    /* catch() { ... } // from try @ 00af4a80 with catch @ 00af4b8c */
      pcVar4 = *ip_port;
      sVar2 = strlen(pcVar4);
      pcVar4 = pcVar4 + sVar2;
      pcVar4[0] = ':';
      pcVar4[1] = '\0';
                    /* try { // try from 00af4ba8 to 00bf4ca7 has its CatchHandler @ 00af4ba8
                       catch() { ... } // from try @ 00af4ba8 with catch @ 00af4ba8
                       catch() { ... } // from try @ 00af4cb4 with catch @ 00af4ba8
                       catch() { ... } // from try @ 00af4d58 with catch @ 00af4ba8
                       catch() { ... } // from try @ 00af4d94 with catch @ 00af4ba8 */
      strcat(*ip_port,__s_00);
      goto LAB_00af4bec;
    }
  }
  ERR_put_error(0x20,0x65,0x41,"crypto/bio/b_sock.c",0x110);
  BIO_closesocket(iVar1);
  iVar1 = -1;
LAB_00af4bec:
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
  return iVar1;
}

