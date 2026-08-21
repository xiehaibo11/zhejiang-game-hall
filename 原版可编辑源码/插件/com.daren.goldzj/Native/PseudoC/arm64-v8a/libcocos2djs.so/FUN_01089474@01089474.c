
void FUN_01089474(Isolate *param_1,ulong *param_2,uint param_3,ulong *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  uVar7 = *param_2;
  uVar10 = *(uint *)(uVar7 + 0xb);
  uVar5 = uVar7 & 0xffffffff00000000;
  if ((uVar10 & 1) == 0) {
    if (-1 < (int)uVar10) {
      uVar10 = uVar10 >> 1;
      dVar12 = (double)(ulong)uVar10;
joined_r0x01089514:
      if (uVar10 < param_3) {
        bVar4 = *(byte *)((uVar5 | 10) + (ulong)*(uint *)(uVar7 - 1));
        if ((0x2f < bVar4) || ((bVar4 >> 3 & 1) == 0)) {
          uVar5 = (ulong)(bVar4 >> 3);
          if ((bVar4 >> 3 < 7) && ((0x55U >> uVar5 & 1) != 0)) {
            uVar5 = 0x7010501030101 >> ((ulong)bVar4 & 0x38);
          }
          v8::internal::JSObject::TransitionElementsKind(param_2,uVar5);
        }
      }
      uVar10 = *(int *)(*param_4 + 3) >> 1;
      uVar2 = SUB84(dVar12,0);
      if (uVar10 <= SUB84(dVar12,0)) {
        uVar2 = uVar10;
      }
      if (param_3 == 0) {
        uVar5 = *param_2;
        uVar7 = uVar5 & 0xffffffff00000000;
        bVar4 = *(byte *)((uVar7 | *(uint *)(uVar5 - 1)) + 10);
        if (((bVar4 < 0x30) || (bVar1 = bVar4 & 0xf8, bVar1 == 0x78)) ||
           ((byte)((bVar4 >> 3) - 6) < 6)) {
          puVar8 = (undefined4 *)(uVar7 + 0x168);
        }
        else if (bVar1 == 0x68) {
          puVar8 = (undefined4 *)(uVar7 + 0x3e0);
        }
        else if ((byte)((bVar4 >> 3) - 0x11) < 0xb) {
          puVar8 = (undefined4 *)(uVar7 + 0x3c0);
        }
        else {
          if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          puVar8 = (undefined4 *)(uVar7 + 1000);
        }
        *(undefined4 *)(uVar5 + 7) = *puVar8;
      }
      else if (uVar10 < param_3) {
        uVar10 = uVar10 + (uVar10 >> 1) + 0x10;
        if (uVar10 <= param_3) {
          uVar10 = param_3;
        }
        FUN_01089788(param_2,uVar10);
      }
      else {
        v8::internal::JSObject::EnsureWritableFastElements(param_2);
        uVar3 = *(uint *)(*param_2 + 7);
        if (uVar3 != (uint)*param_4) {
          uVar5 = *param_2 & 0xffffffff00000000 | (ulong)uVar3;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            param_4 = *(ulong **)(param_1 + 0x95a0);
            if (param_4 == *(ulong **)(param_1 + 0x95a8)) {
              param_4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = param_4 + 1;
            *param_4 = uVar5;
          }
          else {
            param_4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
          }
        }
        if (uVar10 < param_3 * 2 + 0x10) {
          if ((int)param_3 < (int)uVar2) {
            uVar5 = *param_4;
            lVar6 = (long)(int)uVar2 - (long)(int)param_3;
            iVar9 = param_3 << 2;
            do {
              lVar6 = lVar6 + -1;
              *(undefined4 *)(uVar5 + 7 + (long)iVar9) =
                   *(undefined4 *)((uVar5 & 0xffffffff00000000) + 0xa8);
              iVar9 = iVar9 + 4;
            } while (lVar6 != 0);
          }
        }
        else {
          uVar3 = uVar10 - param_3 >> (ulong)(param_3 + 1 == uVar2);
          v8::internal::Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),*param_4,uVar3);
          uVar10 = uVar10 - uVar3;
          if (uVar2 <= uVar10) {
            uVar10 = uVar2;
          }
          if ((int)param_3 < (int)uVar10) {
            uVar5 = *param_4;
            lVar6 = (long)(int)uVar10 - (long)(int)param_3;
            iVar9 = param_3 << 2;
            do {
              lVar6 = lVar6 + -1;
              *(undefined4 *)(uVar5 + 7 + (long)iVar9) =
                   *(undefined4 *)((uVar5 & 0xffffffff00000000) + 0xa8);
              iVar9 = iVar9 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      *(uint *)(*param_2 + 0xb) = param_3 * 2;
      v8::internal::JSObject::ValidateElements(*param_2);
      return;
    }
  }
  else if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar10) - 1)) == 0x42) {
    dVar11 = *(double *)((uVar5 | uVar10) + 3);
    dVar12 = dVar11 + 4503599627370496.0;
    if ((((ulong)dVar12 >> 0x20 == 0x43300000) && (uVar10 = SUB84(dVar12,0), uVar10 != 0xffffffff))
       && (dVar11 == (double)((ulong)dVar12 & 0xffffffff))) goto joined_r0x01089514;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array->length().ToArrayIndex(&old_length)");
}

