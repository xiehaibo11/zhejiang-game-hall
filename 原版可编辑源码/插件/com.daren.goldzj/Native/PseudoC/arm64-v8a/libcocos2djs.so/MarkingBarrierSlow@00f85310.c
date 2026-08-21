
/* v8::internal::Heap::MarkingBarrierSlow(v8::internal::HeapObject, unsigned long,
   v8::internal::HeapObject) */

void v8::internal::Heap::MarkingBarrierSlow(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  IncrementalMarking::RecordWriteSlow
            (*(IncrementalMarking **)(*(long *)((param_1 & 0xfffffffffffc0000) + 0x18) + 0x828),
             param_1,param_2,param_3);
  return;
}

