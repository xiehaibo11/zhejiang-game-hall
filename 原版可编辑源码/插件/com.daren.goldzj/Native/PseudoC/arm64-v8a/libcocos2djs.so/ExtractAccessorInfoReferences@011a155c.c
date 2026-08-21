
/* v8::internal::V8HeapExplorer::ExtractAccessorInfoReferences(v8::internal::HeapEntry*,
   v8::internal::AccessorInfo) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractAccessorInfoReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  SetInternalReference(this,param_1,"name",uVar1 | *(uint *)(param_3 + 3),4);
  SetInternalReference(this,param_1,"expected_receiver_type",uVar1 | *(uint *)(param_3 + 0xb),0xc);
  SetInternalReference(this,param_1,"getter",uVar1 | *(uint *)(param_3 + 0x13),0x14);
  SetInternalReference(this,param_1,"setter",uVar1 | *(uint *)(param_3 + 0xf),0x10);
  SetInternalReference(this,param_1,"data",uVar1 | *(uint *)(param_3 + 0x1b),0x1c);
  return;
}

