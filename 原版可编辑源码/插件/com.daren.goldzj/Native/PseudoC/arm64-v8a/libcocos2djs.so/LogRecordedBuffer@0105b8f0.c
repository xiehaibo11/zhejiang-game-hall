
/* v8::internal::JitLogger::LogRecordedBuffer(v8::internal::wasm::WasmCode const*, char const*, int)
    */

void __thiscall
v8::internal::JitLogger::LogRecordedBuffer
          (JitLogger *this,WasmCode *param_1,char *param_2,int param_3)

{
  long lVar1;
  WasmModuleSourceMap *this_00;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong local_148;
  ulong uStack_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 local_130;
  ulong uStack_128;
  undefined1 *local_120;
  ulong *local_118;
  ulong *local_110;
  ulong *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  char *local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  SourcePositionTableIterator aSStack_a8 [24];
  int local_90;
  int local_88;
  uint local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c8 = (long)param_3;
  uStack_e8 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_100 = 0x100000000;
  lStack_f0 = (long)*(int *)(param_1 + 8);
  uStack_f8 = *(undefined8 *)param_1;
  uStack_c0 = 0;
  local_b8 = *(undefined8 *)(this + 8);
  local_d0 = param_2;
  this_00 = (WasmModuleSourceMap *)
            wasm::NativeModule::GetWasmSourceMap(*(NativeModule **)(param_1 + 0x30));
  uVar8 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 200) + 0x88) +
                     (ulong)*(uint *)(param_1 + 0x38) * 0x20 + 0x10);
  local_110 = (ulong *)0x0;
  puStack_108 = (ulong *)0x0;
  local_120 = (undefined1 *)0x0;
  local_118 = (ulong *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  if ((this_00 != (WasmModuleSourceMap *)0x0) && (this_00[0x60] != (WasmModuleSourceMap)0x0)) {
    uVar2 = wasm::WasmModuleSourceMap::HasSource
                      (this_00,uVar8 & 0xffffffff,uVar8 + (uVar8 >> 0x20) & 0xffffffff);
    if ((uVar2 & 1) != 0) {
      SourcePositionTableIterator::SourcePositionTableIterator
                (aSStack_a8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
      if (local_90 == -1) {
        puVar9 = (ulong *)0x0;
        puVar11 = (ulong *)0x0;
        uVar8 = 0;
        puVar7 = (undefined1 *)0x0;
        uVar10 = 0;
      }
      else {
        uVar2 = 0;
        do {
          uVar6 = (ulong)((int)uVar8 + -1 + (local_80 >> 1 & 0x3fffffff));
          uVar4 = wasm::WasmModuleSourceMap::HasValidEntry(this_00,uVar8 & 0xffffffff,uVar6);
          if ((uVar4 & 1) != 0) {
            uVar4 = local_130 >> 1 & 0x7f;
            if ((local_130 & 1) != 0) {
              uVar4 = uStack_128;
            }
            if (uVar4 == 0) {
              wasm::WasmModuleSourceMap::GetFilename((ulong)this_00);
              if ((local_130 & 1) != 0) {
                *local_120 = 0;
                uStack_128 = 0;
                if ((local_130 & 1) != 0) {
                  operator_delete(local_120);
                }
              }
              local_120 = (undefined1 *)CONCAT44(uStack_134,local_138);
              uStack_128 = uStack_140;
              local_130 = local_148;
            }
            local_148 = (ulong)local_88;
            local_138 = 0;
            uStack_140 = uVar2;
            if (local_110 < puStack_108) {
              local_110[2] = (ulong)uStack_134 << 0x20;
              local_110[1] = uVar2;
              *local_110 = local_148;
              local_110 = local_110 + 3;
            }
            else {
              std::__ndk1::
              vector<v8::JitCodeEvent::line_info_t,std::__ndk1::allocator<v8::JitCodeEvent::line_info_t>>
              ::__push_back_slow_path<v8::JitCodeEvent::line_info_t>
                        ((vector<v8::JitCodeEvent::line_info_t,std::__ndk1::allocator<v8::JitCodeEvent::line_info_t>>
                          *)&local_118,(line_info_t *)&local_148);
            }
            lVar3 = wasm::WasmModuleSourceMap::GetSourceLine(this_00,uVar6);
            uVar2 = lVar3 + 1;
          }
          SourcePositionTableIterator::Advance(aSStack_a8);
        } while (local_90 != -1);
        uVar10 = (uint)(byte)local_130;
        uVar8 = uStack_128;
        puVar7 = local_120;
        puVar9 = local_118;
        puVar11 = local_110;
      }
      puVar5 = operator_new(0x20);
      if ((uVar10 & 1) == 0) {
        puVar7 = (undefined1 *)((long)&local_130 + 1);
        uVar8 = (ulong)(uVar10 >> 1);
      }
      *puVar5 = puVar7;
      puVar5[1] = uVar8;
      puVar5[2] = puVar9;
      puVar5[3] = ((long)puVar11 - (long)puVar9 >> 3) * -0x5555555555555555;
      puStack_d8 = puVar5;
      (**(code **)(this + 0x18))(&local_100);
      operator_delete(puVar5);
      goto joined_r0x0105badc;
    }
  }
  (**(code **)(this + 0x18))(&local_100);
joined_r0x0105badc:
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (local_118 != (ulong *)0x0) {
    local_110 = local_118;
    operator_delete(local_118);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

