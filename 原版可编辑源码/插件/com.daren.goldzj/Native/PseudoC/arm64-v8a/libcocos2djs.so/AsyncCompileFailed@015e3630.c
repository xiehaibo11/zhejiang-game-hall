
/* v8::internal::wasm::AsyncCompileJob::AsyncCompileFailed() */

void __thiscall v8::internal::wasm::AsyncCompileJob::AsyncCompileFailed(AsyncCompileJob *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_18;
  
  local_60 = *(long *)this;
  uStack_58 = *(undefined8 *)(this + 8);
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_015e373c(*(undefined8 *)(*(long *)(this + 0x58) + 200),*(long *)(this + 0x58),
               *(undefined8 *)(local_60 + 0x9520),*(undefined8 *)(local_60 + 0x95d0),&local_60,
               this[0x14],0);
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
  plVar6 = *(long **)(this + 0x40);
  uVar4 = ErrorThrower::Reify((ErrorThrower *)&local_60);
  (**(code **)(*plVar6 + 8))(plVar6,uVar4);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  ErrorThrower::~ErrorThrower((ErrorThrower *)&local_60);
  return;
}

