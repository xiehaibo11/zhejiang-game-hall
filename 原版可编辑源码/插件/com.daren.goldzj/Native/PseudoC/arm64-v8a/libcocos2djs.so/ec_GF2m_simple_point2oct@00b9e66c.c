
ulong ec_GF2m_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,char *param_4,ulong param_5,
                BN_CTX *param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  size_t sVar6;
  int line;
  BN_CTX *c;
  ulong uVar7;
  long lVar8;
  
  if ((param_3 < 7) && ((1 << (ulong)(param_3 & 0x1f) & 0x54U) != 0)) {
    iVar4 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar4 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0xa1,100,"crypto/ec/ec2_oct.c",0x94);
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar4 = EC_GROUP_get_degree(param_1);
    uVar2 = iVar4 + 0xe;
    if (-1 < (int)(iVar4 + 7U)) {
      uVar2 = iVar4 + 7U;
    }
    uVar3 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    uVar1 = (uVar3 << (param_3 != 2)) + 1;
    if (param_4 == (char *)0x0) {
      c = (BN_CTX *)0x0;
      goto LAB_00b9e7b4;
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
      a = BN_CTX_get(param_6);
      a_00 = BN_CTX_get(param_6);
      pBVar5 = BN_CTX_get(param_6);
      if ((pBVar5 != (BIGNUM *)0x0) &&
         (iVar4 = EC_POINT_get_affine_coordinates_GF2m(param_1,param_2,a,a_00,param_6), iVar4 != 0))
      {
        *param_4 = (char)param_3;
        if ((param_3 != 4) && (iVar4 = BN_is_zero(a), iVar4 == 0)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x118))(param_1,pBVar5,a_00,a,param_6);
          if (iVar4 == 0) goto LAB_00b9e9c0;
          iVar4 = BN_is_odd(pBVar5);
          if (iVar4 != 0) {
            *param_4 = *param_4 + '\x01';
          }
        }
        iVar4 = BN_num_bits(a);
        uVar2 = iVar4 + 0xe;
        if (-1 < (int)(iVar4 + 7U)) {
          uVar2 = iVar4 + 7U;
        }
        lVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        sVar6 = uVar3 - lVar8;
        if (uVar3 < sVar6) {
          iVar4 = 0xc6;
        }
        else {
          uVar7 = uVar3 + 1;
          if (sVar6 == 0) {
            lVar8 = 1;
          }
          else {
            memset(param_4 + 1,0,sVar6);
            lVar8 = uVar7 - lVar8;
          }
          iVar4 = BN_bn2bin(a,(uchar *)(param_4 + lVar8));
          if (lVar8 + iVar4 == uVar7) {
            if ((param_3 | 2) == 6) {
              iVar4 = BN_num_bits(a_00);
              uVar2 = iVar4 + 0xe;
              if (-1 < (int)(iVar4 + 7U)) {
                uVar2 = iVar4 + 7U;
              }
              lVar8 = (long)((ulong)uVar2 << 0x20) >> 0x23;
              sVar6 = uVar3 - lVar8;
              if (uVar3 < sVar6) {
                iVar4 = 0xd8;
                goto LAB_00b9e9bc;
              }
              if (sVar6 != 0) {
                memset(param_4 + uVar7,0,sVar6);
                uVar7 = (uVar7 + uVar3) - lVar8;
              }
              iVar4 = BN_bn2bin(a_00,(uchar *)(param_4 + uVar7));
              uVar7 = uVar7 + (long)iVar4;
            }
            if (uVar7 == uVar1) {
              BN_CTX_end(param_6);
LAB_00b9e7b4:
              BN_CTX_free(c);
              return uVar1;
            }
            iVar4 = 0xe4;
          }
          else {
            iVar4 = 0xd0;
          }
        }
LAB_00b9e9bc:
        ERR_put_error(0x10,0xa1,0x44,"crypto/ec/ec2_oct.c",iVar4);
      }
LAB_00b9e9c0:
      BN_CTX_end(param_6);
      goto LAB_00b9e758;
    }
    iVar4 = 100;
    line = 0xa5;
  }
  else {
    iVar4 = 0x68;
    line = 0x8c;
  }
  ERR_put_error(0x10,0xa1,iVar4,"crypto/ec/ec2_oct.c",line);
  c = (BN_CTX *)0x0;
LAB_00b9e758:
  BN_CTX_free(c);
  return 0;
}

