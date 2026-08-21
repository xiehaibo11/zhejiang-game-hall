
/* v8::internal::FieldStatsCollector::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::FieldStatsCollector::VisitPointers
          (FieldStatsCollector *this,undefined8 param_2,long param_3,long param_4)

{
  **(long **)(this + 0x30) = **(long **)(this + 0x30) + ((ulong)(param_4 - param_3) >> 2);
  return;
}

