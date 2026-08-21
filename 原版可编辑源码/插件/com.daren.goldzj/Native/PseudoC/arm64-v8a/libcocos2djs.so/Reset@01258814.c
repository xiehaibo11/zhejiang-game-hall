
/* v8::internal::wasm::ErrorThrower::Reset() */

void __thiscall v8::internal::wasm::ErrorThrower::Reset(ErrorThrower *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  if (((byte)this[0x18] & 1) == 0) {
    *(undefined2 *)(this + 0x18) = 0;
    return;
  }
  **(undefined1 **)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

