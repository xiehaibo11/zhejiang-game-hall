
/* v8::internal::Map::OnlyHasSimpleProperties() const */

bool __thiscall v8::internal::Map::OnlyHasSimpleProperties(Map *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if ((byte)((*(byte *)(lVar1 + 10) >> 3) - 0xf) < 2) {
    return false;
  }
  if (*(ushort *)(lVar1 + 7) < 0x411) {
    return false;
  }
  return (*(uint *)(lVar1 + 0xb) & 0x200000) == 0;
}

