
int ec_GFp_simple_oct2point
              (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar6;
  int line;
  uint uVar7;
  BN_CTX *c;
  
  if (param_4 == 0) {
    iVar4 = 100;
    line = 0x11d;
LAB_00b16264:
    ERR_put_error(0x10,0x67,iVar4,"crypto/ec/ecp_oct.c",line);
    return 0;
  }
  bVar2 = *param_3;
  uVar7 = (uint)bVar2;
  uVar5 = uVar7 & 0xfe;
  if ((6 < uVar5) || ((1 << (ulong)(uVar7 & 0x1e) & 0x55U) == 0)) {
    iVar4 = 0x66;
    line = 0x126;
    goto LAB_00b16264;
  }
  if (((bVar2 & 1) != 0) && ((uVar5 | 4) == 4)) {
    iVar4 = 0x66;
    line = 0x12a;
    goto LAB_00b16264;
  }
  if ((bVar2 & 0xfe) == 0) {
    if (param_4 == 1) {
      iVar4 = EC_POINT_set_to_infinity(param_1,param_2);
      return iVar4;
    }
    iVar4 = 0x66;
    line = 0x130;
    goto LAB_00b16264;
  }
  iVar4 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  uVar1 = iVar4 + 0xe;
  if (-1 < (int)(iVar4 + 7U)) {
    uVar1 = iVar4 + 7U;
  }
  lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  if ((lVar3 << (uVar5 != 2)) + 1 != param_4) {
    iVar4 = 0x66;
    line = 0x13d;
    goto LAB_00b16264;
  }
  if (param_5 == (BN_CTX *)0x0) {
    param_5 = BN_CTX_new();
    c = param_5;
    if (param_5 == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_5);
  ret = BN_CTX_get(param_5);
  ret_00 = BN_CTX_get(param_5);
  if (ret_00 != (BIGNUM *)0x0) {
    pBVar6 = BN_bin2bn(param_3 + 1,(int)uVar1 >> 3,ret);
    if (pBVar6 != (BIGNUM *)0x0) {
      iVar4 = BN_ucmp(ret,*(BIGNUM **)(param_1 + 0x40));
      if (iVar4 < 0) {
        if (uVar5 == 2) {
          iVar4 = EC_POINT_set_compressed_coordinates_GFp(param_1,param_2,ret,uVar7 & 1,param_5);
joined_r0x00b163b8:
          if (iVar4 != 0) {
            iVar4 = 1;
            goto LAB_00b16308;
          }
        }
        else {
          pBVar6 = BN_bin2bn(param_3 + 1 + lVar3,(int)uVar1 >> 3,ret_00);
          if (pBVar6 != (BIGNUM *)0x0) {
            iVar4 = BN_ucmp(ret_00,*(BIGNUM **)(param_1 + 0x40));
            if (iVar4 < 0) {
              if ((uVar5 != 6) || (uVar5 = BN_is_odd(ret_00), (uVar7 & 1) == uVar5)) {
                iVar4 = EC_POINT_set_affine_coordinates_GFp(param_1,param_2,ret,ret_00,param_5);
                goto joined_r0x00b163b8;
              }
              iVar4 = 0x161;
            }
            else {
              iVar4 = 0x15c;
            }
            goto LAB_00b16300;
          }
        }
      }
      else {
        iVar4 = 0x150;
LAB_00b16300:
        ERR_put_error(0x10,0x67,0x66,"crypto/ec/ecp_oct.c",iVar4);
      }
    }
  }
  iVar4 = 0;
LAB_00b16308:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return iVar4;
}

