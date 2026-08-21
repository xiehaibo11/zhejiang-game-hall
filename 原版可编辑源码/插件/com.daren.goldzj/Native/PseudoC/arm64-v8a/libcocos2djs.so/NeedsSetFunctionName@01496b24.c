
/* v8::internal::LiteralProperty::NeedsSetFunctionName() const */

uint __thiscall v8::internal::LiteralProperty::NeedsSetFunctionName(LiteralProperty *this)

{
  uint uVar1;
  uint uVar2;
  
  if (((byte)*this & 3) != 0) {
    uVar1 = *(uint *)(*(long *)(this + 8) + 4);
    if ((uVar1 & 0x3f) == 0x1f) {
      return uVar1 >> 9 & 1;
    }
    if ((uVar1 & 0x3f) == 0x26) {
      if ((uVar1 & 0x380) != 0) {
        uVar2 = (uint)*(byte *)(*(long *)(*(long *)(this + 8) + 0x28) + 0x85);
        uVar1 = uVar2 - 0xc;
        if ((6 < uVar1) || ((0x73U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
          return (uint)(uVar2 - 7 < 2);
        }
      }
      return 1;
    }
  }
  return 0;
}

