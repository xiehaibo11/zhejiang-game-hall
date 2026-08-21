
/* v8::internal::CodeObjectRegistry::GetCodeObjectStartFromInnerAddress(unsigned long) const */

ulong __thiscall
v8::internal::CodeObjectRegistry::GetCodeObjectStartFromInnerAddress
          (CodeObjectRegistry *this,ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  CodeObjectRegistry *pCVar5;
  CodeObjectRegistry *pCVar6;
  ulong uVar7;
  ulong uVar8;
  CodeObjectRegistry *pCVar9;
  ulong uVar10;
  
  puVar1 = *(ulong **)this;
  if ((puVar1 == *(ulong **)(this + 8)) ||
     (lVar2 = (long)*(ulong **)(this + 8) - (long)puVar1, lVar2 == 0)) {
LAB_010140c4:
    uVar8 = 0;
    uVar7 = 0;
    if (*(long *)(this + 0x28) == 0) goto LAB_01014138;
  }
  else {
    uVar8 = lVar2 >> 3;
    puVar4 = puVar1;
    do {
      uVar10 = uVar8 >> 1;
      uVar7 = uVar8 + ~uVar10;
      uVar8 = uVar10;
      if (puVar4[uVar10] <= param_1) {
        puVar4 = puVar4 + uVar10 + 1;
        uVar8 = uVar7;
      }
    } while (uVar8 != 0);
    if (puVar4 == puVar1) goto LAB_010140c4;
    uVar8 = puVar4[-1];
    if (*(long *)(this + 0x28) == 0) {
      uVar7 = 0;
      goto LAB_01014138;
    }
  }
  pCVar5 = this + 0x20;
  for (pCVar9 = *(CodeObjectRegistry **)(this + 0x20); pCVar9 != (CodeObjectRegistry *)0x0;
      pCVar9 = *(CodeObjectRegistry **)(pCVar9 + (ulong)(*(ulong *)(pCVar9 + 0x20) <= param_1) * 8))
  {
    pCVar6 = pCVar9;
    if (*(ulong *)(pCVar9 + 0x20) <= param_1) {
      pCVar6 = pCVar5;
    }
    pCVar5 = pCVar6;
  }
  if (pCVar5 == *(CodeObjectRegistry **)(this + 0x18)) {
    uVar7 = 0;
  }
  else {
    pCVar9 = *(CodeObjectRegistry **)pCVar5;
    if (*(CodeObjectRegistry **)pCVar5 == (CodeObjectRegistry *)0x0) {
      do {
        pCVar6 = *(CodeObjectRegistry **)(pCVar5 + 0x10);
        bVar3 = *(CodeObjectRegistry **)pCVar6 == pCVar5;
        pCVar5 = pCVar6;
      } while (bVar3);
    }
    else {
      do {
        pCVar6 = pCVar9;
        pCVar9 = *(CodeObjectRegistry **)(pCVar6 + 8);
      } while (*(CodeObjectRegistry **)(pCVar6 + 8) != (CodeObjectRegistry *)0x0);
    }
    uVar7 = *(ulong *)(pCVar6 + 0x20);
  }
LAB_01014138:
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  return uVar8;
}

