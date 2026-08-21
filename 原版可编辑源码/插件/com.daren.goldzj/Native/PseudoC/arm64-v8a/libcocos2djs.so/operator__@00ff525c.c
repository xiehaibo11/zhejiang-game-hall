
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateTypedSlot<v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::Heap*,
   v8::internal::SlotType, unsigned long,
   v8::internal::PageMarkingItem::MarkTypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::SlotType,
   unsigned long)#1}::TEMPNAMEPLACEHOLDERVALUE(v8::internal::SlotType, unsigned long)
   const::{lambda(v8::internal::FullMaybeObjectSlot)#1}) */

undefined8 __thiscall
v8::internal::UpdateTypedSlotHelper::operator()
          (UpdateTypedSlotHelper *this,undefined4 param_2,ulong *param_3,long param_4,
          YoungGenerationMarkingTask *param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_48 = param_3;
  switch(param_2) {
  case 0:
    local_40 = 3;
    break;
  case 1:
    local_40 = 2;
    break;
  case 2:
    uVar3 = *param_3;
    iVar2 = (int)uVar3;
    goto joined_r0x00ff52b0;
  case 3:
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uVar1 = operator()((UpdateTypedSlotHelper *)&local_48,param_4,param_5);
    return uVar1;
  case 4:
    uVar3 = *param_3 - 0x3f;
    iVar2 = (int)uVar3;
joined_r0x00ff52b0:
    if (iVar2 == 3) {
      return 1;
    }
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    if ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
      YoungGenerationMarkingTask::MarkObject(param_5,uVar3 & 0xfffffffffffffffd);
      *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + 1;
      return 0;
    }
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uVar1 = operator()(this,&local_48,param_4,param_5);
  return uVar1;
}

