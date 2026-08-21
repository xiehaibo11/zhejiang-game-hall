
BIO * BIO_new_file(char *filename,char *mode)

{
  long larg;
  FILE *__stream;
  char *pcVar1;
  BIO *b;
  uint *puVar2;
  int reason;
  int line;
  
  __stream = openssl_fopen(filename,mode);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b08474 with catch @ 00b0830c
                        */
  pcVar1 = strchr(mode,0x62);
  larg = 0x11;
  if (pcVar1 != (char *)0x0) {
    larg = 1;
  }
  if (__stream == (FILE *)0x0) {
    puVar2 = (uint *)__errno();
    ERR_put_error(2,1,*puVar2,"crypto/bio/bss_file.c",0x4a);
    ERR_add_error_data(5,&DAT_013da006,filename,0x13da00e,mode,&DAT_013d1655);
    if ((*puVar2 | 4) == 6) {
      reason = 0x80;
      line = 0x51;
    }
    else {
      reason = 2;
      line = 0x53;
    }
    ERR_put_error(0x20,0x6d,reason,"crypto/bio/bss_file.c",line);
    b = (BIO *)0x0;
  }
  else {
                    /* try { // try from 00b08330 to 00c08473 has its CatchHandler @ 00b08670 */
    b = BIO_new((BIO_METHOD *)&DAT_016aee08);
    if (b == (BIO *)0x0) {
      fclose(__stream);
    }
    else {
      BIO_clear_flags(b,0);
      BIO_ctrl(b,0x6a,larg,__stream);
    }
  }
  return b;
}

