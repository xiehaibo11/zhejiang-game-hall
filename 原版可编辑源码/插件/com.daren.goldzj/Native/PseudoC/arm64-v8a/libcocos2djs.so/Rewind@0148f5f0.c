
/* v8::internal::AsmJsScanner::Rewind() */

void __thiscall v8::internal::AsmJsScanner::Rewind(AsmJsScanner *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  this[0x30] = (AsmJsScanner)0x1;
  if (((byte)this[0x38] & 1) == 0) {
    *(undefined2 *)(this + 0x38) = 0;
    return;
  }
  **(undefined1 **)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

