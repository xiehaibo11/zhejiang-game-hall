
void FUN_0108232c(Isolate *param_1,ulong param_2,int param_3,ulong param_4,int param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  Isolate *pIVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  
  if ((int)param_6 < 0) {
    param_6 = (*(int *)(param_2 + 3) >> 1) - param_3;
    uVar9 = (*(int *)(param_4 + 3) >> 1) - param_5;
    if (uVar9 <= param_6) {
      param_6 = uVar9;
    }
    if (0 < (int)uVar9) {
      lVar15 = param_4 + (long)(param_5 << 2);
      uVar5 = *(undefined4 *)(param_1 + 0xa8);
      uVar12 = (ulong)uVar9;
      if (uVar9 < 8) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar12 & 0xfffffff8;
        puVar16 = (undefined8 *)(lVar15 + 0x17);
        uVar20 = uVar14;
        do {
          puVar16[-1] = CONCAT44(uVar5,uVar5);
          puVar16[-2] = CONCAT44(uVar5,uVar5);
          puVar16[1] = CONCAT44(uVar5,uVar5);
          *puVar16 = CONCAT44(uVar5,uVar5);
          uVar20 = uVar20 - 8;
          puVar16 = puVar16 + 4;
        } while (uVar20 != 0);
        if (uVar14 == uVar12) goto LAB_010823f4;
      }
      lVar13 = uVar12 - uVar14;
      puVar10 = (undefined4 *)(lVar15 + 7 + uVar14 * 4);
      do {
        lVar13 = lVar13 + -1;
        *puVar10 = uVar5;
        puVar10 = puVar10 + 1;
      } while (lVar13 != 0);
    }
  }
LAB_010823f4:
  if (param_6 != 0) {
    pIVar4 = param_1 + 0x95a0;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar4;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar6 + 1;
      *puVar6 = param_2;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_2);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar4;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar7 + 1;
      *puVar7 = param_4;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_4);
    }
    if (0 < (int)param_6) {
      uVar20 = 0;
      param_5 = param_5 << 2;
      uVar12 = 1;
      uVar9 = param_3 << 3 | 7;
      do {
        lVar15 = *(long *)pIVar4;
        uVar20 = uVar20 + 100;
        lVar13 = *(long *)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        uVar14 = uVar12;
        iVar19 = param_5;
        uVar2 = uVar9;
        do {
          pIVar8 = param_1 + 0xa8;
          if (*(long *)(*puVar6 + (long)(int)uVar2) != -0x8000000080001) {
            pIVar8 = (Isolate *)
                     v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                               ((Factory *)param_1,*(double *)((long)(int)uVar2 + *puVar6));
          }
          uVar18 = *puVar7;
          uVar17 = *(ulong *)pIVar8;
          *(int *)(uVar18 + (long)iVar19 + 7) = (int)uVar17;
          if ((uVar17 & 1) != 0) {
            uVar11 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
            lVar3 = uVar18 + (long)iVar19 + 7;
            if (((uint)uVar11 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar18,lVar3,uVar17);
              uVar11 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar11 & 0x18) != 0) &&
               ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar18,lVar3,uVar17);
            }
          }
          if (uVar20 <= uVar14) break;
          iVar19 = iVar19 + 4;
          uVar2 = uVar2 + 8;
          bVar1 = (long)uVar14 < (long)(ulong)param_6;
          uVar14 = uVar14 + 1;
        } while (bVar1);
        *(long *)pIVar4 = lVar15;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(long *)(param_1 + 0x95a8) != lVar13) {
          *(long *)(param_1 + 0x95a8) = lVar13;
          v8::internal::HandleScope::DeleteExtensions(param_1);
        }
        param_5 = param_5 + 400;
        uVar9 = uVar9 + 800;
        uVar12 = uVar12 + 100;
      } while ((int)uVar20 < (int)param_6);
    }
  }
  return;
}

