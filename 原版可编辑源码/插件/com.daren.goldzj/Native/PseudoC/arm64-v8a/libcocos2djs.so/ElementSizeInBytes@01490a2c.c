
/* v8::internal::wasm::AsmType::ElementSizeInBytes() */

undefined8 __thiscall v8::internal::wasm::AsmType::ElementSizeInBytes(AsmType *this)

{
  uint uVar1;
  
  if (((ulong)this & 1) != 0) {
    uVar1 = (uint)this & 0xfffffffe;
    if ((int)uVar1 < 0x100002) {
      if ((int)uVar1 < 0x40002) {
        if ((uVar1 == 0x10002) || (uVar1 == 0x20002)) {
          return 1;
        }
      }
      else if ((uVar1 == 0x40002) || (uVar1 == 0x80002)) {
        return 2;
      }
    }
    else if ((int)uVar1 < 0x400002) {
      if ((uVar1 == 0x100002) || (uVar1 == 0x200002)) {
        return 4;
      }
    }
    else {
      if (uVar1 == 0x400002) {
        return 4;
      }
      if (uVar1 == 0x800002) {
        return 8;
      }
    }
  }
  return 0xffffffff;
}

