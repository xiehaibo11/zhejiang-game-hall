
/* v8::internal::wasm::WasmEngine::SyncCompileTranslatedAsmJs(v8::internal::Isolate*,
   v8::internal::wasm::ErrorThrower*, v8::internal::wasm::ModuleWireBytes const&,
   v8::internal::Vector<unsigned char const>, v8::internal::Handle<v8::internal::HeapNumber>,
   v8::internal::LanguageMode) */

undefined8
v8::internal::wasm::WasmEngine::SyncCompileTranslatedAsmJs
          (long param_1,Factory *param_2,undefined8 param_3,long *param_4,void *param_5,int param_6,
          undefined8 param_7,uint param_8)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  __shared_weak_count *p_Var6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long local_d0;
  __shared_weak_count *p_Stack_c8;
  long local_c0;
  __shared_weak_count *local_b8;
  undefined4 local_b0 [2];
  ulong local_a8;
  long local_a0;
  __shared_weak_count *p_Stack_98;
  undefined4 local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  __shared_weak_count *local_68;
  undefined4 local_60;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  
  local_a8 = local_a8 & 0xffffffff00000000;
  uVar9 = 1;
  if ((param_8 & 1) != 0) {
    uVar9 = 2;
  }
  DecodeWasmModule((wasm *)&local_a0,&local_a8,*param_4,*param_4 + param_4[1],0,uVar9,
                   *(undefined8 *)(param_2 + 0x9520),param_1 + 0x58);
  uStack_50 = uStack_80;
  local_58 = local_88;
  local_60 = local_90;
  local_70 = local_a0;
  local_68 = p_Stack_98;
  uVar3 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    uVar3 = uStack_80;
  }
  local_48 = local_78;
  if (uVar3 == 0) {
    local_c0 = local_a0;
    local_b8 = p_Stack_98;
    local_a8 = 0;
    local_b0[0] = 0;
    local_70 = 0;
    local_68 = (__shared_weak_count *)0x0;
    CompileToNativeModule((wasm *)&local_a0,param_2,local_b0,param_3,&local_c0,param_4,&local_a8);
    p_Var6 = local_b8;
    if (local_b8 != (__shared_weak_count *)0x0) {
      p_Var1 = local_b8 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    if (local_a0 == 0) {
      uVar8 = 0;
      local_a0 = 0;
      p_Var6 = p_Stack_98;
    }
    else {
      plVar7 = (long *)Factory::NewByteArray(param_2,param_6,0);
      memcpy((void *)(*plVar7 + 7),param_5,(long)param_6);
      p_Stack_c8 = p_Stack_98;
      local_d0 = local_a0;
      local_a0 = 0;
      p_Stack_98 = (__shared_weak_count *)0x0;
      uVar8 = AsmWasmData::New(param_2,&local_d0,local_a8,plVar7,param_7);
      p_Var1 = p_Stack_c8;
      p_Var6 = p_Stack_98;
      if (p_Stack_c8 != (__shared_weak_count *)0x0) {
        p_Var2 = p_Stack_c8 + 8;
        do {
          lVar10 = *(long *)p_Var2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar5) {
            *(long *)p_Var2 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*(long *)p_Stack_c8 + 0x10))(p_Stack_c8);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
          p_Var6 = p_Stack_98;
        }
      }
    }
    p_Stack_98 = p_Var6;
    if (p_Var6 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var6 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    p_Var6 = local_68;
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    return uVar8;
  }
  std::__ndk1::operator<<((basic_ostream *)std::__ndk1::cout,(basic_string *)&local_58);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

