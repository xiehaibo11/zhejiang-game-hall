
/* v8::internal::Code::OffHeapInstructionSize() const */

ulong __thiscall v8::internal::Code::OffHeapInstructionSize(Code *this)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar1 = Isolate::CurrentEmbeddedBlob();
  if (lVar1 == 0) {
    uVar3 = (ulong)*(uint *)(*(long *)this + 0x13);
  }
  else {
    uVar2 = Isolate::CurrentEmbeddedBlob();
    uStack_28 = Isolate::CurrentEmbeddedBlobSize();
    uStack_28 = uStack_28 & 0xffffffff;
    local_30 = uVar2;
    uVar3 = EmbeddedData::InstructionSizeOfBuiltin
                      ((EmbeddedData *)&local_30,*(int *)(*(long *)this + 0x27));
  }
  return uVar3;
}

