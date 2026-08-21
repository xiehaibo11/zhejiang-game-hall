
/* v8::internal::Heap::GenerationalBarrierForCodeSlow(v8::internal::Code, v8::internal::RelocInfo*,
   v8::internal::HeapObject) */

void v8::internal::Heap::GenerationalBarrierForCodeSlow(ulong param_1,RelocInfo *param_2)

{
  RelocInfo RVar1;
  int iVar2;
  ulong uVar3;
  TypedSlots *pTVar4;
  undefined4 uVar5;
  MemoryChunk *this;
  
  RVar1 = param_2[8];
  iVar2 = (int)*(undefined8 *)param_2;
  if ((char)RVar1 < '\x02') {
    uVar5 = 3;
  }
  else if (RVar1 == (RelocInfo)0x2) {
    uVar5 = 1;
  }
  else {
    if (RVar1 != (RelocInfo)0x3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar5 = 0;
  }
  this = (MemoryChunk *)(param_1 & 0xfffffffffffc0000);
  uVar3 = RelocInfo::IsInConstantPool(param_2);
  if ((uVar3 & 1) != 0) {
    iVar2 = Instruction::ImmPCOffsetTarget(*(Instruction **)param_2);
    uVar5 = 4;
    if ('\x01' < (char)RVar1) {
      uVar5 = 2;
    }
  }
  pTVar4 = *(TypedSlots **)(this + 0x78);
  if (pTVar4 == (TypedSlots *)0x0) {
    pTVar4 = (TypedSlots *)
             MemoryChunk::AllocateTypedSlotSet<(v8::internal::RememberedSetType)0>(this);
  }
  TypedSlots::Insert(pTVar4,uVar5,iVar2 - (int)this);
  return;
}

