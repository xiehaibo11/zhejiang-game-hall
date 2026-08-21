
int FUN_00b15aac(uchar *param_1,BIGNUM *param_2,DH *param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  int line;
  BN_MONT_CTX *pBVar2;
  int local_44;
  
  iVar1 = BN_num_bits(param_3->p);
  if (10000 < iVar1) {
    ERR_put_error(5,0x66,0x67,"crypto/dh/dh_key.c",0x99);
    return -1;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return -1;
  }
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  if (param_3->priv_key == (BIGNUM *)0x0) {
    iVar1 = 100;
    line = 0xa4;
LAB_00b15c24:
    ERR_put_error(5,0x66,iVar1,"crypto/dh/dh_key.c",line);
  }
  else {
    if ((param_3->flags & 1) == 0) {
      pBVar2 = (BN_MONT_CTX *)0x0;
LAB_00b15b94:
      iVar1 = DH_check_pub_key(param_3,param_2,&local_44);
      if ((iVar1 == 0) || (local_44 != 0)) {
        iVar1 = 0x66;
        line = 0xb1;
      }
      else {
        iVar1 = (**(code **)(*(long *)&(param_3->ex_data).dummy + 0x18))
                          (param_3,a,param_2,param_3->priv_key,param_3->p,ctx,pBVar2);
        if (iVar1 != 0) {
          iVar1 = BN_bn2bin(a,param_1);
          goto LAB_00b15c2c;
        }
        iVar1 = 3;
        line = 0xb7;
      }
      goto LAB_00b15c24;
    }
    pBVar2 = BN_MONT_CTX_set_locked(&param_3->method_mont_p,(int)param_3->engine,param_3->p,ctx);
    BN_set_flags(param_3->priv_key,4);
    if (pBVar2 != (BN_MONT_CTX *)0x0) goto LAB_00b15b94;
  }
  iVar1 = -1;
LAB_00b15c2c:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

