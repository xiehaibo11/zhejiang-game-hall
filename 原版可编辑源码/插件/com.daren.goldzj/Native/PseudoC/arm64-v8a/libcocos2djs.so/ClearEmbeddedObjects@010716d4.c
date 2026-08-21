
/* v8::internal::Code::ClearEmbeddedObjects(v8::internal::Heap*) */

void __thiscall v8::internal::Code::ClearEmbeddedObjects(Code *this,Heap *param_1)

{
  Instruction *pIVar1;
  Instruction *this_00;
  undefined4 *puVar2;
  undefined8 *puVar3;
  Instruction *pIVar4;
  RelocIterator aRStack_70 [16];
  Instruction *local_60;
  char local_58;
  char local_38;
  
  pIVar4 = *(Instruction **)(param_1 + -0x87b0);
  RelocIterator::RelocIterator(aRStack_70,*(undefined8 *)this,0xc);
  this_00 = local_60;
  do {
    if (local_38 != '\0') {
      *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)) + 7)
           = *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)
                       ) + 7) | 2;
      return;
    }
    local_60 = this_00;
    if (local_58 == '\x02') {
      if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      puVar2 = (undefined4 *)Instruction::ImmPCOffsetTarget(this_00);
      *puVar2 = (int)pIVar4;
    }
    else if (this_00[3] == (Instruction)0x58) {
      puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
      *puVar3 = pIVar4;
    }
    else {
      pIVar1 = this_00;
      if (pIVar4 != (Instruction *)0x0) {
        pIVar1 = pIVar4;
      }
      Instruction::SetBranchImmTarget(this_00,pIVar1);
      FlushInstructionCache(this_00,4);
    }
    RelocIterator::next(aRStack_70);
    this_00 = local_60;
  } while( true );
}

