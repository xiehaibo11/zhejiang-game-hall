
int SSL_add_dir_cert_subjects_to_stack(stack_st_X509_NAME *stackCAs,char *dir)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  int line;
  char acStack_448 [1024];
  long local_48;
  
  local_48 = 0;
  __s = (char *)OPENSSL_DIR_read(&local_48);
  do {
    if (__s == (char *)0x0) {
      piVar4 = (int *)__errno();
      if (*piVar4 == 0) {
        iVar1 = 1;
      }
      else {
        ERR_put_error(2,10,*piVar4,"ssl/ssl_cert.c",0x2d8);
        ERR_add_error_data(3,"OPENSSL_DIR_read(&ctx, \'",dir,&DAT_013d1655);
        iVar1 = 2;
        line = 0x2da;
LAB_00ad1688:
        ERR_put_error(0x14,0xd7,iVar1,"ssl/ssl_cert.c",line);
LAB_00ad168c:
        iVar1 = 0;
      }
      if (local_48 != 0) {
        OPENSSL_DIR_end(&local_48);
      }
      return iVar1;
    }
    sVar2 = strlen(dir);
    sVar3 = strlen(__s);
    if (0x400 < sVar2 + sVar3 + 2) {
      iVar1 = 0x10e;
      line = 0x2c9;
      goto LAB_00ad1688;
    }
    iVar1 = BIO_snprintf(acStack_448,0x400,"%s/%s",dir,__s);
    if ((0x3fe < iVar1 - 1U) ||
       (iVar1 = SSL_add_file_cert_subjects_to_stack(stackCAs,acStack_448), iVar1 == 0))
    goto LAB_00ad168c;
    __s = (char *)OPENSSL_DIR_read(&local_48,dir);
  } while( true );
}

