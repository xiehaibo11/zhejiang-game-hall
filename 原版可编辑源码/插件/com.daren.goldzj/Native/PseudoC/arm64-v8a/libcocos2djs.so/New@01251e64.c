
/* v8::internal::WasmIndirectFunctionTable::New(v8::internal::Isolate*, unsigned int) */

ulong * v8::internal::WasmIndirectFunctionTable::New(Isolate *param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  __shared_weak_count *this;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ManagedPtrDestructor *pMVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  __shared_weak_count *p_Var16;
  __shared_weak_count *p_Var17;
  undefined8 local_80;
  ulong *puStack_78;
  uint local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar5 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(ulong)param_2,0);
  puVar6 = (ulong *)Factory::NewStruct((Factory *)param_1,0x74,0);
  *(uint *)(*puVar6 + 3) = param_2;
  uVar14 = *puVar6;
  uVar13 = *puVar5;
  *(int *)(uVar14 + 0x1b) = (int)uVar13;
  if ((uVar13 & 1) != 0) {
    uVar10 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x1b,uVar13);
      uVar10 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x1b,uVar13);
    }
  }
  uVar13 = (ulong)param_2;
  lVar15 = (uVar13 + (ulong)param_2 * 2) * 4;
  this = operator_new(0x48);
  p_Var16 = this + 8;
  *(long *)p_Var16 = 0;
  p_Var17 = this + 0x18;
  *(undefined8 *)p_Var17 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_01cbc760;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (param_2 == 0) {
    uVar11 = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  else {
    puVar7 = operator_new(uVar13 * 4);
    *(undefined4 **)(this + 0x28) = puVar7 + uVar13;
    *(undefined4 **)(this + 0x18) = puVar7;
    *(undefined4 **)(this + 0x20) = puVar7;
    uVar14 = uVar13;
    do {
      *puVar7 = 0;
      uVar14 = uVar14 - 1;
      puVar7 = (undefined4 *)(*(long *)(this + 0x20) + 4);
      *(undefined4 **)(this + 0x20) = puVar7;
    } while (uVar14 != 0);
    puVar8 = operator_new(uVar13 * 8);
    *(undefined8 **)(this + 0x30) = puVar8;
    *(undefined8 **)(this + 0x38) = puVar8;
    *(undefined8 **)(this + 0x40) = puVar8 + uVar13;
    do {
      *puVar8 = 0;
      uVar13 = uVar13 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x38) + 8);
      *(undefined8 **)(this + 0x38) = puVar8;
    } while (uVar13 != 0);
    uVar11 = *(undefined8 *)p_Var17;
  }
  *(undefined8 *)(*puVar6 + 7) = uVar11;
  *(undefined8 *)(*puVar6 + 0xf) = *(undefined8 *)(this + 0x30);
  lVar1 = *(long *)(param_1 + 0x20) + lVar15;
  *(long *)(param_1 + 0x20) = lVar1;
  if (0x2000000 < lVar1 - *(long *)(param_1 + 0x30)) {
    v8::Isolate::CheckMemoryPressure((Isolate *)param_1);
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) < lVar1)) {
    v8::Isolate::ReportExternalAllocationLimitReached((Isolate *)param_1);
  }
  pMVar9 = operator_new(0x30);
  puVar8 = operator_new(0x10);
  *puVar8 = p_Var17;
  puVar8[1] = this;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var16,0x10);
    if (bVar3) {
      *(long *)p_Var16 = *(long *)p_Var16 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined8 *)(pMVar9 + 0x10) = 0;
  *(undefined8 **)(pMVar9 + 0x18) = puVar8;
  *(long *)pMVar9 = lVar15;
  *(undefined8 *)(pMVar9 + 8) = 0;
  *(code **)(pMVar9 + 0x20) = FUN_012560f0;
  *(undefined8 *)(pMVar9 + 0x28) = 0;
  puVar5 = (ulong *)Factory::NewForeign((Factory *)param_1,(ulong)pMVar9);
  uVar11 = GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),*puVar5);
  *(undefined8 *)(pMVar9 + 0x28) = uVar11;
  GlobalHandles::MakeWeak(uVar11,pMVar9,ManagedObjectFinalizer,0);
  Isolate::RegisterManagedPtrDestructor(param_1,pMVar9);
  do {
    lVar15 = *(long *)p_Var16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var16,0x10);
    if (bVar3) {
      *(long *)p_Var16 = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    std::__ndk1::__shared_weak_count::__release_weak(this);
  }
  uVar14 = *puVar6;
  uVar13 = *puVar5;
  *(int *)(uVar14 + 0x17) = (int)uVar13;
  if ((uVar13 & 1) != 0) {
    uVar10 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
      uVar10 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
    }
  }
  if (param_2 != 0) {
    uVar12 = 0;
    do {
      local_80 = 0;
      puStack_78 = puVar6;
      local_70 = uVar12;
      IndirectFunctionTableEntry::clear((IndirectFunctionTableEntry *)&local_80);
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

