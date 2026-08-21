
/* v8::internal::Code::OffHeapInstructionEnd() const */

long __thiscall v8::internal::Code::OffHeapInstructionEnd(Code *this)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar1 = Isolate::CurrentEmbeddedBlob();
  if (lVar1 == 0) {
    lVar1 = *(long *)this + (long)*(int *)(*(long *)this + 0x13) + 0x3f;
  }
  else {
    uVar2 = Isolate::CurrentEmbeddedBlob();
    uStack_28 = Isolate::CurrentEmbeddedBlobSize();
    uStack_28 = uStack_28 & 0xffffffff;
    local_30 = uVar2;
    lVar1 = EmbeddedData::InstructionStartOfBuiltin
                      ((EmbeddedData *)&local_30,*(int *)(*(long *)this + 0x27));
    uVar3 = EmbeddedData::InstructionSizeOfBuiltin
                      ((EmbeddedData *)&local_30,*(int *)(*(long *)this + 0x27));
    lVar1 = lVar1 + (uVar3 & 0xffffffff);
  }
  return lVar1;
}

