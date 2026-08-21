
BIO * BIO_get_retry_BIO(BIO *bio,int *reason)

{
  BIO *pBVar1;
  BIO *pBVar2;
  
  pBVar1 = bio;
  do {
    pBVar2 = bio;
    if (((byte)pBVar2->flags >> 3 & 1) == 0) break;
                    /* catch() { ... } // from try @ 00af6c14 with catch @ 00af6c58 */
    pBVar1 = pBVar2;
    bio = pBVar2->next_bio;
  } while (pBVar2->next_bio != (bio_st *)0x0);
  if (reason != (int *)0x0) {
    *reason = pBVar1->retry_reason;
  }
  return pBVar1;
}

