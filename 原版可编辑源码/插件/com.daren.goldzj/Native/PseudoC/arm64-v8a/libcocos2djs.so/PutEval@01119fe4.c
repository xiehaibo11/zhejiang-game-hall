
/* v8::internal::CompilationCacheTable::PutEval(v8::internal::Handle<v8::internal::CompilationCacheTable>,
   v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::FeedbackCell>,
   int) */

ulong * v8::internal::CompilationCacheTable::PutEval
                  (ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,
                  ulong *param_5,ulong *param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  Isolate *this;
  uint uVar14;
  ulong uVar15;
  Isolate *pIVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined **local_88;
  uint local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  this = (Isolate *)((ulong)*(uint *)((long)param_5 + 4) << 0x20);
  puVar4 = (undefined8 *)String::Flatten(this,param_2,0);
  uVar14 = *(uint *)(*param_4 + 0x1b) >> 6 & 1;
  local_80 = CompilationCacheShape::StringSharedHash(*puVar4,*param_3,uVar14,param_7);
  local_88 = &PTR_IsMatch_01cb4d88;
  local_68 = (undefined1)uVar14;
  local_78 = puVar4;
  puStack_70 = param_3;
  local_64 = param_7;
  puVar5 = (ulong *)StringSharedKey::AsHandle((StringSharedKey *)&local_88,this);
  uVar10 = *param_1;
  uVar14 = *(uint *)(this + 0xa0);
  uVar17 = *(undefined8 *)(this + 0xa8);
  uVar3 = (*(int *)(uVar10 + 0xf) >> 1) - 1;
  uVar18 = (ulong)(uVar3 & local_80);
  uVar9 = *(uint *)(uVar10 + 7 + ((long)(uVar18 * 0xc00000000 + 0xc00000000) >> 0x20));
  if (uVar9 == uVar14) goto LAB_0111a3b8;
  iVar13 = 1;
  if (uVar9 != (uint)uVar17) goto LAB_0111a0f8;
  do {
    do {
      uVar18 = (ulong)((int)uVar18 + iVar13 & uVar3);
      uVar9 = *(uint *)(uVar10 + 7 + ((long)(uVar18 * 0xc00000000 + 0xc00000000) >> 0x20));
      iVar13 = iVar13 + 1;
      if (uVar9 == uVar14) goto LAB_0111a3b8;
    } while (uVar9 == (uint)uVar17);
LAB_0111a0f8:
    uVar6 = (*(code *)*local_88)(&local_88,uVar10 & 0xffffffff00000000 | (ulong)uVar9);
  } while ((uVar6 & 1) == 0);
  uVar10 = *puVar5;
  iVar13 = (int)uVar18 * 0xc;
  uVar18 = *param_1;
  lVar1 = uVar18 + (long)(iVar13 + 0xc);
  *(int *)(lVar1 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,lVar1,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,lVar1,uVar10);
    }
  }
  uVar18 = *param_1;
  uVar10 = *param_4;
  lVar1 = uVar18 + (long)(iVar13 + 0x10);
  *(int *)(lVar1 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,lVar1,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,lVar1,uVar10);
    }
  }
  lVar1 = (long)(iVar13 + 0x14) + 7;
  uVar14 = *(uint *)(*param_1 + lVar1);
  pIVar16 = (Isolate *)((ulong)*(uint *)((long)param_5 + 4) << 0x20);
  if ((((uVar14 & 1) == 0) ||
      (uVar10 = *param_1 & 0xffffffff00000000, uVar18 = uVar10 | uVar14,
      1 < *(ushort *)((uVar10 | 7) + (ulong)*(uint *)(uVar18 - 1)) - 0x97)) ||
     (*(uint *)(uVar18 + 3) < 2)) {
    puVar5 = (ulong *)Factory::NewWeakFixedArray(pIVar16,2,1);
    iVar13 = 0;
  }
  else {
    if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar16 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar16 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar16);
      }
      *(ulong **)(pIVar16 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar18;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar18);
    }
    uVar14 = *(uint *)(*param_1 + lVar1);
    if ((((uVar14 & 1) != 0) &&
        (uVar10 = *param_1 & 0xffffffff00000000, uVar18 = uVar10 | uVar14,
        *(ushort *)((uVar10 | 7) + (ulong)*(uint *)(uVar18 - 1)) - 0x97 < 2)) &&
       (1 < (int)*(uint *)(uVar18 + 3))) {
      uVar10 = 0;
      iVar13 = 4;
      do {
        if (*(uint *)(uVar18 + (long)(iVar13 + 3)) == ((uint)*param_5 | 2)) {
          if ((int)uVar10 < 0) goto LAB_0111a5bc;
          uVar10 = *puVar5;
          uVar18 = *param_6;
          uVar14 = (uint)uVar18 | 2;
          *(uint *)(uVar10 + (long)iVar13 + 7) = uVar14;
          if (((uVar18 & 1) == 0) || (uVar14 == 3)) goto LAB_0111a3b8;
          uVar6 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
          piVar8 = (int *)(uVar10 + (long)iVar13 + 7);
          uVar15 = uVar18 & 0xfffffffffffffffd;
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,piVar8,uVar15);
            uVar6 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar6 & 0x18) == 0) || ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0))
          goto LAB_0111a3b8;
          goto LAB_0111a3b0;
        }
        uVar10 = uVar10 + 2;
        iVar13 = iVar13 + 8;
      } while (uVar10 < *(uint *)(uVar18 + 3) >> 1);
    }
    uVar10 = 0xffffffff;
LAB_0111a5bc:
    iVar13 = (int)uVar10;
    uVar14 = *(uint *)(*puVar5 + 3);
    if (1 < (int)uVar14) {
      uVar10 = 0;
      iVar11 = 7;
      do {
        if (*(int *)(*puVar5 + (long)iVar11) == 3) {
          iVar13 = (int)uVar10;
          goto LAB_0111a258;
        }
        uVar10 = uVar10 + 2;
        iVar11 = iVar11 + 8;
      } while (uVar10 < uVar14 >> 1);
      if (-1 < iVar13) {
        puVar5 = (ulong *)0x0;
        goto LAB_0111a258;
      }
    }
    puVar7 = (ulong *)Factory::CopyWeakFixedArrayAndGrow(pIVar16,puVar5,2);
    iVar13 = *(int *)(*puVar5 + 3) >> 1;
    puVar5 = puVar7;
  }
LAB_0111a258:
  uVar18 = *puVar5;
  uVar10 = *param_5;
  lVar2 = uVar18 + (long)(iVar13 * 4);
  uVar14 = (uint)uVar10 | 2;
  *(uint *)(lVar2 + 7) = uVar14;
  if (((uVar10 & 1) != 0) && (uVar14 != 3)) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,lVar2,uVar10 & 0xfffffffffffffffd);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,lVar2,uVar10 & 0xfffffffffffffffd);
    }
  }
  uVar18 = *puVar5;
  uVar10 = *param_6;
  lVar2 = uVar18 + (long)(iVar13 * 4 + 4);
  uVar14 = (uint)uVar10 | 2;
  *(uint *)(lVar2 + 7) = uVar14;
  if (((uVar10 & 1) != 0) && (uVar14 != 3)) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,lVar2,uVar10 & 0xfffffffffffffffd);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,lVar2,uVar10 & 0xfffffffffffffffd);
    }
  }
  uVar10 = *param_1;
  piVar8 = (int *)(uVar10 + lVar1);
  uVar15 = *puVar5;
  if ((*piVar8 != (int)uVar15) && (*piVar8 = (int)uVar15, (uVar15 & 1) != 0)) {
    uVar18 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,piVar8,uVar15);
      uVar18 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_0111a3b0:
      Heap_GenerationalBarrierSlow(uVar10,piVar8,uVar15);
    }
  }
LAB_0111a3b8:
  puVar5 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                    ::EnsureCapacity(this,param_1,1,0);
  uVar10 = *puVar5;
  uVar9 = (*(int *)(uVar10 + 0xf) >> 1) - 1;
  uVar14 = uVar9 & local_80;
  uVar18 = (ulong)uVar14;
  iVar11 = *(int *)(((long)(uVar18 * 0xc00000000 + 0xc00000000) >> 0x20) + uVar10 + 7);
  iVar13 = *(int *)((uVar10 & 0xffffffff00000000) + 0xa8);
  if (iVar11 != iVar13) {
    iVar12 = 1;
    do {
      uVar14 = (uint)uVar18;
      if (iVar11 == *(int *)((uVar10 & 0xffffffff00000000) + 0xa0)) break;
      uVar14 = uVar14 + iVar12 & uVar9;
      uVar18 = (ulong)uVar14;
      iVar11 = *(int *)(((long)(uVar18 * 0xc00000000 + 0xc00000000) >> 0x20) + uVar10 + 7);
      iVar12 = iVar12 + 1;
    } while (iVar11 != iVar13);
  }
  puVar7 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>
                              ((Factory *)this,(double)local_80);
  uVar18 = *puVar5;
  uVar10 = *puVar7;
  lVar1 = uVar18 + (long)(int)(uVar14 * 0xc + 0xc);
  *(int *)(lVar1 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,lVar1,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,lVar1,uVar10);
    }
  }
  *(undefined4 *)(*puVar5 + (long)(int)(uVar14 * 0xc + 0x10) + 7) = 0x14;
  *(uint *)(*puVar5 + 7) = *(uint *)(*puVar5 + 7) + 2 & 0xfffffffe;
  return puVar5;
}

