
/* v8::internal::Heap::WriteBarrierForCodeSlow(v8::internal::Code) */

void v8::internal::Heap::WriteBarrierForCodeSlow(ulong param_1)

{
  Instruction IVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  RelocIterator aRStack_70 [16];
  Instruction *local_60;
  char local_58;
  long local_48;
  char local_38;
  
  RelocIterator::RelocIterator(aRStack_70,param_1,0xc);
  if (local_38 == '\0') {
    do {
      if (local_58 == '\x02') {
        if (local_60[3] != (Instruction)0x18) goto LAB_00f85474;
        uVar4 = local_48 - 1;
        puVar2 = (uint *)Instruction::ImmPCOffsetTarget(local_60);
        puVar3 = (undefined8 *)(uVar4 & 0xffffffff00000000 | (ulong)*puVar2);
      }
      else {
        IVar1 = local_60[3];
        puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_60);
        if (IVar1 == (Instruction)0x58) {
          puVar3 = (undefined8 *)*puVar3;
        }
      }
      if ((*(byte *)(((ulong)puVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        GenerationalBarrierForCodeSlow(param_1,&local_60);
      }
      if (local_58 == '\x02') {
        if (local_60[3] != (Instruction)0x18) {
LAB_00f85474:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
        }
        uVar4 = local_48 - 1;
        puVar2 = (uint *)Instruction::ImmPCOffsetTarget(local_60);
        puVar3 = (undefined8 *)(uVar4 & 0xffffffff00000000 | (ulong)*puVar2);
      }
      else {
        IVar1 = local_60[3];
        puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_60);
        if (IVar1 == (Instruction)0x58) {
          puVar3 = (undefined8 *)*puVar3;
        }
      }
      if ((*(byte *)(((ulong)puVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        IncrementalMarking::RecordWriteIntoCode
                  (*(IncrementalMarking **)
                    (*(long *)((param_1 & 0xfffffffffffc0000) + 0x18) + 0x828),param_1,&local_60);
      }
      RelocIterator::next(aRStack_70);
    } while (local_38 == '\0');
  }
  return;
}

