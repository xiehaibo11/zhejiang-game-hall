
ulong ec_GFp_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,undefined1 *param_4,ulong param_5,
                BN_CTX *param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  BIGNUM *x;
  BIGNUM *y;
  size_t sVar4;
  int line;
  uint uVar5;
  BN_CTX *c;
  ulong uVar6;
  long lVar7;
  
  if ((param_3 < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x54U) != 0)) {
    iVar3 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar3 != 0) {
      if (param_4 == (undefined1 *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0x68,100,"crypto/ec/ecp_oct.c",0xb4);
        return 0;
      }
      *param_4 = 0;
      return 1;
    }
    iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
    uVar5 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar5 = iVar3 + 7U;
    }
    uVar2 = (long)((ulong)uVar5 << 0x20) >> 0x23;
    uVar1 = (uVar2 << (param_3 != 2)) + 1;
    if (param_4 == (undefined1 *)0x0) {
      c = (BN_CTX *)0x0;
      goto LAB_00b15f28;
    }
    if (uVar1 <= param_5) {
      if (param_6 == (BN_CTX *)0x0) {
        param_6 = BN_CTX_new();
        c = param_6;
        if (param_6 == (BN_CTX *)0x0) {
          return 0;
        }
      }
      else {
        c = (BN_CTX *)0x0;
      }
      BN_CTX_start(param_6);
      x = BN_CTX_get(param_6);
      y = BN_CTX_get(param_6);
      if ((y != (BIGNUM *)0x0) &&
         (iVar3 = EC_POINT_get_affine_coordinates_GFp(param_1,param_2,x,y,param_6), iVar3 != 0)) {
        uVar5 = param_3;
        if (((param_3 | 4) == 6) && (iVar3 = BN_is_odd(y), iVar3 != 0)) {
          uVar5 = param_3 + 1;
        }
        *param_4 = (char)uVar5;
        iVar3 = BN_num_bits(x);
        uVar5 = iVar3 + 0xe;
        if (-1 < (int)(iVar3 + 7U)) {
          uVar5 = iVar3 + 7U;
        }
        lVar7 = (long)((ulong)uVar5 << 0x20) >> 0x23;
        sVar4 = uVar2 - lVar7;
        if (uVar2 < sVar4) {
          iVar3 = 0xe3;
        }
        else {
          uVar6 = uVar2 + 1;
          if (sVar4 == 0) {
            lVar7 = 1;
          }
          else {
            memset(param_4 + 1,0,sVar4);
            lVar7 = uVar6 - lVar7;
          }
          iVar3 = BN_bn2bin(x,param_4 + lVar7);
          if (lVar7 + iVar3 == uVar6) {
            if ((param_3 | 2) == 6) {
              iVar3 = BN_num_bits(y);
              uVar5 = iVar3 + 0xe;
              if (-1 < (int)(iVar3 + 7U)) {
                uVar5 = iVar3 + 7U;
              }
              lVar7 = (long)((ulong)uVar5 << 0x20) >> 0x23;
              sVar4 = uVar2 - lVar7;
              if (uVar2 < sVar4) {
                iVar3 = 0xf5;
                goto LAB_00b160f0;
              }
              if (sVar4 != 0) {
                memset(param_4 + uVar6,0,sVar4);
                uVar6 = (uVar6 + uVar2) - lVar7;
              }
              iVar3 = BN_bn2bin(y,param_4 + uVar6);
              uVar6 = uVar6 + (long)iVar3;
            }
            if (uVar6 == uVar1) {
              BN_CTX_end(param_6);
LAB_00b15f28:
              BN_CTX_free(c);
              return uVar1;
            }
            iVar3 = 0x101;
          }
          else {
            iVar3 = 0xed;
          }
        }
LAB_00b160f0:
        ERR_put_error(0x10,0x68,0x44,"crypto/ec/ecp_oct.c",iVar3);
      }
      BN_CTX_end(param_6);
      goto LAB_00b15ed0;
    }
    iVar3 = 100;
    line = 0xc5;
  }
  else {
    iVar3 = 0x68;
    line = 0xac;
  }
  ERR_put_error(0x10,0x68,iVar3,"crypto/ec/ecp_oct.c",line);
  c = (BN_CTX *)0x0;
LAB_00b15ed0:
  BN_CTX_free(c);
  return 0;
}

