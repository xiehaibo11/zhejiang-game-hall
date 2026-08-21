
undefined8 BIO_sock_info(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  sockaddr *__addr;
  int *piVar2;
  int line;
  socklen_t local_14;
  
  if (param_2 == 0) {
    local_14 = 0x70;
                    /* try { // try from 00af4d50 to 00bf4d57 has its CatchHandler @ 00af4dac */
    __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(*param_3);
                    /* try { // try from 00af4d58 to 00bf4d8b has its CatchHandler @ 00af4ba8 */
    iVar1 = getsockname(param_1,__addr,&local_14);
    if (iVar1 == -1) {
                    /* catch() { ... } // from try @ 00af4ca8 with catch @ 00af4d94
                       catch() { ... } // from try @ 00af4d8c with catch @ 00af4d94
                       try { // try from 00af4d94 to 00bf4dff has its CatchHandler @ 00af4ba8 */
      piVar2 = (int *)__errno();
                    /* catch() { ... } // from try @ 00af4d50 with catch @ 00af4dac */
      ERR_put_error(2,0x10,*piVar2,"crypto/bio/b_sock.c",0x16c);
      iVar1 = 0x84;
      line = 0x16d;
                    /* catch() { ... } // from try @ 00af4d2c with catch @ 00af4dc8 */
                    /* catch() { ... } // from try @ 00af4d20 with catch @ 00af4dcc */
    }
    else {
      if (local_14 < 0x71) {
        return 1;
      }
      iVar1 = 0x85;
                    /* try { // try from 00af4d8c to 00bf4d93 has its CatchHandler @ 00af4d94 */
      line = 0x171;
    }
  }
  else {
                    /* try { // try from 00af4d20 to 00bf4d27 has its CatchHandler @ 00af4dcc */
    iVar1 = 0x8c;
                    /* try { // try from 00af4d2c to 00bf4d4b has its CatchHandler @ 00af4dc8 */
    line = 0x177;
  }
  ERR_put_error(0x20,0x8d,iVar1,"crypto/bio/b_sock.c",line);
  return 0;
}

