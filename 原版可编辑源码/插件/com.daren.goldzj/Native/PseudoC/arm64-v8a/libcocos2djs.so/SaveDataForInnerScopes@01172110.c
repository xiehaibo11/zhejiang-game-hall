
/* v8::internal::PreparseDataBuilder::SaveDataForInnerScopes(v8::internal::Scope*) */

void __thiscall
v8::internal::PreparseDataBuilder::SaveDataForInnerScopes(PreparseDataBuilder *this,Scope *param_1)

{
  ulong uVar1;
  Scope *this_00;
  
  for (this_00 = *(Scope **)(param_1 + 0x10); this_00 != (Scope *)0x0;
      this_00 = *(Scope **)(this_00 + 0x18)) {
    uVar1 = Scope::IsSkippableFunctionScope(this_00);
    if (((uVar1 & 1) == 0) && (uVar1 = ScopeNeedsData(this_00), (uVar1 & 1) != 0)) {
      SaveDataForScope(this,this_00);
    }
  }
  return;
}

