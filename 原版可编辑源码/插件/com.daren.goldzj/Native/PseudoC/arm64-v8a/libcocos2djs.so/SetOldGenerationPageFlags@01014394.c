
/* v8::internal::MemoryChunk::SetOldGenerationPageFlags(bool) */

void __thiscall v8::internal::MemoryChunk::SetOldGenerationPageFlags(MemoryChunk *this,bool param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 8) | 0x40006;
  if (!param_1) {
    uVar1 = *(ulong *)(this + 8) & 0xfffffffffffbfff9 | 4;
  }
  *(ulong *)(this + 8) = uVar1;
  return;
}

