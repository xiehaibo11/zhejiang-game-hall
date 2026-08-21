
/* v8::internal::wasm::WasmCodeAllocator::~WasmCodeAllocator() */

void __thiscall v8::internal::wasm::WasmCodeAllocator::~WasmCodeAllocator(WasmCodeAllocator *this)

{
  __shared_weak_count *p_Var1;
  WasmCodeAllocator *pWVar2;
  char cVar3;
  bool bVar4;
  VirtualMemory *pVVar5;
  long lVar6;
  __shared_weak_count *this_00;
  VirtualMemory *this_01;
  VirtualMemory *pVVar7;
  WasmCodeAllocator *pWVar8;
  
  WasmCodeManager::FreeNativeModule
            (*(undefined8 *)this,*(long *)(this + 0x78),
             (*(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3) * -0x5555555555555555,
             *(undefined8 *)(this + 0x90));
  this_00 = *(__shared_weak_count **)(this + 0xb8);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      pVVar7 = *(VirtualMemory **)(this + 0x78);
      goto joined_r0x011ff864;
    }
  }
  pVVar7 = *(VirtualMemory **)(this + 0x78);
joined_r0x011ff864:
  if (pVVar7 != (VirtualMemory *)0x0) {
    this_01 = *(VirtualMemory **)(this + 0x80);
    pVVar5 = pVVar7;
    if (this_01 != pVVar7) {
      do {
        this_01 = this_01 + -0x18;
        VirtualMemory::~VirtualMemory(this_01);
      } while (pVVar7 != this_01);
      pVVar5 = *(VirtualMemory **)(this + 0x78);
    }
    *(VirtualMemory **)(this + 0x80) = pVVar7;
    operator_delete(pVVar5);
  }
  if (*(long *)(this + 0x70) != 0) {
    lVar6 = *(long *)(this + 0x60);
    pWVar2 = *(WasmCodeAllocator **)(this + 0x68);
    *(undefined8 *)(*(long *)pWVar2 + 8) = *(undefined8 *)(lVar6 + 8);
    **(undefined8 **)(lVar6 + 8) = *(undefined8 *)pWVar2;
    *(undefined8 *)(this + 0x70) = 0;
    while (pWVar2 != this + 0x60) {
      pWVar8 = *(WasmCodeAllocator **)(pWVar2 + 8);
      operator_delete(pWVar2);
      pWVar2 = pWVar8;
    }
  }
  if (*(long *)(this + 0x58) != 0) {
    lVar6 = *(long *)(this + 0x48);
    pWVar2 = *(WasmCodeAllocator **)(this + 0x50);
    *(undefined8 *)(*(long *)pWVar2 + 8) = *(undefined8 *)(lVar6 + 8);
    **(undefined8 **)(lVar6 + 8) = *(undefined8 *)pWVar2;
    *(undefined8 *)(this + 0x58) = 0;
    while (pWVar2 != this + 0x48) {
      pWVar8 = *(WasmCodeAllocator **)(pWVar2 + 8);
      operator_delete(pWVar2);
      pWVar2 = pWVar8;
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    lVar6 = *(long *)(this + 0x30);
    pWVar2 = *(WasmCodeAllocator **)(this + 0x38);
    *(undefined8 *)(*(long *)pWVar2 + 8) = *(undefined8 *)(lVar6 + 8);
    **(undefined8 **)(lVar6 + 8) = *(undefined8 *)pWVar2;
    *(undefined8 *)(this + 0x40) = 0;
    while (pWVar2 != this + 0x30) {
      pWVar8 = *(WasmCodeAllocator **)(pWVar2 + 8);
      operator_delete(pWVar2);
      pWVar2 = pWVar8;
    }
  }
  base::Mutex::~Mutex((Mutex *)(this + 8));
  return;
}

