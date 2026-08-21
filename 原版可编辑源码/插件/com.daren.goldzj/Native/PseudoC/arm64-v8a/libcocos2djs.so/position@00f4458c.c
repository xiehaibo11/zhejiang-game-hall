
/* v8::internal::StandardFrame::position() const */

void __thiscall v8::internal::StandardFrame::position(StandardFrame *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_28;
  ulong local_8;
  
  lVar2 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  local_28 = *(ulong *)(lVar2 + 8);
  uVar3 = **(undefined8 **)(this + 0x28);
  if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x9a) {
    local_8 = local_28;
    if (*(int *)(local_28 + 0x17) < 0) {
      iVar1 = Code::OffHeapInstructionStart((Code *)&local_8);
    }
    else {
      iVar1 = (int)local_28 + 0x3f;
    }
  }
  else {
    iVar1 = (int)local_28 + 0x21;
  }
  AbstractCode::SourcePosition((AbstractCode *)&local_28,(int)uVar3 - iVar1);
  return;
}

