
/* v8::internal::V8HeapExplorer::ExtractArrayBoilerplateDescriptionReferences(v8::internal::HeapEntry*,
   v8::internal::ArrayBoilerplateDescription) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractArrayBoilerplateDescriptionReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"constant_elements",
             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 7),8);
  return;
}

