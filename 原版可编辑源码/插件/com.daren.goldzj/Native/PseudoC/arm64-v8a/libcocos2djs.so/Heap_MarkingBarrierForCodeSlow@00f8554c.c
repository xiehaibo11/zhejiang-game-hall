
/* v8::internal::Heap_MarkingBarrierForCodeSlow(v8::internal::Code, v8::internal::RelocInfo*,
   v8::internal::HeapObject) */

void v8::internal::Heap_MarkingBarrierForCodeSlow
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  IncrementalMarking::RecordWriteIntoCode
            (*(IncrementalMarking **)(*(long *)((param_1 & 0xfffffffffffc0000) + 0x18) + 0x828),
             param_1,param_2,param_3);
  return;
}

