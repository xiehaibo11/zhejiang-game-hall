
/* v8::SnapshotCreator::CreateBlob(v8::SnapshotCreator::FunctionCodeHandling) */

undefined1  [16] __thiscall v8::SnapshotCreator::CreateBlob(SnapshotCreator *this,int param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  Isolate *pIVar13;
  undefined8 *puVar14;
  long *plVar15;
  SnapshotData *pSVar16;
  ulong *puVar17;
  Isolate *pIVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  Isolate *pIVar27;
  long lVar28;
  void *pvVar29;
  undefined8 uVar30;
  char cVar31;
  ulong uVar32;
  Isolate *pIVar33;
  long lVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  SnapshotData *local_7e8;
  void *local_7e0;
  char local_7d4;
  long *local_7d0;
  long *plStack_7c8;
  long *local_7c0;
  HeapObjectIterator aHStack_7b8 [40];
  ulong *local_790;
  ulong *puStack_788;
  ulong *local_780;
  Isolate *local_778;
  undefined **local_770;
  void *local_768;
  char local_75c;
  char local_590;
  ulong local_568 [71];
  char local_330;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  char local_b8;
  undefined **local_b0 [2];
  void *local_a0;
  void *local_90;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar34 = *(long *)this;
  pIVar27 = *(Isolate **)(lVar34 + 8);
  puVar17 = *(ulong **)(pIVar27 + 0x95a0);
  pIVar18 = pIVar27 + 0x95a8;
  puVar22 = *(ulong **)pIVar18;
  uVar35 = *(long *)(lVar34 + 0x38) - *(long *)(lVar34 + 0x30);
  uVar25 = uVar35 >> 3;
  pIVar33 = pIVar27 + 0x95b0;
  *(int *)pIVar33 = *(int *)pIVar33 + 1;
  uVar32 = *(ulong *)(pIVar27 + 0xf88);
  local_778 = pIVar27;
  if (((int)uVar32 == *(int *)((uVar32 & 0xffffffff00000000) + 0x168)) ||
     (*(int *)(uVar32 - 1) == *(int *)((uVar32 & 0xffffffff00000000) + 0x1b8))) {
    if (*(CanonicalHandleScope **)(pIVar27 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = puVar17;
      if (puVar22 == puVar17) {
        puVar12 = (ulong *)internal::HandleScope::Extend(pIVar27);
      }
      *(ulong **)(pIVar27 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar32;
    }
    else {
      puVar12 = (ulong *)internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar27 + 0x95b8),uVar32);
    }
    pIVar13 = (Isolate *)internal::ArrayList::Elements(pIVar27,puVar12);
  }
  else {
    pIVar13 = pIVar27 + 0x168;
  }
  internal::Heap::SetSerializedObjects((Heap *)(pIVar27 + 0x8850),*(undefined8 *)pIVar13);
  if (*(undefined8 **)(lVar34 + 0x10) == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    pIVar13 = *(Isolate **)(lVar34 + 8);
    uVar30 = **(undefined8 **)(lVar34 + 0x10);
    puVar14 = *(undefined8 **)(pIVar13 + 0x95a0);
    if (puVar14 == *(undefined8 **)(pIVar13 + 0x95a8)) {
      puVar14 = (undefined8 *)internal::HandleScope::Extend(pIVar13);
    }
    *(undefined8 **)(pIVar13 + 0x95a0) = puVar14 + 1;
    *puVar14 = uVar30;
  }
  FUN_00ea36a0(puVar14);
  pIVar13 = local_778;
  iVar24 = (int)uVar25;
  uVar32 = uVar35 >> 3 & 0xffffffff;
  if (iVar24 < 1) {
    plVar15 = (long *)internal::Factory::NewFixedArray((Factory *)local_778,uVar25,1);
  }
  else {
    uVar23 = 0;
    do {
      if ((uVar23 < (ulong)(*(long *)(lVar34 + 0x38) - *(long *)(lVar34 + 0x30) >> 3)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar34 + 0x30) + uVar23 * 8),
         puVar14 != (undefined8 *)0x0)) {
        pIVar13 = *(Isolate **)(lVar34 + 0x28);
        uVar30 = *puVar14;
        puVar14 = *(undefined8 **)(pIVar13 + 0x95a0);
        if (puVar14 == *(undefined8 **)(pIVar13 + 0x95a8)) {
          puVar14 = (undefined8 *)internal::HandleScope::Extend(pIVar13);
        }
        *(undefined8 **)(pIVar13 + 0x95a0) = puVar14 + 1;
        *puVar14 = uVar30;
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      FUN_00ea36a0(puVar14);
      pIVar13 = local_778;
      uVar23 = uVar23 + 1;
    } while (uVar32 != uVar23);
    plVar15 = (long *)internal::Factory::NewFixedArray((Factory *)local_778,uVar25 & 0xffffffff,1);
    if (0 < iVar24) {
      iVar11 = 0;
      uVar25 = 0;
      do {
        if ((uVar25 < (ulong)(*(long *)(lVar34 + 0x38) - *(long *)(lVar34 + 0x30) >> 3)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar34 + 0x30) + uVar25 * 8),
           puVar14 != (undefined8 *)0x0)) {
          pIVar13 = *(Isolate **)(lVar34 + 0x28);
          uVar30 = *puVar14;
          puVar14 = *(undefined8 **)(pIVar13 + 0x95a0);
          if (puVar14 == *(undefined8 **)(pIVar13 + 0x95a8)) {
            puVar14 = (undefined8 *)internal::HandleScope::Extend(pIVar13);
          }
          *(undefined8 **)(pIVar13 + 0x95a0) = puVar14 + 1;
          *puVar14 = uVar30;
        }
        else {
          puVar14 = (undefined8 *)0x0;
        }
        local_2f0 = (undefined8 *)*puVar14;
        lVar26 = *plVar15;
        local_568[0] = internal::Context::global_proxy((Context *)&local_2f0);
        iVar10 = internal::HeapObject::SizeFromMap
                           ((HeapObject *)local_568,
                            local_568[0] & 0xffffffff00000000 | (ulong)*(uint *)(local_568[0] - 1));
        uVar25 = uVar25 + 1;
        lVar28 = (long)iVar11;
        iVar11 = iVar11 + 4;
        *(int *)(lVar26 + lVar28 + 7) = iVar10 << 1;
        pIVar13 = local_778;
      } while (uVar32 != uVar25);
    }
  }
  internal::Heap::SetSerializedGlobalProxySizes((Heap *)(pIVar13 + 0x8850),*plVar15);
  if (pIVar27 != (Isolate *)0x0) {
    *(ulong **)(pIVar27 + 0x95a0) = puVar17;
    *(int *)pIVar33 = *(int *)pIVar33 + -1;
    if (*(ulong **)pIVar18 != puVar22) {
      *(ulong **)pIVar18 = puVar22;
      internal::HandleScope::DeleteExtensions(pIVar27);
    }
  }
  internal::DescriptorLookupCache::Clear(*(DescriptorLookupCache **)(local_778 + 0x9598));
  internal::Heap::CollectAllAvailableGarbage((Heap *)(local_778 + 0x8850),0x14);
  pIVar27 = local_778;
  pIVar18 = local_778 + 0x95a0;
  uVar30 = *(undefined8 *)pIVar18;
  lVar28 = *(long *)(local_778 + 0x95a8);
  *(int *)(local_778 + 0x95b0) = *(int *)(local_778 + 0x95b0) + 1;
  internal::Heap::CompactWeakArrayLists((Heap *)(local_778 + 0x8850),1);
  if (pIVar27 != (Isolate *)0x0) {
    iVar11 = *(int *)(pIVar27 + 0x95b0);
    lVar26 = *(long *)(pIVar27 + 0x95a8);
    *(undefined8 *)pIVar18 = uVar30;
    *(int *)(pIVar27 + 0x95b0) = iVar11 + -1;
    if (lVar26 != lVar28) {
      *(long *)(pIVar27 + 0x95a8) = lVar28;
      internal::HandleScope::DeleteExtensions(pIVar27);
    }
  }
  pIVar18 = local_778;
  if (param_2 == 0) {
    pIVar27 = local_778 + 0x95a0;
    uVar30 = *(undefined8 *)pIVar27;
    lVar28 = *(long *)(local_778 + 0x95a8);
    *(int *)(local_778 + 0x95b0) = *(int *)(local_778 + 0x95b0) + 1;
    local_2e0 = (undefined8 *)0x0;
    local_2e8 = (undefined8 *)0x0;
    local_2f0 = (undefined8 *)0x0;
    internal::HeapObjectIterator::HeapObjectIterator
              ((HeapObjectIterator *)local_568,local_778 + 0x8850,0);
    uVar25 = internal::HeapObjectIterator::Next((HeapObjectIterator *)local_568);
    iVar11 = (int)uVar25;
    puVar14 = local_2e8;
    while (local_2e8 = puVar14, iVar11 != 0) {
      uVar23 = uVar25 & 0xffffffff00000000;
      uVar20 = uVar23 | 7;
      if (*(short *)(uVar20 + *(uint *)(uVar25 - 1)) == 0xa6) {
        local_770 = (undefined **)uVar25;
        if (((((*(uint *)(uVar25 + 3) & 1) != 0) &&
             (*(short *)(uVar20 + *(uint *)((uVar23 | *(uint *)(uVar25 + 3)) - 1)) == 0x86)) ||
            (((*(uint *)(uVar25 + 3) & 1) != 0 &&
             (*(short *)((uVar25 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 3)
                                         ) - 1)) == 0x61)))) ||
           ((((*(uint *)(uVar25 + 3) & 1) != 0 &&
             (*(short *)((uVar25 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 3)
                                         ) - 1)) == 0x57)) ||
            (((*(uint *)(uVar25 + 3) & 1) != 0 &&
             (*(short *)((uVar25 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 3)
                                         ) - 1)) == 0x95)))))) {
          if (puVar14 < local_2e0) {
            if (*(CanonicalHandleScope **)(local_778 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              pIVar33 = local_778 + 0x95a0;
              puVar17 = *(ulong **)pIVar33;
              if (puVar17 == *(ulong **)(local_778 + 0x95a8)) {
                puVar17 = (ulong *)internal::HandleScope::Extend(local_778);
              }
              *(ulong **)pIVar33 = puVar17 + 1;
              *puVar17 = uVar25;
            }
            else {
              puVar17 = (ulong *)internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(local_778 + 0x95b8),uVar25);
            }
            *puVar14 = puVar17;
            local_2e8 = local_2e8 + 1;
          }
          else {
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
            ::__emplace_back_slow_path<v8::internal::SharedFunctionInfo&,v8::internal::Isolate*&>
                      ((vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                        *)&local_2f0,(SharedFunctionInfo *)&local_770,&local_778);
          }
        }
      }
      else if (*(short *)(uVar20 + *(uint *)(uVar25 - 1)) == 0x42e) {
        uVar2 = *(uint *)(uVar25 + 0xb);
        if (((((uVar2 & 1) == 0) || (uVar2 != *(uint *)(uVar23 + 0xa0))) &&
            (uVar20 = uVar23 | uVar2, (*(uint *)(uVar20 + 7) & 0xfffffffe) == 4)) &&
           ((*(int *)(uVar20 + 0x13) != -2 || (*(int *)(uVar20 + 0x17) != -2)))) {
          *(undefined4 *)(uVar20 + 0x13) = 0xfffffffe;
          *(undefined4 *)((uVar23 | *(uint *)(uVar25 + 0xb)) + 0x17) = 0xfffffffe;
          *(undefined4 *)((uVar23 | *(uint *)(uVar25 + 0xb)) + 0x1b) = 0xfffffffe;
          *(undefined4 *)((uVar23 | *(uint *)(uVar25 + 0xb)) + 0x1f) = 0xfffffffe;
        }
      }
      uVar25 = internal::HeapObjectIterator::Next((HeapObjectIterator *)local_568);
      puVar14 = local_2e8;
      iVar11 = (int)uVar25;
    }
    internal::HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)local_568);
    puVar7 = local_2e8;
    for (puVar14 = local_2f0; puVar14 != puVar7; puVar14 = puVar14 + 1) {
      internal::SharedFunctionInfo::DiscardCompiled(local_778,*puVar14);
    }
    if (local_2f0 != (undefined8 *)0x0) {
      local_2e8 = local_2f0;
      operator_delete(local_2f0);
    }
    if (pIVar18 != (Isolate *)0x0) {
      iVar11 = *(int *)(pIVar18 + 0x95b0);
      lVar26 = *(long *)(pIVar18 + 0x95a8);
      *(undefined8 *)pIVar27 = uVar30;
      *(int *)(pIVar18 + 0x95b0) = iVar11 + -1;
      if (lVar26 != lVar28) {
        *(long *)(pIVar18 + 0x95a8) = lVar28;
        internal::HandleScope::DeleteExtensions(pIVar18);
      }
    }
  }
  lVar28 = uVar35 * 0x20000000 + 0x100000000;
  uVar25 = lVar28 >> 0x20;
  puStack_788 = (ulong *)0x0;
  local_780 = (ulong *)0x0;
  local_790 = (ulong *)0x0;
  if (lVar28 != 0) {
    if (uVar25 >> 0x3d != 0) goto LAB_00ea3684;
    puStack_788 = operator_new(lVar28 >> 0x1d);
    local_780 = puStack_788 + uVar25;
  }
  pIVar27 = local_778;
  pIVar18 = local_778 + 0x95a0;
  uVar30 = *(undefined8 *)pIVar18;
  lVar26 = *(long *)(local_778 + 0x95a8);
  *(int *)(local_778 + 0x95b0) = *(int *)(local_778 + 0x95b0) + 1;
  local_790 = puStack_788;
  if (*(ulong **)(lVar34 + 0x10) == (ulong *)0x0) {
    puVar17 = (ulong *)0x0;
  }
  else {
    pIVar33 = *(Isolate **)(lVar34 + 8);
    uVar35 = **(ulong **)(lVar34 + 0x10);
    puVar17 = *(ulong **)(pIVar33 + 0x95a0);
    if (puVar17 == *(ulong **)(pIVar33 + 0x95a8)) {
      puVar17 = (ulong *)internal::HandleScope::Extend(pIVar33);
    }
    *(ulong **)(pIVar33 + 0x95a0) = puVar17 + 1;
    *puVar17 = uVar35;
  }
  local_568[0] = *puVar17;
  if (puStack_788 < local_780) {
    *puStack_788 = local_568[0];
    puStack_788 = puStack_788 + 1;
    puVar17 = *(ulong **)(lVar34 + 0x10);
  }
  else {
    std::__ndk1::vector<v8::internal::Context,std::__ndk1::allocator<v8::internal::Context>>::
    __push_back_slow_path<v8::internal::Context>
              ((vector<v8::internal::Context,std::__ndk1::allocator<v8::internal::Context>> *)
               &local_790,(Context *)local_568);
    puVar17 = *(ulong **)(lVar34 + 0x10);
  }
  if (puVar17 != (ulong *)0x0) {
    internal::GlobalHandles::Destroy(puVar17);
    *(undefined8 *)(lVar34 + 0x10) = 0;
  }
  if (0 < iVar24) {
    uVar35 = 0;
    do {
      if ((uVar35 < (ulong)(*(long *)(lVar34 + 0x38) - *(long *)(lVar34 + 0x30) >> 3)) &&
         (puVar17 = *(ulong **)(*(long *)(lVar34 + 0x30) + uVar35 * 8), puVar17 != (ulong *)0x0)) {
        pIVar33 = *(Isolate **)(lVar34 + 0x28);
        uVar23 = *puVar17;
        puVar17 = *(ulong **)(pIVar33 + 0x95a0);
        if (puVar17 == *(ulong **)(pIVar33 + 0x95a8)) {
          puVar17 = (ulong *)internal::HandleScope::Extend(pIVar33);
        }
        *(ulong **)(pIVar33 + 0x95a0) = puVar17 + 1;
        *puVar17 = uVar23;
      }
      else {
        puVar17 = (ulong *)0x0;
      }
      local_568[0] = *puVar17;
      if (puStack_788 < local_780) {
        *puStack_788 = local_568[0];
        puStack_788 = puStack_788 + 1;
      }
      else {
        std::__ndk1::vector<v8::internal::Context,std::__ndk1::allocator<v8::internal::Context>>::
        __push_back_slow_path<v8::internal::Context>
                  ((vector<v8::internal::Context,std::__ndk1::allocator<v8::internal::Context>> *)
                   &local_790,(Context *)local_568);
      }
      uVar35 = uVar35 + 1;
    } while (uVar32 != uVar35);
  }
  lVar19 = *(long *)(lVar34 + 0x30);
  lVar21 = *(long *)(lVar34 + 0x38);
  lVar3 = lVar21 - lVar19;
  if (lVar3 != 0) {
    uVar32 = 0;
    while( true ) {
      if ((uVar32 < (ulong)(lVar21 - lVar19 >> 3)) &&
         (puVar17 = *(ulong **)(lVar19 + uVar32 * 8), puVar17 != (ulong *)0x0)) {
        internal::GlobalHandles::Destroy(puVar17);
      }
      uVar32 = uVar32 + 1;
      if ((ulong)(lVar3 >> 3) <= uVar32) break;
      lVar19 = *(long *)(lVar34 + 0x30);
      lVar21 = *(long *)(lVar34 + 0x38);
    }
    lVar19 = *(long *)(lVar34 + 0x30);
  }
  *(long *)(lVar34 + 0x38) = lVar19;
  if (pIVar27 != (Isolate *)0x0) {
    iVar11 = *(int *)(pIVar27 + 0x95b0);
    lVar19 = *(long *)(pIVar27 + 0x95a8);
    *(undefined8 *)pIVar18 = uVar30;
    *(int *)(pIVar27 + 0x95b0) = iVar11 + -1;
    if (lVar19 != lVar26) {
      *(long *)(pIVar27 + 0x95a8) = lVar26;
      internal::HandleScope::DeleteExtensions(pIVar27);
    }
  }
  internal::SerializedHandleChecker::SerializedHandleChecker
            ((SerializedHandleChecker *)local_b0,local_778,(vector *)&local_790);
  uVar32 = internal::SerializedHandleChecker::CheckGlobalAndEternalHandles
                     ((SerializedHandleChecker *)local_b0);
  if ((uVar32 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","handle_checker.CheckGlobalAndEternalHandles()");
  }
  internal::HeapObjectIterator::HeapObjectIterator(aHStack_7b8,local_778 + 0x8850,0);
  uVar32 = internal::HeapObjectIterator::Next(aHStack_7b8);
  iVar11 = (int)uVar32;
  uVar35 = local_568[0];
  while (local_568[0] = uVar35, iVar11 != 0) {
    pIVar18 = (Isolate *)(uVar32 & 0xffffffff00000000);
    uVar23 = (ulong)pIVar18 | 7;
    if (*(short *)(uVar23 + *(uint *)(uVar32 - 1)) == 0x439) {
      if (((*(char *)(((ulong)pIVar18 | 9) + (ulong)*(uint *)(uVar32 - 1)) < '\0') &&
          (*(short *)(uVar23 + *(uint *)(pIVar18 + ((ulong)*(uint *)(uVar32 + 0x1b) - 1))) == 0xa2))
         && (local_568[0] = (ulong)pIVar18 | (ulong)*(uint *)(uVar32 + 0x1b),
            *(uint *)(local_568[0] + 0xb) >> 0x1d != 0)) {
        internal::Map::CompleteInobjectSlackTracking((Map *)local_568,pIVar18);
        uVar35 = local_568[0];
      }
      local_568[0] = uVar35;
      puVar1 = (uint *)(uVar32 + 0x17);
      if (*(int *)(((ulong)pIVar18 | (ulong)*(uint *)(uVar32 + 0x17)) + 0x27) == 0x42) {
LAB_00ea31f0:
        if (*(int *)(((ulong)pIVar18 | (ulong)*puVar1) + 0x27) != 0x42) {
          uVar2 = *(uint *)(((ulong)pIVar18 | (ulong)*(uint *)(uVar32 + 0xb)) + 3);
          if (((uVar2 != 0x84) &&
              (((uVar2 & 1) == 0 ||
               (1 < *(ushort *)(uVar23 + *(uint *)(((ulong)pIVar18 | (ulong)uVar2) - 1)) - 0x95))))
             && (((uVar2 = *(int *)(((ulong)pIVar18 | (ulong)*puVar1) + 0x27) - 0x38, uVar2 < 9 &&
                  ((1 << (ulong)(uVar2 & 0x1f) & 0x181U) != 0)) ||
                 (((*(byte *)(((ulong)pIVar18 | (ulong)*puVar1) + 0x17) & 0x3e) == 0 &&
                  ((*(uint *)(((ulong)pIVar18 |
                              (ulong)*(uint *)(((ulong)pIVar18 | (ulong)*puVar1) + 0xf)) + 7) & 1)
                   != 0)))))) goto LAB_00ea3280;
        }
        if (*(int *)(((ulong)pIVar18 | (ulong)*(uint *)(uVar32 + 0x13)) + 3) ==
            *(int *)(pIVar18 + 0xa0)) goto LAB_00ea3100;
      }
      else {
        uVar2 = *(uint *)(((ulong)pIVar18 | (ulong)*(uint *)(uVar32 + 0xb)) + 3);
        if ((((uVar2 == 0x84) ||
             (((uVar2 & 1) != 0 &&
              (*(ushort *)(uVar23 + *(uint *)(((ulong)pIVar18 | (ulong)uVar2) - 1)) - 0x95 < 2))))
            || ((*(byte *)(((ulong)pIVar18 | (ulong)*puVar1) + 0x17) & 0x3e) != 0)) ||
           ((*(uint *)(((ulong)pIVar18 | (ulong)*(uint *)(((ulong)pIVar18 | (ulong)*puVar1) + 0xf))
                      + 7) & 1) != 0)) goto LAB_00ea31f0;
      }
LAB_00ea3280:
      uVar2 = *(uint *)(uVar32 + 0x13);
      uVar23 = *(ulong *)(local_778 + 0xa0);
      uVar35 = (ulong)pIVar18 | (ulong)uVar2;
      *(int *)(uVar35 + 3) = (int)uVar23;
      if ((uVar23 & 1) != 0) {
        uVar20 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar20 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(uVar35,uVar35 + 3,uVar23);
          uVar20 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar20 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pIVar18 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(uVar35,uVar35 + 3,uVar23);
        }
      }
      uVar35 = internal::Builtins::builtin((Builtins *)(local_778 + 0x9e00),0x42);
      *puVar1 = (uint)uVar35;
      if (((uVar35 & 1) != 0) && ((*(byte *)((uVar35 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        internal::Heap_MarkingBarrierSlow(uVar32,puVar1);
      }
    }
LAB_00ea3100:
    uVar32 = internal::HeapObjectIterator::Next(aHStack_7b8);
    uVar35 = local_568[0];
    iVar11 = (int)uVar32;
  }
  internal::ReadOnlySerializer::ReadOnlySerializer((ReadOnlySerializer *)&local_2f0,local_778);
  internal::ReadOnlySerializer::SerializeReadOnlyRoots((ReadOnlySerializer *)&local_2f0);
  internal::StartupSerializer::StartupSerializer
            ((StartupSerializer *)local_568,local_778,(ReadOnlySerializer *)&local_2f0);
  internal::StartupSerializer::SerializeStrongReferences((StartupSerializer *)local_568);
  plStack_7c8 = (long *)0x0;
  local_7c0 = (long *)0x0;
  local_7d0 = (long *)0x0;
  if (lVar28 != 0) {
    if (uVar25 >> 0x3d != 0) {
LAB_00ea3684:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plStack_7c8 = operator_new(lVar28 >> 0x1d);
    local_7c0 = plStack_7c8 + uVar25;
  }
  local_7d0 = plStack_7c8;
  if (iVar24 < 0) {
    internal::StartupSerializer::SerializeWeakReferencesAndDeferred((StartupSerializer *)local_568);
  }
  else {
    internal::PartialSerializer::PartialSerializer
              ((PartialSerializer *)&local_770,local_778,local_568,*(undefined8 *)(lVar34 + 0x18),
               *(undefined8 *)(lVar34 + 0x20));
    internal::PartialSerializer::Serialize((Context *)&local_770,SUB81(local_790,0));
    bVar9 = local_590 != '\0';
    pSVar16 = operator_new(0x18);
    internal::SnapshotData::SnapshotData(pSVar16,(Serializer *)&local_770);
    local_7e8 = pSVar16;
    if (plStack_7c8 < local_7c0) {
      *plStack_7c8 = (long)pSVar16;
      plStack_7c8 = plStack_7c8 + 1;
    }
    else {
      std::__ndk1::
      vector<v8::internal::SnapshotData*,std::__ndk1::allocator<v8::internal::SnapshotData*>>::
      __push_back_slow_path<v8::internal::SnapshotData*>
                ((vector<v8::internal::SnapshotData*,std::__ndk1::allocator<v8::internal::SnapshotData*>>
                  *)&local_7d0,&local_7e8);
    }
    internal::PartialSerializer::~PartialSerializer((PartialSerializer *)&local_770);
    lVar28 = (ulong)(iVar24 + 1) - 1;
    if (lVar28 != 0) {
      lVar26 = 0;
      cVar31 = '\b';
      do {
        puVar14 = (undefined8 *)(*(long *)(lVar34 + 0x48) + lVar26);
        internal::PartialSerializer::PartialSerializer
                  ((PartialSerializer *)&local_770,local_778,local_568,*puVar14,puVar14[1]);
        internal::PartialSerializer::Serialize
                  ((Context *)&local_770,(bool)((char)local_790 + cVar31));
        bVar9 = (bool)(bVar9 & local_590 != '\0');
        pSVar16 = operator_new(0x18);
        internal::SnapshotData::SnapshotData(pSVar16,(Serializer *)&local_770);
        local_7e8 = pSVar16;
        if (plStack_7c8 < local_7c0) {
          *plStack_7c8 = (long)pSVar16;
          plStack_7c8 = plStack_7c8 + 1;
        }
        else {
          std::__ndk1::
          vector<v8::internal::SnapshotData*,std::__ndk1::allocator<v8::internal::SnapshotData*>>::
          __push_back_slow_path<v8::internal::SnapshotData*>
                    ((vector<v8::internal::SnapshotData*,std::__ndk1::allocator<v8::internal::SnapshotData*>>
                      *)&local_7d0,&local_7e8);
        }
        internal::PartialSerializer::~PartialSerializer((PartialSerializer *)&local_770);
        lVar26 = lVar26 + 0x10;
        lVar28 = lVar28 + -1;
        cVar31 = cVar31 + '\b';
      } while (lVar28 != 0);
    }
    internal::StartupSerializer::SerializeWeakReferencesAndDeferred((StartupSerializer *)local_568);
    if (!bVar9) {
      internal::ReadOnlySerializer::FinalizeSerialization((ReadOnlySerializer *)&local_2f0);
      bVar9 = false;
      goto LAB_00ea352c;
    }
  }
  internal::ReadOnlySerializer::FinalizeSerialization((ReadOnlySerializer *)&local_2f0);
  bVar9 = false;
  if (local_330 != '\0') {
    bVar9 = local_b8 != '\0';
  }
LAB_00ea352c:
  internal::SnapshotData::SnapshotData((SnapshotData *)&local_770,(Serializer *)&local_2f0);
  internal::SnapshotData::SnapshotData((SnapshotData *)&local_7e8,(Serializer *)local_568);
  auVar36 = internal::Snapshot::CreateSnapshotBlob
                      ((SnapshotData *)&local_7e8,(SnapshotData *)&local_770,(vector *)&local_7d0,
                       bVar9);
  plVar6 = plStack_7c8;
  for (plVar15 = local_7d0; plVar15 != plVar6; plVar15 = plVar15 + 1) {
    if ((long *)*plVar15 != (long *)0x0) {
      (**(code **)(*(long *)*plVar15 + 8))();
    }
  }
  *(undefined1 *)(lVar34 + 0x60) = 1;
  local_7e8 = (SnapshotData *)&PTR__SerializedData_01c983e8;
  pSVar16 = (SnapshotData *)&PTR__SerializedData_01c983e8;
  if ((local_7d4 != '\0') && (pSVar16 = local_7e8, local_7e0 != (void *)0x0)) {
    local_7e8 = (SnapshotData *)&PTR__SerializedData_01c983e8;
    operator_delete__(local_7e0);
    pSVar16 = local_7e8;
  }
  local_7e8 = pSVar16;
  local_770 = &PTR__SerializedData_01c983e8;
  ppuVar8 = &PTR__SerializedData_01c983e8;
  if ((local_75c != '\0') && (ppuVar8 = local_770, local_768 != (void *)0x0)) {
    local_770 = &PTR__SerializedData_01c983e8;
    operator_delete__(local_768);
    ppuVar8 = local_770;
  }
  local_770 = ppuVar8;
  if (local_7d0 != (long *)0x0) {
    plStack_7c8 = local_7d0;
    operator_delete(local_7d0);
  }
  internal::StartupSerializer::~StartupSerializer((StartupSerializer *)local_568);
  internal::ReadOnlySerializer::~ReadOnlySerializer((ReadOnlySerializer *)&local_2f0);
  internal::HeapObjectIterator::~HeapObjectIterator(aHStack_7b8);
  local_b0[0] = &PTR__SerializedHandleChecker_01cbbc40;
  pvVar5 = local_a0;
  while (local_90 != (void *)0x0) {
    pvVar29 = *(void **)local_90;
    local_a0 = pvVar5;
    operator_delete(local_90);
    pvVar5 = local_a0;
    local_90 = pvVar29;
  }
  local_a0 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  if (local_790 != (ulong *)0x0) {
    puStack_788 = local_790;
    operator_delete(local_790);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar36;
}

