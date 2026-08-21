
undefined8 FUN_00af20a4(sockaddr *param_1,int param_2,long *param_3,long *param_4)

{
  sa_family_t sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  socklen_t __salen;
  int line;
  uint uVar5;
  char local_468 [36];
  char acStack_444 [1028];
  
  iVar2 = BIO_sock_init();
  if (iVar2 != 1) {
    return 0;
  }
  memset(acStack_444,0,0x401);
  local_468[0x18] = '\0';
  local_468[0x19] = '\0';
  local_468[0x1a] = '\0';
  local_468[0x1b] = '\0';
  local_468[0x1c] = '\0';
  local_468[0x1d] = '\0';
  local_468[0x1e] = '\0';
  local_468[0x1f] = '\0';
  local_468[0x10] = '\0';
  local_468[0x11] = '\0';
  local_468[0x12] = '\0';
  local_468[0x13] = '\0';
  local_468[0x14] = '\0';
  local_468[0x15] = '\0';
  local_468[0x16] = '\0';
  local_468[0x17] = '\0';
  local_468[8] = '\0';
  local_468[9] = '\0';
  local_468[10] = '\0';
  local_468[0xb] = '\0';
  local_468[0xc] = '\0';
  local_468[0xd] = '\0';
  local_468[0xe] = '\0';
  local_468[0xf] = '\0';
                    /* try { // try from 00af20f0 to 00bf2133 has its CatchHandler @ 00af20f0
                       catch() { ... } // from try @ 00af20f0 with catch @ 00af20f0
                       catch() { ... } // from try @ 00af21e4 with catch @ 00af20f0 */
  local_468[0] = '\0';
  local_468[1] = '\0';
  local_468[2] = '\0';
  local_468[3] = '\0';
  local_468[4] = '\0';
  local_468[5] = '\0';
  local_468[6] = '\0';
  local_468[7] = '\0';
  sVar1 = param_1->sa_family;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = 10;
  }
  if (sVar1 == 1) {
    __salen = 0x6e;
  }
  else if (sVar1 == 2) {
    __salen = 0x10;
  }
  else if (sVar1 == 10) {
    __salen = 0x1c;
  }
  else {
                    /* try { // try from 00af2134 to 00bf2137 has its CatchHandler @ 00af22d8 */
    __salen = 0x70;
  }
  iVar2 = getnameinfo(param_1,__salen,acStack_444,0x401,local_468,0x20,uVar5);
  if (iVar2 != 0) {
    if (iVar2 != 0xb) {
                    /* try { // try from 00af21c8 to 00bf21e3 has its CatchHandler @ 00af22e4 */
      ERR_put_error(0x20,0x86,2,"crypto/bio/b_addr.c",0xd7);
      pcVar4 = gai_strerror(iVar2);
                    /* try { // try from 00af21e4 to 00bf22ff has its CatchHandler @ 00af20f0 */
      ERR_add_error_data(1,pcVar4);
      return 0;
    }
    piVar3 = (int *)__errno();
    ERR_put_error(2,0xd,*piVar3,"crypto/bio/b_addr.c",0xd2);
                    /* try { // try from 00af2188 to 00bf218b has its CatchHandler @ 00af22d4 */
    iVar2 = 2;
    line = 0xd3;
    goto LAB_00af22d0;
  }
  if (local_468[0] == '\0') {
    if ((param_1->sa_family | 8) == 10) {
      uVar5 = (uint)*(ushort *)param_1->sa_data;
    }
    else {
      uVar5 = 0;
    }
    BIO_snprintf(local_468,0x20,"%d",(ulong)(uVar5 >> 8 | (uVar5 & 0xff00ff) << 8));
  }
  if (param_3 != (long *)0x0) {
    pcVar4 = CRYPTO_strdup(acStack_444,"crypto/bio/b_addr.c",0xe9);
    *param_3 = (long)pcVar4;
  }
  if (param_4 != (long *)0x0) {
    pcVar4 = CRYPTO_strdup(local_468,"crypto/bio/b_addr.c",0xeb);
    *param_4 = (long)pcVar4;
  }
  if ((param_3 == (long *)0x0) || (*param_3 != 0)) {
    if ((param_4 == (long *)0x0) || (*param_4 != 0)) {
      return 1;
    }
    if (param_3 != (long *)0x0) {
      CRYPTO_free((void *)*param_3);
      *param_3 = 0;
    }
LAB_00af22a0:
    CRYPTO_free((void *)*param_4);
    *param_4 = 0;
  }
  else {
    CRYPTO_free((void *)0x0);
    *param_3 = 0;
    if (param_4 != (long *)0x0) goto LAB_00af22a0;
  }
  iVar2 = 0x41;
  line = 0x101;
LAB_00af22d0:
  ERR_put_error(0x20,0x86,iVar2,"crypto/bio/b_addr.c",line);
                    /* catch() { ... } // from try @ 00af2188 with catch @ 00af22d4 */
                    /* catch() { ... } // from try @ 00af2134 with catch @ 00af22d8 */
                    /* catch() { ... } // from try @ 00af21c8 with catch @ 00af22e4 */
  return 0;
}

