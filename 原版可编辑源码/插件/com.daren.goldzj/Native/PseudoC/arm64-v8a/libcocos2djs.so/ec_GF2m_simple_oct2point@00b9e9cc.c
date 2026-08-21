
int ec_GF2m_simple_oct2point
              (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  BN_CTX *c;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  int line;
  uint uVar8;
  
  if (param_4 == 0) {
    iVar4 = 100;
    line = 0x105;
LAB_00b9eb38:
    ERR_put_error(0x10,0xa0,iVar4,"crypto/ec/ec2_oct.c",line);
    return 0;
  }
  bVar2 = *param_3;
  uVar8 = (uint)bVar2;
  uVar5 = uVar8 & 0xfe;
  if ((6 < uVar5) || ((1 << (ulong)(uVar8 & 0x1e) & 0x55U) == 0)) {
    iVar4 = 0x66;
    line = 0x10e;
    goto LAB_00b9eb38;
  }
  if (((bVar2 & 1) != 0) && ((uVar5 | 4) == 4)) {
    iVar4 = 0x66;
    line = 0x112;
    goto LAB_00b9eb38;
  }
  if ((bVar2 & 0xfe) == 0) {
    if (param_4 == 1) {
      iVar4 = EC_POINT_set_to_infinity(param_1,param_2);
      return iVar4;
    }
    iVar4 = 0x66;
    line = 0x118;
    goto LAB_00b9eb38;
  }
  iVar4 = EC_GROUP_get_degree(param_1);
  uVar1 = iVar4 + 0xe;
  if (-1 < (int)(iVar4 + 7U)) {
    uVar1 = iVar4 + 7U;
  }
  lVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  if ((lVar3 << (uVar5 != 2)) + 1 != param_4) {
    iVar4 = 0x66;
    line = 0x125;
    goto LAB_00b9eb38;
  }
  if (param_5 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    param_5 = c;
    if (c == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_5);
  ret = BN_CTX_get(param_5);
  ret_00 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  if (pBVar6 != (BIGNUM *)0x0) {
    pBVar7 = BN_bin2bn(param_3 + 1,(int)uVar1 >> 3,ret);
    if (pBVar7 != (BIGNUM *)0x0) {
      iVar4 = BN_ucmp(ret,*(BIGNUM **)(param_1 + 0x40));
      if (iVar4 < 0) {
        if (uVar5 == 2) {
          iVar4 = EC_POINT_set_compressed_coordinates_GF2m(param_1,param_2,ret,uVar8 & 1,param_5);
        }
        else {
          pBVar7 = BN_bin2bn(param_3 + 1 + lVar3,(int)uVar1 >> 3,ret_00);
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_00b9ebe8;
          iVar4 = BN_ucmp(ret_00,*(BIGNUM **)(param_1 + 0x40));
          if (-1 < iVar4) {
            iVar4 = 0x145;
            goto LAB_00b9ebe4;
          }
          if (uVar5 == 6) {
            iVar4 = (**(code **)(*(long *)param_1 + 0x118))(param_1,pBVar6,ret_00,ret,param_5);
            if (iVar4 == 0) goto LAB_00b9ebe8;
            uVar5 = BN_is_odd(pBVar6);
            if ((uVar8 & 1) != uVar5) {
              iVar4 = 0x14c;
              goto LAB_00b9ebe4;
            }
          }
          iVar4 = EC_POINT_set_affine_coordinates_GF2m(param_1,param_2,ret,ret_00,param_5);
        }
        if (iVar4 != 0) {
          iVar4 = 1;
          goto LAB_00b9ebec;
        }
      }
      else {
        iVar4 = 0x139;
LAB_00b9ebe4:
        ERR_put_error(0x10,0xa0,0x66,"crypto/ec/ec2_oct.c",iVar4);
      }
    }
  }
LAB_00b9ebe8:
  iVar4 = 0;
LAB_00b9ebec:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return iVar4;
}

