
int X509_NAME_print_ex_fp(FILE *fp,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  BIO *bp;
  
                    /* catch() { ... } // from try @ 00ae9810 with catch @ 00ae9850 */
  if (flags != 0) {
    iVar1 = FUN_00ae9460(&LAB_00ae98e4,fp,nm,indent,flags);
    return iVar1;
  }
  bp = BIO_new_fp(fp,0);
  if (bp == (BIO *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = X509_NAME_print(bp,nm,indent);
    BIO_free(bp);
  }
  return iVar1;
}

