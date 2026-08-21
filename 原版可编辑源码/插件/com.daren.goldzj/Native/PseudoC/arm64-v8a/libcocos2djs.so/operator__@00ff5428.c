
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateEmbeddedPointer<v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::Heap*,
   v8::internal::RelocInfo*,
   v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}) */

undefined4 __thiscall
v8::internal::UpdateTypedSlotHelper::operator()
          (UpdateTypedSlotHelper *this,undefined8 *param_1,long param_2,
          YoungGenerationMarkingTask *param_4)

{
  Instruction IVar1;
  uint *puVar2;
  undefined4 uVar3;
  Instruction *this_00;
  
  this_00 = (Instruction *)*param_1;
  if (*(char *)(param_1 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    this = this + ((ulong)*puVar2 - 0x8850);
  }
  else {
    IVar1 = this_00[3];
    this = (UpdateTypedSlotHelper *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      this = *(UpdateTypedSlotHelper **)this;
    }
  }
  uVar3 = 1;
  if (((int)this != 3) && (((ulong)this & 1) != 0)) {
    if ((*(byte *)(((ulong)this & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      uVar3 = 1;
    }
    else {
      YoungGenerationMarkingTask::MarkObject(param_4,(ulong)this & 0xfffffffffffffffd);
      uVar3 = 0;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    }
  }
  return uVar3;
}

