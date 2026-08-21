
/* v8::internal::wasm::AsyncCompileJob::PrepareRuntimeObjects() */

void __thiscall v8::internal::wasm::AsyncCompileJob::PrepareRuntimeObjects(AsyncCompileJob *this)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_40;
  __shared_weak_count *local_38;
  
  uVar5 = CreateWasmScript(*(undefined8 *)this,this + 0x28,
                           *(long *)(*(long *)(this + 0x58) + 200) + 0x188,
                           *(undefined8 *)(*(long *)(*(long *)(this + 0x58) + 200) + 0x50));
  local_40 = *(undefined8 *)(this + 0x58);
  uVar6 = *(undefined8 *)this;
  local_38 = *(__shared_weak_count **)(this + 0x60);
  if (local_38 != (__shared_weak_count *)0x0) {
    p_Var1 = local_38 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = (undefined8 *)WasmModuleObject::New(uVar6,&local_40,uVar5);
  p_Var1 = local_38;
  if (local_38 != (__shared_weak_count *)0x0) {
    p_Var2 = local_38 + 8;
    do {
      lVar8 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)local_38 + 0x10))(local_38);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  uVar5 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar7);
  *(undefined8 *)(this + 0x50) = uVar5;
  return;
}

