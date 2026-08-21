
/* v8::internal::MutableBigInt::ToStringGeneric(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, int, v8::internal::ShouldThrow) */

long * v8::internal::MutableBigInt::ToStringGeneric
                 (Factory *param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  lVar10 = *param_2;
  uVar23 = (ulong)param_3;
  uVar17 = (ulong)(*(uint *)(lVar10 + 3) >> 1) & 0x3fffffff;
  iVar16 = (int)uVar17;
  iVar9 = iVar16 + -1;
  bVar3 = "Aborting on invalid BigInt length"[uVar23 + 0x22];
  bVar5 = bVar3 - 1;
  uVar21 = (ulong)*(uint *)(lVar10 + 3) & 1;
  uVar15 = 0;
  if (bVar5 != 0) {
    uVar15 = (((ulong)bVar5 +
              (ulong)(uint)(iVar16 * 0x40 -
                           (int)LZCOUNT(*(undefined8 *)(lVar10 + ((long)(iVar9 * 8) | 7U)))) * 0x20)
             - 1) / (ulong)bVar5;
  }
  uVar15 = uVar15 + uVar21;
  local_68 = param_2;
  if (uVar15 < 0xffffff1) {
    plVar20 = (long *)Factory::NewRawOneByteString(param_1,uVar15 & 0xffffffff,0);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (iVar16 == 1) {
      uVar17 = *(ulong *)(*param_2 + 7);
      lVar11 = 0;
    }
    else {
      uVar1 = 0;
      if (bVar3 != 0) {
        uVar1 = 0x800 / bVar3;
      }
      uVar22 = (ulong)uVar1;
      lVar10 = 1;
      uVar14 = uVar23;
      do {
        uVar2 = uVar14;
        if ((uVar22 & 1) == 0) {
          uVar2 = 1;
        }
        uVar22 = uVar22 >> 1;
        lVar10 = uVar2 * lVar10;
        uVar14 = uVar14 * uVar14;
      } while (uVar22 != 0);
      uVar14 = 0;
      lVar13 = 0;
      lVar12 = -8;
      local_70 = (long *)0x0;
      do {
        AbsoluteDivSmall(param_1,*(undefined8 *)(&stack0xffffffffffffffa0 + lVar12),lVar10,&local_70
                         ,&local_78);
        iVar16 = (int)lVar13;
        lVar13 = 0;
        lVar12 = *plVar20;
        lVar11 = (long)iVar16 << 0x20;
        do {
          uVar22 = 0;
          if (uVar23 != 0) {
            uVar22 = local_78 / uVar23;
          }
          lVar11 = lVar11 + 0x100000000;
          *(char *)(lVar12 + iVar16 + 0xb + lVar13) =
               "0123456789abcdefghijklmnopqrstuvwxyz"[local_78 - uVar22 * uVar23];
          lVar13 = lVar13 + 1;
          uVar22 = 0;
          if (uVar23 != 0) {
            uVar22 = local_78 / uVar23;
          }
          local_78 = uVar22;
        } while ((uint)lVar13 < uVar1);
        lVar12 = *(long *)(*local_70 + ((long)(iVar9 << 3) | 7U));
        uVar14 = uVar14 + uVar17;
        if (500000 < uVar14) {
          uVar14 = GetCurrentStackPosition();
          if (((uVar14 < *(ulong *)(param_1 + 0x68)) &&
              (uVar7 = StackGuard::HandleInterrupts((StackGuard *)(param_1 + 0x48)),
              (uVar7 & 1) != 0)) && (uVar7 == *(uint *)(param_1 + 0x180))) goto LAB_0106f388;
          uVar14 = 0;
        }
        iVar9 = iVar9 - (uint)(lVar12 == 0);
        lVar13 = lVar13 + iVar16;
        lVar12 = -0x10;
      } while (0 < iVar9);
      uVar17 = *(ulong *)(*local_70 + 7);
      lVar11 = lVar11 >> 0x20;
    }
    lVar10 = *plVar20 + 0xb;
    do {
      uVar14 = 0;
      if (uVar23 != 0) {
        uVar14 = uVar17 / uVar23;
      }
      bVar6 = uVar23 <= uVar17;
      *(char *)(lVar10 + lVar11) = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar17 - uVar14 * uVar23];
      lVar11 = lVar11 + 1;
      uVar17 = uVar14;
    } while (bVar6);
    iVar9 = (int)lVar11;
    lVar11 = (long)iVar9;
    lVar13 = 0;
    lVar12 = lVar11 << 0x20;
    do {
      lVar19 = lVar12;
      lVar18 = lVar13;
      if (lVar11 + lVar18 < 2) break;
      lVar13 = lVar18 + -1;
      lVar12 = lVar19 + -0x100000000;
    } while (*(char *)(lVar10 + lVar11 + -1 + lVar18) == '0');
    if ((int)uVar21 == 0) {
      iVar9 = iVar9 + (int)lVar18;
    }
    else {
      iVar9 = iVar9 + (int)lVar18 + 1;
      *(undefined1 *)(lVar10 + (lVar19 >> 0x20)) = 0x2d;
    }
    if (iVar9 < (int)uVar15) {
      uVar1 = (int)uVar15 + 0xfU & 0xfffffffc;
      uVar7 = iVar9 + 0xfU & 0xfffffffc;
      iVar16 = uVar1 - uVar7;
      *(int *)(*plVar20 + 7) = iVar9;
      if (iVar16 != 0 && (int)uVar7 <= (int)uVar1) {
        Heap::CreateFillerObjectAt
                  ((Heap *)(param_1 + 0x8850),*plVar20 + (long)(int)uVar7 + -1,iVar16,1,1);
      }
    }
    if (0 < (int)(iVar9 - 1U)) {
      lVar13 = 0;
      uVar15 = (ulong)(iVar9 - 1U);
      do {
        uVar4 = *(undefined1 *)(lVar10 + lVar13);
        *(undefined1 *)(lVar10 + lVar13) = *(undefined1 *)(lVar10 + uVar15);
        *(undefined1 *)(lVar10 + uVar15) = uVar4;
        lVar13 = lVar13 + 1;
        uVar15 = uVar15 - 1;
      } while (lVar13 < (long)uVar15);
    }
  }
  else if (param_4 == 0) {
    puVar8 = (undefined8 *)Factory::NewInvalidStringLengthError(param_1);
    Isolate::Throw((Isolate *)param_1,*puVar8,0);
    plVar20 = (long *)0x0;
  }
  else {
LAB_0106f388:
    plVar20 = (long *)0x0;
  }
  return plVar20;
}

