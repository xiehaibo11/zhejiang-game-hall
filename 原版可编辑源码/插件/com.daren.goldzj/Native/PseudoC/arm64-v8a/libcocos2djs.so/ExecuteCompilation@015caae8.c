
/* v8::internal::wasm::WasmCompilationUnit::ExecuteCompilation(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*,
   std::__ndk1::shared_ptr<v8::internal::wasm::WireBytesStorage> const&, v8::internal::Counters*,
   v8::internal::wasm::WasmFeatures*) */

void __thiscall
v8::internal::wasm::WasmCompilationUnit::ExecuteCompilation
          (WasmCompilationUnit *this,WasmEngine *param_1,CompilationEnv *param_2,shared_ptr *param_3
          ,Counters *param_4,WasmFeatures *param_5)

{
  long *in_x8;
  long lVar1;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined4 local_48;
  undefined3 uStack_44;
  
  *(undefined4 *)(in_x8 + 8) = 0;
  in_x8[5] = 0;
  in_x8[4] = 0;
  in_x8[7] = 0;
  in_x8[6] = 0;
  in_x8[1] = 0;
  *in_x8 = 0;
  in_x8[3] = 0;
  in_x8[2] = 0;
  *(undefined4 *)(in_x8 + 0x10) = 0xffffffff;
  in_x8[0xf] = 0;
  in_x8[0xe] = 0;
  in_x8[0xd] = 0;
  in_x8[0xc] = 0;
  in_x8[0xb] = 0;
  in_x8[10] = 0;
  in_x8[9] = 0;
  *(undefined1 *)((long)in_x8 + 0x86) = 0;
  lVar1 = *(long *)param_2;
  if (*(int *)this < *(int *)(lVar1 + 0x3c)) {
    compiler::CompileWasmImportCallWrapper
              ((compiler *)&local_c8,param_1,param_2,4,
               *(undefined8 *)(*(long *)(lVar1 + 0x88) + (long)*(int *)this * 0x20),
               *(char *)(lVar1 + 0x178) != '\0');
  }
  else {
    ExecuteFunctionCompilation
              ((WasmEngine *)this,(CompilationEnv *)param_1,(shared_ptr *)param_2,
               (Counters *)param_3,(WasmFeatures *)param_4);
  }
  in_x8[1] = lStack_c0;
  *in_x8 = local_c8;
  in_x8[7] = lStack_90;
  in_x8[6] = local_98;
  in_x8[9] = lStack_80;
  in_x8[8] = local_88;
  in_x8[5] = lStack_a0;
  in_x8[4] = local_a8;
  in_x8[3] = lStack_b0;
  in_x8[2] = local_b8;
  in_x8[0xb] = lStack_70;
  in_x8[10] = local_78;
  in_x8[0xd] = lStack_60;
  in_x8[0xc] = local_68;
  in_x8[0xf] = lStack_50;
  in_x8[0xe] = local_58;
  *(uint *)((long)in_x8 + 0x83) = CONCAT31(uStack_44,local_48._3_1_);
  *(undefined4 *)(in_x8 + 0x10) = local_48;
  if (*in_x8 != 0) {
    StatsCounterThreadSafe::Increment
              ((StatsCounterThreadSafe *)(param_4 + 0x2020),*(int *)((long)in_x8 + 0xc));
    StatsCounterThreadSafe::Increment
              ((StatsCounterThreadSafe *)(param_4 + 0x2060),*(int *)((long)in_x8 + 0x34));
  }
  *(undefined4 *)(in_x8 + 0x10) = *(undefined4 *)this;
  *(WasmCompilationUnit *)((long)in_x8 + 0x84) = this[4];
  return;
}

