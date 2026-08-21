
/* v8::internal::DependentCode::InsertWeakCode(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DependentCode>, v8::internal::DependentCode::DependencyGroup,
   v8::internal::MaybeObjectHandle const&) */

ulong * v8::internal::DependentCode::InsertWeakCode
                  (Isolate *param_1,ulong *param_2,int param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_38;
  
  uVar12 = *param_2;
  iVar2 = *(int *)(uVar12 + 3) >> 1;
  if ((iVar2 == 0) || (param_3 < (int)(*(uint *)(uVar12 + 0xb) >> 1 & 7))) {
    param_2 = (ulong *)New(param_1,param_3,param_4,param_2);
  }
  else if ((int)(*(uint *)(uVar12 + 0xb) >> 1 & 7) < param_3) {
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(param_1 + 0x95a0);
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar12;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    }
    puVar5 = (ulong *)InsertWeakCode(param_1,puVar4,param_3,param_4);
    if (puVar4 != puVar5) {
      if ((puVar4 == (ulong *)0x0) || (puVar5 == (ulong *)0x0)) {
        uVar12 = *puVar5;
      }
      else {
        uVar12 = *puVar5;
        if (*puVar4 == uVar12) {
          return param_2;
        }
      }
      uVar11 = *param_2;
      *(int *)(uVar11 + 7) = (int)uVar12;
      if (((int)uVar12 != 3) && ((uVar12 & 1) != 0)) {
        uVar6 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,uVar11 + 7,uVar12 & 0xfffffffffffffffd);
          uVar6 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar11,uVar11 + 7,uVar12 & 0xfffffffffffffffd);
        }
      }
    }
  }
  else {
    uVar11 = (ulong)(*(uint *)(uVar12 + 0xb) >> 4) & 0x7ffffff;
    if ((int)uVar11 != 0) {
      puVar7 = *(undefined8 **)(param_4 + 2);
      puVar9 = (uint *)(uVar12 + 0xf);
      uVar6 = uVar11;
      do {
        if (*param_4 == 0) {
          if (puVar7 == (undefined8 *)0x0) goto LAB_01074e3c;
          uVar10 = (uint)*puVar7 | 2;
        }
        else {
          if (puVar7 == (undefined8 *)0x0) goto LAB_01074e3c;
          uVar10 = (uint)*puVar7;
        }
        if (*puVar9 == uVar10) {
          return param_2;
        }
        uVar6 = uVar6 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
    if (iVar2 < (int)uVar11 + 3) {
      local_38 = uVar12;
      uVar12 = Compact((DependentCode *)&local_38);
      if ((uVar12 & 1) == 0) {
        uVar3 = *(uint *)(*param_2 + 0xb) >> 4 & 0x7ffffff;
        uVar10 = uVar3 * 5 >> 2;
        if (uVar3 < 5) {
          uVar10 = uVar3 + 1;
        }
        param_2 = (ulong *)Factory::CopyWeakFixedArrayAndGrow
                                     (param_1,param_2,(uVar10 - (*(int *)(*param_2 + 3) >> 1)) + 2);
      }
      uVar12 = *param_2;
      uVar11 = (ulong)(*(uint *)(uVar12 + 0xb) >> 4 & 0x7ffffff);
    }
    puVar4 = *(ulong **)(param_4 + 2);
    if (*param_4 == 0) {
      if (puVar4 == (ulong *)0x0) goto LAB_01074e3c;
      uVar6 = *puVar4 | 2;
    }
    else {
      if (puVar4 == (ulong *)0x0) {
LAB_01074e3c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar6 = *puVar4;
    }
    lVar1 = (uint)((int)uVar11 << 2) + uVar12;
    *(int *)(lVar1 + 0xf) = (int)uVar6;
    if (((int)uVar6 != 3) && ((uVar6 & 1) != 0)) {
      uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 0xf;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,lVar1,uVar6 & 0xfffffffffffffffd);
        uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar6 & 0xfffffffffffffffd);
      }
    }
    *(uint *)(*param_2 + 0xb) = *(uint *)(*param_2 + 0xb) & 0x8000000e | (int)uVar11 * 0x10 + 0x10U;
  }
  return param_2;
}

