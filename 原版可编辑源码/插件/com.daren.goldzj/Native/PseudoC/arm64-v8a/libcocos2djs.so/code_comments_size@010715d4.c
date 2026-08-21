
/* v8::internal::Code::code_comments_size() const */

int __thiscall v8::internal::Code::code_comments_size(Code *this)

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
      goto LAB_0107162c;
    }
    lVar3 = *(long *)this;
  }
  iVar1 = *(int *)(lVar3 + 0x13);
LAB_0107162c:
  return iVar1 - *(int *)(lVar3 + 0x23);
}

