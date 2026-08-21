
/* v8::internal::SafeStackFrameIterator::IsNoFrameBytecodeHandlerPc(v8::internal::Isolate*, unsigned
   long, unsigned long) const */

bool __thiscall
v8::internal::SafeStackFrameIterator::IsNoFrameBytecodeHandlerPc
          (SafeStackFrameIterator *this,Isolate *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 local_40;
  ulong uStack_38;
  
  lVar2 = Isolate::CurrentEmbeddedBlob();
  bVar1 = false;
  if (lVar2 != 0) {
    uVar3 = Isolate::CurrentEmbeddedBlob();
    uStack_38 = Isolate::CurrentEmbeddedBlobSize();
    uStack_38 = uStack_38 & 0xffffffff;
    local_40 = uVar3;
    uVar4 = EmbeddedData::InstructionStartOfBytecodeHandlers((EmbeddedData *)&local_40);
    if ((((param_2 < uVar4) ||
         (uVar4 = EmbeddedData::InstructionEndOfBytecodeHandlers((EmbeddedData *)&local_40),
         uVar4 <= param_2)) || (puVar5 = (ulong *)(param_3 - 8), puVar5 < *(ulong **)(this + 0x5a0))
        ) || (*(ulong **)(this + 0x5a8) < puVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = (*puVar5 & 0x1ffffffff) != 0x1a;
    }
  }
  return bVar1;
}

