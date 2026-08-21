
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateTypedSlot<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::Heap*,
   v8::internal::SlotType, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1})
    */

ulong v8::internal::UpdateTypedSlotHelper::
      UpdateTypedSlot<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
                (undefined8 param_1,undefined4 param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = param_3;
  switch(param_2) {
  case 0:
    local_30 = 3;
    break;
  case 1:
    local_30 = 2;
    break;
  case 2:
    uVar4 = *param_3;
    if ((int)uVar4 == 3) {
      return 1;
    }
    if ((uVar4 & 1) == 0) {
      return 1;
    }
    uVar6 = uVar4 & 0xfffffffffffc0000;
    uVar7 = (uint)*(undefined8 *)(uVar6 + 8);
    if ((uVar7 >> 3 & 1) == 0) {
      if ((uVar7 >> 4 & 1) == 0) {
        return 1;
      }
      if ((*(byte *)(uVar6 + 9) >> 2 & 1) != 0) {
        uVar4 = (uVar4 & 0xfffffffffffffffd) - uVar6;
        return (ulong)((*(uint *)(*(long *)(uVar6 + 0x108) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
                        (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) == 0);
      }
    }
    else {
      uVar7 = *(uint *)((uVar4 & 0xfffffffffffffffd) - 1);
      if ((uVar7 & 1) == 0) {
        uVar6 = (uVar4 & 0xffffffff00000000 | (ulong)uVar7) + 1;
        uVar2 = uVar6 | uVar4 & 2;
        uVar7 = (uint)uVar6 & 1;
        *param_3 = uVar2;
        uVar6 = uVar2;
      }
      else {
        uVar7 = 1;
        uVar2 = uVar4 & 0xffffffff;
        uVar6 = uVar4;
      }
      if (((int)uVar2 != 3 & uVar7) == 0) {
        uVar6 = uVar4;
      }
      if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) >> 4 & 1) == 0) {
        return 1;
      }
    }
    return 0;
  case 3:
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uVar4 = UpdateCodeTarget<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
                      (&local_38,param_4);
    return uVar4;
  case 4:
    uVar4 = *param_3 - 0x3f;
    iVar3 = (int)uVar4;
    if (iVar3 == 3) {
      return 1;
    }
    if ((uVar4 & 1) == 0) {
      return 1;
    }
    uVar6 = uVar4 & 0xfffffffffffc0000;
    uVar7 = (uint)*(undefined8 *)(uVar6 + 8);
    if ((uVar7 >> 3 & 1) == 0) {
      if ((uVar7 >> 4 & 1) != 0) {
        if ((*(byte *)(uVar6 + 9) >> 2 & 1) != 0) {
          uVar4 = (uVar4 & 0xfffffffffffffffd) - uVar6;
          return (ulong)((*(uint *)(*(long *)(uVar6 + 0x108) + (uVar4 >> 7 & 0x1ffffff) * 4) >>
                          (ulong)((uint)(uVar4 >> 2) & 0x1f) & 1) == 0);
        }
        return 0;
      }
    }
    else {
      uVar7 = *(uint *)((uVar4 & 0xfffffffffffffffd) - 1);
      if ((uVar7 & 1) == 0) {
        uVar6 = (uVar4 & 0xffffffff00000000 | (ulong)uVar7) + 1;
        uVar2 = uVar6 | uVar4 & 2;
        uVar7 = (uint)uVar6 & 1;
        uVar6 = uVar2;
      }
      else {
        uVar7 = 1;
        uVar2 = uVar4 & 0xffffffff;
        uVar6 = uVar4;
      }
      uVar1 = uVar6;
      if (((int)uVar2 != 3 & uVar7) == 0) {
        uVar1 = uVar4;
      }
      uVar4 = uVar6;
      if ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) >> 4 & 1) != 0) {
        uVar2 = 0;
        iVar5 = (int)uVar6;
        goto joined_r0x00fef258;
      }
    }
    uVar2 = 1;
    iVar5 = (int)uVar4;
joined_r0x00fef258:
    if (iVar5 != iVar3) {
      *param_3 = uVar4 + 0x3f;
      return uVar2;
    }
    return uVar2;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uVar4 = UpdateEmbeddedPointer<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
                    (param_1,&local_38,param_4);
  return uVar4;
}

