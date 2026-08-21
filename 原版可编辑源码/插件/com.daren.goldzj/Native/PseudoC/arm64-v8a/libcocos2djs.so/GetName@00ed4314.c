
/* v8::HeapGraphNode::GetName() const */

void __thiscall v8::HeapGraphNode::GetName(HeapGraphNode *this)

{
  Factory *this_00;
  char *__s;
  char *local_30;
  size_t sStack_28;
  
  this_00 = (Factory *)
            internal::HeapProfiler::isolate((HeapProfiler *)**(undefined8 **)(this + 0x10));
  __s = *(char **)(this + 0x18);
  sStack_28 = strlen(__s);
  local_30 = __s;
  internal::Factory::InternalizeUtf8String(this_00,(Vector *)&local_30);
  return;
}

