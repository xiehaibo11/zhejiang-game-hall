
BIO * BIO_next(BIO *b)

{
  BIO *pBVar1;
  
  pBVar1 = (BIO *)0x0;
  if (b != (BIO *)0x0) {
    pBVar1 = b->next_bio;
  }
  return pBVar1;
}

