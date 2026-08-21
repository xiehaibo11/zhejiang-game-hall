
/* v8::internal::ExitFrame::Iterate(v8::internal::RootVisitor*) const */

void __thiscall v8::internal::ExitFrame::Iterate(ExitFrame *this,RootVisitor *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long local_40;
  long local_38;
  
  puVar2 = *(ulong **)(this + 0x28);
  lVar1 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),*puVar2);
  local_38 = *(long *)(lVar1 + 8);
  uVar3 = *puVar2;
  if (*(int *)(local_38 + 0x17) < 0) {
    lVar1 = Code::OffHeapInstructionStart((Code *)&local_38);
  }
  else {
    lVar1 = local_38 + 0x3f;
  }
  local_40 = local_38;
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,&local_40);
  if ((int)local_40 != (int)local_38) {
    local_38 = local_40;
    if (*(int *)(local_40 + 0x17) < 0) {
      local_40 = Code::OffHeapInstructionStart((Code *)&local_38);
    }
    else {
      local_40 = local_40 + 0x3f;
    }
    *puVar2 = local_40 + (uVar3 - lVar1 & 0xffffffff);
  }
  return;
}

