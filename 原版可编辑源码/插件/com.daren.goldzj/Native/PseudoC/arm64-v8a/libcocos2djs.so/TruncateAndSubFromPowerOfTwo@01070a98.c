
/* v8::internal::MutableBigInt::TruncateAndSubFromPowerOfTwo(v8::internal::Isolate*, int,
   v8::internal::Handle<v8::internal::BigInt>, bool) */

long * v8::internal::MutableBigInt::TruncateAndSubFromPowerOfTwo
                 (Factory *param_1,uint param_2,long *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  iVar1 = param_2 + 0x3f;
  iVar2 = param_2 + 0x7e;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 < 0x40000040) {
    iVar2 = iVar2 >> 6;
    plVar5 = (long *)Factory::NewBigInt(param_1,iVar2,0);
    *(int *)(*plVar5 + 3) = iVar2 << 1;
    if (plVar5 != (long *)0x0) {
      lVar11 = *param_3;
      uVar3 = iVar2 - 1;
      uVar4 = *(uint *)(lVar11 + 3) >> 1 & 0x3fffffff;
      uVar9 = uVar4;
      if (iVar2 <= (int)uVar4) {
        uVar9 = uVar3;
      }
      if ((int)uVar9 < 1) {
        uVar7 = 0;
        uVar9 = 0;
      }
      else {
        uVar10 = 0;
        uVar7 = 0;
        while( true ) {
          uVar13 = uVar10 & 0xfffffff8 | 7;
          lVar12 = *(long *)(lVar11 + uVar13);
          uVar8 = -lVar12;
          lVar11 = uVar8 - uVar7;
          uVar7 = (-(ulong)(uVar8 < uVar7) & 1) + (-(ulong)(lVar12 != 0) & 1);
          *(long *)(*plVar5 + uVar13) = lVar11;
          if ((ulong)uVar9 * 8 - 8 == uVar10) break;
          lVar11 = *param_3;
          uVar10 = uVar10 + 8;
        }
      }
      if ((int)uVar9 < (int)uVar3) {
        uVar10 = (ulong)uVar9 << 3;
        lVar11 = (ulong)uVar3 - (ulong)uVar9;
        do {
          lVar12 = -uVar7;
          uVar8 = uVar10 & 0xfffffff8;
          uVar7 = -(ulong)(uVar7 != 0) & 1;
          lVar11 = lVar11 + -1;
          uVar10 = uVar10 + 8;
          *(long *)(*plVar5 + (uVar8 | 7)) = lVar12;
        } while (lVar11 != 0);
      }
      if ((int)uVar4 < iVar2) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(*param_3 + ((long)(int)(uVar3 * 8) | 7U));
      }
      uVar9 = param_2 + 0x3f;
      if (-1 < (int)param_2) {
        uVar9 = param_2;
      }
      param_2 = param_2 - (uVar9 & 0xffffffc0);
      if (param_2 == 0) {
        uVar7 = -(uVar10 + uVar7);
      }
      else {
        lVar11 = 1L << ((ulong)param_2 & 0x3f);
        uVar7 = (lVar11 - uVar7) - (uVar10 & 0xffffffffffffffffU >> ((ulong)-param_2 & 0x3f)) &
                lVar11 - 1U;
      }
      *(ulong *)(*plVar5 + ((long)(int)(uVar3 * 8) | 7U)) = uVar7;
      *(uint *)(*plVar5 + 3) = *(uint *)(*plVar5 + 3) & 0xfffffffe | param_4 & 1;
      Canonicalize(*plVar5);
      return plVar5;
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar6 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

