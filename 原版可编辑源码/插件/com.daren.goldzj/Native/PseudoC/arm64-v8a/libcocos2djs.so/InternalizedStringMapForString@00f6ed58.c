
/* v8::internal::Factory::InternalizedStringMapForString(v8::internal::Handle<v8::internal::String>)
    */

Factory * __thiscall
v8::internal::Factory::InternalizedStringMapForString(Factory *this,ulong *param_2)

{
  Factory *pFVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    return (Factory *)0x0;
  }
  pFVar1 = (Factory *)0x0;
  uVar2 = (uint)*(ushort *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 7);
  switch(uVar2 - 0x20 >> 1 | uVar2 << 0x1f) {
  case 0:
    return this + 0x328;
  case 1:
    return this + 0x330;
  case 4:
    return this + 0x108;
  case 5:
    return this + 0x338;
  case 9:
    return this + 0x340;
  case 0xd:
    pFVar1 = this + 0x348;
  }
  return pFVar1;
}

