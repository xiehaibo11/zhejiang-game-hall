
/* v8::WasmStreaming::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>) */

void __thiscall v8::WasmStreaming::SetClient(WasmStreaming *this,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *this_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  StreamingDecoder *pSVar5;
  code *pcVar6;
  long lVar7;
  undefined **local_70;
  undefined8 uStack_68;
  __shared_weak_count *local_60;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uStack_68 = *param_2;
  this_00 = (__shared_weak_count *)param_2[1];
  lVar7 = *(long *)this;
  if (this_00 == (__shared_weak_count *)0x0) {
    pSVar5 = *(StreamingDecoder **)(lVar7 + 8);
  }
  else {
    p_Var1 = this_00 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pSVar5 = *(StreamingDecoder **)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = &PTR____func_01cbc578;
  local_60 = this_00;
  internal::wasm::StreamingDecoder::SetModuleCompiledCallback(pSVar5,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_01243858;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_01243858:
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
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

