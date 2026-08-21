
int BIO_dump_indent_fp(FILE *fp,char *s,int len,int indent)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00af2d2c with catch @ 00af2d90 */
                    /* try { // try from 00af2d94 to 00bf2ed3 has its CatchHandler @ 00af2d94
                       catch() { ... } // from try @ 00af2d94 with catch @ 00af2d94
                       catch() { ... } // from try @ 00af2ee0 with catch @ 00af2d94 */
  iVar1 = BIO_dump_indent_cb(FUN_00af2d6c,fp,s,len,indent);
  return iVar1;
}

