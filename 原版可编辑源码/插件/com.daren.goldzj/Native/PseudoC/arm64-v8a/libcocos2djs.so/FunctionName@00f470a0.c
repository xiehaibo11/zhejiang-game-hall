
/* v8::internal::FrameSummary::FunctionName() const */

void __thiscall v8::internal::FrameSummary::FunctionName(FrameSummary *this)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  FrameSummary *pFVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 != 2) && (iVar1 != 1)) {
    if (iVar1 == 0) {
      JSFunction::GetDebugName(*(undefined8 *)(this + 0x18));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pIVar2 = *(Isolate **)this;
  uVar5 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  if (*(int *)(this + 8) == 1) {
    pFVar4 = (FrameSummary *)(*(long *)(this + 0x20) + 0x38);
  }
  else {
    pFVar4 = this + 0x1c;
  }
  WasmModuleObject::GetFunctionName(*(undefined8 *)this,puVar3,*(undefined4 *)pFVar4);
  return;
}

