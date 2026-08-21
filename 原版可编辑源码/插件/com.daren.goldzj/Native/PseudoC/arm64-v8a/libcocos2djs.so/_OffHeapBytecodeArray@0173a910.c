
/* v8::internal::compiler::OffHeapBytecodeArray::~OffHeapBytecodeArray() */

void __thiscall
v8::internal::compiler::OffHeapBytecodeArray::~OffHeapBytecodeArray(OffHeapBytecodeArray *this)

{
  operator_delete(this);
  return;
}

