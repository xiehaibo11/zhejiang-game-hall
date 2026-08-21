
/* v8::internal::RelocInfo::set_target_address(unsigned long, v8::internal::WriteBarrierMode,
   v8::internal::ICacheFlushMode) */

void __thiscall
v8::internal::RelocInfo::set_target_address
          (RelocInfo *this,Instruction *param_1,int param_3,int param_4)

{
  Instruction *pIVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Instruction *pIVar4;
  
  pIVar4 = *(Instruction **)this;
  if (pIVar4[3] == (Instruction)0x58) {
    puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(pIVar4);
    *puVar2 = param_1;
  }
  else {
    pIVar1 = pIVar4;
    if (param_1 != (Instruction *)0x0) {
      pIVar1 = param_1;
    }
    Instruction::SetBranchImmTarget(pIVar4,pIVar1);
    if (param_4 != 1) {
      FlushInstructionCache(pIVar4,4);
    }
  }
  if (((param_3 == 4) && (*(int *)(this + 0x18) != 0)) && ((char)this[8] < '\x02')) {
    pIVar4 = (Instruction *)Isolate::CurrentEmbeddedBlob();
    uVar3 = Isolate::CurrentEmbeddedBlobSize();
    if ((pIVar4 <= param_1) && (param_1 < pIVar4 + (uVar3 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","address < start || address >= end");
    }
    if ((*(byte *)(((ulong)(param_1 + -0x3f) & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierForCodeSlow(*(undefined8 *)(this + 0x18),this);
      return;
    }
  }
  return;
}

