
/* v8::Isolate::GetHeapCodeAndMetadataStatistics(v8::HeapCodeStatistics*) */

undefined8 __thiscall
v8::Isolate::GetHeapCodeAndMetadataStatistics(Isolate *this,HeapCodeStatistics *param_1)

{
  if (param_1 != (HeapCodeStatistics *)0x0) {
    internal::Heap::CollectCodeStatistics((Heap *)(this + 0x8850));
    *(long *)param_1 = (long)*(int *)(this + 0xb7f0);
    *(long *)(param_1 + 8) = (long)*(int *)(this + 0xb7f4);
    *(long *)(param_1 + 0x10) = (long)*(int *)(this + 0xb7f8);
    return 1;
  }
  return 0;
}

