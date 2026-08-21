
/* v8::internal::compiler::PretenureModeDependency::IsValid() const */

bool __thiscall
v8::internal::compiler::PretenureModeDependency::IsValid(PretenureModeDependency *this)

{
  PretenureModeDependency PVar1;
  PretenureModeDependency PVar2;
  undefined8 *puVar3;
  undefined8 local_8;
  
  PVar1 = this[0x18];
  puVar3 = (undefined8 *)AllocationSiteRef::object((AllocationSiteRef *)(this + 8));
  local_8 = *puVar3;
  PVar2 = (PretenureModeDependency)AllocationSite::GetAllocationType((AllocationSite *)&local_8);
  return PVar1 == PVar2;
}

