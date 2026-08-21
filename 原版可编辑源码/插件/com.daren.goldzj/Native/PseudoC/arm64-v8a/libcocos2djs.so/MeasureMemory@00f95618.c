
/* v8::internal::Heap::MeasureMemory(v8::internal::Handle<v8::internal::NativeContext>,
   v8::MeasureMemoryMode) */

void v8::internal::Heap::MeasureMemory(long param_1)

{
  MemoryMeasurement::EnqueueRequest(*(undefined8 *)(param_1 + 0x840));
  return;
}

