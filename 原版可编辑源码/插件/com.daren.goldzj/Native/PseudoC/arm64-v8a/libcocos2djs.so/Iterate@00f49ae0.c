
/* v8::internal::InternalFrame::Iterate(v8::internal::RootVisitor*) const */

void __thiscall v8::internal::InternalFrame::Iterate(InternalFrame *this,RootVisitor *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  long local_48;
  
  lVar2 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  lVar2 = *(long *)(lVar2 + 8);
  plVar5 = *(long **)(this + 0x28);
  lVar6 = *plVar5;
  local_48 = lVar2;
  if (*(int *)(lVar2 + 0x17) < 0) {
    lVar3 = Code::OffHeapInstructionStart((Code *)&local_48);
  }
  else {
    lVar3 = lVar2 + 0x3f;
  }
  local_50 = local_48;
  (**(code **)(*(long *)param_1 + 0x18))(param_1,6,0,&local_50);
  if ((int)local_50 != (int)local_48) {
    local_48 = local_50;
    if (*(int *)(local_50 + 0x17) < 0) {
      lVar4 = Code::OffHeapInstructionStart((Code *)&local_48);
    }
    else {
      lVar4 = local_50 + 0x3f;
    }
    *plVar5 = lVar4 + (lVar6 - lVar3 & 0xffffffffU);
  }
  uVar1 = *(uint *)(lVar2 + 0x17) >> 1 & 0x1f;
  if ((0xb < uVar1) || ((1 << (ulong)uVar1 & 0x920U) == 0)) {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,6,0,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  }
  return;
}

