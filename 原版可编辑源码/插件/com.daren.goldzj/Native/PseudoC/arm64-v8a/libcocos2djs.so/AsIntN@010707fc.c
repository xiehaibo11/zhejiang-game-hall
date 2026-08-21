
/* v8::internal::BigInt::AsIntN(v8::internal::Isolate*, unsigned long,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::AsIntN(Factory *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  lVar4 = *param_3;
  if ((*(uint *)(lVar4 + 3) & 0x7ffffffe) == 0) {
    return param_3;
  }
  if (param_2 == 0) {
    plVar2 = (long *)Factory::NewBigInt(param_1,0,0);
    *(undefined4 *)(*plVar2 + 3) = 0;
    if (plVar2 != (long *)0x0) {
      MutableBigInt::Canonicalize(*plVar2);
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar5 = param_2 + 0x3fU >> 6;
  uVar6 = (ulong)(*(uint *)(lVar4 + 3) >> 1) & 0x3fffffff;
  if (uVar6 < uVar5) {
    return param_3;
  }
  uVar7 = *(ulong *)(lVar4 + ((long)((uVar5 << 0x23) + -0x800000000) >> 0x20 | 7U));
  uVar8 = 1L << (param_2 + 0x3fU & 0x3f);
  if ((uVar5 == uVar6) && (uVar7 < uVar8)) {
    return param_3;
  }
  if ((uVar8 & (uVar7 ^ 0xffffffffffffffff)) == 0) {
    if ((*(uint *)(lVar4 + 3) & 1) == 0) {
      uVar3 = 1;
    }
    else {
      if ((uVar7 & uVar8 - 1) == 0) {
        uVar1 = (int)uVar5 - 2;
        if (-1 < (int)uVar1) {
          lVar9 = (ulong)uVar1 + 1;
          iVar10 = (int)uVar5 * 8 + -9;
          do {
            if (*(long *)(lVar4 + iVar10) != 0) goto LAB_010708bc;
            lVar9 = lVar9 + -1;
            iVar10 = iVar10 + -8;
          } while (0 < lVar9);
        }
        if ((uVar5 == uVar6) && (uVar7 == uVar8)) {
          return param_3;
        }
        goto LAB_01070910;
      }
LAB_010708bc:
      uVar3 = 0;
    }
    plVar2 = (long *)MutableBigInt::TruncateAndSubFromPowerOfTwo(param_1,param_2,param_3,uVar3);
  }
  else {
LAB_01070910:
    plVar2 = (long *)MutableBigInt::TruncateToNBits(param_1,param_2,param_3);
  }
  return plVar2;
}

