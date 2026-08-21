
undefined8
BIO_lookup(char *param_1,char *param_2,int param_3,int param_4,uint param_5,addrinfo **param_6)

{
  addrinfo *paVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  addrinfo *paVar5;
  char *pcVar6;
  int line;
  addrinfo local_70;
  
                    /* try { // try from 00af26e4 to 00bf26e7 has its CatchHandler @ 00af2730 */
                    /* try { // try from 00af26e8 to 00bf2777 has its CatchHandler @ 00af266c */
  switch(param_4) {
  case 0:
  case 2:
  case 10:
    iVar2 = BIO_sock_init();
    if (iVar2 != 1) {
      return 0;
    }
    local_70.ai_addr = (sockaddr *)0x0;
    local_70.ai_addrlen = 0;
    local_70._20_4_ = 0;
    local_70.ai_next = (addrinfo *)0x0;
    local_70.ai_canonname = (char *)0x0;
    local_70.ai_protocol = 0;
    local_70.ai_socktype = param_5;
                    /* catch() { ... } // from try @ 00af26e4 with catch @ 00af2730 */
    local_70.ai_family = param_4;
    local_70.ai_flags = (uint)(param_3 == 1);
    iVar2 = getaddrinfo(param_1,param_2,&local_70,param_6);
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 != 0xb) {
      ERR_put_error(0x20,0x87,2,"crypto/bio/b_addr.c",0x2b4);
      pcVar6 = gai_strerror(iVar2);
      ERR_add_error_data(1,pcVar6);
      return 0;
    }
    piVar3 = (int *)__errno();
                    /* try { // try from 00af2778 to 00bf27f3 has its CatchHandler @ 00af2778
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2778 with catch @ 00af2778
                        */
    ERR_put_error(2,0xc,*piVar3,"crypto/bio/b_addr.c",0x2ac);
    iVar2 = 2;
    line = 0x2ad;
    break;
  case 1:
    sVar4 = strlen(param_1);
    if (param_6 == (addrinfo **)0x0) {
                    /* try { // try from 00af297c to 00bf2a53 has its CatchHandler @ 00af297c
                       catch() { ... } // from try @ 00af297c with catch @ 00af297c
                       catch() { ... } // from try @ 00af2ac4 with catch @ 00af297c
                       catch() { ... } // from try @ 00af2b64 with catch @ 00af297c
                       catch() { ... } // from try @ 00af2bc8 with catch @ 00af297c */
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: bai != NULL","crypto/bio/b_addr.c",0x238);
    }
    paVar5 = (addrinfo *)CRYPTO_zalloc(0x30,"crypto/bio/b_addr.c",0x23a);
    *param_6 = paVar5;
    if (paVar5 != (addrinfo *)0x0) {
      paVar5->ai_family = 1;
      paVar5->ai_socktype = param_5;
      if (param_5 == 1) {
        iVar2 = 6;
LAB_00af283c:
        paVar5->ai_protocol = iVar2;
      }
      else if (param_5 == 2) {
        iVar2 = 0x11;
        goto LAB_00af283c;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af27f4 with catch @ 00af284c
                        */
      paVar5->ai_protocol = 0;
      pcVar6 = (char *)CRYPTO_zalloc(0x70,"crypto/bio/b_addr.c",0x28);
      if (pcVar6 == (char *)0x0) {
        ERR_put_error(0x20,0x90,0x41,"crypto/bio/b_addr.c",0x2b);
      }
      else {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        if (sVar4 + 1 < 0x6d) {
          memset(pcVar6,0,0x6e);
          pcVar6[0] = '\x01';
          pcVar6[1] = '\0';
          strncpy(pcVar6 + 2,param_1,0x6b);
        }
        (*param_6)->ai_canonname = pcVar6;
      }
      (*param_6)->ai_next = (addrinfo *)0x0;
      paVar5 = *param_6;
      if (paVar5->ai_canonname != (char *)0x0) {
        return 1;
      }
      if (paVar5 != (addrinfo *)0x0) {
        if (paVar5->ai_family == 1) {
          do {
            paVar1 = paVar5->ai_next;
            CRYPTO_free(paVar5->ai_canonname);
            CRYPTO_free(paVar5);
            paVar5 = paVar1;
          } while (paVar1 != (addrinfo *)0x0);
        }
        else {
          freeaddrinfo(paVar5);
        }
      }
      *param_6 = (addrinfo *)0x0;
    }
    iVar2 = 0x41;
    line = 0x292;
    break;
  default:
                    /* try { // try from 00af27f4 to 00bf27f7 has its CatchHandler @ 00af284c */
    iVar2 = 0x83;
    line = 0x289;
  }
  ERR_put_error(0x20,0x87,iVar2,"crypto/bio/b_addr.c",line);
  return 0;
}

