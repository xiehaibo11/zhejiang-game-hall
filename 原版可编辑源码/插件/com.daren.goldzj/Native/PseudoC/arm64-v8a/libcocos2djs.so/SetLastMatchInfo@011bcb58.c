
/* v8::internal::RegExp::SetLastMatchInfo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>, v8::internal::Handle<v8::internal::String>,
   int, int*) */

ulong * v8::internal::RegExp::SetLastMatchInfo
                  (Isolate *param_1,uint *param_2,ulong *param_3,int param_4,long param_5)

{
  long lVar1;
  undefined4 *puVar2;
  Isolate *pIVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  puVar5 = (ulong *)RegExpMatchInfo::ReserveCaptures(param_1,param_2,param_4);
  uVar4 = *param_2;
  if ((uint)*puVar5 != uVar4) {
    pIVar3 = param_1 + 0x95a0;
    uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13)) + 0x247);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar3;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar7 + 1;
      *puVar7 = uVar8 | uVar12;
    }
    else {
      puVar6 = (undefined8 *)
               CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8 | uVar12);
      uVar12 = (uint)*puVar6;
    }
    if (uVar4 == uVar12) {
      uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar3;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar7 + 1;
        *puVar7 = uVar8;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
        uVar8 = *puVar7;
      }
      uVar11 = *puVar5;
      puVar2 = (undefined4 *)(uVar8 + 0x247);
      *puVar2 = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar9 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar2,uVar11);
          uVar9 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar11);
        }
      }
    }
  }
  if ((param_5 != 0) && (uVar4 = param_4 * 2 + 2, 0 < (int)uVar4)) {
    uVar8 = 0;
    lVar10 = 4;
    do {
      lVar1 = uVar8 * 4;
      uVar8 = uVar8 + 2;
      *(int *)(*puVar5 + (long)(int)(lVar10 + 8) + 7) = *(int *)(param_5 + lVar1) << 1;
      *(int *)(*puVar5 + (long)((int)lVar10 + 0x13)) = *(int *)(param_5 + lVar10) << 1;
      lVar10 = lVar10 + 8;
    } while (uVar8 < uVar4);
  }
  uVar11 = *puVar5;
  uVar8 = *param_3;
  *(int *)(uVar11 + 0xb) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xb,uVar8);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xb,uVar8);
    }
  }
  uVar11 = *puVar5;
  uVar8 = *param_3;
  *(int *)(uVar11 + 0xf) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xf,uVar8);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xf,uVar8);
    }
  }
  return puVar5;
}

