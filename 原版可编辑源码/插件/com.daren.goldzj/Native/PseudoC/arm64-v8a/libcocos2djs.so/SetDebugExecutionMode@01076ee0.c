
/* v8::internal::DebugInfo::SetDebugExecutionMode(v8::internal::DebugInfo::ExecutionMode) */

void __thiscall v8::internal::DebugInfo::SetDebugExecutionMode(DebugInfo *this,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(*(long *)this + 0x1b) >> 1;
  uVar2 = uVar1 | 0x20;
  if (param_2 != 0x20) {
    uVar2 = uVar1 & 0x7fffffdf;
  }
  *(int *)(*(long *)this + 0x1b) = uVar2 << 1;
  return;
}

