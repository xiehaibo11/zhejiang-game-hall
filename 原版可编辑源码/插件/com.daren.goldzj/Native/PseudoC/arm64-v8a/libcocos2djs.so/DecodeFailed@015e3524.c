
/* v8::internal::wasm::AsyncCompileJob::DecodeFailed(v8::internal::wasm::WasmError const&) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::DecodeFailed(AsyncCompileJob *this,WasmError *param_1)

{
  __shared_weak_count *p_Var1;
  WasmError *pWVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this_00;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_18;
  
  uStack_58 = *(undefined8 *)(this + 8);
  local_60 = *(undefined8 *)this;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  pWVar2 = param_1 + 9;
  if (((byte)param_1[8] & 1) != 0) {
    pWVar2 = *(WasmError **)(param_1 + 0x18);
  }
  ErrorThrower::CompileError((char *)&local_60,"%s @+%u",pWVar2,(ulong)*(uint *)param_1);
  WasmEngine::RemoveCompileJob(*(AsyncCompileJob **)(*(long *)this + 0xc770));
  if (local_18 == 0) {
    this_00 = (__shared_weak_count *)0x0;
  }
  else {
    this_00 = operator_new(0x20);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(long *)(this_00 + 0x18) = local_18;
    *(undefined ***)this_00 = &PTR____shared_weak_count_01cc9d40;
    *(undefined8 *)(this_00 + 8) = 0;
  }
  plVar7 = *(long **)(this + 0x40);
  uVar5 = ErrorThrower::Reify((ErrorThrower *)&local_60);
  (**(code **)(*plVar7 + 8))(plVar7,uVar5);
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
    }
  }
  ErrorThrower::~ErrorThrower((ErrorThrower *)&local_60);
  return;
}

