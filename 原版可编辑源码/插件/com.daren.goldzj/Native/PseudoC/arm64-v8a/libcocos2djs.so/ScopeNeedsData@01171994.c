
/* v8::internal::PreparseDataBuilder::ScopeNeedsData(v8::internal::Scope*) */

bool v8::internal::PreparseDataBuilder::ScopeNeedsData(Scope *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  Scope *pSVar4;
  
  if (param_1[0x80] == (Scope)0x2) {
    lVar2 = Scope::AsDeclarationScope();
    bVar1 = (*(byte *)(lVar2 + 0x85) & 0xfe) != 4;
  }
  else {
    if (((byte)param_1[0x81] >> 4 & 1) == 0) {
      for (pSVar4 = param_1 + 0x38; pSVar4 != *(Scope **)(param_1 + 0x40);
          pSVar4 = (Scope *)(*(long *)pSVar4 + 0x18)) {
        if ((0x8707U >> (ulong)((*(ushort *)(*(long *)pSVar4 + 0x28) ^ 8) & 0xf) & 1) != 0) {
          return true;
        }
      }
    }
    for (pSVar4 = *(Scope **)(param_1 + 0x10); pSVar4 != (Scope *)0x0;
        pSVar4 = *(Scope **)(pSVar4 + 0x18)) {
      uVar3 = ScopeNeedsData(pSVar4);
      if ((uVar3 & 1) != 0) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

