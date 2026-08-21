
undefined1  [16]
FUN_01068dcc(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  Bignum *this;
  Bignum *this_00;
  double dVar4;
  double dVar5;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  undefined8 uVar8;
  Bignum aBStack_480 [536];
  Bignum aBStack_268 [536];
  
  uVar8 = param_1._8_8_;
  dVar5 = param_1._0_8_;
  this_00 = aBStack_480;
  this = aBStack_480;
  uVar7 = 0;
  dVar4 = INFINITY;
  if (dVar5 == INFINITY) goto LAB_01068f28;
  bVar2 = ((ulong)dVar5 & 0x7ff0000000000000) != 0;
  uVar1 = ((ulong)dVar5 & 0xfffffffffffff) << 1;
  if (bVar2) {
    uVar1 = ((ulong)dVar5 & 0xfffffffffffff) << 1 | 0x20000000000000;
  }
  iVar3 = -0x433;
  if (bVar2) {
    iVar3 = (param_1._4_4_ >> 0x14 & 0x7ff) - 0x434;
  }
  v8::internal::Bignum::Bignum(aBStack_268);
  v8::internal::Bignum::Bignum(aBStack_480);
  v8::internal::Bignum::AssignDecimalString(aBStack_268,param_2,param_3);
  v8::internal::Bignum::AssignUInt64(aBStack_480,uVar1 | 1);
  if (param_4 < 0) {
    param_4 = -param_4;
  }
  else {
    this = aBStack_268;
  }
  v8::internal::Bignum::MultiplyByPowerOfTen(this,param_4);
  if (iVar3 < 1) {
    iVar3 = -iVar3;
    this_00 = aBStack_268;
  }
  v8::internal::Bignum::ShiftLeft(this_00,iVar3);
  uVar7 = uVar8;
  iVar3 = v8::internal::Bignum::Compare(aBStack_268,aBStack_480);
  dVar4 = dVar5;
  if (iVar3 < 0) goto LAB_01068f28;
  if (iVar3 == 0) {
    uVar1 = (ulong)dVar5 & 0xfffffffffffff;
    if (((ulong)dVar5 & 0x7ff0000000000000) != 0) {
      uVar1 = (ulong)dVar5 & 0xfffffffffffff | 0x10000000000000;
    }
    if ((uVar1 & 1) == 0) goto LAB_01068f28;
    if (dVar5 != INFINITY) {
      if (-1 < (long)dVar5) goto LAB_01068f1c;
      goto joined_r0x01068f48;
    }
  }
  else if (dVar5 != INFINITY) {
    if ((long)dVar5 < 0) {
      uVar1 = (ulong)dVar5 & 0xfffffffffffff;
      if (((ulong)dVar5 & 0x7ff0000000000000) != 0) {
        uVar1 = (ulong)dVar5 & 0xfffffffffffff | 0x10000000000000;
      }
joined_r0x01068f48:
      if (uVar1 == 0) {
        uVar7 = 0;
        dVar4 = 0.0;
        goto LAB_01068f28;
      }
      dVar4 = (double)((long)dVar5 + -1);
    }
    else {
LAB_01068f1c:
      dVar4 = (double)((long)dVar5 + 1);
    }
    uVar7 = 0;
    goto LAB_01068f28;
  }
  uVar7 = 0;
  dVar4 = INFINITY;
LAB_01068f28:
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = dVar4;
  return auVar6;
}

