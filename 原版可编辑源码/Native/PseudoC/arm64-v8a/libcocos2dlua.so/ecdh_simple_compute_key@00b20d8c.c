
undefined4
ecdh_simple_compute_key(undefined8 *param_1,long *param_2,EC_POINT *param_3,EC_KEY *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  BN_CTX *ctx;
  BIGNUM *cofactor;
  BIGNUM *y;
  BIGNUM *b;
  EC_GROUP *group;
  EC_POINT *r;
  EC_METHOD *meth;
  int iVar6;
  undefined4 uVar7;
  void *__s;
  
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    EC_POINT_free((EC_POINT *)0x0);
    __s = (void *)0x0;
    uVar7 = 0;
    goto LAB_00b21048;
  }
  BN_CTX_start(ctx);
  cofactor = BN_CTX_get(ctx);
  y = BN_CTX_get(ctx);
  b = EC_KEY_get0_private_key(param_4);
  if (b == (BIGNUM *)0x0) {
    iVar5 = 0x9a;
    iVar6 = 0x48;
LAB_00b20efc:
    ERR_put_error(0x10,0x101,iVar5,"crypto/ec/ecdh_ossl.c",iVar6);
    uVar7 = 0;
    r = (EC_POINT *)0x0;
LAB_00b21034:
    __s = (void *)0x0;
  }
  else {
    group = EC_KEY_get0_group(param_4);
    uVar4 = EC_KEY_get_flags(param_4);
    if (((uVar4 >> 0xc & 1) != 0) &&
       ((iVar5 = EC_GROUP_get_cofactor(group,cofactor,(BN_CTX *)0x0), iVar5 == 0 ||
        (iVar5 = BN_mul(cofactor,cofactor,b,ctx), b = cofactor, iVar5 == 0)))) {
      iVar5 = 0x41;
      iVar6 = 0x51;
      goto LAB_00b20efc;
    }
    r = EC_POINT_new(group);
    if (r == (EC_POINT *)0x0) {
      iVar5 = 0x41;
      iVar6 = 0x58;
LAB_00b2102c:
      ERR_put_error(0x10,0x101,iVar5,"crypto/ec/ecdh_ossl.c",iVar6);
      uVar7 = 0;
      goto LAB_00b21034;
    }
    iVar5 = EC_POINT_mul(group,r,(BIGNUM *)0x0,param_3,b,ctx);
    if (iVar5 == 0) {
      iVar5 = 0x9b;
      iVar6 = 0x5d;
      goto LAB_00b2102c;
    }
    meth = EC_GROUP_method_of(group);
    iVar5 = EC_METHOD_get_field_type(meth);
    if (iVar5 != 0x196) {
      iVar5 = EC_POINT_get_affine_coordinates_GF2m(group,r,cofactor,y,ctx);
      if (iVar5 != 0) goto LAB_00b20f60;
      iVar5 = 0x9b;
      iVar6 = 0x6b;
      goto LAB_00b2102c;
    }
    iVar5 = EC_POINT_get_affine_coordinates_GFp(group,r,cofactor,y,ctx);
    if (iVar5 == 0) {
      iVar5 = 0x9b;
      iVar6 = 100;
      goto LAB_00b2102c;
    }
LAB_00b20f60:
    iVar5 = EC_GROUP_get_degree(group);
    uVar4 = iVar5 + 0xe;
    if (-1 < (int)(iVar5 + 7U)) {
      uVar4 = iVar5 + 7U;
    }
    iVar5 = BN_num_bits(cofactor);
    uVar1 = iVar5 + 0xe;
    if (-1 < (int)(iVar5 + 7U)) {
      uVar1 = iVar5 + 7U;
    }
    if ((uint)((int)uVar4 >> 3) < (uint)((int)uVar1 >> 3)) {
      iVar5 = 0x44;
      iVar6 = 0x74;
      goto LAB_00b2102c;
    }
    lVar2 = (long)((ulong)uVar4 << 0x20) >> 0x23;
    __s = CRYPTO_malloc((int)uVar4 >> 3,"crypto/ec/ecdh_ossl.c",0x77);
    if (__s != (void *)0x0) {
      lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      memset(__s,0,lVar2 - lVar3);
      uVar4 = BN_bn2bin(cofactor,(uchar *)((long)__s + (lVar2 - lVar3)));
      if ((int)uVar1 >> 3 != uVar4) {
        iVar5 = 3;
        iVar6 = 0x7e;
        goto LAB_00b210b8;
      }
      *param_1 = __s;
      *param_2 = lVar2;
      uVar7 = 1;
      goto LAB_00b21034;
    }
    iVar5 = 0x41;
    iVar6 = 0x78;
LAB_00b210b8:
    ERR_put_error(0x10,0x101,iVar5,"crypto/ec/ecdh_ossl.c",iVar6);
    uVar7 = 0;
  }
  EC_POINT_free(r);
  BN_CTX_end(ctx);
LAB_00b21048:
  BN_CTX_free(ctx);
  CRYPTO_free(__s);
  return uVar7;
}

