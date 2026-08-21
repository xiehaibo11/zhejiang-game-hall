
/* v8::internal::compiler::OffHeapBytecodeArray::OffHeapBytecodeArray(v8::internal::compiler::BytecodeArrayRef)
    */

void __thiscall
v8::internal::compiler::OffHeapBytecodeArray::OffHeapBytecodeArray
          (OffHeapBytecodeArray *this,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined ***)this = &PTR_length_01ccda80;
  *(undefined8 *)(this + 8) = param_2;
  return;
}

