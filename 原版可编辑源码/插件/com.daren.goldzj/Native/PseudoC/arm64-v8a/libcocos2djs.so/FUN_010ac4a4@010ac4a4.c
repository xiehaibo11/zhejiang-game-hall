
void FUN_010ac4a4(undefined8 param_1,ulong *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  Isolate *pIVar10;
  uint uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  
  pIVar10 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar12 = (ulong)pIVar10 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar12;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar10 | 0x95b8),uVar12);
  }
  uVar6 = *param_2;
  uVar11 = *(uint *)(uVar6 + 0xb);
  uVar12 = uVar6 & 0xffffffff00000000;
  if ((uVar11 & 1) == 0) {
    if (-1 < (int)uVar11) {
      uVar11 = uVar11 >> 1;
      dVar14 = (double)(ulong)uVar11;
joined_r0x010ac594:
      if (uVar11 < param_3) {
        bVar3 = *(byte *)((uVar12 | 10) + (ulong)*(uint *)(uVar6 - 1));
        if ((0x2f < bVar3) || ((bVar3 >> 3 & 1) == 0)) {
          uVar12 = (ulong)(bVar3 >> 3);
          if ((bVar3 >> 3 < 7) && ((0x55U >> uVar12 & 1) != 0)) {
            uVar12 = 0x7010501030101 >> ((ulong)bVar3 & 0x38);
          }
          v8::internal::JSObject::TransitionElementsKind(param_2,uVar12);
        }
      }
      uVar12 = *puVar5;
      uVar11 = *(int *)(uVar12 + 3) >> 1;
      uVar2 = SUB84(dVar14,0);
      if (uVar11 <= SUB84(dVar14,0)) {
        uVar2 = uVar11;
      }
      if (param_3 == 0) {
        uVar12 = *param_2;
        uVar6 = uVar12 & 0xffffffff00000000;
        bVar3 = *(byte *)((uVar6 | *(uint *)(uVar12 - 1)) + 10);
        if (((bVar3 < 0x30) || (bVar1 = bVar3 & 0xf8, bVar1 == 0x78)) ||
           ((byte)((bVar3 >> 3) - 6) < 6)) {
          puVar7 = (undefined4 *)(uVar6 + 0x168);
        }
        else if (bVar1 == 0x68) {
          puVar7 = (undefined4 *)(uVar6 + 0x3e0);
        }
        else if ((byte)((bVar3 >> 3) - 0x11) < 0xb) {
          puVar7 = (undefined4 *)(uVar6 + 0x3c0);
        }
        else {
          if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          puVar7 = (undefined4 *)(uVar6 + 1000);
        }
        *(undefined4 *)(uVar12 + 7) = *puVar7;
      }
      else if (uVar11 < param_3) {
        uVar11 = uVar11 + (uVar11 >> 1) + 0x10;
        if (uVar11 <= param_3) {
          uVar11 = param_3;
        }
        FUN_010ae5fc(param_2,uVar11);
      }
      else if (uVar11 < param_3 * 2 + 0x10) {
        if ((int)param_3 < (int)uVar2) {
          lVar8 = (long)(int)uVar2 - (long)(int)param_3;
          iVar9 = param_3 << 2;
          do {
            lVar8 = lVar8 + -1;
            *(undefined4 *)(uVar12 + 7 + (long)iVar9) =
                 *(undefined4 *)((uVar12 & 0xffffffff00000000) + 0xa8);
            iVar9 = iVar9 + 4;
          } while (lVar8 != 0);
        }
      }
      else {
        uVar4 = uVar11 - param_3 >> (param_3 + 1 == uVar2);
        v8::internal::Heap::RightTrimFixedArray((Heap *)(pIVar10 + 0x8850),uVar12,uVar4);
        uVar11 = uVar11 - uVar4;
        if (uVar2 <= uVar11) {
          uVar11 = uVar2;
        }
        if ((int)param_3 < (int)uVar11) {
          uVar12 = *puVar5;
          lVar8 = (long)(int)uVar11 - (long)(int)param_3;
          iVar9 = param_3 << 2;
          do {
            lVar8 = lVar8 + -1;
            *(undefined4 *)(uVar12 + 7 + (long)iVar9) =
                 *(undefined4 *)((uVar12 & 0xffffffff00000000) + 0xa8);
            iVar9 = iVar9 + 4;
          } while (lVar8 != 0);
        }
      }
      *(uint *)(*param_2 + 0xb) = param_3 * 2;
      v8::internal::JSObject::ValidateElements(*param_2);
      return;
    }
  }
  else if (*(short *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | uVar11) - 1)) == 0x42) {
    dVar13 = *(double *)((uVar12 | uVar11) + 3);
    dVar14 = dVar13 + 4503599627370496.0;
    if ((((ulong)dVar14 >> 0x20 == 0x43300000) && (uVar11 = SUB84(dVar14,0), uVar11 != 0xffffffff))
       && (dVar13 == (double)((ulong)dVar14 & 0xffffffff))) goto joined_r0x010ac594;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayIndex(&old_length)");
}

