
/* WARNING: Removing unreachable block (ram,0x015caf6c) */
/* WARNING: Removing unreachable block (ram,0x015cae9c) */
/* WARNING: Removing unreachable block (ram,0x015cae7c) */
/* WARNING: Removing unreachable block (ram,0x015cae8c) */
/* WARNING: Removing unreachable block (ram,0x015caf5c) */
/* WARNING: Removing unreachable block (ram,0x015caf7c) */
/* v8::internal::wasm::WasmCompilationUnit::ExecuteFunctionCompilation(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*,
   std::__ndk1::shared_ptr<v8::internal::wasm::WireBytesStorage> const&, v8::internal::Counters*,
   v8::internal::wasm::WasmFeatures*) */

void v8::internal::wasm::WasmCompilationUnit::ExecuteFunctionCompilation
               (WasmEngine *param_1,CompilationEnv *param_2,shared_ptr *param_3,Counters *param_4,
               WasmFeatures *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  Counters *in_x5;
  WasmFeatures *in_x6;
  long *in_x8;
  long *plVar6;
  undefined1 auVar7 [16];
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined4 uStack_a0;
  undefined3 uStack_9c;
  undefined8 local_98;
  TimedHistogram *local_90;
  Isolate *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)param_3 + 0x88) + (long)*(int *)param_1 * 0x20);
  auVar7 = (**(code **)(**(long **)param_4 + 0x10))(*(long **)param_4,puVar1[2]);
  local_70 = auVar7._0_8_;
  local_80 = *puVar1;
  local_78 = *(undefined4 *)(puVar1 + 2);
  lStack_68 = local_70 + auVar7._8_8_;
  iVar4 = (int)param_5;
  iVar2 = iVar4 + 0x4b8;
  if (*(char *)(*(long *)param_3 + 0x178) != '\0') {
    iVar2 = iVar4 + 0x490;
  }
  Histogram::AddSample(iVar2);
  local_90 = (TimedHistogram *)(param_5 + 0x12a0);
  if (*(char *)(*(long *)param_3 + 0x178) != '\0') {
    local_90 = (TimedHistogram *)(param_5 + 0x1270);
  }
  local_88 = (Isolate *)0x0;
  local_98 = 0;
  TimedHistogram::Start(local_90,(ElapsedTimer *)&local_98,(Isolate *)0x0);
  *(undefined4 *)(in_x8 + 8) = 0;
  in_x8[5] = 0;
  in_x8[4] = 0;
  in_x8[7] = 0;
  in_x8[6] = 0;
  in_x8[1] = 0;
  *in_x8 = 0;
  in_x8[3] = 0;
  in_x8[2] = 0;
  plVar6 = in_x8 + 0x10;
  *(undefined4 *)plVar6 = 0xffffffff;
  in_x8[0xf] = 0;
  in_x8[0xe] = 0;
  in_x8[0xd] = 0;
  in_x8[0xc] = 0;
  in_x8[0xb] = 0;
  in_x8[10] = 0;
  in_x8[9] = 0;
  *(undefined1 *)((long)in_x8 + 0x86) = 0;
  switch(param_1[4]) {
  case (WasmEngine)0x0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (WasmEngine)0x1:
    compiler::ExecuteInterpreterEntryCompilation
              ((compiler *)param_2,(WasmEngine *)param_3,(CompilationEnv *)&local_80,
               (FunctionBody *)(ulong)*(uint *)param_1,iVar4,in_x5,in_x6);
    break;
  case (WasmEngine)0x2:
    uVar3 = *(uint *)param_1;
    if (((FLAG_wasm_tier_mask_for_testing == 0) || (0x1f < (int)uVar3)) ||
       ((FLAG_wasm_tier_mask_for_testing >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
      ExecuteLiftoffCompilation
                ((wasm *)(param_2 + 0x58),(AccountingAllocator *)param_3,(CompilationEnv *)&local_80
                 ,(FunctionBody *)(ulong)uVar3,iVar4,in_x5,in_x6);
      pvVar5 = (void *)in_x8[10];
      in_x8[7] = lStack_e8;
      in_x8[6] = lStack_f0;
      in_x8[9] = lStack_d8;
      in_x8[8] = local_e0;
      in_x8[3] = lStack_108;
      in_x8[2] = lStack_110;
      in_x8[5] = lStack_f8;
      in_x8[4] = local_100;
      in_x8[1] = lStack_118;
      *in_x8 = local_120;
      in_x8[10] = local_d0;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      pvVar5 = (void *)in_x8[0xc];
      in_x8[0xc] = lStack_c0;
      in_x8[0xb] = local_c8;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      pvVar5 = (void *)in_x8[0xe];
      in_x8[0xe] = lStack_b0;
      in_x8[0xd] = local_b8;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      lStack_b0 = 0;
      in_x8[0xf] = local_a8;
      *(uint *)((long)in_x8 + 0x83) = CONCAT31(uStack_9c,uStack_a0._3_1_);
      *(undefined4 *)plVar6 = uStack_a0;
      lStack_c0 = 0;
      local_d0 = 0;
      if (*in_x8 != 0) goto switchD_015cad88_default;
    }
  case (WasmEngine)0x3:
    compiler::ExecuteTurbofanWasmCompilation
              ((WasmEngine *)param_2,(CompilationEnv *)param_3,(FunctionBody *)&local_80,
               *(int *)param_1,(Counters *)param_5,(WasmFeatures *)in_x5);
    break;
  default:
    goto switchD_015cad88_default;
  }
  pvVar5 = (void *)in_x8[10];
  in_x8[7] = lStack_e8;
  in_x8[6] = lStack_f0;
  in_x8[9] = lStack_d8;
  in_x8[8] = local_e0;
  in_x8[3] = lStack_108;
  in_x8[2] = lStack_110;
  in_x8[5] = lStack_f8;
  in_x8[4] = local_100;
  in_x8[1] = lStack_118;
  *in_x8 = local_120;
  in_x8[10] = local_d0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  pvVar5 = (void *)in_x8[0xc];
  in_x8[0xc] = lStack_c0;
  in_x8[0xb] = local_c8;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  pvVar5 = (void *)in_x8[0xe];
  in_x8[0xe] = lStack_b0;
  in_x8[0xd] = local_b8;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  in_x8[0xf] = local_a8;
  *(uint *)((long)in_x8 + 0x83) = CONCAT31(uStack_9c,uStack_a0._3_1_);
  *(undefined4 *)plVar6 = uStack_a0;
switchD_015cad88_default:
  TimedHistogram::Stop(local_90,(ElapsedTimer *)&local_98,local_88);
  return;
}

