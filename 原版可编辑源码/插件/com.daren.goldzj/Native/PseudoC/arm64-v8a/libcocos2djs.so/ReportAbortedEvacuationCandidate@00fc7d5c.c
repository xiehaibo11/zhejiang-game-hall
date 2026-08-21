
/* v8::internal::MarkCompactCollector::ReportAbortedEvacuationCandidate(v8::internal::HeapObject,
   v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::MarkCompactCollector::ReportAbortedEvacuationCandidate
          (MarkCompactCollector *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  base::Mutex::Lock((Mutex *)(this + 0x14));
  puVar1 = *(undefined8 **)(this + 0x26e8);
  local_40 = param_2;
  uStack_38 = param_3;
  if (puVar1 < *(undefined8 **)(this + 0x26f0)) {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    *(long *)(this + 0x26e8) = *(long *)(this + 0x26e8) + 0x10;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Page*>>>
    ::__push_back_slow_path<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Page*>>
              ((vector<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Page*>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Page*>>>
                *)(this + 0x26e0),(pair *)&local_40);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x14));
  return;
}

