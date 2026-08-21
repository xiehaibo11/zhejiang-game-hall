
/* v8::internal::SharedFunctionInfo::BreakAtEntry() const */

uint __thiscall v8::internal::SharedFunctionInfo::BreakAtEntry(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  local_18 = uVar2 | *(uint *)(*(ulong *)this + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
    uVar1 = DebugInfo::BreakAtEntry((DebugInfo *)&local_18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

