
/* v8::internal::BufferedCharacterStream<v8::internal::TestingStream>::ReadBlock() */

undefined8 __thiscall
v8::internal::BufferedCharacterStream<v8::internal::TestingStream>::ReadBlock
          (BufferedCharacterStream<v8::internal::TestingStream> *this)

{
  BufferedCharacterStream<v8::internal::TestingStream> *pBVar1;
  ulong uVar2;
  uchar *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  pBVar1 = this + 0x32;
  uVar6 = *(ulong *)(this + 0x440);
  uVar2 = *(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1);
  *(ulong *)(this + 0x20) = uVar2;
  uVar4 = uVar6;
  if (uVar2 <= uVar6) {
    uVar4 = uVar2;
  }
  puVar3 = (uchar *)(*(long *)(this + 0x438) + uVar4);
  uVar2 = (*(long *)(this + 0x438) + uVar6) - (long)puVar3;
  *(BufferedCharacterStream<v8::internal::TestingStream> **)(this + 8) = pBVar1;
  *(BufferedCharacterStream<v8::internal::TestingStream> **)(this + 0x10) = pBVar1;
  if (uVar2 == 0) {
    *(BufferedCharacterStream<v8::internal::TestingStream> **)(this + 0x18) = pBVar1;
    uVar5 = 0;
  }
  else {
    if (0x1ff < uVar2) {
      uVar2 = 0x200;
    }
    CopyChars<unsigned_char,unsigned_short>((ushort *)pBVar1,puVar3,uVar2);
    *(BufferedCharacterStream<v8::internal::TestingStream> **)(this + 0x18) =
         this + uVar2 * 2 + 0x32;
    uVar5 = 1;
  }
  return uVar5;
}

