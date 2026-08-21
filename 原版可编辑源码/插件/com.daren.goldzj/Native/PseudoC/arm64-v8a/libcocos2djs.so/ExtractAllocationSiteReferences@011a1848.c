
/* v8::internal::V8HeapExplorer::ExtractAllocationSiteReferences(v8::internal::HeapEntry*,
   v8::internal::AllocationSite) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractAllocationSiteReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  SetInternalReference(this,param_1,"transition_info",uVar1 | *(uint *)(param_3 + 3),4);
  SetInternalReference(this,param_1,"nested_site",uVar1 | *(uint *)(param_3 + 7),8);
  TagObject(this,uVar1 | *(uint *)(param_3 + 0xb),"(dependent code)");
  SetInternalReference(this,param_1,"dependent_code",uVar1 | *(uint *)(param_3 + 0xb),0xc);
  return;
}

