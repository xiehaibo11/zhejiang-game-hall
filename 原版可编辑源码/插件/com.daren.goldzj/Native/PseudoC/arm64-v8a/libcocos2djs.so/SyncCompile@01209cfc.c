
/* v8::internal::wasm::WasmEngine::SyncCompile(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::wasm::ErrorThrower*,
   v8::internal::wasm::ModuleWireBytes const&) */

undefined8 __thiscall
v8::internal::wasm::WasmEngine::SyncCompile
          (WasmEngine *this,Isolate *param_1,WasmFeatures *param_2,ErrorThrower *param_3,
          ModuleWireBytes *param_4)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  char cVar3;
  __shared_weak_count *p_Var4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long local_c0;
  __shared_weak_count *p_Stack_b8;
  long local_b0;
  __shared_weak_count *local_a8;
  long local_a0;
  __shared_weak_count *p_Stack_98;
  undefined4 local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  __shared_weak_count *local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulong uStack_50;
  void *local_48;
  undefined8 local_28;
  
  DecodeWasmModule((wasm *)&local_a0,param_2,*(long *)param_4,
                   *(long *)param_4 + *(long *)(param_4 + 8),0,0,*(undefined8 *)(param_1 + 0x9520),
                   this + 0x58);
  uStack_50 = uStack_80;
  local_58 = local_88;
  local_70 = local_a0;
  local_68 = p_Stack_98;
  local_60 = local_90;
  bVar5 = (local_88 & 1) != 0;
  uVar2 = local_88 >> 1 & 0x7f;
  if (bVar5) {
    uVar2 = uStack_80;
  }
  local_48 = local_78;
  if (uVar2 != 0) {
    if (!bVar5) {
      local_78 = (void *)((long)&local_58 + 1);
    }
    ErrorThrower::CompileError((char *)param_3,"%s @+%u",local_78);
    uVar8 = 0;
    goto joined_r0x01209f54;
  }
  local_b0 = local_a0;
  local_a8 = p_Stack_98;
  local_28 = 0;
  local_70 = 0;
  local_68 = (__shared_weak_count *)0x0;
  CompileToNativeModule((wasm *)&local_a0,param_1,param_2,param_3,&local_b0,param_4,&local_28);
  p_Var4 = local_a8;
  if (local_a8 == (__shared_weak_count *)0x0) {
LAB_01209e5c:
    if (local_a0 != 0) goto LAB_01209e64;
LAB_01209f14:
    uVar8 = 0;
    p_Var4 = p_Stack_98;
  }
  else {
    p_Var1 = local_a8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_01209e5c;
    (**(code **)(*(long *)local_a8 + 0x10))(local_a8);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    if (local_a0 == 0) goto LAB_01209f14;
LAB_01209e64:
    uVar6 = CreateWasmScript(param_1,param_4,*(long *)(local_a0 + 200) + 0x188,
                             *(undefined8 *)(*(long *)(local_a0 + 200) + 0x50));
    p_Stack_b8 = p_Stack_98;
    local_c0 = local_a0;
    local_a0 = 0;
    p_Stack_98 = (__shared_weak_count *)0x0;
    uVar8 = WasmModuleObject::New(param_1,&local_c0,uVar6,local_28);
    p_Var4 = p_Stack_b8;
    if (p_Stack_b8 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Stack_b8 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)p_Stack_b8 + 0x10))(p_Stack_b8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
      }
    }
    Debug::OnAfterCompile(*(Debug **)(param_1 + 0xb6c8),uVar6);
    p_Var4 = p_Stack_98;
  }
  p_Stack_98 = p_Var4;
  if (p_Var4 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var4 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    }
  }
joined_r0x01209f54:
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  p_Var4 = local_68;
  if (local_68 != (__shared_weak_count *)0x0) {
    p_Var1 = local_68 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)local_68 + 0x10))(local_68);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    }
  }
  return uVar8;
}

