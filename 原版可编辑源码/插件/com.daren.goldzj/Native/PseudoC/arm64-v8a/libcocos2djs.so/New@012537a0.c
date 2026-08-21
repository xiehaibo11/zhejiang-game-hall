
/* v8::internal::WasmInstanceObject::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>) */

ulong * v8::internal::WasmInstanceObject::New(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  ulong *puVar9;
  __shared_weak_count *this;
  void *pvVar10;
  ManagedPtrDestructor *pMVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  __shared_weak_count *p_Var26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  ulong local_70;
  ulong *puStack_68;
  
  uVar15 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar15 = uVar15 | *(uint *)((uVar15 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar15;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
    uVar15 = *puVar9;
  }
  uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x323);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar15;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
  }
  puVar9 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar9,1);
  uVar15 = *puVar9;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar15;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
  }
  lVar16 = *(long *)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                           (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 200);
  uVar2 = *(uint *)(lVar16 + 0x38);
  uVar3 = *(uint *)(lVar16 + 0x3c);
  uVar15 = (ulong)*(uint *)(lVar16 + 0x4c);
  lVar22 = *(long *)(lVar16 + 0xb8);
  lVar18 = *(long *)(lVar16 + 0xc0);
  lVar30 = (ulong)(uVar3 << 4) + (ulong)(uVar2 << 3) + uVar15 * 0xd + 0x40;
  if (lVar22 != lVar18) {
    uVar23 = (lVar18 - lVar22) - 0x10U >> 4;
    uVar25 = uVar23 + 1;
    if (4 < uVar25) {
      uVar27 = 4;
      if ((uVar25 & 3) != 0) {
        uVar27 = uVar25 & 3;
      }
      lVar31 = 0;
      lVar28 = 0;
      lVar29 = 0;
      piVar19 = (int *)(lVar22 + 0x24);
      lVar22 = lVar22 + (uVar25 - uVar27) * 0x10;
      lVar21 = (uVar23 - uVar27) + 1;
      do {
        piVar24 = piVar19 + -8;
        iVar32 = *piVar19;
        piVar7 = piVar19 + 4;
        piVar8 = piVar19 + -4;
        lVar21 = lVar21 + -4;
        piVar19 = piVar19 + 0x10;
        lVar28 = lVar28 + (ulong)(uint)(iVar32 * 0x18);
        lVar29 = lVar29 + (ulong)(uint)(*piVar7 * 0x18);
        lVar30 = lVar30 + (ulong)(uint)(*piVar24 * 0x18);
        lVar31 = lVar31 + (ulong)(uint)(*piVar8 * 0x18);
      } while (lVar21 != 0);
      lVar30 = lVar28 + lVar30 + lVar29 + lVar31;
    }
    do {
      piVar19 = (int *)(lVar22 + 4);
      lVar22 = lVar22 + 0x10;
      lVar30 = lVar30 + (ulong)(uint)(*piVar19 * 0x18);
    } while (lVar18 != lVar22);
  }
  uVar23 = (*(long *)(lVar16 + 0x120) - *(long *)(lVar16 + 0x118) >> 3) * 0x6db6db6db6db6db7;
  this = operator_new(0x58);
  *(undefined8 *)(this + 0x10) = 0;
  p_Var26 = this + 8;
  *(long *)p_Var26 = 0;
  *(undefined ***)this = &PTR_FUN_01cbc798;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  uVar25 = *puVar9;
  uVar27 = (ulong)uVar3 << 3;
  pvVar10 = operator_new__(uVar27);
  memset(pvVar10,0,uVar27);
  *(void **)(this + 0x30) = pvVar10;
  *(void **)(uVar25 + 0x2f) = pvVar10;
  uVar25 = *puVar9;
  uVar27 = (ulong)uVar2 << 3;
  pvVar10 = operator_new__(uVar27);
  memset(pvVar10,0,uVar27);
  *(void **)(this + 0x38) = pvVar10;
  *(void **)(uVar25 + 0x57) = pvVar10;
  uVar25 = *puVar9;
  pvVar10 = operator_new__(uVar15 << 3);
  memset(pvVar10,0,uVar15 << 3);
  *(void **)(this + 0x40) = pvVar10;
  *(void **)(uVar25 + 0xab) = pvVar10;
  uVar25 = *puVar9;
  pvVar10 = operator_new__(uVar15 << 2);
  memset(pvVar10,0,uVar15 << 2);
  *(void **)(this + 0x48) = pvVar10;
  *(void **)(uVar25 + 0xb3) = pvVar10;
  uVar15 = *puVar9;
  pvVar10 = operator_new__(uVar23);
  memset(pvVar10,0,uVar23);
  *(void **)(this + 0x50) = pvVar10;
  *(void **)(uVar15 + 0xbb) = pvVar10;
  lVar22 = *(long *)(param_1 + 0x20) + lVar30;
  *(long *)(param_1 + 0x20) = lVar22;
  if (0x2000000 < lVar22 - *(long *)(param_1 + 0x30)) {
    v8::Isolate::CheckMemoryPressure((Isolate *)param_1);
  }
  if (lVar30 < 0) {
    if (0x4000000 < *(long *)(param_1 + 0x28) + lVar30) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar30;
    }
  }
  else if ((lVar30 != 0) && (*(long *)(param_1 + 0x28) < lVar22)) {
    v8::Isolate::ReportExternalAllocationLimitReached((Isolate *)param_1);
  }
  pMVar11 = operator_new(0x30);
  puVar12 = operator_new(0x10);
  *puVar12 = this + 0x18;
  puVar12[1] = this;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(p_Var26,0x10);
    if (bVar6) {
      *(long *)p_Var26 = *(long *)p_Var26 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined8 *)(pMVar11 + 0x10) = 0;
  *(undefined8 **)(pMVar11 + 0x18) = puVar12;
  *(long *)pMVar11 = lVar30;
  *(undefined8 *)(pMVar11 + 8) = 0;
  *(code **)(pMVar11 + 0x20) = FUN_01256238;
  *(undefined8 *)(pMVar11 + 0x28) = 0;
  puVar13 = (ulong *)Factory::NewForeign((Factory *)param_1,(ulong)pMVar11);
  uVar14 = GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),*puVar13);
  *(undefined8 *)(pMVar11 + 0x28) = uVar14;
  GlobalHandles::MakeWeak(uVar14,pMVar11,ManagedObjectFinalizer,0);
  Isolate::RegisterManagedPtrDestructor(param_1,pMVar11);
  do {
    lVar30 = *(long *)p_Var26;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(p_Var26,0x10);
    if (bVar6) {
      *(long *)p_Var26 = lVar30 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar30 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    std::__ndk1::__shared_weak_count::__release_weak(this);
  }
  uVar25 = *puVar9;
  uVar15 = *puVar13;
  *(int *)(uVar25 + 0x97) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar23 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar25,uVar25 + 0x97,uVar15);
      uVar23 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar25,uVar25 + 0x97,uVar15);
    }
  }
  puVar13 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(ulong)uVar3,0);
  uVar25 = *puVar9;
  uVar15 = *puVar13;
  *(int *)(uVar25 + 0x2b) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar23 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar25,uVar25 + 0x2b,uVar15);
      uVar23 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar25,uVar25 + 0x2b,uVar15);
    }
  }
  local_70 = *puVar9;
  SetRawMemory((WasmInstanceObject *)&local_70,(uchar *)0x0,0);
  *(Isolate **)(*puVar9 + 0x5f) = param_1;
  *(Isolate **)(*puVar9 + 0x23) = param_1 + 0x60;
  *(Isolate **)(*puVar9 + 0xa3) = param_1 + 0x50;
  *(undefined8 *)(*puVar9 + 0x4f) = 0;
  *(undefined4 *)(*puVar9 + 0x4b) = 0;
  uVar25 = *puVar9;
  uVar15 = *(ulong *)(param_1 + 0x168);
  *(int *)(uVar25 + 0x37) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar23 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar25,uVar25 + 0x37,uVar15);
      uVar23 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar25,uVar25 + 0x37,uVar15);
    }
  }
  *(undefined8 *)(*puVar9 + 0x43) = 0;
  *(undefined8 *)(*puVar9 + 0x3b) = 0;
  uVar25 = *puVar9;
  uVar15 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar15 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  uVar15 = uVar15 | uVar2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar1;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar13 + 1;
    *puVar13 = uVar15;
    *(uint *)(uVar25 + 0x77) = uVar2;
    if ((uVar2 & 1) == 0) goto LAB_01253e44;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
    uVar15 = *puVar13;
    *(int *)(uVar25 + 0x77) = (int)uVar15;
    if ((uVar15 & 1) == 0) goto LAB_01253e44;
  }
  uVar23 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
  if (((uint)uVar23 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar25,uVar25 + 0x77,uVar15);
    uVar23 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar25,uVar25 + 0x77,uVar15);
  }
LAB_01253e44:
  uVar25 = *puVar9;
  uVar15 = *param_2;
  *(int *)(uVar25 + 0x6f) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar23 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar23 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar25,uVar25 + 0x6f,uVar15);
      uVar23 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar25,uVar25 + 0x6f,uVar15);
    }
  }
  puVar12 = *(undefined8 **)
             (**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 0xf0);
  uVar14 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    uVar14 = *puVar12;
  }
  *(undefined8 *)(*puVar9 + 0x67) = uVar14;
  uVar15 = *param_2 & 0xffffffff00000000;
  uVar25 = uVar15 | *(uint *)(*param_2 + 0x13);
  if ((*(uint *)(uVar25 + 0x17) & 0xfffffffe) == 6) {
    uVar15 = uVar15 | *(uint *)(uVar25 + 0x2b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar1;
      if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar13 + 1;
      *puVar13 = uVar15;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
    }
    local_70 = 0;
    puStack_68 = puVar9;
    puVar13 = (ulong *)WeakArrayList::AddToEnd(param_1,puVar13,&local_70);
    uVar23 = *puVar13;
    uVar25 = (ulong)*(uint *)(*param_2 + 0x13);
    uVar15 = *param_2 & 0xffffffff00000000;
    uVar27 = uVar15 | uVar25;
    *(int *)(uVar27 + 0x2b) = (int)uVar23;
    if ((uVar23 & 1) != 0) {
      uVar17 = *(ulong *)((uVar23 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar17 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar27,uVar27 + 0x2b,uVar23);
        uVar17 = *(ulong *)(uVar23 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar17 & 0x18) != 0) &&
         ((*(byte *)((uVar15 | uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar27,uVar27 + 0x2b,uVar23);
      }
    }
  }
  uVar15 = *param_2 & 0xffffffff00000000;
  puVar20 = (uint *)(*param_2 + 0xb);
  lVar22 = **(long **)(*(long *)((uVar15 | *puVar20) + 3) + 0x18);
  lVar30 = *(long *)(lVar22 + 200);
  uVar2 = *(uint *)(lVar30 + 0x4c);
  if (uVar2 != 0) {
    lVar18 = 0;
    uVar15 = 0;
    lVar22 = **(long **)(lVar22 + 0xe0);
    do {
      lVar16 = *(long *)(lVar30 + 0xa0) + lVar18;
      uVar4 = *(undefined4 *)(lVar16 + 0x14);
      lVar18 = lVar18 + 0x20;
      *(ulong *)(*(long *)(*puVar9 + 0xab) + uVar15 * 8) = lVar22 + (ulong)*(uint *)(lVar16 + 0x10);
      if (*(char *)(lVar16 + 0x18) != '\0') {
        uVar4 = 0;
      }
      *(undefined4 *)(*(long *)(*puVar9 + 0xb3) + uVar15 * 4) = uVar4;
      uVar15 = uVar15 + 1;
    } while (uVar2 != uVar15);
    uVar15 = *param_2 & 0xffffffff00000000;
    puVar20 = (uint *)(*param_2 + 0xb);
  }
  lVar30 = *(long *)(**(long **)(*(long *)((uVar15 | *puVar20) + 3) + 0x18) + 200);
  lVar30 = *(long *)(lVar30 + 0x120) - *(long *)(lVar30 + 0x118);
  if (lVar30 != 0) {
    uVar15 = 0;
    do {
      *(undefined1 *)(*(long *)(*puVar9 + 0xbb) + uVar15) = 0;
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)((lVar30 >> 3) * 0x6db6db6db6db6db7));
  }
  return puVar9;
}

