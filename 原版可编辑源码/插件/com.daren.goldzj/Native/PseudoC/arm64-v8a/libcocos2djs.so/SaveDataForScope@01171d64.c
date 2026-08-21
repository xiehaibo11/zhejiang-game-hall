
/* v8::internal::PreparseDataBuilder::SaveDataForScope(v8::internal::Scope*) */

void __thiscall
v8::internal::PreparseDataBuilder::SaveDataForScope(PreparseDataBuilder *this,Scope *param_1)

{
  Scope SVar1;
  ushort uVar2;
  long lVar3;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  Scope *pSVar10;
  Scope *pSVar11;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  uVar2 = *(ushort *)(param_1 + 0x81);
  if ((uVar2 >> 8 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    lVar3 = Scope::AsDeclarationScope();
    uVar2 = *(ushort *)(param_1 + 0x81);
    bVar6 = *(byte *)(lVar3 + 0x81) >> 2 & 1;
  }
  SVar1 = param_1[0x80];
  bVar6 = (byte)(uVar2 >> 5) & 2 | bVar6;
  if (SVar1 == (Scope)0x2) {
    lVar3 = Scope::AsDeclarationScope();
    SVar1 = param_1[0x80];
    bVar6 = bVar6 | (byte)((ushort)*(undefined2 *)(lVar3 + 0x83) >> 0xb) & 4;
  }
  if ((SVar1 == (Scope)0x0) &&
     (((lVar3 = Scope::AsClassScope(), *(char *)(lVar3 + 0x9b) != '\0' ||
       (*(char *)(lVar3 + 0x99) != '\0')) ||
      ((*(char *)(lVar3 + 0x98) != '\0' && ((*(byte *)(lVar3 + 0x81) >> 6 & 1) != 0)))))) {
    bVar9 = 8;
  }
  else {
    bVar9 = 0;
  }
  pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8);
  iVar7 = *(int *)(this + 0x10);
  lVar3 = (long)iVar7;
  if (*(long *)(pvVar4 + 8) - *(long *)pvVar4 == lVar3) {
    local_5c[0] = 0;
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
              (pvVar4,*(long *)(pvVar4 + 8),1,local_5c);
    iVar7 = *(int *)(this + 0x10);
    pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8);
    lVar3 = (long)iVar7;
  }
  *(int *)(this + 0x10) = iVar7 + 1;
  *(byte *)(*(long *)pvVar4 + lVar3) = bVar6 | bVar9;
  this[0x18] = (PreparseDataBuilder)0x0;
  if (param_1[0x80] == (Scope)0x2) {
    lVar3 = Scope::AsDeclarationScope();
    if (*(long *)(lVar3 + 0xb8) != 0) {
      pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8);
      uVar2 = *(ushort *)(*(long *)(lVar3 + 0xb8) + 0x28);
      if (*(long *)(pvVar4 + 8) - *(long *)pvVar4 == (long)*(int *)(this + 0x10)) {
        local_58[0] = 0;
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
                  (pvVar4,*(long *)(pvVar4 + 8),1,local_58);
      }
      if ((byte)this[0x18] == 0) {
        iVar7 = *(int *)(this + 0x10);
        *(int *)(this + 0x10) = iVar7 + 1;
        *(undefined1 *)(**(long **)(this + 8) + (long)iVar7) = 0;
        uVar8 = 3;
      }
      else {
        uVar8 = (byte)this[0x18] - 1;
      }
      this[0x18] = SUB41(uVar8,0);
      *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) =
           *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) |
           (byte)((uVar2 >> 9 & 2 | uVar2 >> 0xe & 1) << (ulong)((uVar8 & 0xf) << 1));
    }
  }
  pSVar11 = *(Scope **)(param_1 + 0x40);
  pSVar10 = param_1 + 0x38;
  while (pSVar10 != pSVar11) {
    lVar3 = *(long *)pSVar10;
    uVar2 = *(ushort *)(lVar3 + 0x28);
    if (((uVar2 & 0xf) < 0xb) && ((1 << (ulong)(uVar2 & 0xf) & 0x787U) != 0)) {
      pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8);
      if (*(long *)(pvVar4 + 8) - *(long *)pvVar4 == (long)*(int *)(this + 0x10)) {
        local_54[0] = 0;
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
                  (pvVar4,*(long *)(pvVar4 + 8),1,local_54);
      }
      if ((byte)this[0x18] == 0) {
        iVar7 = *(int *)(this + 0x10);
        *(int *)(this + 0x10) = iVar7 + 1;
        *(undefined1 *)(**(long **)(this + 8) + (long)iVar7) = 0;
        uVar8 = 3;
      }
      else {
        uVar8 = (byte)this[0x18] - 1;
      }
      this[0x18] = SUB41(uVar8,0);
      *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) =
           *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) |
           (byte)((uVar2 >> 9 & 2 | uVar2 >> 0xe & 1) << (ulong)((uVar8 & 0xf) << 1));
      lVar3 = *(long *)pSVar10;
    }
    pSVar10 = (Scope *)(lVar3 + 0x18);
  }
  for (pSVar10 = *(Scope **)(param_1 + 0x10); pSVar10 != (Scope *)0x0;
      pSVar10 = *(Scope **)(pSVar10 + 0x18)) {
    uVar5 = Scope::IsSkippableFunctionScope(pSVar10);
    if (((uVar5 & 1) == 0) && (uVar5 = ScopeNeedsData(pSVar10), (uVar5 & 1) != 0)) {
      SaveDataForScope(this,pSVar10);
    }
  }
  return;
}

