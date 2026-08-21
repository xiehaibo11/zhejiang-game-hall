
/* v8::internal::V8HeapExplorer::ExtractPropertyCellReferences(v8::internal::HeapEntry*,
   v8::internal::PropertyCell) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractPropertyCellReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  SetInternalReference(this,param_1,"value",uVar1 | *(uint *)(param_3 + 0xb),0xc);
  TagObject(this,uVar1 | *(uint *)(param_3 + 0xf),"(dependent code)");
  SetInternalReference(this,param_1,"dependent_code",uVar1 | *(uint *)(param_3 + 0xf),0x10);
  return;
}

