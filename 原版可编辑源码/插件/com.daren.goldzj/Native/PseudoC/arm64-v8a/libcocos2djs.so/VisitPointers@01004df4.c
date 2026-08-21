
/* v8::internal::ScavengeVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::ScavengeVisitor::VisitPointers
          (ScavengeVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    uVar1 = *param_3;
    if (((uVar1 != 3) && ((uVar1 & 1) != 0)) &&
       ((*(byte *)(((ulong)uVar1 & 0xfffffffffffc0000 | (ulong)param_3 & 0xffffffff00000000) + 8) &
        0x18) != 0)) {
      Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                (*(Scavenger **)(this + 8),param_3);
    }
  }
  return;
}

