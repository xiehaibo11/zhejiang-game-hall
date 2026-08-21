
/* v8::internal::MutableBigInt::RightShiftByAbsolute(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, v8::internal::Handle<v8::internal::BigIntBase>)
    */

long * v8::internal::MutableBigInt::RightShiftByAbsolute
                 (Isolate *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  
  lVar9 = *param_2;
  uVar2 = *(uint *)(lVar9 + 3);
  if (((*(uint *)(*param_3 + 3) & 0x7ffffffc) != 0) ||
     (uVar10 = *(ulong *)(*param_3 + 7), 0x40000000 < uVar10)) {
LAB_0106db78:
    plVar6 = (long *)RightShiftByMaximum(param_1,(bool)((byte)uVar2 & 1));
    return plVar6;
  }
  uVar3 = *(uint *)(lVar9 + 3) >> 1 & 0x3fffffff;
  uVar15 = uVar10 >> 6;
  uVar14 = (uint)uVar15;
  iVar8 = uVar3 - uVar14;
  if (iVar8 < 1) goto LAB_0106db78;
  uVar1 = (uint)uVar10 & 0x3f;
  iVar13 = iVar8;
  if ((uVar2 & 1) != 0) {
    if ((*(ulong *)(lVar9 + (uVar15 << 3 | 7)) & (-1L << uVar1 ^ 0xffffffffffffffffU)) != 0) {
LAB_0106db6c:
      if ((uVar10 & 0x3f) == 0) {
        bVar5 = true;
        if (*(long *)(lVar9 + ((long)(int)((*(uint *)(lVar9 + 3) >> 1) * 8 + -8) | 7U)) == -1) {
          iVar13 = iVar8 + 1;
        }
      }
      else {
        bVar5 = false;
      }
      bVar4 = true;
      goto LAB_0106dc08;
    }
    if (0 < (int)uVar14) {
      uVar12 = 0;
      uVar11 = uVar15;
      do {
        if (*(long *)(lVar9 + (uVar12 & 0xfffffff8 | 7)) != 0) goto LAB_0106db6c;
        uVar11 = uVar11 - 1;
        uVar12 = uVar12 + 8;
      } while (uVar11 != 0);
    }
  }
  bVar5 = (uVar10 & 0x3f) == 0;
  bVar4 = false;
LAB_0106dc08:
  if (iVar13 < 0x1000001) {
    plVar6 = (long *)Factory::NewBigInt((Factory *)param_1,iVar13,0);
    *(int *)(*plVar6 + 3) = iVar13 << 1;
    if (plVar6 != (long *)0x0) {
      if (bVar5) {
        iVar8 = uVar3 - uVar14;
        if (iVar8 != 0 && (int)uVar14 <= (int)uVar3) {
          iVar13 = 7;
          do {
            iVar8 = iVar8 + -1;
            *(undefined8 *)(*plVar6 + (long)iVar13) =
                 *(undefined8 *)(*param_2 + (long)(int)(uVar14 * 8 + iVar13));
            iVar13 = iVar13 + 8;
          } while (iVar8 != 0);
        }
      }
      else {
        lVar9 = *param_2;
        uVar10 = *(ulong *)(lVar9 + (-(uVar10 >> 0x22 & 1) & 0xffffffff00000000 |
                                     (uVar15 & 0x1fffffff) << 3 | 7)) >> uVar1;
        if (0 < iVar8 + -1) {
          uVar15 = 0;
          while( true ) {
            uVar12 = *(ulong *)(lVar9 + (int)((uVar14 * 8 + 8 | 7) + (int)uVar15));
            *(ulong *)(*plVar6 + (uVar15 & 0xfffffff8 | 7)) =
                 uVar12 << ((ulong)(0x40 - uVar1) & 0x3f) | uVar10;
            uVar10 = uVar12 >> uVar1;
            if ((ulong)(uVar3 + ~uVar14) * 8 - 8 == uVar15) break;
            lVar9 = *param_2;
            uVar15 = uVar15 + 8;
          }
        }
        *(ulong *)(*plVar6 + ((long)((iVar8 + -1) * 8) | 7U)) = uVar10;
      }
      if ((((uVar2 & 1) == 0) || (*(uint *)(*plVar6 + 3) = *(uint *)(*plVar6 + 3) | 1, !bVar4)) ||
         (plVar6 = (long *)AbsoluteAddOne(param_1,plVar6,1,*plVar6), plVar6 != (long *)0x0)) {
        Canonicalize(*plVar6);
        return plVar6;
      }
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar7 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xb8,0,0,0);
    Isolate::Throw(param_1,*puVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

