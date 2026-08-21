
/* v8::internal::wasm::ModuleDecoderImpl::StartDecoding(v8::internal::Counters*,
   v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::StartDecoding
          (ModuleDecoderImpl *this,Counters *param_1,AccountingAllocator *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  WasmModule *pWVar4;
  Zone *pZVar5;
  undefined8 *puVar6;
  long lVar7;
  __shared_weak_count *this_00;
  Zone *local_38;
  
  if (*(long *)(this + 0x50) == 0) {
    *(Counters **)(this + 0x60) = param_1;
    pWVar4 = operator_new(0x1a0);
    pZVar5 = operator_new(0x40);
    Zone::Zone(pZVar5,param_2,"signatures");
    local_38 = pZVar5;
    WasmModule::WasmModule(pWVar4,&local_38);
    puVar6 = operator_new(0x20);
    puVar6[2] = 0;
    puVar6[3] = pWVar4;
    *puVar6 = &PTR____shared_weak_count_01cc9e50;
    puVar6[1] = 0;
    this_00 = *(__shared_weak_count **)(this + 0x58);
    *(WasmModule **)(this + 0x50) = pWVar4;
    *(undefined8 **)(this + 0x58) = puVar6;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    pZVar5 = local_38;
    local_38 = (Zone *)0x0;
    if (pZVar5 != (Zone *)0x0) {
      Zone::~Zone(pZVar5);
      operator_delete(pZVar5);
    }
    *(undefined4 *)(*(long *)(this + 0x50) + 8) = 0;
    *(undefined4 *)(*(long *)(this + 0x50) + 0xc) = 0;
    *(undefined1 *)(*(long *)(this + 0x50) + 0x13) = 0;
    *(ModuleDecoderImpl *)(*(long *)(this + 0x50) + 0x178) = this[0x90];
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(module_) == nullptr");
}

