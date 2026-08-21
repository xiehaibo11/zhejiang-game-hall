
/* v8::internal::CallInterfaceDescriptorData::Reset() */

void __thiscall v8::internal::CallInterfaceDescriptorData::Reset(CallInterfaceDescriptorData *this)

{
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

