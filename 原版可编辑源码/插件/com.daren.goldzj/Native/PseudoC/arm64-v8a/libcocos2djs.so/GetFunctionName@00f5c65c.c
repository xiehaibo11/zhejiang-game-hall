
/* v8::internal::WasmStackFrame::GetFunctionName() */

long __thiscall v8::internal::WasmStackFrame::GetFunctionName(WasmStackFrame *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  
  pIVar1 = *(Isolate **)(this + 8);
  uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
  }
  lVar3 = WasmModuleObject::GetFunctionNameOrNull
                    (*(undefined8 *)(this + 8),puVar2,*(undefined4 *)(this + 0x18));
  if (lVar3 == 0) {
    lVar3 = *(long *)(this + 8) + 0xb0;
  }
  return lVar3;
}

