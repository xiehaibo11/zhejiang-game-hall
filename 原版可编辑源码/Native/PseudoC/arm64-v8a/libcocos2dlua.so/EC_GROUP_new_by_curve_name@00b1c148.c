
EC_GROUP * EC_GROUP_new_by_curve_name(int nid)

{
  uchar *s;
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  BN_CTX *ctx;
  BIGNUM *p;
  BIGNUM *a;
  BIGNUM *b;
  EC_METHOD *meth;
  EC_GROUP *group;
  size_t sVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  BIGNUM *x;
  EC_POINT *p_00;
  BIGNUM *y;
  BIGNUM *order;
  
  if (0 < nid) {
    uVar9 = 0;
    puVar7 = (undefined8 *)&UNK_016b04d0;
    do {
      if (*(int *)(puVar7 + -2) == nid) {
        piVar1 = (int *)puVar7[-1];
        pcVar2 = (code *)*puVar7;
        ctx = BN_CTX_new();
        if (ctx == (BN_CTX *)0x0) {
          ERR_put_error(0x10,0xaf,0x41,"crypto/ec/ec_curve.c",0xbb6);
          p = (BIGNUM *)0x0;
          a = (BIGNUM *)0x0;
LAB_00b1c2b0:
          b = (BIGNUM *)0x0;
          x = (BIGNUM *)0x0;
          y = (BIGNUM *)0x0;
          order = (BIGNUM *)0x0;
          p_00 = (EC_POINT *)0x0;
          group = (EC_GROUP *)0x0;
LAB_00b1c2c8:
          EC_GROUP_free(group);
          group = (EC_GROUP *)0x0;
        }
        else {
          iVar6 = piVar1[1];
          iVar4 = piVar1[2];
          s = (uchar *)((long)(piVar1 + 4) + (long)iVar6);
          p = BN_bin2bn(s,iVar4,(BIGNUM *)0x0);
          if (p == (BIGNUM *)0x0) {
LAB_00b1c264:
            a = (BIGNUM *)0x0;
LAB_00b1c268:
            ERR_put_error(0x10,0xaf,3,"crypto/ec/ec_curve.c",0xbc3);
            goto LAB_00b1c2b0;
          }
          lVar8 = (long)iVar4;
          a = BN_bin2bn(s + lVar8,iVar4,(BIGNUM *)0x0);
          if (a == (BIGNUM *)0x0) goto LAB_00b1c264;
          b = BN_bin2bn(s + lVar8 * 2,iVar4,(BIGNUM *)0x0);
          if (b == (BIGNUM *)0x0) goto LAB_00b1c268;
          if (uVar9 != 0x13) {
            if (*piVar1 != 0x196) {
              group = (EC_GROUP *)EC_GROUP_new_curve_GF2m(p,a,b,ctx);
              if (group == (EC_GROUP *)0x0) {
                iVar6 = 0xbd9;
                goto LAB_00b1c4f8;
              }
              goto LAB_00b1c3cc;
            }
            group = EC_GROUP_new_curve_GFp(p,a,b,ctx);
            if (group != (EC_GROUP *)0x0) goto LAB_00b1c3cc;
            iVar6 = 0xbd0;
LAB_00b1c4f8:
            ERR_put_error(0x10,0xaf,0x10,"crypto/ec/ec_curve.c",iVar6);
            x = (BIGNUM *)0x0;
            y = (BIGNUM *)0x0;
            order = (BIGNUM *)0x0;
            p_00 = (EC_POINT *)0x0;
            goto LAB_00b1c2c8;
          }
          meth = (EC_METHOD *)(*pcVar2)();
          group = EC_GROUP_new(meth);
          if ((group == (EC_GROUP *)0x0) ||
             (iVar3 = (**(code **)(*(long *)group + 0x28))(group,p,a,b,ctx), iVar3 == 0)) {
            iVar6 = 0xbcb;
            goto LAB_00b1c4f8;
          }
LAB_00b1c3cc:
          p_00 = EC_POINT_new(group);
          if (p_00 == (EC_POINT *)0x0) {
            ERR_put_error(0x10,0xaf,0x10,"crypto/ec/ec_curve.c",0xbe0);
            x = (BIGNUM *)0x0;
LAB_00b1c4d4:
            y = (BIGNUM *)0x0;
LAB_00b1c4d8:
            order = (BIGNUM *)0x0;
            goto LAB_00b1c2c8;
          }
          x = BN_bin2bn(s + lVar8 * 3,iVar4,(BIGNUM *)0x0);
          if ((x == (BIGNUM *)0x0) ||
             (y = BN_bin2bn(s + lVar8 * 4,iVar4,(BIGNUM *)0x0), y == (BIGNUM *)0x0)) {
            ERR_put_error(0x10,0xaf,3,"crypto/ec/ec_curve.c",0xbe6);
            goto LAB_00b1c4d4;
          }
          iVar3 = EC_POINT_set_affine_coordinates_GFp(group,p_00,x,y,ctx);
          if (iVar3 == 0) {
            ERR_put_error(0x10,0xaf,0x10,"crypto/ec/ec_curve.c",0xbea);
            goto LAB_00b1c4d8;
          }
          order = BN_bin2bn(s + iVar4 * 5,iVar4,(BIGNUM *)0x0);
          if ((order == (BIGNUM *)0x0) ||
             (iVar4 = BN_set_word(x,(ulong)(uint)piVar1[3]), iVar4 == 0)) {
            ERR_put_error(0x10,0xaf,3,"crypto/ec/ec_curve.c",0xbef);
            goto LAB_00b1c2c8;
          }
          iVar4 = EC_GROUP_set_generator(group,p_00,order,x);
          if (iVar4 == 0) {
            ERR_put_error(0x10,0xaf,0x10,"crypto/ec/ec_curve.c",0xbf3);
            goto LAB_00b1c2c8;
          }
          if ((iVar6 != 0) &&
             (sVar5 = EC_GROUP_set_seed(group,(uchar *)(piVar1 + 4),(long)iVar6), sVar5 == 0)) {
            ERR_put_error(0x10,0xaf,0x10,"crypto/ec/ec_curve.c",0xbf8);
            goto LAB_00b1c2c8;
          }
        }
        EC_POINT_free(p_00);
        BN_CTX_free(ctx);
        BN_free(p);
        BN_free(a);
        BN_free(b);
        BN_free(order);
        BN_free(x);
        BN_free(y);
        if (group != (EC_GROUP *)0x0) {
          EC_GROUP_set_curve_name(group,nid);
          return group;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar9 < 0x51);
    ERR_put_error(0x10,0xae,0x81,"crypto/ec/ec_curve.c",0xc1c);
  }
  return (EC_GROUP *)0x0;
}

