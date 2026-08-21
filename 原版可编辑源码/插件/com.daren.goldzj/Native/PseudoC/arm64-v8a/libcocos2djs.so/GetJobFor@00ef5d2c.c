
/* v8::internal::CompilerDispatcher::GetJobFor(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
   const */

CompilerDispatcher * __thiscall
v8::internal::CompilerDispatcher::GetJobFor(CompilerDispatcher *this,ulong *param_2)

{
  ulong *puVar1;
  CompilerDispatcher *pCVar2;
  ulong uVar3;
  CompilerDispatcher *pCVar4;
  
  puVar1 = (ulong *)IdentityMapBase::FindEntry((IdentityMapBase *)(this + 0x70),*param_2);
  this = this + 0x60;
  if ((puVar1 != (ulong *)0x0) &&
     (pCVar4 = *(CompilerDispatcher **)this, pCVar4 != (CompilerDispatcher *)0x0)) {
    uVar3 = *puVar1;
    pCVar2 = this;
    do {
      if (*(ulong *)(pCVar4 + 0x20) >= uVar3) {
        pCVar2 = pCVar4;
      }
      pCVar4 = *(CompilerDispatcher **)(pCVar4 + (ulong)(*(ulong *)(pCVar4 + 0x20) < uVar3) * 8);
    } while (pCVar4 != (CompilerDispatcher *)0x0);
    if ((pCVar2 != this) && (*(ulong *)(pCVar2 + 0x20) <= uVar3)) {
      return pCVar2;
    }
  }
  return this;
}

