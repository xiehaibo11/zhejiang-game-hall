
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateCodeTarget<v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::RelocInfo*,
   v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}) */

undefined8 __thiscall
v8::internal::UpdateTypedSlotHelper::operator()
          (UpdateTypedSlotHelper *this,long param_1,YoungGenerationMarkingTask *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  IVar1 = (*(Instruction **)this)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar4 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar4 = (long)puVar2 - 0x3f;
  uVar5 = 1;
  if (((int)uVar4 != 3) && ((uVar4 & 1) != 0)) {
    if ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      uVar5 = 1;
    }
    else {
      YoungGenerationMarkingTask::MarkObject(param_3,uVar4 & 0xfffffffffffffffd);
      uVar5 = 0;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  return uVar5;
}

