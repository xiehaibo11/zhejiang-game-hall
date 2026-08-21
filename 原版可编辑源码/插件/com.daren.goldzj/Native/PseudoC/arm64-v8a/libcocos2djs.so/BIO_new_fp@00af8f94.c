
BIO * BIO_new_fp(FILE *stream,int close_flag)

{
  BIO *b;
  
  b = BIO_new((BIO_METHOD *)&DAT_01c73eb8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af8f24 with catch @ 00af8fbc
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8f4c with catch @ 00af8fbc
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8f74 with catch @ 00af8fbc
                        */
  if (b != (BIO *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af8ec4 with catch @ 00af8fc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8ef0 with catch @ 00af8fc0
                        */
    BIO_set_flags(b,0);
    BIO_ctrl(b,0x6a,(long)close_flag,stream);
  }
  return b;
}

