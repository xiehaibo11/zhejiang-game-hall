
/* v8::internal::Code::OffHeapInstructionStart() const */

long __thiscall v8::internal::Code::OffHeapInstructionStart(Code *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar1 = Isolate::CurrentEmbeddedBlob();
  if (lVar1 == 0) {
    lVar1 = *(long *)this + 0x3f;
  }
  else {
    uVar2 = Isolate::CurrentEmbeddedBlob();
    uStack_28 = Isolate::CurrentEmbeddedBlobSize();
    uStack_28 = uStack_28 & 0xffffffff;
    local_30 = uVar2;
    lVar1 = EmbeddedData::InstructionStartOfBuiltin
                      ((EmbeddedData *)&local_30,*(int *)(*(long *)this + 0x27));
  }
  return lVar1;
}

