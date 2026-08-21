
/* v8::internal::HeapProfiler::HeapProfiler(v8::internal::Heap*) */

void __thiscall v8::internal::HeapProfiler::HeapProfiler(HeapProfiler *this,Heap *param_1)

{
  HeapObjectsMap *this_00;
  StringsStorage *this_01;
  
  *(undefined ***)this = &PTR_AllocationEvent_01cb63f0;
  this_00 = operator_new(0x80);
  HeapObjectsMap::HeapObjectsMap(this_00,param_1);
  *(HeapObjectsMap **)(this + 8) = this_00;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this_01 = operator_new(0x18);
  StringsStorage::StringsStorage(this_01);
  *(StringsStorage **)(this + 0x28) = this_01;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (HeapProfiler)0x0;
  base::Mutex::Mutex((Mutex *)(this + 0x3c));
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}

