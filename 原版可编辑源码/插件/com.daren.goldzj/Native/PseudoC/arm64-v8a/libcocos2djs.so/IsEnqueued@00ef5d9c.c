
/* v8::internal::CompilerDispatcher::IsEnqueued(unsigned long) const */

bool __thiscall v8::internal::CompilerDispatcher::IsEnqueued(CompilerDispatcher *this,ulong param_1)

{
  CompilerDispatcher *pCVar1;
  CompilerDispatcher *pCVar2;
  CompilerDispatcher *pCVar3;
  
  pCVar1 = this + 0x60;
  pCVar3 = *(CompilerDispatcher **)pCVar1;
  pCVar2 = pCVar1;
  if (pCVar3 != (CompilerDispatcher *)0x0) {
    do {
      if (*(ulong *)(pCVar3 + 0x20) >= param_1) {
        pCVar2 = pCVar3;
      }
      pCVar3 = *(CompilerDispatcher **)(pCVar3 + (ulong)(*(ulong *)(pCVar3 + 0x20) < param_1) * 8);
    } while (pCVar3 != (CompilerDispatcher *)0x0);
    if ((pCVar2 != pCVar1) && (*(ulong *)(pCVar2 + 0x20) <= param_1)) goto LAB_00ef5dd8;
  }
  pCVar2 = pCVar1;
LAB_00ef5dd8:
  return pCVar2 != pCVar1;
}

