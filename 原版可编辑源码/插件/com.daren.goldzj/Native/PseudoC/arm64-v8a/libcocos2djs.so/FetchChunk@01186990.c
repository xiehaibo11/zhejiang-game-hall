
/* v8::internal::Utf8ExternalStreamingStream::FetchChunk() */

bool __thiscall
v8::internal::Utf8ExternalStreamingStream::FetchChunk(Utf8ExternalStreamingStream *this)

{
  RuntimeCallStats *pRVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_18;
  
  pRVar1 = *(RuntimeCallStats **)(this + 0x28);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((pRVar1 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_60 = pRVar1;
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)((ulong)&local_60 | 8),0x8c);
  }
  local_18 = 0;
  lVar2 = (**(code **)(**(long **)(this + 0x470) + 0x10))(*(long **)(this + 0x470),&local_18);
  local_88 = local_18;
  uStack_70 = *(undefined8 *)(this + 0x460);
  local_78 = *(undefined8 *)(this + 0x458);
  local_68 = *(undefined8 *)(this + 0x468);
  puVar3 = *(undefined8 **)(this + 0x440);
  lStack_80 = lVar2;
  if (puVar3 < *(undefined8 **)(this + 0x448)) {
    puVar3[4] = local_68;
    puVar3[1] = lVar2;
    *puVar3 = local_18;
    puVar3[3] = uStack_70;
    puVar3[2] = local_78;
    *(long *)(this + 0x440) = *(long *)(this + 0x440) + 0x28;
  }
  else {
    std::__ndk1::
    vector<v8::internal::Utf8ExternalStreamingStream::Chunk,std::__ndk1::allocator<v8::internal::Utf8ExternalStreamingStream::Chunk>>
    ::__push_back_slow_path<v8::internal::Utf8ExternalStreamingStream::Chunk>
              ((vector<v8::internal::Utf8ExternalStreamingStream::Chunk,std::__ndk1::allocator<v8::internal::Utf8ExternalStreamingStream::Chunk>>
                *)(this + 0x438),(Chunk *)&local_88);
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return lVar2 != 0;
}

