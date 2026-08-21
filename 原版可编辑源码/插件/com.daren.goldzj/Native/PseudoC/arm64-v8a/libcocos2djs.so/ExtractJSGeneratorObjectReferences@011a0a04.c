
/* v8::internal::V8HeapExplorer::ExtractJSGeneratorObjectReferences(v8::internal::HeapEntry*,
   v8::internal::JSGeneratorObject) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSGeneratorObjectReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  SetInternalReference(this,param_1,"function",uVar1 | *(uint *)(param_3 + 0xb),0xc);
  SetInternalReference(this,param_1,"context",uVar1 | *(uint *)(param_3 + 0xf),0x10);
  SetInternalReference(this,param_1,"receiver",uVar1 | *(uint *)(param_3 + 0x13),0x14);
  SetInternalReference
            (this,param_1,"parameters_and_registers",uVar1 | *(uint *)(param_3 + 0x23),0x24);
  return;
}

