
/* v8::internal::WasmDebugInfo::GetCWasmEntry(v8::internal::Handle<v8::internal::WasmDebugInfo>,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

void v8::internal::WasmDebugInfo::GetCWasmEntry(ulong *param_1,Signature *param_2)

{
  __shared_weak_count *p_Var1;
  long lVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this;
  int iVar5;
  ulong *puVar6;
  CanonicalHandleScope *pCVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  Isolate *pIVar11;
  ulong uVar12;
  ulong uVar13;
  SignatureMap *this_00;
  __shared_weak_count *local_70;
  __shared_weak_count *local_68;
  
  pIVar11 = (Isolate *)(*param_1 & 0xffffffff00000000);
  if (*(int *)(*param_1 + 0x13) == *(int *)(pIVar11 + 0xa0)) {
    puVar6 = (ulong *)Factory::NewFixedArray((Factory *)pIVar11,4,1);
    uVar13 = *param_1;
    uVar12 = *puVar6;
    *(int *)(uVar13 + 0x13) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x13,uVar12);
        uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x13,uVar12);
      }
    }
    local_68 = operator_new(0x48);
    *(undefined8 *)(local_68 + 0x10) = 0;
    *(undefined ***)local_68 = &PTR____shared_ptr_emplace_01cbc408;
    *(undefined8 *)(local_68 + 8) = 0;
    local_70 = local_68 + 0x18;
    *(undefined8 *)(local_68 + 0x20) = 0;
    *(undefined8 *)local_70 = 0;
    *(undefined8 *)(local_68 + 0x40) = 0;
    *(undefined8 *)(local_68 + 0x38) = 0;
    *(undefined8 *)(local_68 + 0x30) = 0;
    *(undefined8 *)(local_68 + 0x28) = 0;
    *(undefined4 *)(local_68 + 0x40) = 0x3f800000;
    puVar6 = (ulong *)Managed<v8::internal::wasm::SignatureMap>::FromSharedPtr
                                (pIVar11,0,(shared_ptr *)&local_70);
    this = local_68;
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    uVar13 = *param_1;
    uVar12 = *puVar6;
    *(int *)(uVar13 + 0x17) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x17,uVar12);
        uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x17,uVar12);
      }
    }
  }
  pCVar7 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
  uVar12 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x13);
  if (pCVar7 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar7,uVar12);
  }
  this_00 = (SignatureMap *)
            **(undefined8 **)
              (*(long *)((*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x17)) + 3) +
              0x18);
  iVar5 = wasm::SignatureMap::Find(this_00,param_2);
  if (iVar5 == -1) {
    iVar5 = wasm::SignatureMap::FindOrInsert(this_00,param_2);
    if (iVar5 == *(int *)(*puVar6 + 3) >> 1) {
      puVar6 = (ulong *)Factory::CopyFixedArrayAndGrow(pIVar11,puVar6,iVar5);
      uVar13 = *param_1;
      uVar12 = *puVar6;
      *(int *)(uVar13 + 0x13) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x13,uVar12);
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x13,uVar12);
        }
      }
    }
    puVar8 = (ulong *)compiler::CompileCWasmEntry(pIVar11,param_2);
    if (puVar8 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar13 = *puVar6;
    uVar12 = *puVar8;
    lVar10 = (long)(iVar5 << 2);
    *(int *)(lVar10 + uVar13 + 7) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      lVar2 = lVar10 + uVar13 + 7;
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,lVar2,uVar12);
        uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,lVar2,uVar12);
      }
    }
  }
  else {
    lVar10 = (long)(iVar5 << 2);
  }
  pCVar7 = *(CanonicalHandleScope **)(pIVar11 + 0x95b8);
  uVar12 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + lVar10 + 7);
  if (pCVar7 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    CanonicalHandleScope::Lookup(pCVar7,uVar12);
  }
  return;
}

