
/* v8::internal::BuiltinsConstantsTableBuilder::PatchSelfReference(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Code>) */

void __thiscall
v8::internal::BuiltinsConstantsTableBuilder::PatchSelfReference
          (BuiltinsConstantsTableBuilder *this,ulong *param_2,ulong *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *local_18;
  
  local_18 = (void *)0x0;
  uVar2 = IdentityMapBase::DeleteEntry((IdentityMapBase *)(this + 8),*param_2,&local_18);
  if ((uVar2 & 1) != 0) {
    uVar1 = local_18._0_4_;
    puVar3 = (undefined4 *)IdentityMapBase::GetEntry((IdentityMapBase *)(this + 8),*param_3);
    *puVar3 = uVar1;
  }
  return;
}

