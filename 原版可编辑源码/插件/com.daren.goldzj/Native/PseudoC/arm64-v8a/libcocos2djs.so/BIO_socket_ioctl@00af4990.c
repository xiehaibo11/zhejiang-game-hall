
int BIO_socket_ioctl(int fd,long type,void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ioctl(fd,type);
  if (iVar1 < 0) {
    piVar2 = (int *)__errno();
    ERR_put_error(2,5,*piVar2,"crypto/bio/b_sock.c",0xce);
  }
  return iVar1;
}

