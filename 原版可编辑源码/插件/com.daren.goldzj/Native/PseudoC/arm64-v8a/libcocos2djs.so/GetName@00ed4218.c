
/* v8::HeapGraphEdge::GetName() const */

void __thiscall v8::HeapGraphEdge::GetName(HeapGraphEdge *this)

{
  Factory *this_00;
  char *__s;
  char *local_30;
  size_t sStack_28;
  
  this_00 = (Factory *)
            internal::HeapProfiler::isolate
                      ((HeapProfiler *)**(undefined8 **)(*(long *)(this + 8) + 0x10));
  if (6 < (*(uint *)this & 7)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((1 << (ulong)(*(uint *)this & 7) & 0x6dU) != 0) {
    __s = *(char **)(this + 0x10);
    sStack_28 = strlen(__s);
    local_30 = __s;
    internal::Factory::InternalizeUtf8String(this_00,(Vector *)&local_30);
    return;
  }
  internal::Factory::NewNumberFromInt(this_00,*(int *)(this + 0x10));
  return;
}

