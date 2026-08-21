
/* v8::internal::SnapshotData::~SnapshotData() */

void __thiscall v8::internal::SnapshotData::~SnapshotData(SnapshotData *this)

{
  *(undefined ***)this = &PTR__SerializedData_01c983e8;
  if ((this[0x14] != (SnapshotData)0x0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}

