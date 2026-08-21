
/* v8::internal::V8HeapExplorer::ExtractCodeReferences(v8::internal::HeapEntry*, v8::internal::Code)
    */

void __thiscall
v8::internal::V8HeapExplorer::ExtractCodeReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  TagObject(this,uVar1 | *(uint *)(param_3 + 3),"(code relocation info)");
  SetInternalReference(this,param_1,"relocation_info",uVar1 | *(uint *)(param_3 + 3),4);
  TagObject(this,uVar1 | *(uint *)(param_3 + 7),"(code deopt data)");
  SetInternalReference(this,param_1,"deoptimization_data",uVar1 | *(uint *)(param_3 + 7),8);
  TagObject(this,uVar1 | *(uint *)(param_3 + 0xb),"(source position table)");
  SetInternalReference(this,param_1,"source_position_table",uVar1 | *(uint *)(param_3 + 0xb),0xc);
  return;
}

