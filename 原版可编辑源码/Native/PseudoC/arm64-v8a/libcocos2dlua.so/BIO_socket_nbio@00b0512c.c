
int BIO_socket_nbio(int fd,int mode)

{
  int iVar1;
  int *piVar2;
  int local_14;
  
  local_14 = mode;
  iVar1 = ioctl(fd,0x5421,&local_14);
  if (iVar1 < 0) {
    piVar2 = (int *)__errno();
    ERR_put_error(2,5,*piVar2,"crypto/bio/b_sock.c",0xce);
  }
  return (int)(iVar1 == 0);
}

