
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateCodeTarget<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::RelocInfo*,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1})
    */

bool v8::internal::UpdateTypedSlotHelper::
     UpdateCodeTarget<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
               (RelocInfo *param_1)

{
  ulong uVar1;
  Instruction IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  IVar2 = (*(Instruction **)param_1)[3];
  puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)param_1);
  if (IVar2 == (Instruction)0x58) {
    puVar3 = (undefined8 *)*puVar3;
  }
  puVar4 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar5 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + (uVar5 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar5 = (long)puVar3 - 0x3f;
  iVar6 = (int)uVar5;
  if (iVar6 == 3) {
    return true;
  }
  if ((uVar5 & 1) == 0) {
    return true;
  }
  uVar8 = uVar5 & 0xfffffffffffc0000;
  uVar9 = (uint)*(undefined8 *)(uVar8 + 8);
  if ((uVar9 >> 3 & 1) == 0) {
    if ((uVar9 >> 4 & 1) != 0) {
      if ((*(byte *)(uVar8 + 9) >> 2 & 1) == 0) {
        return false;
      }
      uVar5 = (uVar5 & 0xfffffffffffffffd) - uVar8;
      return (*(uint *)(*(long *)(uVar8 + 0x108) + (uVar5 >> 7 & 0x1ffffff) * 4) >>
              (ulong)((uint)(uVar5 >> 2) & 0x1f) & 1) == 0;
    }
  }
  else {
    uVar9 = *(uint *)((uVar5 & 0xfffffffffffffffd) - 1);
    if ((uVar9 & 1) == 0) {
      uVar8 = (uVar5 & 0xffffffff00000000 | (ulong)uVar9) + 1;
      uVar10 = uVar8 | uVar5 & 2;
      uVar9 = (uint)uVar8 & 1;
      uVar8 = uVar10;
    }
    else {
      uVar9 = 1;
      uVar10 = uVar5 & 0xffffffff;
      uVar8 = uVar5;
    }
    uVar1 = uVar8;
    if (((int)uVar10 != 3 & uVar9) == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar8;
    if ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) >> 4 & 1) != 0) {
      bVar11 = false;
      iVar7 = (int)uVar8;
      goto joined_r0x00fef3a4;
    }
  }
  bVar11 = true;
  iVar7 = (int)uVar5;
joined_r0x00fef3a4:
  if (iVar7 != iVar6) {
    RelocInfo::set_target_address(param_1,uVar5 + 0x3f,4,0);
  }
  return bVar11;
}

