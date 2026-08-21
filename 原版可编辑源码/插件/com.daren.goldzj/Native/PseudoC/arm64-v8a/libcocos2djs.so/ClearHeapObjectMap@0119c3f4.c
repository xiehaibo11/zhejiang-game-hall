
/* v8::internal::HeapProfiler::ClearHeapObjectMap() */

void __thiscall v8::internal::HeapProfiler::ClearHeapObjectMap(HeapProfiler *this)

{
  HeapObjectsMap *this_00;
  long lVar1;
  HeapProfiler *pHVar2;
  
  this_00 = operator_new(0x80);
  pHVar2 = this + 8;
  HeapObjectsMap::HeapObjectsMap(this_00,*(Heap **)(*(long *)pHVar2 + 0x78));
  lVar1 = *(long *)pHVar2;
  *(HeapObjectsMap **)pHVar2 = this_00;
  if (lVar1 != 0) {
    FUN_0119c914(pHVar2);
  }
  if (*(long *)(this + 0x30) == 0) {
    this[0x38] = (HeapProfiler)0x0;
  }
  return;
}

