
/* v8::internal::compiler::PipelineCompilationJob::RegisterWeakObjectsInOptimizedCode(v8::internal::Handle<v8::internal::Code>,
   v8::internal::Isolate*) */

void __thiscall
v8::internal::compiler::PipelineCompilationJob::RegisterWeakObjectsInOptimizedCode
          (undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Instruction IVar1;
  ushort uVar2;
  long *plVar3;
  uint *puVar4;
  undefined8 *puVar5;
  CanonicalHandleScope *this;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong *local_90;
  RelocIterator aRStack_88 [16];
  Instruction *local_78;
  char local_70;
  long local_60;
  char local_50;
  long *local_48;
  long *local_40;
  long *plStack_38;
  long *plVar10;
  
  local_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  local_48 = (long *)0x0;
  RelocIterator::RelocIterator(aRStack_88,*param_2,0xc);
  if (local_50 == '\0') {
    do {
      if (local_70 == '\x02') {
        if (local_78[3] != (Instruction)0x18) goto LAB_012a1bc0;
        uVar7 = local_60 - 1;
        puVar4 = (uint *)internal::Instruction::ImmPCOffsetTarget(local_78);
        puVar5 = (undefined8 *)(uVar7 & 0xffffffff00000000 | (ulong)*puVar4);
      }
      else {
        IVar1 = local_78[3];
        puVar5 = (undefined8 *)internal::Instruction::ImmPCOffsetTarget(local_78);
        if (IVar1 == (Instruction)0x58) {
          puVar5 = (undefined8 *)*puVar5;
        }
      }
      uVar2 = *(ushort *)
               (((ulong)puVar5 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar5 + -1)) + 7);
      if (uVar2 == 0xa5) {
LAB_012a1a80:
        if (local_70 == '\x02') {
          if (local_78[3] != (Instruction)0x18) {
LAB_012a1bc0:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
          }
          uVar7 = local_60 - 1;
          puVar4 = (uint *)internal::Instruction::ImmPCOffsetTarget(local_78);
          puVar8 = (ulong *)(uVar7 & 0xffffffff00000000 | (ulong)*puVar4);
          this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
          if (this != (CanonicalHandleScope *)0x0) goto LAB_012a1ae0;
LAB_012a1af0:
          puVar6 = *(ulong **)(param_3 + 0x95a0);
          if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
          *puVar6 = (ulong)puVar8;
        }
        else {
          IVar1 = local_78[3];
          puVar8 = (ulong *)internal::Instruction::ImmPCOffsetTarget(local_78);
          if (IVar1 == (Instruction)0x58) {
            puVar8 = (ulong *)*puVar8;
          }
          this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
          if (this == (CanonicalHandleScope *)0x0) goto LAB_012a1af0;
LAB_012a1ae0:
          puVar6 = (ulong *)CanonicalHandleScope::Lookup(this,(ulong)puVar8);
          puVar8 = (ulong *)*puVar6;
        }
        if (*(short *)(((ulong)puVar8 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)((long)puVar8 + -1)) == 0xa2) {
          local_90 = puVar6;
          if (local_40 == plStack_38) {
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
            ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>const&>
                      ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                        *)&local_48,(Handle *)&local_90);
          }
          else {
            *local_40 = (long)puVar6;
            local_40 = local_40 + 1;
          }
        }
      }
      else if (uVar2 == 0xa2) {
        if (0xa9 < *(ushort *)((long)puVar5 + 7)) goto LAB_012a1a80;
      }
      else if ((0xa8 < uVar2) || ((ushort)(uVar2 - 0x88) < 10)) goto LAB_012a1a80;
      RelocIterator::next(aRStack_88);
      plVar3 = local_40;
    } while (local_50 == '\0');
    if (local_48 != local_40) {
      plVar9 = local_48;
      do {
        plVar10 = plVar9 + 1;
        Heap::AddRetainedMap((Heap *)(param_3 + 0x8850),*plVar9);
        plVar9 = plVar10;
      } while (plVar3 != plVar10);
    }
  }
  puVar4 = (uint *)(*param_2 + 0xf);
  uVar7 = *param_2 & 0xffffffff00000000;
  *(uint *)((uVar7 | *puVar4) + 7) = *(uint *)((uVar7 | *puVar4) + 7) | 8;
  if (local_48 != (long *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

