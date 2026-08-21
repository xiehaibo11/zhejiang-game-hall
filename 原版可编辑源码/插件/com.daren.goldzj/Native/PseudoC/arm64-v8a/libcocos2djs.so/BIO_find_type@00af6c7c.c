
BIO * BIO_find_type(BIO *b,int bio_type)

{
                    /* catch() { ... } // from try @ 00af6cb4 with catch @ 00af6c7c */
  if (b != (BIO *)0x0) {
    if ((bio_type & 0xffU) == 0) {
      do {
                    /* try { // try from 00af6cac to 00bf6cb3 has its CatchHandler @ 00af6cf0 */
                    /* try { // try from 00af6cb4 to 00bf6d13 has its CatchHandler @ 00af6c7c */
        if ((b->method != (BIO_METHOD *)0x0) && ((b->method->type & bio_type) != 0)) {
          return b;
        }
        b = b->next_bio;
      } while (b != (bio_st *)0x0);
    }
    else {
      do {
        if ((b->method != (BIO_METHOD *)0x0) && (b->method->type == bio_type)) {
          return b;
        }
        b = b->next_bio;
      } while (b != (bio_st *)0x0);
    }
  }
  return (BIO *)0x0;
}

