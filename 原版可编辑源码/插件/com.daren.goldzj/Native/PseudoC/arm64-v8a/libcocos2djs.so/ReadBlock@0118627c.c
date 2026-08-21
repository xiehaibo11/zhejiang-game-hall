
/* v8::internal::BufferedUtf16CharacterStream::ReadBlock() */

bool __thiscall
v8::internal::BufferedUtf16CharacterStream::ReadBlock(BufferedUtf16CharacterStream *this)

{
  BufferedUtf16CharacterStream *pBVar1;
  long lVar2;
  
  pBVar1 = this + 0x32;
  *(long *)(this + 0x20) =
       *(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1);
  *(BufferedUtf16CharacterStream **)(this + 0x10) = pBVar1;
  lVar2 = (**(code **)(*(long *)this + 0x30))();
  *(BufferedUtf16CharacterStream **)(this + 0x18) = pBVar1 + lVar2 * 2;
  return *(BufferedUtf16CharacterStream **)(this + 0x10) < pBVar1 + lVar2 * 2;
}

