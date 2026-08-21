
/* v8::internal::DebugInfo::GetSideEffectState(v8::internal::Isolate*) */

uint __thiscall v8::internal::DebugInfo::GetSideEffectState(DebugInfo *this,Isolate *param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = *(ulong *)this;
  puVar4 = (uint *)(uVar3 + 7);
  if ((*(byte *)puVar4 & 6) == 0) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    iVar1 = DebugEvaluate::FunctionGetSideEffectState(param_1,puVar2);
    *(uint *)(*(long *)this + 7) = *(uint *)(*(long *)this + 7) & 0xfffffff8 | iVar1 << 1;
    puVar4 = (uint *)(*(long *)this + 7);
  }
  return *puVar4 >> 1 & 3;
}

