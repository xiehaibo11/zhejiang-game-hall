
/* v8::internal::ValueDeserializer::ReadTwoByteString() */

Factory * __thiscall v8::internal::ValueDeserializer::ReadTwoByteString(ValueDeserializer *this)

{
  byte bVar1;
  uint uVar2;
  byte *__src;
  Factory *pFVar3;
  uint uVar4;
  
  __src = *(byte **)(this + 0x10);
  uVar4 = 0;
  uVar2 = 0;
  do {
    if (*(byte **)(this + 0x18) <= __src) goto LAB_01144d18;
    bVar1 = *__src;
    if (uVar2 < 0x20) {
      uVar4 = (bVar1 & 0x7f) << (ulong)(uVar2 & 0x1f) | uVar4;
      uVar2 = uVar2 + 7;
    }
    __src = __src + 1;
    *(byte **)(this + 0x10) = __src;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0x80000001) == 0) &&
     ((long)(ulong)uVar4 <= (long)*(byte **)(this + 0x18) - (long)__src)) {
    *(byte **)(this + 0x10) = __src + uVar4;
    if (uVar4 == 0) {
      pFVar3 = *(Factory **)this + 200;
    }
    else {
      pFVar3 = (Factory *)Factory::NewRawTwoByteString(*(Factory **)this,uVar4 >> 1,0);
      if (pFVar3 != (Factory *)0x0) {
        memcpy((void *)(*(long *)pFVar3 + 0xb),__src,(long)(int)uVar4);
      }
    }
  }
  else {
LAB_01144d18:
    pFVar3 = (Factory *)0x0;
  }
  return pFVar3;
}

