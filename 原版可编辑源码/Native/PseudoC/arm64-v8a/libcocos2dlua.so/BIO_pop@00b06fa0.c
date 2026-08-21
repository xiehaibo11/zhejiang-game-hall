
BIO * BIO_pop(BIO *b)

{
  long lVar1;
  _func_599 *p_Var2;
  bio_st *pbVar3;
  bio_st *pbVar4;
  bio_st **ppbVar5;
  _func_603 *p_Var6;
  
  if (b == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  ppbVar5 = &b->next_bio;
  pbVar4 = *ppbVar5;
  if ((b->method == (BIO_METHOD *)0x0) || (p_Var2 = b->method->ctrl, p_Var2 == (_func_599 *)0x0)) {
                    /* try { // try from 00b07048 to 00c0711f has its CatchHandler @ 00b06f0c */
    ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
  }
  else {
    p_Var6 = b->callback;
    if (p_Var6 == (_func_603 *)0x0) {
      (*p_Var2)(b,7,0,b);
      pbVar3 = b->prev_bio;
      goto joined_r0x00b07060;
    }
    lVar1 = (*p_Var6)(b,6,(char *)b,7,0,1);
    if (0 < lVar1) {
                    /* try { // try from 00b0700c to 00c07013 has its CatchHandler @ 00b070d4 */
      lVar1 = (*b->method->ctrl)(b,7,0,b);
                    /* try { // try from 00b0701c to 00c07027 has its CatchHandler @ 00b070c4 */
      (*p_Var6)(b,0x86,(char *)b,7,0,lVar1);
      pbVar3 = b->prev_bio;
      goto joined_r0x00b07060;
    }
  }
  pbVar3 = b->prev_bio;
joined_r0x00b07060:
  if (pbVar3 != (bio_st *)0x0) {
    pbVar3->next_bio = *ppbVar5;
  }
  if (*ppbVar5 != (bio_st *)0x0) {
    (*ppbVar5)->prev_bio = pbVar3;
  }
  *ppbVar5 = (bio_st *)0x0;
  b->prev_bio = (bio_st *)0x0;
  return pbVar4;
}

