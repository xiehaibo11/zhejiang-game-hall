
/* v8::internal::VariableMap::Lookup(v8::internal::AstRawString const*) */

long __thiscall v8::internal::VariableMap::Lookup(VariableMap *this,AstRawString *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  AstRawString *pAVar4;
  
  uVar3 = (ulong)(*(int *)(this + 8) - 1U & *(uint *)(param_1 + 0x18) >> 3);
  plVar2 = (long *)(*(long *)this + uVar3 * 0x18);
  pAVar4 = (AstRawString *)*plVar2;
  while( true ) {
    if (pAVar4 == (AstRawString *)0x0) {
      return 0;
    }
    if (pAVar4 == param_1) break;
    uVar3 = (ulong)((int)uVar3 + 1U & *(int *)(this + 8) - 1U);
    plVar2 = (long *)(*(long *)this + uVar3 * 0x18);
    pAVar4 = (AstRawString *)*plVar2;
  }
  lVar1 = 0;
  if ((param_1 != (AstRawString *)0x0) && (plVar2 != (long *)0x0)) {
    lVar1 = plVar2[1];
  }
  return lVar1;
}

