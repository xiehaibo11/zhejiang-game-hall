
/* v8::internal::PerfJitLogger::LogWriteDebugInfo(v8::internal::wasm::WasmCode const*) */

void __thiscall
v8::internal::PerfJitLogger::LogWriteDebugInfo(PerfJitLogger *this,WasmCode *param_1)

{
  void *__ptr;
  long lVar1;
  bool bVar2;
  WasmModuleSourceMap *this_00;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  byte local_f0 [8];
  uint local_e8;
  void *local_e0;
  long local_d8;
  int local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint local_c4;
  long local_c0;
  void *local_b8;
  ulong uStack_b0;
  timespec local_a8;
  int local_90;
  int local_88;
  uint local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (WasmModuleSourceMap *)
            wasm::NativeModule::GetWasmSourceMap(*(NativeModule **)(param_1 + 0x30));
  if ((this_00 != (WasmModuleSourceMap *)0x0) && (this_00[0x60] != (WasmModuleSourceMap)0x0)) {
    uVar7 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 200) + 0x88) +
                       (ulong)*(uint *)(param_1 + 0x38) * 0x20 + 0x10);
    uVar5 = uVar7 & 0xffffffff;
    uVar3 = wasm::WasmModuleSourceMap::HasSource(this_00,uVar5,uVar7 + (uVar7 >> 0x20) & 0xffffffff)
    ;
    if (((uVar3 & 1) != 0) &&
       (SourcePositionTableIterator::SourcePositionTableIterator
                  ((SourcePositionTableIterator *)&local_a8,*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28),0), local_90 != -1)) {
      uVar8 = 0;
      iVar9 = 0;
      do {
        uVar3 = wasm::WasmModuleSourceMap::HasValidEntry
                          (this_00,uVar5,(ulong)((int)uVar7 + -1 + (local_80 >> 1 & 0x3fffffff)));
        if ((uVar3 & 1) != 0) {
          uVar8 = uVar8 + 1;
          wasm::WasmModuleSourceMap::GetFilename((ulong)this_00);
          if ((local_c8 & 1) == 0) {
            uVar4 = local_c8 >> 1 & 0x7f;
          }
          else {
            uVar4 = (uint)local_c0;
            operator_delete(local_b8);
          }
          iVar9 = uVar4 + 1 + iVar9;
        }
        SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
      } while (local_90 != -1);
      if (uVar8 != 0) {
        local_c8 = 2;
        clock_gettime(1,&local_a8);
        uStack_b0 = (ulong)uVar8;
        iVar9 = iVar9 + uVar8 * 0x10;
        local_c0 = local_a8.tv_nsec + local_a8.tv_sec * 1000000000;
        local_b8 = *(void **)param_1;
        local_c4 = iVar9 + 0x27U & 0xfffffff8;
        iVar9 = local_c4 - iVar9;
        fwrite(&local_c8,1,0x20,perf_output_handle_);
        lVar10 = *(long *)param_1;
        SourcePositionTableIterator::SourcePositionTableIterator
                  ((SourcePositionTableIterator *)&local_a8,*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28),0);
        if (local_90 != -1) {
          do {
            uVar6 = (ulong)((int)uVar7 + -1 + (local_80 >> 1 & 0x3fffffff));
            uVar3 = wasm::WasmModuleSourceMap::HasValidEntry(this_00,uVar5,uVar6);
            if ((uVar3 & 1) != 0) {
              local_d8 = lVar10 + 0x40 + (long)local_88;
              local_d0 = wasm::WasmModuleSourceMap::GetSourceLine(this_00,uVar6);
              local_d0 = local_d0 + 1;
              uStack_cc = 1;
              fwrite(&local_d8,1,0x10,perf_output_handle_);
              wasm::WasmModuleSourceMap::GetFilename((ulong)this_00);
              bVar2 = (local_f0[0] & 1) != 0;
              uVar8 = (uint)(local_f0[0] >> 1);
              if (bVar2) {
                uVar8 = local_e8;
              }
              __ptr = (void *)((ulong)local_f0 | 1);
              if (bVar2) {
                __ptr = local_e0;
              }
              fwrite(__ptr,1,(long)(int)(uVar8 + 1),perf_output_handle_);
              if ((local_f0[0] & 1) != 0) {
                operator_delete(local_e0);
              }
            }
            SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
          } while (local_90 != -1);
        }
        local_a8.tv_sec = 0;
        fwrite(&local_a8,1,(long)(iVar9 + -0x20),perf_output_handle_);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

