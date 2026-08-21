
/* v8::internal::HeapProfiler::DeleteAllSnapshots() */

void __thiscall v8::internal::HeapProfiler::DeleteAllSnapshots(HeapProfiler *this)

{
  undefined8 *puVar1;
  StringsStorage *this_00;
  long lVar2;
  HeapSnapshot *this_01;
  StringsStorage *this_02;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar3 == puVar1) {
    *(undefined8 **)(this + 0x18) = puVar1;
    lVar2 = *(long *)(this + 0x68);
  }
  else {
    do {
      puVar3 = puVar3 + -1;
      this_01 = (HeapSnapshot *)*puVar3;
      *puVar3 = 0;
      if (this_01 != (HeapSnapshot *)0x0) {
        HeapSnapshot::~HeapSnapshot(this_01);
        operator_delete(this_01);
      }
    } while (puVar1 != puVar3);
    *(undefined8 **)(this + 0x18) = puVar1;
    if (*(undefined8 **)(this + 0x10) != puVar1) {
      return;
    }
    lVar2 = *(long *)(this + 0x68);
  }
  if ((lVar2 == 0) && (*(long *)(this + 0x30) == 0)) {
    this_00 = operator_new(0x18);
    StringsStorage::StringsStorage(this_00);
    this_02 = *(StringsStorage **)(this + 0x28);
    *(StringsStorage **)(this + 0x28) = this_00;
    if (this_02 != (StringsStorage *)0x0) {
      StringsStorage::~StringsStorage(this_02);
      operator_delete(this_02);
      return;
    }
  }
  return;
}

