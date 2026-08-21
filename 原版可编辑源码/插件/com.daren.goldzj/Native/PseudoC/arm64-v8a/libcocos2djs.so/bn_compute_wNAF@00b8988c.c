
undefined1 * bn_compute_wNAF(BIGNUM *param_1,uint param_2,ulong *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int line;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  iVar4 = BN_is_zero();
  if (iVar4 == 0) {
    if (param_2 - 1 < 7) {
      iVar4 = BN_is_negative(param_1);
      cVar1 = -1;
      if (iVar4 == 0) {
        cVar1 = '\x01';
      }
      if ((param_1->d != (ulong *)0x0) && (param_1->top != 0)) {
        iVar4 = BN_num_bits(param_1);
        uVar9 = (ulong)iVar4;
        puVar5 = CRYPTO_malloc((int)(uVar9 + 1),"crypto/bn/bn_intern.c",0x3c);
        if (puVar5 == (undefined1 *)0x0) {
          iVar4 = 0x41;
          line = 0x42;
        }
        else {
          uVar2 = 1 << (ulong)(param_2 & 0x1f);
          uVar3 = uVar2 * 2;
          uVar8 = (uint)*param_1->d & uVar3 - 1;
          uVar6 = 0;
          do {
            if (uVar8 == 0) {
              if (uVar9 <= (long)(int)param_2 + 1 + uVar6) {
                if (uVar6 <= uVar9 + 1) {
                  *param_3 = uVar6;
                  return puVar5;
                }
                iVar4 = 0x44;
                line = 0x82;
                goto LAB_00b8992c;
              }
              uVar8 = 0;
LAB_00b89a3c:
              uVar7 = 0;
            }
            else {
              if ((uVar8 & 1) == 0) goto LAB_00b89a3c;
              uVar7 = uVar8;
              if ((uVar8 & uVar2) != 0) {
                uVar7 = uVar8 + uVar2 * -2;
                if (uVar9 <= (long)(int)param_2 + 1 + uVar6) {
                  uVar7 = uVar8 & (int)(uVar3 - 1) >> 1;
                }
              }
              if ((((int)uVar2 <= (int)uVar7) || ((int)uVar7 <= (int)-uVar2)) || ((uVar7 & 1) == 0))
              {
                iVar4 = 0x44;
                line = 0x65;
                goto LAB_00b8992c;
              }
              uVar8 = uVar8 - uVar7;
              if (((uVar8 != uVar2) && (uVar8 != 0)) && (uVar8 != uVar3)) {
                iVar4 = 0x44;
                line = 0x71;
                goto LAB_00b8992c;
              }
            }
            puVar5[uVar6] = (char)uVar7 * cVar1;
            iVar4 = BN_is_bit_set(param_1,param_2 + (int)uVar6 + 1);
            uVar8 = (iVar4 << (ulong)(param_2 & 0x1f)) + ((int)uVar8 >> 1);
            uVar6 = uVar6 + 1;
          } while ((int)uVar8 <= (int)uVar3);
          iVar4 = 0x44;
          line = 0x7c;
        }
        goto LAB_00b8992c;
      }
      iVar4 = 0x37;
    }
    else {
      iVar4 = 0x2b;
    }
    ERR_put_error(3,0x8e,0x44,"crypto/bn/bn_intern.c",iVar4);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = CRYPTO_malloc(1,"crypto/bn/bn_intern.c",0x1f);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      *param_3 = 1;
      return puVar5;
    }
    iVar4 = 0x41;
    line = 0x21;
    puVar5 = (undefined1 *)0x0;
LAB_00b8992c:
    ERR_put_error(3,0x8e,iVar4,"crypto/bn/bn_intern.c",line);
  }
  CRYPTO_free(puVar5);
  return (undefined1 *)0x0;
}

