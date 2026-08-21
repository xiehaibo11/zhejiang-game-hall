
int BIO_get_port(char *str,ushort *port_ptr)

{
  int iVar1;
  uint uVar2;
  undefined8 local_28;
  
  local_28 = 0;
  if (str == (char *)0x0) {
    ERR_put_error(0x20,0x6b,0x71,"crypto/bio/b_sock.c",0x45);
  }
  else {
    iVar1 = BIO_lookup(0,str,0,2,1,&local_28);
    if (iVar1 != 0) {
      iVar1 = BIO_ADDRINFO_family(local_28);
      if (iVar1 != 2) {
        ERR_put_error(0x20,0x6b,0x8d,"crypto/bio/b_sock.c",0x4f);
      }
      else {
        BIO_ADDRINFO_address(local_28);
        uVar2 = BIO_ADDR_rawport();
        *port_ptr = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
      }
      BIO_ADDRINFO_free(local_28);
      return (uint)(iVar1 == 2);
    }
    ERR_add_error_data(2,"host=",str);
  }
  return 0;
}

