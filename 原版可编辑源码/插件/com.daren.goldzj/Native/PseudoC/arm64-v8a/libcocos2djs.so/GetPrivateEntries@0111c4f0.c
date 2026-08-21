
/* v8::internal::JSReceiver::GetPrivateEntries(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>) */

ulong * v8::internal::JSReceiver::GetPrivateEntries(Factory *param_1,undefined8 param_2)

{
  long lVar1;
  Factory *pFVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  CanonicalHandleScope *this;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int local_64;
  
  puVar4 = (ulong *)KeyAccumulator::GetKeys(param_2,0,0x40,0,0,0);
  if (puVar4 == (ulong *)0x0) {
LAB_0111c7ac:
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar8 = *puVar4;
    iVar14 = *(int *)(uVar8 + 3) >> 1;
    if (*(int *)(uVar8 + 3) < 2) {
      iVar10 = 0;
    }
    else {
      iVar11 = 0;
      lVar12 = 0;
      iVar10 = 0;
      do {
        lVar1 = (long)iVar11;
        lVar12 = lVar12 + 1;
        iVar11 = iVar11 + 4;
        iVar10 = (*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + lVar1 + 7)) + 7)
                  >> 5 & 1) + iVar10;
      } while (lVar12 < iVar14);
    }
    puVar5 = (ulong *)Factory::NewFixedArray(param_1,(iVar14 - iVar10) * 2,0);
    uVar8 = *puVar4;
    if (*(int *)(uVar8 + 3) < 2) {
      uVar8 = *puVar5;
    }
    else {
      iVar14 = 0;
      lVar12 = 0;
      pFVar2 = param_1 + 0x95a0;
      local_64 = 0;
      do {
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar14 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pFVar2;
          if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend((Isolate *)param_1);
          }
          *(ulong **)pFVar2 = puVar6 + 1;
          *puVar6 = uVar8;
          this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
          if (this != (CanonicalHandleScope *)0x0) goto LAB_0111c61c;
LAB_0111c76c:
          puVar6 = *(ulong **)pFVar2;
          if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend((Isolate *)param_1);
          }
          *(ulong **)pFVar2 = puVar6 + 1;
          *puVar6 = uVar8;
          uVar3 = *(uint *)(uVar8 + 7);
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
          uVar8 = *puVar6;
          this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
          if (this == (CanonicalHandleScope *)0x0) goto LAB_0111c76c;
LAB_0111c61c:
          puVar6 = (ulong *)CanonicalHandleScope::Lookup(this,uVar8);
          uVar3 = *(uint *)(*puVar6 + 7);
        }
        if ((uVar3 >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","key->is_private_name()");
        }
        if ((uVar3 >> 5 & 1) == 0) {
          puVar7 = (ulong *)Object::GetProperty(param_1,param_2,puVar6);
          if (puVar7 == (ulong *)0x0) goto LAB_0111c7ac;
          uVar13 = *puVar5;
          uVar8 = *puVar6;
          iVar10 = local_64 * 4;
          lVar1 = uVar13 + (long)iVar10;
          *(int *)(lVar1 + 7) = (int)uVar8;
          if ((uVar8 & 1) != 0) {
            uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,lVar1,uVar8);
              uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar9 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar8);
            }
          }
          uVar13 = *puVar5;
          uVar8 = *puVar7;
          local_64 = local_64 + 2;
          lVar1 = uVar13 + (long)(iVar10 + 4);
          *(int *)(lVar1 + 7) = (int)uVar8;
          if ((uVar8 & 1) != 0) {
            uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,lVar1,uVar8);
              uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar9 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar8);
            }
          }
        }
        uVar8 = *puVar4;
        lVar12 = lVar12 + 1;
        iVar14 = iVar14 + 4;
      } while (lVar12 < *(int *)(uVar8 + 3) >> 1);
      uVar8 = *puVar5;
      if (local_64 != 0) {
        iVar14 = *(int *)(uVar8 + 3) >> 1;
        iVar10 = iVar14 - local_64;
        if (iVar10 == 0 || iVar14 < local_64) {
          return puVar5;
        }
        Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),uVar8,iVar10);
        return puVar5;
      }
    }
    puVar4 = (ulong *)(uVar8 & 0xffffffff00000000 | 0x168);
  }
  return puVar4;
}

