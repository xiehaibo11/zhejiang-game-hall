
/* v8::internal::V8HeapExplorer::AddEntry(v8::internal::HeapObject, v8::internal::HeapEntry::Type,
   char const*) */

void __thiscall
v8::internal::V8HeapExplorer::AddEntry
          (V8HeapExplorer *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong local_38;
  
  local_38 = param_2;
  iVar1 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_38,
                     param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
  AddEntry(this,param_2 - 1,param_3,param_4,(long)iVar1);
  return;
}

