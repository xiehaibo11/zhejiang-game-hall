
/* v8::internal::HeapObjectsMap::StopHeapObjectsTracking() */

void __thiscall v8::internal::HeapObjectsMap::StopHeapObjectsTracking(HeapObjectsMap *this)

{
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  return;
}

