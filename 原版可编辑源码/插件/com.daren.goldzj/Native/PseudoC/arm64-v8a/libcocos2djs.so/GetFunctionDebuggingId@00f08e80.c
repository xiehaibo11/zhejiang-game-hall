
/* v8::internal::Debug::GetFunctionDebuggingId(v8::internal::Handle<v8::internal::JSFunction>) */

ulong __thiscall v8::internal::Debug::GetFunctionDebuggingId(Debug *this,ulong *param_2)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  
  pIVar2 = *(Isolate **)(this + 0x88);
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
  }
  plVar4 = (long *)GetOrCreateDebugInfo(this,puVar3);
  uVar5 = *(uint *)(*plVar4 + 7) >> 5 & 0xfffff;
  uVar6 = (ulong)uVar5;
  if (uVar5 == 0) {
    iVar1 = *(int *)(*(long *)(this + 0x88) + 0xfe0) >> 1;
    uVar5 = 1;
    if (iVar1 != 0xfffff) {
      uVar5 = iVar1 + 1;
    }
    uVar6 = (ulong)uVar5;
    *(ulong *)(*(long *)(this + 0x88) + 0xfe0) =
         -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar6 << 1;
    *(uint *)(*plVar4 + 7) = *(uint *)(*plVar4 + 7) & 0xfe00001e | uVar5 << 5;
  }
  return uVar6;
}

