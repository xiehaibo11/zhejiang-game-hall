
/* v8::internal::Scope::ResolveVariablesRecursively(v8::internal::ParseInfo*) */

undefined8 __thiscall
v8::internal::Scope::ResolveVariablesRecursively(Scope *this,ParseInfo *param_1)

{
  Variable *pVVar1;
  ParseInfo *extraout_x1;
  Scope *pSVar2;
  VariableProxy *pVVar3;
  VariableProxy *pVVar4;
  VariableProxy *pVVar5;
  
  if ((((byte)this[0x82] & 1) == 0) || (-1 < (char)this[0x83])) {
    pVVar4 = (VariableProxy *)(this + 0x48);
    pVVar3 = *(VariableProxy **)pVVar4;
    if ((pVVar3 != (VariableProxy *)0x0) && (((byte)pVVar3[5] >> 1 & 1) != 0)) {
      do {
        pVVar4 = pVVar3;
        pVVar3 = *(VariableProxy **)(pVVar4 + 0x10);
        if (pVVar3 == (VariableProxy *)0x0) break;
      } while (((byte)pVVar3[5] >> 1 & 1) != 0);
      pVVar4 = pVVar4 + 0x10;
    }
    pVVar5 = *(VariableProxy **)(this + 0x50);
    while (pVVar4 != pVVar5) {
      pVVar1 = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                         (pVVar3,this,(Scope *)0x0,(Scope *)0x0,false);
      ResolveTo(this,extraout_x1,pVVar3,pVVar1);
      pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 0x10);
      pVVar3 = *(VariableProxy **)pVVar4;
      if ((pVVar3 != (VariableProxy *)0x0) && (((byte)pVVar3[5] >> 1 & 1) != 0)) {
        do {
          pVVar4 = pVVar3;
          pVVar3 = *(VariableProxy **)(pVVar4 + 0x10);
          if (pVVar3 == (VariableProxy *)0x0) break;
        } while (((byte)pVVar3[5] >> 1 & 1) != 0);
        pVVar4 = pVVar4 + 0x10;
      }
    }
    for (pSVar2 = *(Scope **)(this + 0x10); pSVar2 != (Scope *)0x0;
        pSVar2 = *(Scope **)(pSVar2 + 0x18)) {
      ResolveVariablesRecursively(pSVar2,param_1);
    }
  }
  else {
    pSVar2 = (Scope *)ParseInfo::scope(param_1);
    if (pSVar2[0x80] != (Scope)0x4) {
      pSVar2 = *(Scope **)(pSVar2 + 8);
    }
    pVVar4 = (VariableProxy *)(this + 0x48);
    pVVar3 = *(VariableProxy **)pVVar4;
    if ((pVVar3 != (VariableProxy *)0x0) && (((byte)pVVar3[5] >> 1 & 1) != 0)) {
      do {
        pVVar4 = pVVar3;
        pVVar3 = *(VariableProxy **)(pVVar4 + 0x10);
        if (pVVar3 == (VariableProxy *)0x0) break;
      } while (((byte)pVVar3[5] >> 1 & 1) != 0);
      pVVar4 = pVVar4 + 0x10;
    }
    pVVar5 = *(VariableProxy **)(this + 0x50);
    while (pVVar4 != pVVar5) {
      ResolvePreparsedVariable(pVVar3,*(Scope **)(this + 8),pSVar2);
      pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 0x10);
      pVVar3 = *(VariableProxy **)pVVar4;
      if ((pVVar3 != (VariableProxy *)0x0) && (((byte)pVVar3[5] >> 1 & 1) != 0)) {
        do {
          pVVar4 = pVVar3;
          pVVar3 = *(VariableProxy **)(pVVar4 + 0x10);
          if (pVVar3 == (VariableProxy *)0x0) break;
        } while (((byte)pVVar3[5] >> 1 & 1) != 0);
        pVVar4 = pVVar4 + 0x10;
      }
    }
  }
  return 1;
}

