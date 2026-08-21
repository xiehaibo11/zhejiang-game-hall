
/* v8::internal::OptimizedFrame::ComputeParametersCount() const */

uint __thiscall v8::internal::OptimizedFrame::ComputeParametersCount(OptimizedFrame *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  if ((*(uint *)(*(long *)(lVar2 + 8) + 0x17) & 0x3e) == 6) {
    uVar1 = *(uint *)(*(long *)(this + 0x20) + -0x18);
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x98))(this);
    uVar1 = (uint)*(ushort *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) + 0x15);
  }
  return uVar1;
}

