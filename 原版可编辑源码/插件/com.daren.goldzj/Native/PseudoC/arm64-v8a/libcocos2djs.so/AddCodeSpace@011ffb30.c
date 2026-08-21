
/* v8::internal::wasm::NativeModule::AddCodeSpace(v8::base::AddressRegion,
   v8::internal::wasm::WasmCodeAllocator::OptionalLock const&) */

void v8::internal::wasm::NativeModule::AddCodeSpace
               (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  void *pvVar25;
  ulong local_370 [33];
  undefined8 local_268;
  ulong uStack_260;
  long local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  long local_228;
  ulong uStack_220;
  long *local_218;
  long *plStack_210;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  plVar11 = (long *)__emutls_get_address(&DAT_01d35888);
  local_258 = *plVar11;
  *plVar11 = (long)&local_258;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  local_230 = 0x3f800000;
  lVar22 = *(long *)(param_1 + 0x160);
  lVar3 = *(long *)(param_1 + 0x168);
  uVar5 = *(uint *)(*(long *)(param_1 + 200) + 0x44);
  if (uVar5 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)CreateEmptyJumpTableInRegion(param_1,uVar5 << 2,param_2,param_3,param_4);
    if (param_3 <= (ulong)(*plVar11 - param_2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","region.contains(jump_table->instruction_start())");
    }
  }
  cVar7 = FLAG_wasm_far_jump_table;
  iVar23 = 0x210;
  if (FLAG_wasm_far_jump_table != '\0') {
    iVar23 = uVar5 * 0x10 + 0x210;
  }
  plVar12 = (long *)CreateEmptyJumpTableInRegion(param_1,iVar23,param_2,param_3,param_4);
  if (param_3 <= (ulong)(*plVar12 - param_2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","region.contains(far_jump_table->instruction_start())");
  }
  uVar13 = Isolate::CurrentEmbeddedBlob();
  uStack_260 = Isolate::CurrentEmbeddedBlobSize();
  lVar24 = 0;
  uStack_260 = uStack_260 & 0xffffffff;
  local_268 = uVar13;
  do {
    iVar23 = (&DAT_019eeac0)[lVar24];
    iVar10 = EmbeddedData::InstructionSizeOfBuiltin((EmbeddedData *)&local_268,iVar23);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","embedded_data.ContainsBuiltin(builtin)");
    }
    uVar14 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_268,iVar23);
    local_370[lVar24] = uVar14;
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0x21);
  pvVar21 = (void *)*plVar12;
  uVar1 = 0x21;
  if (cVar7 != '\0') {
    uVar1 = uVar5 + 0x21;
  }
  JumpTableAssembler::JumpTableAssembler
            ((JumpTableAssembler *)&local_228,(ulong)pvVar21,uVar1 * 0x10 + 0x100);
  if (0 < (int)uVar1) {
    uVar14 = 0;
    pvVar25 = pvVar21;
    do {
      pvVar16 = pvVar25;
      if (uVar14 < 0x21) {
        pvVar16 = (void *)local_370[uVar14];
      }
      JumpTableAssembler::EmitFarJumpSlot((JumpTableAssembler *)&local_228,(ulong)pvVar16);
      uVar14 = uVar14 + 1;
      pvVar25 = (void *)((long)pvVar25 + 0x10);
    } while (uVar1 != uVar14);
  }
  FlushInstructionCache(pvVar21,(ulong)(uVar1 * 0x10));
  Assembler::~Assembler((Assembler *)&local_228);
  if (lVar22 == lVar3) {
    *(long **)(param_1 + 0xf0) = plVar11;
  }
  base::Mutex::Lock((Mutex *)(param_1 + 0x110));
  plVar2 = *(long **)(param_1 + 0x168);
  local_228 = param_2;
  uStack_220 = param_3;
  local_218 = plVar11;
  plStack_210 = plVar12;
  if (plVar2 < *(long **)(param_1 + 0x170)) {
    plVar2[1] = param_3;
    *plVar2 = param_2;
    plVar2[3] = (long)plVar12;
    plVar2[2] = (long)plVar11;
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::NativeModule::CodeSpaceData,std::__ndk1::allocator<v8::internal::wasm::NativeModule::CodeSpaceData>>
    ::__push_back_slow_path<v8::internal::wasm::NativeModule::CodeSpaceData>
              ((vector<v8::internal::wasm::NativeModule::CodeSpaceData,std::__ndk1::allocator<v8::internal::wasm::NativeModule::CodeSpaceData>>
                *)(param_1 + 0x160),(CodeSpaceData *)&local_228);
  }
  if (((lVar22 != lVar3) && (plVar11 != (long *)0x0)) && (uVar5 != 0)) {
    lVar22 = *(long *)(param_1 + 0x168);
    uVar14 = 0;
    do {
      puVar19 = *(ulong **)(*(long *)(param_1 + 0x150) + uVar14 * 8);
      iVar23 = (int)uVar14;
      if (puVar19 == (ulong *)0x0) {
        if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
          uVar17 = **(long **)(param_1 + 0xf8) + (ulong)(uint)(iVar23 * 0xc);
          uVar4 = (*(long **)(lVar22 + -8))[1];
          uVar15 = **(long **)(lVar22 + -0x10) + (ulong)(uint)(iVar23 << 2);
          uVar20 = (ulong)(iVar23 * 0x10 + 0x210);
          uVar18 = **(long **)(lVar22 + -8) + uVar20;
          bVar8 = uVar20 <= uVar4;
          bVar9 = uVar4 == uVar20;
          goto LAB_011ffdb8;
        }
      }
      else {
        uVar17 = *puVar19;
        uVar20 = (ulong)(iVar23 * 0x10 + 0x210);
        uVar4 = (*(long **)(lVar22 + -8))[1];
        uVar15 = **(long **)(lVar22 + -0x10) + (ulong)(uint)(iVar23 << 2);
        uVar18 = **(long **)(lVar22 + -8) + uVar20;
        bVar8 = uVar20 <= uVar4;
        bVar9 = uVar4 == uVar20;
LAB_011ffdb8:
        if (!bVar8 || bVar9) {
          uVar18 = 0;
        }
        JumpTableAssembler::PatchJumpTableSlot(uVar15,uVar18,uVar17);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x110));
  WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_258);
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

