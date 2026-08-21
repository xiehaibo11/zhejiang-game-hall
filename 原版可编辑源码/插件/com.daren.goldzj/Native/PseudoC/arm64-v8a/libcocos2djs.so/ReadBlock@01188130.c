
/* v8::internal::BufferedCharacterStream<v8::internal::ChunkedStream>::ReadBlock() */

undefined8 __thiscall
v8::internal::BufferedCharacterStream<v8::internal::ChunkedStream>::ReadBlock
          (BufferedCharacterStream<v8::internal::ChunkedStream> *this)

{
  RuntimeCallStats *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  BufferedCharacterStream<v8::internal::ChunkedStream> *pBVar5;
  long local_48;
  long local_40;
  ulong uStack_38;
  
  pBVar5 = this + 0x32;
  pRVar1 = (RuntimeCallStats *)
           (*(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1));
  *(BufferedCharacterStream<v8::internal::ChunkedStream> **)(this + 8) = pBVar5;
  *(BufferedCharacterStream<v8::internal::ChunkedStream> **)(this + 0x10) = pBVar5;
  *(RuntimeCallStats **)(this + 0x20) = pRVar1;
  ChunkedStream<unsigned_char>::FindChunk((ulong)(this + 0x438),pRVar1);
  uVar2 = uStack_38;
  if ((ulong)((long)pRVar1 - local_40) <= uStack_38) {
    uVar2 = (long)pRVar1 - local_40;
  }
  uVar3 = (local_48 + uStack_38) - (long)(local_48 + uVar2);
  if (uVar3 == 0) {
    pBVar5 = *(BufferedCharacterStream<v8::internal::ChunkedStream> **)(this + 8);
    uVar4 = 0;
  }
  else {
    if (0x1ff < uVar3) {
      uVar3 = 0x200;
    }
    CopyChars<unsigned_char,unsigned_short>((ushort *)pBVar5,(uchar *)(local_48 + uVar2),uVar3);
    pBVar5 = this + uVar3 * 2 + 0x32;
    uVar4 = 1;
  }
  *(BufferedCharacterStream<v8::internal::ChunkedStream> **)(this + 0x18) = pBVar5;
  return uVar4;
}

