
/* v8::internal::HeapProfiler::~HeapProfiler() */

void __thiscall v8::internal::HeapProfiler::~HeapProfiler(HeapProfiler *this)

{
  ~HeapProfiler(this);
  operator_delete(this);
  return;
}

