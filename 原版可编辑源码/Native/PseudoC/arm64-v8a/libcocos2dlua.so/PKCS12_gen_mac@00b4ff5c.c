
int PKCS12_gen_mac(PKCS12 *p12,char *pass,int passlen,uchar *mac,uint *maclen)

{
  int iVar1;
  
  iVar1 = FUN_00b4ff64((int)p12,pass,passlen,mac,maclen,0);
  return iVar1;
}

