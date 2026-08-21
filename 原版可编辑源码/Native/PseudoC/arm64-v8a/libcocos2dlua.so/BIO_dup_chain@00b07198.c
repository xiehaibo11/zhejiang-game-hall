
BIO * BIO_dup_chain(BIO *in)

{
  bio_st *pbVar1;
  int iVar2;
  long lVar3;
  BIO *pBVar4;
  BIO *a;
  _func_599 *p_Var5;
  bio_st *pbVar6;
  _func_603 *p_Var7;
  BIO *a_00;
  bio_st *pbVar8;
  
  if (in == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  pbVar8 = (bio_st *)0x0;
  a_00 = (BIO *)0x0;
  while( true ) {
    a = BIO_new(in->method);
    if (a == (BIO *)0x0) goto joined_r0x00b073ac;
    p_Var7 = in->callback;
    a->cb_arg = in->cb_arg;
    a->callback = p_Var7;
    a->init = in->init;
    a->shutdown = in->shutdown;
    a->flags = in->flags;
    a->num = in->num;
    if ((in->method != (BIO_METHOD *)0x0) && (p_Var5 = in->method->ctrl, p_Var5 != (_func_599 *)0x0)
       ) break;
    ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
LAB_00b07288:
    iVar2 = CRYPTO_dup_ex_data(0xc,&a->ex_data,&in->ex_data);
    if (iVar2 == 0) goto LAB_00b073d4;
    pBVar4 = a;
    if ((a_00 != (BIO *)0x0) && (pBVar4 = a_00, pbVar1 = pbVar8, pbVar8 != (bio_st *)0x0)) {
      do {
        pbVar6 = pbVar1;
        pbVar1 = pbVar6->next_bio;
      } while (pbVar6->next_bio != (bio_st *)0x0);
      pbVar6->next_bio = a;
      a->prev_bio = pbVar6;
      if ((pbVar8->method == (BIO_METHOD *)0x0) ||
         (p_Var5 = pbVar8->method->ctrl, p_Var5 == (_func_599 *)0x0)) {
        ERR_put_error(0x20,0x67,0x79,"crypto/bio/bio_lib.c",0x150);
      }
      else {
        p_Var7 = pbVar8->callback;
        if (p_Var7 == (_func_603 *)0x0) {
          (*p_Var5)(pbVar8,6,0,pbVar6);
        }
        else {
          lVar3 = (*p_Var7)(pbVar8,6,(char *)pbVar6,6,0,1);
          if (0 < lVar3) {
            lVar3 = (*pbVar8->method->ctrl)(pbVar8,6,0,pbVar6);
            (*p_Var7)(pbVar8,0x86,(char *)pbVar6,6,0,lVar3);
          }
        }
      }
    }
    in = in->next_bio;
    pbVar8 = a;
    a_00 = pBVar4;
    if (in == (bio_st *)0x0) {
      return pBVar4;
    }
  }
  p_Var7 = in->callback;
  if (p_Var7 == (_func_603 *)0x0) {
    lVar3 = (*p_Var5)(in,0xc,0,a);
  }
  else {
    lVar3 = (*p_Var7)(in,6,(char *)a,0xc,0,1);
    if (0 < lVar3) {
      lVar3 = (*in->method->ctrl)(in,0xc,0,a);
      lVar3 = (*p_Var7)(in,0x86,(char *)a,0xc,0,lVar3);
    }
  }
  if (lVar3 != 0) goto LAB_00b07288;
LAB_00b073d4:
  BIO_free(a);
joined_r0x00b073ac:
  if (a_00 == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  do {
    iVar2 = a_00->references;
    pbVar8 = a_00->next_bio;
    BIO_free(a_00);
    if (1 < iVar2) {
      return (BIO *)0x0;
    }
    a_00 = pbVar8;
  } while (pbVar8 != (bio_st *)0x0);
  return (BIO *)0x0;
}

