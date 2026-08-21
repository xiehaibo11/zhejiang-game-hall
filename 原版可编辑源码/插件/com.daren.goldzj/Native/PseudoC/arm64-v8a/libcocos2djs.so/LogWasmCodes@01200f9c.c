
/* v8::internal::wasm::NativeModule::LogWasmCodes(v8::internal::Isolate*) */

void __thiscall v8::internal::wasm::NativeModule::LogWasmCodes(NativeModule *this,Isolate *param_1)

{
  Mutex *this_00;
  WasmCode *pWVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x1;
  long *plVar7;
  WasmCode *this_01;
  int iVar8;
  WasmCode *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x9558) + 0x88))(*(long **)(param_1 + 0x9558));
  if ((uVar6 & 1) == 0) {
    for (plVar7 = *(long **)(*(long *)(param_1 + 0xb6d8) + 0x10); plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      uVar6 = (**(code **)(*(long *)plVar7[2] + 0x88))();
      if ((uVar6 & 1) != 0) goto LAB_01201024;
    }
    if (param_1[0xb7fc] == (Isolate)0x0) goto LAB_0120110c;
  }
LAB_01201024:
  iVar8 = *(int *)(*(long *)(this + 200) + 0x3c);
  iVar2 = *(int *)(*(long *)(this + 200) + 0x44) + iVar8;
  plVar7 = (long *)__emutls_get_address(&DAT_01d35888);
  local_88 = *plVar7;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_60 = 0x3f800000;
  *plVar7 = (long)&local_88;
  if (iVar8 < iVar2) {
    this_00 = (Mutex *)(this + 0x110);
    do {
      base::Mutex::Lock(this_00);
      this_01 = *(WasmCode **)
                 (*(long *)(this + 0x150) +
                 (ulong)(uint)(iVar8 - *(int *)(*(long *)(this + 200) + 0x3c)) * 8);
      if (this_01 == (WasmCode *)0x0) {
        base::Mutex::Unlock(this_00);
      }
      else {
        local_90 = this_01;
        plVar7 = (long *)__emutls_get_address(&DAT_01d35888);
        std::__ndk1::
        __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
        ::
        __emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
                  ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                    *)(*plVar7 + 8),&local_90,&local_90);
        if ((extraout_x1 & 1) != 0) {
          pWVar1 = local_90 + 0x8c;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pWVar1,0x10);
            if (bVar4) {
              *(int *)pWVar1 = *(int *)pWVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        base::Mutex::Unlock(this_00);
        WasmCode::LogCode(this_01,param_1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar2);
  }
  WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_88);
LAB_0120110c:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

