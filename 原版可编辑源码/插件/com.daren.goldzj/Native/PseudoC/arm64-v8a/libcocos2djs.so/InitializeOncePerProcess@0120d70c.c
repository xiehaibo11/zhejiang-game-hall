
/* v8::internal::wasm::WasmEngine::InitializeOncePerProcess() */

void v8::internal::wasm::WasmEngine::InitializeOncePerProcess(void)

{
  WasmCodeManager *this;
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = operator_new(0x1d8);
  puVar5[2] = 0;
  iVar4 = FLAG_wasm_max_code_space;
  this = (WasmCodeManager *)(puVar5 + 3);
  *puVar5 = &PTR____shared_ptr_emplace_01cbc540;
  puVar5[1] = 0;
  WasmCodeManager::WasmCodeManager(this,(ulong)(uint)(iVar4 << 0x14));
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0xe] = &PTR__AccountingAllocator_01cbced0;
  CancelableTaskManager::CancelableTaskManager((CancelableTaskManager *)(puVar5 + 0x11));
  base::Mutex::Mutex((Mutex *)(puVar5 + 0x23));
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2a] = 0;
  *(undefined4 *)(puVar5 + 0x2c) = 0x3f800000;
  puVar5[0x2e] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x30] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x32] = 0;
  puVar5[0x31] = 0;
  *(undefined4 *)(puVar5 + 0x33) = 0x3f800000;
  *(undefined4 *)(puVar5 + 0x38) = 0x3f800000;
  puVar5[0x35] = 0;
  puVar5[0x34] = 0;
  puVar5[0x37] = 0;
  puVar5[0x36] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  if (((DAT_01d3fce0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d3fce0), iVar4 != 0)) {
    DAT_01d3fcd0 = (WasmCodeManager *)0x0;
    DAT_01d3fcd8 = (__shared_weak_count *)0x0;
    __cxa_guard_release(&DAT_01d3fce0);
  }
  this_00 = DAT_01d3fcd8;
  DAT_01d3fcd0 = this;
  if (DAT_01d3fcd8 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d3fcd8 + 8;
    DAT_01d3fcd8 = (__shared_weak_count *)puVar5;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = (undefined8 *)DAT_01d3fcd8;
    if (lVar6 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  DAT_01d3fcd8 = (__shared_weak_count *)puVar5;
  return;
}

