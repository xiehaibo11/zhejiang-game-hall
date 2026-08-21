
BIO * BIO_pop(BIO *b)

{
  long lVar1;
  _func_599 *p_Var2;
  bio_st *pbVar3;
  bio_st *pbVar4;
  bio_st **ppbVar5;
  _func_603 *p_Var6;
  
                    /* catch() { ... } // from try @ 00af6aa4 with catch @ 00af6b30 */
  if (b == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  ppbVar5 = &b->next_bio;
  pbVar4 = *ppbVar5;
                    /* catch() { ... } // from try @ 00af6aa0 with catch @ 00af6b40 */
  if ((b->method == (BIO_METHOD *)0x0) || (p_Var2 = b->method->ctrl, p_Var2 == (_func_599 *)0x0)) {
                    /* catch() { ... } // from try @ 00af6b80 with catch @ 00af6bc4 */
    ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
  }
  else {
    p_Var6 = b->callback;
                    /* catch() { ... } // from try @ 00af6b88 with catch @ 00af6b54 */
    if (p_Var6 == (_func_603 *)0x0) {
                    /* try { // try from 00af6c1c to 00bf6c7b has its CatchHandler @ 00af6be8 */
      (*p_Var2)(b,7,0,b);
      pbVar3 = b->prev_bio;
      goto joined_r0x00af6be0;
    }
    lVar1 = (*p_Var6)(b,6,(char *)b,7,0,1);
    if (0 < lVar1) {
                    /* try { // try from 00af6b80 to 00bf6b87 has its CatchHandler @ 00af6bc4 */
                    /* try { // try from 00af6b88 to 00bf6be7 has its CatchHandler @ 00af6b54 */
      lVar1 = (*b->method->ctrl)(b,7,0,b);
      (*p_Var6)(b,0x86,(char *)b,7,0,lVar1);
      pbVar3 = b->prev_bio;
      goto joined_r0x00af6be0;
    }
  }
  pbVar3 = b->prev_bio;
joined_r0x00af6be0:
  if (pbVar3 != (bio_st *)0x0) {
                    /* catch() { ... } // from try @ 00af6c1c with catch @ 00af6be8 */
    pbVar3->next_bio = *ppbVar5;
  }
  if (*ppbVar5 != (bio_st *)0x0) {
    (*ppbVar5)->prev_bio = pbVar3;
  }
  *ppbVar5 = (bio_st *)0x0;
  b->prev_bio = (bio_st *)0x0;
                    /* try { // try from 00af6c14 to 00bf6c1b has its CatchHandler @ 00af6c58 */
  return pbVar4;
}

