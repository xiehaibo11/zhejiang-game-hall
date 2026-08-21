
int BIO_socket_nbio(int fd,int mode)

{
  int iVar1;
  int *piVar2;
  int local_14;
  
                    /* try { // try from 00af4cb4 to 00bf4ceb has its CatchHandler @ 00af4ba8 */
  local_14 = mode;
  iVar1 = ioctl(fd,0x5421,&local_14);
  if (iVar1 < 0) {
    piVar2 = (int *)__errno();
                    /* try { // try from 00af4cec to 00bf4cf3 has its CatchHandler @ 00af4de4 */
    ERR_put_error(2,5,*piVar2,"crypto/bio/b_sock.c",0xce);
  }
  return (int)(iVar1 == 0);
}

