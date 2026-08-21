
/* v8::internal::wasm::AsyncStreamingProcessor::ProcessFunctionBody(v8::internal::Vector<unsigned
   char const>, unsigned int) */

void v8::internal::wasm::AsyncStreamingProcessor::ProcessFunctionBody
               (AsyncStreamingProcessor *param_1,long param_2,long param_3,uint param_4,
               undefined8 param_5,FunctionBody *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined2 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  NativeModule *this;
  WasmFeatures *pWVar13;
  uint uVar14;
  undefined8 local_118;
  undefined4 local_110 [2];
  byte local_108;
  void *local_f8;
  uint local_f0 [2];
  undefined4 local_e8;
  byte local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  void *pvStack_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  TimedHistogram *local_b8;
  Isolate *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  long lStack_90;
  uint local_88 [2];
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  ModuleDecoder::DecodeFunctionBody
            ((ModuleDecoder *)(param_1 + 8),*(uint *)(param_1 + 0x30),(uint)param_3,param_4,false);
  iVar4 = *(int *)(param_1 + 0x30);
  this = *(NativeModule **)(*(long *)(param_1 + 0x18) + 0x58);
  uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + 0x10);
  pWVar13 = *(WasmFeatures **)(this + 200);
  plVar8 = (long *)ModuleDecoder::shared_module((ModuleDecoder *)(param_1 + 8));
  uVar14 = 0;
  uVar1 = *(int *)(*plVar8 + 0x3c) + iVar4;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x14) == '\0') {
    if ((uVar5 >> 4 & 1) == 0) {
      uVar14 = 1;
    }
    else {
      lVar10 = *(long *)(pWVar13 + 0x130);
      uVar14 = 1;
      if ((lVar10 != 0) &&
         (uVar11 = (ulong)(uVar1 - *(int *)(pWVar13 + 0x3c)),
         uVar12 = (*(long *)(pWVar13 + 0x138) - lVar10) * -0x5555555555555555,
         uVar11 <= uVar12 && uVar12 - uVar11 != 0)) {
        uVar14 = 0x2010001 >> (ulong)((*(byte *)(lVar10 + uVar11 * 3) & 3) << 3);
      }
    }
  }
  if (FLAG_wasm_lazy_validation == '\0' && (uVar14 & 1) == 0) {
    lVar10 = *(long *)(this + 0x178);
    lStack_90 = param_2 + param_3;
    puVar2 = (undefined8 *)(*(long *)(pWVar13 + 0x88) + (long)(int)uVar1 * 0x20);
    local_a8 = *puVar2;
    local_a0 = *(undefined4 *)(puVar2 + 2);
    local_80 = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    local_b8 = (TimedHistogram *)(*(long *)(*(long *)(this + 0x100) + 0x20) + 0x1120);
    if (pWVar13[0x178] != (WasmFeatures)0x0) {
      local_b8 = (TimedHistogram *)(*(long *)(*(long *)(this + 0x100) + 0x20) + 0x10f0);
    }
    local_b0 = (Isolate *)0x0;
    local_c0 = 0;
    local_98 = param_2;
    local_88[0] = uVar5;
    TimedHistogram::Start(local_b8,(ElapsedTimer *)&local_c0,(Isolate *)0x0);
    local_c8[0] = 0;
    VerifyWasmCode((wasm *)(lVar10 + 0x58),(AccountingAllocator *)local_88,pWVar13,
                   (WasmModule *)local_c8,(WasmFeatures *)&local_a8,param_6);
    uStack_79 = uStack_d8;
    uStack_78 = uStack_d7;
    TimedHistogram::Stop(local_b8,(ElapsedTimer *)&local_c0,local_b0);
    local_118 = 0;
    local_f8 = pvStack_d0;
    local_110[0] = local_e8;
    local_108 = local_e0;
    uVar11 = (ulong)(local_e0 >> 1);
    if ((local_e0 & 1) != 0) {
      uVar11 = CONCAT71(uStack_78,uStack_79);
    }
    if (uVar11 != 0) {
      FinishAsyncCompileJobWithError(param_1,(WasmError *)local_110);
      if ((local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      uVar9 = 0;
      goto LAB_015e50b0;
    }
    if ((local_e0 & 1) == 0) goto LAB_015e4ee4;
    operator_delete(pvStack_d0);
    if ((uVar14 & 0xff) != 0) goto LAB_015e4eec;
LAB_015e5094:
    NativeModule::UseLazyStub(this,uVar1);
  }
  else {
LAB_015e4ee4:
    if ((uVar14 & 0xff) == 0) goto LAB_015e5094;
LAB_015e4eec:
    plVar8 = *(long **)(param_1 + 0x28);
    if ((uVar14 & 0xff) == 2) {
      lVar10 = *plVar8;
      local_f0[0] = uVar1;
      uVar7 = FUN_015e17e0(*(undefined8 *)(lVar10 + 200),
                           *(undefined1 *)(*(long *)(lVar10 + 0x100) + 0x18),lVar10 + 0xc0,uVar1);
      local_118 = CONCAT62(local_118._2_6_,uVar7);
      puVar3 = (uint *)plVar8[6];
      if (puVar3 < (uint *)plVar8[7]) {
        *puVar3 = uVar1;
        *(char *)(puVar3 + 1) = (char)((ushort)uVar7 >> 8);
        plVar8[6] = plVar8[6] + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
        ::__emplace_back_slow_path<int&,v8::internal::wasm::ExecutionTier&>
                  ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                    *)(plVar8 + 5),(int *)local_f0,(ExecutionTier *)((ulong)&local_118 | 1));
      }
      goto LAB_015e5094;
    }
    FUN_015e50e4(plVar8,uVar1);
  }
  uVar9 = 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_015e50b0:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

