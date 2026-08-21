
/* v8::internal::AsmJsWasmStackFrame::GetLineNumber() */

int __thiscall v8::internal::AsmJsWasmStackFrame::GetLineNumber(AsmJsWasmStackFrame *this)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  
  pIVar1 = *(Isolate **)(this + 8);
  uVar5 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(this + 0x10) + 0x6f)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar5);
  }
  uVar2 = (**(code **)(*(long *)this + 0x60))(this);
  iVar3 = Script::GetLineNumber(puVar4,uVar2);
  return iVar3 + 1;
}

