
/* v8::internal::HeapProfiler::MaybeClearStringsStorage() */

void __thiscall v8::internal::HeapProfiler::MaybeClearStringsStorage(HeapProfiler *this)

{
  StringsStorage *this_00;
  StringsStorage *this_01;
  
  if (((*(long *)(this + 0x10) == *(long *)(this + 0x18)) && (*(long *)(this + 0x68) == 0)) &&
     (*(long *)(this + 0x30) == 0)) {
    this_00 = operator_new(0x18);
    StringsStorage::StringsStorage(this_00);
    this_01 = *(StringsStorage **)(this + 0x28);
    *(StringsStorage **)(this + 0x28) = this_00;
    if (this_01 != (StringsStorage *)0x0) {
      StringsStorage::~StringsStorage(this_01);
      operator_delete(this_01);
      return;
    }
  }
  return;
}

