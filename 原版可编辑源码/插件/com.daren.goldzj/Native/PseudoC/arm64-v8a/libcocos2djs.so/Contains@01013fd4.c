
/* v8::internal::CodeObjectRegistry::Contains(unsigned long) const */

bool __thiscall v8::internal::CodeObjectRegistry::Contains(CodeObjectRegistry *this,ulong param_1)

{
  long lVar1;
  CodeObjectRegistry *pCVar2;
  ulong *puVar3;
  ulong *puVar4;
  CodeObjectRegistry *pCVar5;
  CodeObjectRegistry *pCVar6;
  ulong uVar7;
  ulong uVar8;
  
  pCVar2 = this + 0x20;
  pCVar5 = *(CodeObjectRegistry **)pCVar2;
  pCVar6 = pCVar2;
  if (pCVar5 != (CodeObjectRegistry *)0x0) {
    do {
      if (*(ulong *)(pCVar5 + 0x20) >= param_1) {
        pCVar6 = pCVar5;
      }
      pCVar5 = *(CodeObjectRegistry **)(pCVar5 + (ulong)(*(ulong *)(pCVar5 + 0x20) < param_1) * 8);
    } while (pCVar5 != (CodeObjectRegistry *)0x0);
    if ((pCVar6 != pCVar2) && (*(ulong *)(pCVar6 + 0x20) <= param_1)) {
      return true;
    }
  }
  puVar4 = *(ulong **)this;
  lVar1 = (long)*(ulong **)(this + 8) - (long)puVar4;
  if (lVar1 != 0) {
    uVar7 = lVar1 >> 3;
    puVar3 = puVar4;
    do {
      uVar8 = uVar7 >> 1;
      puVar4 = puVar3 + uVar8 + 1;
      uVar7 = uVar7 + ~uVar8;
      if (param_1 <= puVar3[uVar8]) {
        puVar4 = puVar3;
        uVar7 = uVar8;
      }
      puVar3 = puVar4;
    } while (uVar7 != 0);
  }
  if (puVar4 != *(ulong **)(this + 8)) {
    return *puVar4 <= param_1;
  }
  return false;
}

