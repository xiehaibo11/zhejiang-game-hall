
/* v8::internal::BignumDtoa(double, v8::internal::BignumDtoaMode, int, v8::internal::Vector<char>,
   int*, int*) */

void __thiscall
v8::internal::BignumDtoa
          (ulong param_1,int param_2,int param_3,undefined1 *param_4,undefined8 param_5,int *param_6
          ,uint *param_7)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Bignum *pBVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  Bignum aBStack_8c8 [536];
  Bignum aBStack_6b0 [536];
  Bignum aBStack_498 [536];
  Bignum aBStack_280 [544];
  
  uVar11 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar13 = param_1 & 0xfffffffffffff;
  uVar2 = uVar13;
  iVar7 = -0x432;
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar2 = param_1 & 0xfffffffffffff | 0x10000000000000;
    iVar7 = uVar11 - 0x433;
  }
  uVar1 = uVar2 >> 0x34;
  uVar5 = uVar2;
  iVar8 = iVar7;
  while (uVar1 == 0) {
    iVar8 = iVar8 + -1;
    uVar1 = uVar5 >> 0x33 & 1;
    uVar5 = uVar5 << 1;
  }
  uVar12 = (uint)((double)(iVar8 + 0x34) * 0.30102999566398114 + -1e-10);
  if ((param_2 == 1) && (param_3 < (int)~uVar12)) {
    *param_4 = 0;
    *param_6 = 0;
    *param_7 = -param_3;
    return;
  }
  Bignum::Bignum(aBStack_280);
  Bignum::Bignum(aBStack_498);
  Bignum::Bignum(aBStack_6b0);
  Bignum::Bignum(aBStack_8c8);
  if (iVar7 < 0) {
    if ((int)uVar12 < 0) {
      Bignum::AssignPowerUInt16(aBStack_280,10,-uVar12);
      if (param_2 == 0) {
        Bignum::AssignBignum(aBStack_8c8,aBStack_280);
        Bignum::AssignBignum(aBStack_6b0,aBStack_280);
        Bignum::MultiplyByUInt64(aBStack_280,uVar2);
        Bignum::AssignUInt16(aBStack_498,1);
        Bignum::ShiftLeft(aBStack_498,-iVar7);
        Bignum::ShiftLeft(aBStack_280,1);
        Bignum::ShiftLeft(aBStack_498,1);
        if ((uVar13 != 0) || ((param_1 & 0x7ff0000000000000) == 0x10000000000000))
        goto LAB_01523724;
        Bignum::ShiftLeft(aBStack_280,1);
        pBVar10 = aBStack_498;
        goto LAB_015236d8;
      }
      Bignum::MultiplyByUInt64(aBStack_280,uVar2);
      Bignum::AssignUInt16(aBStack_498,1);
      iVar7 = -iVar7;
      pBVar10 = aBStack_498;
LAB_01523720:
      Bignum::ShiftLeft(pBVar10,iVar7);
    }
    else {
      Bignum::AssignUInt64(aBStack_280,uVar2);
      Bignum::AssignPowerUInt16(aBStack_498,10,uVar12);
      iVar7 = 0x432;
      if ((param_1 & 0x7ff0000000000000) != 0) {
        iVar7 = 0x433 - uVar11;
      }
      Bignum::ShiftLeft(aBStack_498,iVar7);
      if (param_2 == 0) {
        Bignum::ShiftLeft(aBStack_498,1);
        Bignum::ShiftLeft(aBStack_280,1);
        Bignum::AssignUInt16(aBStack_8c8,1);
        Bignum::AssignUInt16(aBStack_6b0,1);
        goto joined_r0x015236c4;
      }
    }
  }
  else {
    Bignum::AssignUInt64(aBStack_280,uVar2);
    Bignum::ShiftLeft(aBStack_280,iVar7);
    Bignum::AssignPowerUInt16(aBStack_498,10,uVar12);
    if (param_2 == 0) {
      Bignum::ShiftLeft(aBStack_498,1);
      Bignum::ShiftLeft(aBStack_280,1);
      Bignum::AssignUInt16(aBStack_8c8,1);
      Bignum::ShiftLeft(aBStack_8c8,iVar7);
      Bignum::AssignUInt16(aBStack_6b0,1);
      Bignum::ShiftLeft(aBStack_6b0,iVar7);
joined_r0x015236c4:
      if (uVar13 == 0) {
        Bignum::ShiftLeft(aBStack_498,1);
        pBVar10 = aBStack_280;
LAB_015236d8:
        Bignum::ShiftLeft(pBVar10,1);
        pBVar10 = aBStack_8c8;
        iVar7 = 1;
        goto LAB_01523720;
      }
    }
  }
LAB_01523724:
  iVar7 = Bignum::PlusCompare(aBStack_280,aBStack_8c8,aBStack_498);
  bVar3 = -1 < iVar7;
  if ((uVar2 & 1) != 0) {
    bVar3 = 0 < iVar7;
  }
  if (bVar3) {
    *param_7 = uVar12 + 1;
  }
  else {
    *param_7 = uVar12;
    Bignum::MultiplyByUInt32(aBStack_280,10);
    iVar7 = Bignum::Compare(aBStack_6b0,aBStack_8c8);
    Bignum::MultiplyByUInt32(aBStack_6b0,10);
    if (iVar7 == 0) {
      Bignum::AssignBignum(aBStack_8c8,aBStack_6b0);
    }
    else {
      Bignum::MultiplyByUInt32(aBStack_8c8,10);
    }
  }
  if (param_2 == 2) {
LAB_015238f0:
    FUN_01523a20(param_3,param_7,aBStack_280,aBStack_498,param_4,param_5,param_6);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      iVar7 = Bignum::Compare(aBStack_6b0,aBStack_8c8);
      pBVar10 = aBStack_6b0;
      if (iVar7 != 0) {
        pBVar10 = aBStack_8c8;
      }
      *param_6 = 0;
      while( true ) {
        cVar6 = Bignum::DivideModuloIntBignum(aBStack_280,aBStack_498);
        iVar8 = *param_6;
        *param_6 = iVar8 + 1;
        param_4[iVar8] = cVar6 + '0';
        iVar8 = Bignum::Compare(aBStack_280,aBStack_6b0);
        iVar9 = Bignum::PlusCompare(aBStack_280,pBVar10,aBStack_498);
        bVar3 = -1 < iVar9;
        bVar4 = iVar8 < 1;
        if ((uVar2 & 1) != 0) {
          bVar3 = 0 < iVar9;
          bVar4 = iVar8 < 0;
        }
        if ((bVar4) || (bVar3)) break;
        Bignum::MultiplyByUInt32(aBStack_280,10);
        Bignum::MultiplyByUInt32(aBStack_6b0,10);
        if (iVar7 != 0) {
          Bignum::MultiplyByUInt32(pBVar10,10);
        }
      }
      if ((bool)(bVar4 & bVar3)) {
        iVar7 = Bignum::PlusCompare(aBStack_280,aBStack_280,aBStack_498);
        if (-1 < iVar7) {
          if ((iVar7 != 0) || ((param_4[(long)*param_6 + -1] & 1) != 0)) {
            param_4[(long)*param_6 + -1] = param_4[(long)*param_6 + -1] + 1;
          }
        }
      }
      else if (!bVar4) {
        param_4[(long)*param_6 + -1] = param_4[(long)*param_6 + -1] + '\x01';
      }
      goto LAB_01523900;
    }
    iVar7 = -*param_7;
    if (param_3 < iVar7) {
      *param_7 = -param_3;
    }
    else {
      if (iVar7 != param_3) {
        param_3 = *param_7 + param_3;
        goto LAB_015238f0;
      }
      Bignum::MultiplyByUInt32(aBStack_498,10);
      iVar7 = Bignum::PlusCompare(aBStack_280,aBStack_280,aBStack_498);
      if (-1 < iVar7) {
        *param_4 = 0x31;
        *param_6 = 1;
        *param_7 = *param_7 + 1;
        goto LAB_01523900;
      }
    }
    *param_6 = 0;
  }
LAB_01523900:
  param_4[*param_6] = 0;
  return;
}

