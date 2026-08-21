
/* v8::internal::SerializedData::~SerializedData() */

void __thiscall v8::internal::SerializedData::~SerializedData(SerializedData *this)

{
  *(undefined ***)this = &PTR__SerializedData_01c983e8;
  if ((this[0x14] != (SerializedData)0x0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}

