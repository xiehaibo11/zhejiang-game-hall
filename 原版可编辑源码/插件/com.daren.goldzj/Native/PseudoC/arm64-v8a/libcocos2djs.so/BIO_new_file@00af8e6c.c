
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
  pcVar1 = strchr(mode,0x62);
  larg = 0x11;
  if (pcVar1 != (char *)0x0) {
    larg = 1;
  }
  if (__stream == (FILE *)0x0) {
    puVar2 = (uint *)__errno();
                    /* try { // try from 00af8ef0 to 00bf8efb has its CatchHandler @ 00af8fc0 */
                    /* try { // try from 00af8efc to 00bf8f23 has its CatchHandler @ 00af8e5c */
    ERR_put_error(2,1,*puVar2,"crypto/bio/bss_file.c",0x4a);
                    /* try { // try from 00af8f24 to 00bf8f2b has its CatchHandler @ 00af8fbc */
    ERR_add_error_data(5,"fopen(\'",filename,&DAT_018a9a1a,mode,"\')");
                    /* try { // try from 00af8f2c to 00bf8f4b has its CatchHandler @ 00af8e5c */
    if ((*puVar2 | 4) == 6) {
                    /* try { // try from 00af8f4c to 00bf8f53 has its CatchHandler @ 00af8fbc */
      reason = 0x80;
      line = 0x51;
                    /* try { // try from 00af8f54 to 00bf8f73 has its CatchHandler @ 00af8e5c */
    }
    else {
      reason = 2;
      line = 0x53;
    }
    ERR_put_error(0x20,0x6d,reason,"crypto/bio/bss_file.c",line);
    b = (BIO *)0x0;
  }
  else {
    b = BIO_new((BIO_METHOD *)&DAT_01c73eb8);
    if (b == (BIO *)0x0) {
      fclose(__stream);
    }
    else {
                    /* try { // try from 00af8ec4 to 00bf8ecb has its CatchHandler @ 00af8fc0 */
      BIO_clear_flags(b,0);
                    /* try { // try from 00af8ecc to 00bf8eef has its CatchHandler @ 00af8e5c */
      BIO_ctrl(b,0x6a,larg,__stream);
    }
  }
                    /* try { // try from 00af8f74 to 00bf8f7f has its CatchHandler @ 00af8fbc */
                    /* try { // try from 00af8f80 to 00bf8fc3 has its CatchHandler @ 00af8e5c */
  return b;
}

