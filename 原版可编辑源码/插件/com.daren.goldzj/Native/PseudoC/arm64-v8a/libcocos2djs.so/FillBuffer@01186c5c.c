
/* v8::internal::Utf8ExternalStreamingStream::FillBuffer(unsigned long) */

long __thiscall
v8::internal::Utf8ExternalStreamingStream::FillBuffer
          (Utf8ExternalStreamingStream *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(Utf8ExternalStreamingStream **)(this + 0x10) = this + 0x32;
  *(Utf8ExternalStreamingStream **)(this + 0x18) = this + 0x32;
  SearchPosition(this,param_1);
  lVar3 = *(long *)(this + 0x440);
  lVar4 = *(long *)(this + 0x438);
  lVar2 = *(long *)(this + 0x450);
  if (((lVar2 == (lVar3 - lVar4 >> 3) * -0x3333333333333333) ||
      (*(long *)(lVar4 + lVar2 * 0x28 + 8) != 0)) || (*(int *)(this + 0x468) != 0)) {
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(this + 0x18);
    if (lVar5 == lVar6) {
      do {
        if (lVar2 == (lVar3 - lVar4 >> 3) * -0x3333333333333333) {
          uVar1 = FetchChunk(this);
          FillBufferFromCurrentChunk(this);
          if ((uVar1 & 1) == 0) {
            lVar5 = *(long *)(this + 0x10);
            lVar6 = *(long *)(this + 0x18);
            break;
          }
        }
        else {
          FillBufferFromCurrentChunk(this);
        }
        lVar5 = *(long *)(this + 0x10);
        lVar6 = *(long *)(this + 0x18);
        if (lVar5 != lVar6) break;
        lVar2 = *(long *)(this + 0x450);
        lVar3 = *(long *)(this + 0x440);
        lVar4 = *(long *)(this + 0x438);
      } while( true );
    }
    lVar2 = lVar6 - lVar5 >> 1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

