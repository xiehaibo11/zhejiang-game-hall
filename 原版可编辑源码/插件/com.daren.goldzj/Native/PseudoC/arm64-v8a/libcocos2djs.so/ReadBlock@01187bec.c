
/* v8::internal::UnbufferedCharacterStream<v8::internal::ChunkedStream>::ReadBlock() */

bool __thiscall
v8::internal::UnbufferedCharacterStream<v8::internal::ChunkedStream>::ReadBlock
          (UnbufferedCharacterStream<v8::internal::ChunkedStream> *this)

{
  RuntimeCallStats *pRVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  long local_30;
  ulong uStack_28;
  
  pRVar1 = (RuntimeCallStats *)
           (*(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1));
  *(RuntimeCallStats **)(this + 0x20) = pRVar1;
  ChunkedStream<unsigned_short>::FindChunk((ulong)(this + 0x38),pRVar1);
  uVar3 = uStack_28;
  if ((ulong)((long)pRVar1 - local_30) <= uStack_28) {
    uVar3 = (long)pRVar1 - local_30;
  }
  lVar2 = local_38 + uVar3 * 2;
  *(long *)(this + 8) = lVar2;
  *(long *)(this + 0x10) = lVar2;
  *(ulong *)(this + 0x18) = local_38 + uStack_28 * 2;
  return (uStack_28 - uVar3 & 0x7fffffffffffffff) != 0;
}

