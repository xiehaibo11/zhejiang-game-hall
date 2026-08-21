
/* v8::internal::Code::IsIsolateIndependent(v8::internal::Isolate*) */

undefined4 __thiscall v8::internal::Code::IsIsolateIndependent(Code *this,Isolate *param_1)

{
  Instruction IVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  RelocIterator aRStack_70 [16];
  Instruction *local_60;
  char local_58;
  char local_38;
  
  RelocIterator::RelocIterator(aRStack_70,*(undefined8 *)this,0x3ff);
  if (local_38 == '\0') {
    uVar5 = 1;
    do {
      if (local_58 < '\x02') {
        IVar1 = local_60[3];
        puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_60);
        if (IVar1 == (Instruction)0x58) {
          puVar2 = (undefined8 *)*puVar2;
        }
        uVar3 = InstructionStream::PcIsOffHeap(param_1,(ulong)puVar2);
        if ((uVar3 & 1) == 0) {
          puVar4 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
          uVar3 = Isolate::CurrentEmbeddedBlobSize();
          if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + (uVar3 & 0xffffffff))))
          {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","address < start || address >= end");
          }
          if (*(short *)(((long)puVar2 - 0x3fU & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)(puVar2 + -8)) != 0x9a) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","target.IsCode()");
          }
          uVar3 = Builtins::IsIsolateIndependentBuiltin();
          if ((uVar3 & 1) == 0) goto LAB_01072700;
        }
      }
      else {
LAB_01072700:
        uVar5 = 0;
      }
      RelocIterator::next(aRStack_70);
    } while (local_38 == '\0');
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

