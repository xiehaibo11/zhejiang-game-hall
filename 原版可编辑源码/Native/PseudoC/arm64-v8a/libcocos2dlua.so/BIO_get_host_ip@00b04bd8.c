
int BIO_get_host_ip(char *str,uchar *ip)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = BIO_lookup(str,0,0,2,1,&local_28);
  if (iVar1 == 0) {
    ERR_add_error_data(2,"host=",str);
    iVar1 = 0;
  }
  else {
    iVar1 = BIO_ADDRINFO_family(local_28);
    if (iVar1 == 2) {
      uVar2 = BIO_ADDRINFO_address(local_28);
      BIO_ADDR_rawaddress(uVar2,0,&local_30);
      if (local_30 != 4) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: l == 4","crypto/bio/b_sock.c",0x32);
      }
      uVar2 = BIO_ADDRINFO_address(local_28);
      BIO_ADDR_rawaddress(uVar2,ip,&local_30);
      iVar1 = 1;
    }
    else {
      ERR_put_error(0x20,0x6a,0x6b,"crypto/bio/b_sock.c",0x2d);
      iVar1 = 0;
    }
    BIO_ADDRINFO_free(local_28);
  }
  return iVar1;
}

