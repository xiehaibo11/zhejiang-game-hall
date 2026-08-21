
/* v8::internal::wasm::NativeModule::NativeModule(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::WasmFeatures const&, bool, v8::internal::VirtualMemory,
   std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule const>,
   std::__ndk1::shared_ptr<v8::internal::Counters>,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>*) */

void __thiscall
v8::internal::wasm::NativeModule::NativeModule
          (NativeModule *this,undefined8 param_1,undefined4 *param_2,uint param_4,
          VirtualMemory *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  NativeModule NVar4;
  CompilationState *pCVar5;
  Mutex *this_00;
  undefined8 *puVar6;
  void *__s;
  void *pvVar7;
  long lVar8;
  CompilationState *this_01;
  ulong __n;
  __shared_weak_count *p_Var9;
  undefined8 local_90;
  __shared_weak_count *p_Stack_88;
  undefined8 local_78;
  __shared_weak_count *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  CompilationState *local_38;
  
  local_68 = *(undefined8 *)param_5;
  uStack_58 = *(undefined8 *)(param_5 + 0x10);
  local_60 = *(undefined8 *)(param_5 + 8);
  VirtualMemory::Reset(param_5);
  local_78 = *param_7;
  local_70 = (__shared_weak_count *)param_7[1];
  if (local_70 != (__shared_weak_count *)0x0) {
    p_Var9 = local_70 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar3) {
        *(long *)p_Var9 = *(long *)p_Var9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  WasmCodeAllocator::WasmCodeAllocator
            ((WasmCodeAllocator *)this,param_1,&local_68,param_4 & 1,&local_78);
  p_Var9 = local_70;
  if (local_70 != (__shared_weak_count *)0x0) {
    p_Var1 = local_70 + 8;
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
      (**(code **)(*(long *)local_70 + 0x10))(local_70);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_68);
  *(undefined4 *)(this + 0xc0) = *param_2;
  *(undefined8 *)(this + 200) = *param_6;
  *(undefined8 *)(this + 0xd0) = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this_00 = operator_new(0x50);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  base::Mutex::Mutex(this_00);
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x48) = 0x3f800000;
  *(Mutex **)(this + 0x108) = this_00;
  base::Mutex::Mutex((Mutex *)(this + 0x110));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = param_1;
  *(undefined4 *)(this + 0x180) = 0;
  *(NativeModule **)(this + 0x138) = this + 0x140;
  *(undefined8 *)(this + 0x140) = 0;
  NVar4 = trap_handler::g_is_trap_handler_enabled;
  this[0x185] = (NativeModule)0x0;
  this[0x184] = NVar4;
  puVar6 = operator_new(0x20);
  puVar6[2] = 0;
  puVar6[3] = this;
  *puVar6 = &PTR____shared_weak_count_01cbc2b0;
  puVar6[1] = 0;
  p_Var9 = (__shared_weak_count *)param_8[1];
  *param_8 = this;
  param_8[1] = puVar6;
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
    }
  }
  p_Stack_88 = (__shared_weak_count *)param_7[1];
  local_90 = *param_7;
  *param_7 = 0;
  param_7[1] = 0;
  CompilationState::New((CompilationState *)&local_38,param_8,&local_90);
  pCVar5 = local_38;
  local_38 = (CompilationState *)0x0;
  this_01 = *(CompilationState **)(this + 0x100);
  *(CompilationState **)(this + 0x100) = pCVar5;
  if (this_01 == (CompilationState *)0x0) {
    local_38 = (CompilationState *)0x0;
    p_Var9 = p_Stack_88;
  }
  else {
    CompilationState::~CompilationState(this_01);
    operator_delete(this_01);
    pCVar5 = local_38;
    local_38 = (CompilationState *)0x0;
    p_Var9 = p_Stack_88;
    if (pCVar5 != (CompilationState *)0x0) {
      CompilationState::~CompilationState(pCVar5);
      operator_delete(pCVar5);
      p_Var9 = p_Stack_88;
    }
  }
  p_Stack_88 = p_Var9;
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
    }
  }
  if (*(uint *)(*(long *)(this + 200) + 0x44) != 0) {
    __n = (ulong)*(uint *)(*(long *)(this + 200) + 0x44) << 3;
    __s = operator_new__(__n);
    memset(__s,0,__n);
    pvVar7 = *(void **)(this + 0x150);
    *(void **)(this + 0x150) = __s;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
  }
  local_38 = (CompilationState *)0x0;
  AddCodeSpace(this,*(undefined8 *)(*(long *)(this + 0x78) + 8),
               *(undefined8 *)(*(long *)(this + 0x78) + 0x10),&local_38);
  return;
}

