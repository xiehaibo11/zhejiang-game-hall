
/* v8::internal::Code::has_code_comments() const */

bool __thiscall v8::internal::Code::has_code_comments(Code *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar3 = *(long *)this;
  if (*(int *)(lVar3 + 0x17) < 0) {
    lVar3 = Isolate::CurrentEmbeddedBlob();
    if (lVar3 != 0) {
      uVar2 = Isolate::CurrentEmbeddedBlob();
      uStack_28 = Isolate::CurrentEmbeddedBlobSize();
      uStack_28 = uStack_28 & 0xffffffff;
      local_30 = uVar2;
      iVar1 = EmbeddedData::InstructionSizeOfBuiltin
                        ((EmbeddedData *)&local_30,*(int *)(*(long *)this + 0x27));
      lVar3 = *(long *)this;
      goto LAB_010716a4;
    }
    lVar3 = *(long *)this;
  }
  iVar1 = *(int *)(lVar3 + 0x13);
LAB_010716a4:
  return *(int *)(lVar3 + 0x23) < iVar1;
}

