
/* v8::internal::compiler::CompilationDependencies::DependOnElementsKinds(v8::internal::compiler::AllocationSiteRef
   const&) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnElementsKinds
          (CompilationDependencies *this,AllocationSiteRef *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 local_40 [16];
  AllocationSiteRef local_30 [16];
  
  auVar3 = *(undefined1 (*) [16])param_1;
  while( true ) {
    local_30 = (AllocationSiteRef  [16])auVar3;
    DependOnElementsKind(this,local_30);
    auVar3 = AllocationSiteRef::nested_site(local_30);
    local_40 = auVar3;
    uVar2 = ObjectRef::IsAllocationSite((ObjectRef *)local_40);
    if ((uVar2 & 1) == 0) break;
    auVar3 = AllocationSiteRef::nested_site(local_30);
    local_40 = auVar3;
    auVar3 = ObjectRef::AsAllocationSite((ObjectRef *)local_40);
  }
  auVar3 = AllocationSiteRef::nested_site(local_30);
  local_40 = auVar3;
  iVar1 = ObjectRef::AsSmi((ObjectRef *)local_40);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","current.nested_site().AsSmi() == 0");
}

