
BIO * BIO_get_retry_BIO(BIO *bio,int *reason)

{
  BIO *pBVar1;
  BIO *pBVar2;
  
  pBVar1 = bio;
  do {
    pBVar2 = bio;
                    /* catch() { ... } // from try @ 00b0701c with catch @ 00b070c4 */
    if (((byte)pBVar2->flags >> 3 & 1) == 0) break;
                    /* catch() { ... } // from try @ 00b0700c with catch @ 00b070d4 */
                    /* catch() { ... } // from try @ 00b0703c with catch @ 00b070d8 */
    pBVar1 = pBVar2;
    bio = pBVar2->next_bio;
  } while (pBVar2->next_bio != (bio_st *)0x0);
  if (reason != (int *)0x0) {
    *reason = pBVar1->retry_reason;
  }
  return pBVar1;
}

