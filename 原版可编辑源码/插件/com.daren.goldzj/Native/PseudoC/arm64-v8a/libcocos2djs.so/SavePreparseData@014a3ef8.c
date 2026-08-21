
/* v8::internal::Scope::SavePreparseData(v8::internal::Parser*) */

void __thiscall v8::internal::Scope::SavePreparseData(Scope *this,Parser *param_1)

{
  Scope *pSVar1;
  DeclarationScope *pDVar2;
  
  pSVar1 = this;
  do {
    do {
      pDVar2 = (DeclarationScope *)pSVar1;
      if (((pDVar2[0x80] == (DeclarationScope)0x2) && (1 < (byte)pDVar2[0x85] - 9)) &&
         (*(PreparseDataBuilder **)(pDVar2 + 0xd0) != (PreparseDataBuilder *)0x0)) {
        PreparseDataBuilder::SaveScopeAllocationData
                  (*(PreparseDataBuilder **)(pDVar2 + 0xd0),pDVar2,param_1);
      }
      pSVar1 = (Scope *)*(DeclarationScope **)(pDVar2 + 0x10);
    } while (*(DeclarationScope **)(pDVar2 + 0x10) != (DeclarationScope *)0x0);
    while( true ) {
      if (*(DeclarationScope **)(pDVar2 + 0x18) != (DeclarationScope *)0x0) break;
      if (pDVar2 == (DeclarationScope *)this) {
        return;
      }
      pDVar2 = *(DeclarationScope **)(pDVar2 + 8);
    }
    pSVar1 = (Scope *)*(DeclarationScope **)(pDVar2 + 0x18);
    if (pDVar2 == (DeclarationScope *)this) {
      return;
    }
  } while( true );
}

