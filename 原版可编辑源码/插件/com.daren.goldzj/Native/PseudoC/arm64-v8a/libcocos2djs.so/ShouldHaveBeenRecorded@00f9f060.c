
/* v8::internal::OldToNewSlotVerifyingVisitor::ShouldHaveBeenRecorded(v8::internal::HeapObject,
   v8::internal::MaybeObject) */

bool __thiscall
v8::internal::OldToNewSlotVerifyingVisitor::ShouldHaveBeenRecorded
          (undefined8 param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (((int)param_3 != 3) && ((param_3 & 1) != 0)) {
    if ((*(byte *)((param_3 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
      return false;
    }
    bVar1 = (*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0;
  }
  return bVar1;
}

