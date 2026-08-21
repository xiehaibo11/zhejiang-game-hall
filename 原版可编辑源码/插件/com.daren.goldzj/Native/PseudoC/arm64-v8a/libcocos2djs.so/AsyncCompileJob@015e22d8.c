
/* v8::internal::wasm::AsyncCompileJob::AsyncCompileJob(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, std::__ndk1::unique_ptr<unsigned char [],
   std::__ndk1::default_delete<unsigned char []> >, unsigned long,
   v8::internal::Handle<v8::internal::Context>, char const*,
   std::__ndk1::shared_ptr<v8::internal::wasm::CompilationResultResolver>) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::AsyncCompileJob
          (AsyncCompileJob *this,long param_1,undefined4 *param_2,undefined8 *param_4,int param_5,
          ulong *param_6,undefined8 param_7,undefined8 *param_8)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  __shared_weak_count *p_Var9;
  byte **local_70;
  byte *local_68;
  byte *local_60;
  undefined8 local_58;
  long *local_50;
  __shared_weak_count *local_48;
  
  *(long *)this = param_1;
  *(undefined8 *)(this + 8) = param_7;
  *(undefined4 *)(this + 0x10) = *param_2;
  this[0x14] = FLAG_wasm_lazy_compilation;
  uVar5 = base::TimeTicks::Now();
  *(undefined8 *)(this + 0x18) = uVar5;
  uVar5 = *param_4;
  *param_4 = 0;
  *(long *)(this + 0x30) = (long)param_5;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x40) = *param_8;
  *(undefined8 *)(this + 0x48) = param_8[1];
  *param_8 = 0;
  param_8[1] = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  CancelableTaskManager::CancelableTaskManager((CancelableTaskManager *)(this + 0x70));
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x110) = 1;
  if (DAT_01d47878 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d47878 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.wasm");
  }
  pbVar4 = DAT_01d47878;
  local_70 = (byte **)0x0;
  if ((*DAT_01d47878 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (__shared_weak_count *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,&BYTE_01a543c5,0,0,0,0,0,0,0,&local_50,0);
    p_Var1 = local_48;
    local_48 = (__shared_weak_count *)0x0;
    if (p_Var1 != (__shared_weak_count *)0x0) {
      (**(code **)(*(long *)p_Var1 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_70 = &local_68;
    local_60 = &BYTE_01a543c5;
    local_68 = pbVar4;
    local_58 = uVar5;
  }
  plVar6 = (long *)V8::GetCurrentPlatform();
  (**(code **)(*plVar6 + 0x30))(&local_50,plVar6,param_1);
  p_Var1 = local_48;
  plVar6 = local_50;
  local_50 = (long *)0x0;
  local_48 = (__shared_weak_count *)0x0;
  p_Var9 = *(__shared_weak_count **)(this + 0x108);
  *(long **)(this + 0x100) = plVar6;
  *(__shared_weak_count **)(this + 0x108) = p_Var1;
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var9 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      p_Var1 = local_48;
      if (local_48 != (__shared_weak_count *)0x0) {
        p_Var9 = local_48 + 8;
        do {
          lVar8 = *(long *)p_Var9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
          if (bVar3) {
            *(long *)p_Var9 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*(long *)local_48 + 0x10))(local_48);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
        }
      }
    }
  }
  uVar7 = *param_6 & 0xffffffff00000000;
  uVar5 = GlobalHandles::Create
                    (*(GlobalHandles **)(param_1 + 0x95e0),
                     uVar7 | *(uint *)((uVar7 | *(uint *)(*param_6 - 1)) + 0x13));
  *(undefined8 *)(this + 0x38) = uVar5;
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_68,local_60,local_58);
  }
  return;
}

