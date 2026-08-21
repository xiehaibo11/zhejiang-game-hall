
int DSO_set_filename(DSO *dso,char *filename)

{
  DSO_MERGER_FUNC pDVar1;
  int reason;
  int line;
  
  if ((dso == (DSO *)0x0) || (filename == (char *)0x0)) {
    reason = 0x43;
    line = 0xf4;
  }
  else if (dso->filename == (char *)0x0) {
    pDVar1 = (DSO_MERGER_FUNC)CRYPTO_strdup(filename,"crypto/dso/dso_lib.c",0xfc);
    if (pDVar1 != (DSO_MERGER_FUNC)0x0) {
                    /* try { // try from 00b093d4 to 00c093e7 has its CatchHandler @ 00b09abc */
      CRYPTO_free(dso->merger);
      dso->merger = pDVar1;
      return 1;
    }
    reason = 0x41;
    line = 0xfe;
  }
  else {
    reason = 0x6e;
    line = 0xf8;
  }
  ERR_put_error(0x25,0x81,reason,"crypto/dso/dso_lib.c",line);
  return 0;
}

