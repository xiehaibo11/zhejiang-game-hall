
void FUN_015e1fe0(long param_1,Factory *param_2,WasmModule *param_3,undefined8 *param_4)

{
  long *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte **local_a8;
  byte *local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  undefined1 local_7c [4];
  char *local_78;
  long *local_70;
  long *local_68;
  
  uVar3 = v8::internal::wasm::MaxNumExportWrappers(param_3);
  uVar5 = v8::internal::Factory::NewFixedArray(param_2,uVar3,1);
  *param_4 = uVar5;
  if (DAT_01d478c0 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d478c0 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.wasm");
  }
  pbVar2 = DAT_01d478c0;
  local_a8 = (byte **)0x0;
  if ((*DAT_01d478c0 & 5) != 0) {
    local_88 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
    local_78 = "num_wrappers";
    local_70 = (long *)0x0;
    local_7c[0] = 2;
    local_68 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar2,"FinalizeJSToWasmWrappers",0,0,0,1,&local_78,local_7c,
                       &local_88,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_a8 = &local_a0;
    local_98 = "FinalizeJSToWasmWrappers";
    local_a0 = pbVar2;
    local_90 = uVar5;
  }
  v8::internal::CodeSpaceMemoryModificationScope::CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)&local_70,(Heap *)(param_2 + 0x8850));
  plVar6 = *(long **)(param_1 + 0xe8);
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar6 != plVar1) {
    do {
      puVar7 = (ulong *)v8::internal::wasm::JSToWasmWrapperCompilationUnit::Finalize
                                  ((Isolate *)*plVar6);
      iVar4 = v8::internal::wasm::GetExportWrapperIndex
                        (param_3,*(Signature **)(*plVar6 + 8),*(bool *)*plVar6);
      uVar10 = *puVar7;
      uVar11 = *(ulong *)*param_4;
      lVar9 = uVar11 + (long)(iVar4 << 2);
      *(int *)(lVar9 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        lVar9 = lVar9 + 7;
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar11,lVar9,uVar10);
          uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar11,lVar9,uVar10);
        }
      }
      uVar10 = *puVar7;
      lVar9 = *(long *)(param_2 + 0x9520);
      iVar4 = *(int *)(uVar10 + 0x13);
      if ((*(byte *)(uVar10 + 0x17) & 1) != 0) {
        uVar11 = (long)(iVar4 + 0x47) & 0xfffffffffffffff8;
        iVar4 = (int)uVar11 + *(int *)(uVar10 + uVar11 + -1) + -0x38;
      }
      v8::internal::StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(lVar9 + 0x2020),iVar4 + 3U & 0xfffffffc);
      v8::internal::StatsCounterThreadSafe::Increment
                ((StatsCounterThreadSafe *)(lVar9 + 0x2060),
                 *(int *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3)) + 3) >> 1);
      plVar6 = plVar6 + 2;
    } while (plVar1 != plVar6);
  }
  v8::internal::CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope
            ((CodeSpaceMemoryModificationScope *)&local_70);
  if ((local_a8 != (byte **)0x0) && (*local_a0 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_a0,local_98,local_90);
  }
  return;
}

