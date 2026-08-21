
/* v8::internal::wasm::AsyncCompileJob::FinishCompile() */

void __thiscall v8::internal::wasm::AsyncCompileJob::FinishCompile(AsyncCompileJob *this)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  Factory *pFVar10;
  byte *pbVar11;
  AsyncCompileJob *pAVar12;
  ulong uVar13;
  long lVar14;
  AsyncCompileJob *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  byte **local_80;
  byte *local_78;
  byte *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  if (DAT_01d47880 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d47880 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm");
  }
  pbVar11 = DAT_01d47880;
  local_80 = (byte **)0x0;
  if ((*DAT_01d47880 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar11,&BYTE_01a543d9,0,0,0,0,0,0,0,&local_60,0);
    plVar2 = local_58;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_60;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_80 = &local_78;
    local_70 = &BYTE_01a543d9;
    local_78 = pbVar11;
    local_68 = uVar3;
  }
  lVar14 = *(long *)(this + 0x50);
  if (lVar14 == 0) {
    PrepareRuntimeObjects(this);
    uVar4 = base::TimeTicks::IsHighResolution();
  }
  else {
    uVar4 = base::TimeTicks::IsHighResolution();
  }
  if ((uVar4 & 1) != 0) {
    lVar5 = base::TimeTicks::Now();
    local_a0 = (AsyncCompileJob *)(lVar5 - *(long *)(this + 0x18));
    base::TimeDelta::InMicroseconds((TimeDelta *)&local_a0);
    Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0x9520) + 0x1210);
  }
  pIVar6 = *(Isolate **)this;
  uVar4 = **(ulong **)(this + 0x50) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x50) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar4;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar4);
    uVar4 = *puVar7;
  }
  if ((*(uint *)(uVar4 + 0x17) & 0xfffffffe) == 6) {
    lVar5 = *(long *)(**(long **)(*(long *)((**(ulong **)(this + 0x50) & 0xffffffff00000000 |
                                            (ulong)*(uint *)(**(ulong **)(this + 0x50) + 0xb)) + 3)
                                 + 0x18) + 200);
    bVar1 = *(byte *)(lVar5 + 0x188);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_015e3234;
    }
    else if (*(long *)(lVar5 + 400) == 0) goto LAB_015e3234;
    pFVar10 = *(Factory **)this;
    if ((bVar1 & 1) == 0) {
      pAVar12 = (AsyncCompileJob *)(lVar5 + 0x189);
    }
    else {
      pAVar12 = *(AsyncCompileJob **)(lVar5 + 0x198);
    }
    local_98 = (byte *)strlen((char *)pAVar12);
    local_a0 = pAVar12;
    puVar8 = (ulong *)Factory::NewStringFromUtf8(pFVar10,&local_a0,1);
    if (puVar8 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar4 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar4 + 0x37) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar9 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x37,uVar13);
        uVar9 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x37,uVar13);
      }
    }
  }
LAB_015e3234:
  if (DAT_01d47888 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d47888 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm");
  }
  pbVar11 = DAT_01d47888;
  local_a0 = (AsyncCompileJob *)0x0;
  if ((*DAT_01d47888 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar11,&BYTE_01a543f8,0,0,0,0,0,0,0,&local_60,0);
    plVar2 = local_58;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_60;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_a0 = (AsyncCompileJob *)&local_98;
    local_90 = &BYTE_01a543f8;
    local_98 = pbVar11;
    local_88 = uVar3;
  }
  Debug::OnAfterCompile(*(Debug **)(*(long *)this + 0xb6c8),puVar7);
  if ((local_a0 != (AsyncCompileJob *)0x0) && (*local_98 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98,local_90,local_88);
  }
  uVar4 = **(ulong **)(this + 0x50);
  lVar5 = *(long *)(**(long **)(*(long *)((uVar4 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(uVar4 + 0xb)) + 3) + 0x18) + 0x100);
  if (lVar14 == 0) {
    local_a0 = (AsyncCompileJob *)0x0;
    FUN_015e1fe0(lVar5,*(undefined8 *)this,
                 *(undefined8 *)
                  (**(long **)(*(long *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)
                                         ) + 3) + 0x18) + 200),&local_a0);
    uVar4 = **(ulong **)(this + 0x50);
    pbVar11 = *(byte **)local_a0;
    *(int *)(uVar4 + 0xf) = (int)pbVar11;
    if (((ulong)pbVar11 & 1) != 0) {
      uVar13 = *(ulong *)(((ulong)pbVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xf,pbVar11);
        uVar13 = *(ulong *)((ulong)pbVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xf,pbVar11);
      }
    }
  }
  uVar3 = *(undefined8 *)this;
  base::Mutex::Lock((Mutex *)(lVar5 + 0x100));
  if ((*(byte *)(lVar5 + 0x140) >> 1 & 1) != 0) {
    Isolate::CountUsage(uVar3,0x33);
  }
  base::Mutex::Unlock((Mutex *)(lVar5 + 0x100));
  AsyncCompileSucceeded(this,*(undefined8 *)(this + 0x50));
  WasmEngine::RemoveCompileJob(*(AsyncCompileJob **)(*(long *)this + 0xc770));
  pAVar12 = local_a0;
  local_a0 = (AsyncCompileJob *)0x0;
  if (pAVar12 != (AsyncCompileJob *)0x0) {
    ~AsyncCompileJob(pAVar12);
    operator_delete(pAVar12);
  }
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_78,local_70,local_68);
  }
  return;
}

