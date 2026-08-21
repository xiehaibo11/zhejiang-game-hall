
/* v8::internal::DeclarationScope::SavePreparseDataForDeclarationScope(v8::internal::Parser*) */

void __thiscall
v8::internal::DeclarationScope::SavePreparseDataForDeclarationScope
          (DeclarationScope *this,Parser *param_1)

{
  if (*(PreparseDataBuilder **)(this + 0xd0) != (PreparseDataBuilder *)0x0) {
    PreparseDataBuilder::SaveScopeAllocationData
              (*(PreparseDataBuilder **)(this + 0xd0),this,param_1);
    return;
  }
  return;
}

