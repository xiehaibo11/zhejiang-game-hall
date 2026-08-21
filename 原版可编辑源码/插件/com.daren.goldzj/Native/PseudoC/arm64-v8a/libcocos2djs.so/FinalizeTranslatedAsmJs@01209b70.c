
/* v8::internal::wasm::WasmEngine::FinalizeTranslatedAsmJs(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::AsmWasmData>, v8::internal::Handle<v8::internal::Script>) */

ulong * __thiscall
v8::internal::wasm::WasmEngine::FinalizeTranslatedAsmJs
          (undefined8 param_1_00,Isolate *param_1,ulong *param_3,undefined8 param_4)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *p_Var3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 local_60;
  __shared_weak_count *local_58;
  
  uVar8 = *param_3;
  uVar10 = uVar8 & 0xffffffff00000000;
  puVar12 = *(undefined8 **)(*(long *)((uVar10 | *(uint *)(uVar8 + 3)) + 3) + 0x18);
  uVar2 = *puVar12;
  p_Var3 = (__shared_weak_count *)puVar12[1];
  if (p_Var3 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var3 + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar8 = *param_3;
    uVar10 = uVar8 & 0xffffffff00000000;
  }
  uVar10 = uVar10 | *(uint *)(uVar8 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_1 + 0x95a0);
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  local_60 = uVar2;
  local_58 = p_Var3;
  puVar7 = (ulong *)WasmModuleObject::New(param_1,&local_60,param_4,puVar7);
  p_Var3 = local_58;
  if (local_58 != (__shared_weak_count *)0x0) {
    p_Var1 = local_58 + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_58 + 0x10))(local_58);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
    }
  }
  uVar8 = *param_3;
  uVar10 = *puVar7;
  uVar4 = *(uint *)(uVar8 + 0xb);
  *(uint *)(uVar10 + 0x17) = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar13 = uVar8 | uVar4;
    uVar8 = uVar8 | (ulong)uVar4 & 0xfffffffffffc0000;
    uVar9 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x17,uVar13);
      uVar9 = *(ulong *)(uVar8 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x17,uVar13);
    }
  }
  return puVar7;
}

