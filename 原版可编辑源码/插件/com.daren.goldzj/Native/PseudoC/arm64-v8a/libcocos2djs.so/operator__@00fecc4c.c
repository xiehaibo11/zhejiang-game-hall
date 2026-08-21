
/* v8::internal::RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)1>::UpdateTypedPointers()::{lambda(v8::internal::SlotType,
   unsigned long)#2}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long) const */

undefined8 __thiscall
v8::internal::
RememberedSetUpdatingItem<v8::internal::MajorNonAtomicMarkingState,(v8::internal::GarbageCollector)1>
::UpdateTypedPointers()::{lambda(v8::internal::SlotType,unsigned_long)#2}::operator()
          (_lambda_v8__internal__SlotType_unsigned_long__2_ *this,uint param_2,Instruction *param_3)

{
  uint uVar1;
  Instruction IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  Instruction *local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_50 = param_3;
  switch(param_2) {
  case 0:
    local_48 = 3;
    break;
  case 1:
    local_48 = 2;
    break;
  case 2:
    uVar6 = *(ulong *)param_3;
    if ((int)uVar6 == 3) {
      return 1;
    }
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    uVar1 = *(uint *)((uVar6 & 0xfffffffffffffffd) - 1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    lVar7 = (uVar6 & 0xffffffff00000000 | (ulong)uVar1) + 1;
    goto LAB_00fecd08;
  case 3:
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    IVar2 = param_3[3];
    puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(param_3);
    if (IVar2 == (Instruction)0x58) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar4 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
    uVar6 = Isolate::CurrentEmbeddedBlobSize();
    if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + (uVar6 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","address < start || address >= end");
    }
    local_28 = (long)puVar3 - 0x3f;
    iVar8 = (int)local_28;
    if (((iVar8 != 3) && ((local_28 & 1) != 0)) &&
       (uVar1 = *(uint *)((local_28 & 0xfffffffffffffffd) - 1), (uVar1 & 1) == 0)) {
      local_28 = (local_28 & 0xffffffff00000000 | (ulong)uVar1) + 1;
    }
    if ((int)local_28 == iVar8) {
      return 1;
    }
    RelocInfo::set_target_address((RelocInfo *)&local_50,local_28 + 0x3f,4,0);
    return 1;
  case 4:
    uVar6 = *(long *)param_3 - 0x3f;
    iVar8 = (int)uVar6;
    if (((iVar8 != 3) && ((uVar6 & 1) != 0)) &&
       (uVar1 = *(uint *)((uVar6 & 0xfffffffffffffffd) - 1), (uVar1 & 1) == 0)) {
      uVar6 = (uVar6 & 0xffffffff00000000 | (ulong)uVar1) + 1;
    }
    if ((int)uVar6 == iVar8) {
      return 1;
    }
    lVar7 = uVar6 + 0x3f;
LAB_00fecd08:
    *(long *)param_3 = lVar7;
    return 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uVar5 = UpdateTypedSlotHelper::
          UpdateEmbeddedPointer<v8::internal::SlotCallbackResult(*)(v8::internal::FullMaybeObjectSlot)>
                    (*(Heap **)(*(long *)this + 0x10),(RelocInfo *)&local_50,FUN_00fece08);
  return uVar5;
}

