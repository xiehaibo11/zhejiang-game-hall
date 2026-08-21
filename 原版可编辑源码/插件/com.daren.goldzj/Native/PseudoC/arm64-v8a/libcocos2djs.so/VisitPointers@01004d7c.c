
/* v8::internal::ScavengeVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::ScavengeVisitor::VisitPointers
          (ScavengeVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_3 < param_4) {
    uVar1 = *param_3;
    while( true ) {
      if (((uVar1 & 1) != 0) &&
         ((*(byte *)(((ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000) + 8)
          & 0x18) != 0)) {
        Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                  (*(Scavenger **)(this + 8),param_3);
      }
      param_3 = param_3 + 1;
      if (param_4 <= param_3) break;
      uVar1 = *param_3;
    }
  }
  return;
}

