
undefined8 ssl_check_srvr_ecc_cert_and_alg(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x90) + 0x228) + 0x18) >> 3 & 1) == 0) {
    return 1;
  }
  uVar1 = X509_get_key_usage();
  if ((uVar1 >> 7 & 1) == 0) {
    ERR_put_error(0x14,0x117,0x13e,"ssl/ssl_lib.c",0xab6);
    return 0;
  }
  return 1;
}

