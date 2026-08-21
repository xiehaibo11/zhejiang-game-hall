
/* v8::internal::MutableBigInt::LeftShiftByAbsolute(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, v8::internal::Handle<v8::internal::BigIntBase>)
    */

long * v8::internal::MutableBigInt::LeftShiftByAbsolute
                 (Factory *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  if (((*(uint *)(*param_3 + 3) & 0x7ffffffc) == 0) &&
     (uVar10 = *(ulong *)(*param_3 + 7), uVar10 < 0x40000001)) {
    uVar14 = uVar10 >> 6;
    uVar1 = (uint)uVar10 & 0x3f;
    uVar9 = *(uint *)(*param_2 + 3);
    uVar12 = (ulong)(uVar9 >> 1) & 0x3fffffff;
    if ((uVar10 & 0x3f) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(*(ulong *)(*param_2 + ((long)(int)((uVar9 >> 1) * 8 + -8) | 7U)) >>
                     ((ulong)-uVar1 & 0x3f) != 0);
    }
    iVar13 = (int)uVar14;
    iVar11 = (int)uVar12;
    iVar6 = iVar11 + iVar13 + uVar9;
    if (iVar6 < 0x1000001) {
      plVar4 = (long *)Factory::NewBigInt(param_1,iVar6,0);
      *(int *)(*plVar4 + 3) = iVar6 * 2;
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((uVar10 & 0x3f) == 0) {
        if (0 < iVar13) {
          uVar12 = 0;
          do {
            uVar5 = uVar12 & 0xfffffff8;
            uVar14 = uVar14 - 1;
            uVar12 = uVar12 + 8;
            *(undefined8 *)(*plVar4 + (uVar5 | 7)) = 0;
          } while (uVar14 != 0);
        }
        if (iVar13 < iVar6) {
          uVar10 = uVar10 >> 6 & 0xffffffff;
          iVar6 = 0;
          lVar8 = uVar10 - (iVar11 + uVar9 + iVar13);
          do {
            iVar11 = iVar6 + 7;
            uVar1 = (int)(uVar10 << 3) + iVar6;
            bVar2 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            iVar6 = iVar6 + 8;
            *(undefined8 *)(*plVar4 + ((ulong)uVar1 | 7)) = *(undefined8 *)(*param_2 + (long)iVar11)
            ;
          } while (bVar2);
        }
      }
      else {
        if (0 < iVar13) {
          uVar5 = 0;
          do {
            uVar7 = uVar5 & 0xfffffff8;
            uVar14 = uVar14 - 1;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(*plVar4 + (uVar7 | 7)) = 0;
          } while (uVar14 != 0);
        }
        if (iVar11 == 0) {
          uVar14 = 0;
        }
        else {
          uVar5 = 0;
          uVar14 = 0;
          do {
            uVar7 = *(ulong *)(*param_2 + (uVar5 & 0xfffffff8 | 7));
            iVar6 = (int)uVar5;
            uVar5 = uVar5 + 8;
            *(ulong *)(*plVar4 + (long)(int)(((uint)((uVar10 >> 6 & 0x1fffffff) << 3) | 7) + iVar6))
                 = uVar7 << uVar1 | uVar14;
            uVar14 = uVar7 >> ((ulong)(0x40 - uVar1) & 0x3f);
          } while (uVar12 * 8 - uVar5 != 0);
        }
        if (uVar9 != 0) {
          *(ulong *)(*plVar4 + ((long)((iVar11 + iVar13) * 8) | 7U)) = uVar14;
        }
      }
      *(uint *)(*plVar4 + 3) = *(uint *)(*plVar4 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1;
      Canonicalize(*plVar4);
      return plVar4;
    }
  }
  if (FLAG_correctness_fuzzer_suppressions == '\0') {
    puVar3 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar3,0);
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Aborting on invalid BigInt length");
}

