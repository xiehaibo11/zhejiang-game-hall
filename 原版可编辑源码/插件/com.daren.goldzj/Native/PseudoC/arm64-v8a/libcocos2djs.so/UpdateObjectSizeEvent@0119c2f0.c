
/* v8::internal::HeapProfiler::UpdateObjectSizeEvent(unsigned long, int) */

void __thiscall
v8::internal::HeapProfiler::UpdateObjectSizeEvent(HeapProfiler *this,ulong param_1,int param_2)

{
  HeapObjectsMap::UpdateObjectSize(*(HeapObjectsMap **)(this + 8),param_1,param_2);
  return;
}

