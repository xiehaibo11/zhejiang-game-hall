
int BIO_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar1 = socket(param_1,param_2,param_3);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar2 = (int *)__errno();
    ERR_put_error(2,4,*piVar2,"crypto/bio/b_sock2.c",0x31);
                    /* try { // try from 00b052c8 to 00c05357 has its CatchHandler @ 00b052c8
                       catch() { ... } // from try @ 00b052c8 with catch @ 00b052c8
                       catch() { ... } // from try @ 00b05364 with catch @ 00b052c8 */
    ERR_put_error(0x20,0x8c,0x76,"crypto/bio/b_sock2.c",0x32);
  }
  return -1;
}

