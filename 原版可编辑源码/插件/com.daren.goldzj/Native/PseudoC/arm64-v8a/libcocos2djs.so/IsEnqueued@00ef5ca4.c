
/* v8::internal::CompilerDispatcher::IsEnqueued(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
   const */

bool __thiscall
v8::internal::CompilerDispatcher::IsEnqueued(CompilerDispatcher *this,ulong *param_2)

{
  ulong *puVar1;
  CompilerDispatcher *pCVar2;
  ulong uVar3;
  CompilerDispatcher *pCVar4;
  
  if (*(long *)(this + 0x68) == 0) {
    return false;
  }
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
    if ((pCVar2 != this) && (*(ulong *)(pCVar2 + 0x20) <= uVar3)) goto LAB_00ef5d10;
  }
  pCVar2 = this;
LAB_00ef5d10:
  return pCVar2 != this;
}

