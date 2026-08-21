
/* v8::internal::ValueDeserializer::ReadString() */

ulong * __thiscall v8::internal::ValueDeserializer::ReadString(ValueDeserializer *this)

{
  byte bVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte *local_20;
  ulong uStack_18;
  
  if (*(uint *)(this + 0x20) < 0xc) {
    local_20 = *(byte **)(this + 0x10);
    uVar3 = 0;
    uVar5 = 0;
    do {
      if (*(byte **)(this + 0x18) <= local_20) {
        return (ulong *)0x0;
      }
      bVar1 = *local_20;
      if (uVar5 < 0x20) {
        uVar3 = (bVar1 & 0x7f) << (ulong)(uVar5 & 0x1f) | uVar3;
        uVar5 = uVar5 + 7;
      }
      local_20 = local_20 + 1;
      *(byte **)(this + 0x10) = local_20;
    } while ((char)bVar1 < '\0');
    if ((-1 < (int)uVar3) &&
       (uStack_18 = (ulong)uVar3, (long)uStack_18 <= (long)*(byte **)(this + 0x18) - (long)local_20)
       ) {
      *(byte **)(this + 0x10) = local_20 + uStack_18;
      puVar2 = (ulong *)Factory::NewStringFromUtf8(*(Factory **)this,&local_20,0);
      return puVar2;
    }
  }
  else {
    puVar2 = (ulong *)ReadObject(this);
    if (puVar2 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar4 = *puVar2;
    if ((uVar4 & 1) != 0) {
      if (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))) {
        return (ulong *)0x0;
      }
      return puVar2;
    }
  }
  return (ulong *)0x0;
}

