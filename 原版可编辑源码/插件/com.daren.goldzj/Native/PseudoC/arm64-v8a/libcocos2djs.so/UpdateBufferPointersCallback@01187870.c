
/* v8::internal::RelocatingCharacterStream::UpdateBufferPointersCallback(v8::Isolate*, v8::GCType,
   v8::GCCallbackFlags, void*) */

void v8::internal::RelocatingCharacterStream::UpdateBufferPointersCallback(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_x3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(in_x3 + 0x48);
  lVar5 = *(long *)(in_x3 + 8);
  uVar3 = uVar4;
  if (*(ulong *)(in_x3 + 0x20) <= uVar4) {
    uVar3 = *(ulong *)(in_x3 + 0x20);
  }
  lVar1 = **(long **)(in_x3 + 0x38) + 0xb;
  lVar2 = lVar1 + (uVar3 + *(long *)(in_x3 + 0x40)) * 2;
  if (lVar5 != lVar2) {
    *(ulong *)(in_x3 + 0x18) = lVar1 + (uVar4 + *(long *)(in_x3 + 0x40)) * 2;
    *(long *)(in_x3 + 8) = lVar2;
    *(long *)(in_x3 + 0x10) = lVar2 + (*(long *)(in_x3 + 0x10) - lVar5);
  }
  return;
}

