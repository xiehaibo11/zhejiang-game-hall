
/* v8::internal::wasm::AsmType::StoreType() */

undefined8 __thiscall v8::internal::wasm::AsmType::StoreType(AsmType *this)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (((ulong)this & 1) != 0) {
    uVar1 = (uint)this & 0xfffffffe;
    uVar2 = 0x101;
    if ((int)uVar1 < 0x100002) {
      if ((int)uVar1 < 0x40002) {
        if ((uVar1 == 0x10002) || (uVar1 == 0x20002)) {
          return uVar2;
        }
      }
      else {
        if (uVar1 == 0x40002) {
          return uVar2;
        }
        if (uVar1 == 0x80002) {
          return uVar2;
        }
      }
    }
    else if ((int)uVar1 < 0x400002) {
      if (uVar1 == 0x100002) {
        return uVar2;
      }
      if (uVar1 == 0x200002) {
        return uVar2;
      }
    }
    else {
      if (uVar1 == 0x800002) {
        return 9;
      }
      if (uVar1 == 0x400002) {
        return 5;
      }
    }
  }
  return 0x80000001;
}

