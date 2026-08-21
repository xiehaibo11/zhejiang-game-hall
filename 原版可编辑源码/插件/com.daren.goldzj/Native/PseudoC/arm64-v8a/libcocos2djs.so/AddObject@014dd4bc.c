
/* v8::internal::BuiltinsConstantsTableBuilder::AddObject(v8::internal::Handle<v8::internal::Object>)
    */

undefined4 __thiscall
v8::internal::BuiltinsConstantsTableBuilder::AddObject
          (BuiltinsConstantsTableBuilder *this,ulong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)IdentityMapBase::FindEntry((IdentityMapBase *)(this + 8),*param_2);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(this + 0x24);
    puVar1 = (undefined4 *)IdentityMapBase::GetEntry((IdentityMapBase *)(this + 8),*param_2);
    *puVar1 = uVar2;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}

