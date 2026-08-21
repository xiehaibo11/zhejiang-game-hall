
/* v8::internal::V8HeapExplorer::ExtractScriptReferences(v8::internal::HeapEntry*,
   v8::internal::Script) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractScriptReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000;
  SetInternalReference(this,param_1,"source",uVar1 | *(uint *)(param_3 + 3),4);
  SetInternalReference(this,param_1,"name",uVar1 | *(uint *)(param_3 + 7),8);
  SetInternalReference(this,param_1,"context_data",uVar1 | *(uint *)(param_3 + 0x13),0x14);
  TagObject(this,uVar1 | *(uint *)(param_3 + 0x1b),"(script line ends)");
  SetInternalReference(this,param_1,"line_ends",uVar1 | *(uint *)(param_3 + 0x1b),0x1c);
  return;
}

