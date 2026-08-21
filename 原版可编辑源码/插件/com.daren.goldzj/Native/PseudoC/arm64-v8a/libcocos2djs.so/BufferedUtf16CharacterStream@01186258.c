
/* v8::internal::BufferedUtf16CharacterStream::BufferedUtf16CharacterStream() */

void __thiscall
v8::internal::BufferedUtf16CharacterStream::BufferedUtf16CharacterStream
          (BufferedUtf16CharacterStream *this)

{
  BufferedUtf16CharacterStream *pBVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  pBVar1 = this + 0x32;
  *(BufferedUtf16CharacterStream **)(this + 0x10) = pBVar1;
  *(BufferedUtf16CharacterStream **)(this + 0x18) = pBVar1;
  this[0x30] = (BufferedUtf16CharacterStream)0x0;
  *(undefined ***)this = &PTR__Utf16CharacterStream_01cb5530;
  *(BufferedUtf16CharacterStream **)(this + 8) = pBVar1;
  return;
}

