
/* v8::internal::V8HeapExplorer::ExtractLocation(v8::internal::HeapEntry*, v8::internal::HeapObject)
    */

void __thiscall
v8::internal::V8HeapExplorer::ExtractLocation(V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar1 + *(uint *)(param_3 - 1)) != 0x439) {
    if (*(ushort *)(uVar1 + *(uint *)(param_3 - 1)) - 0x417 < 3) {
      param_3 = param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb);
    }
    else if ((*(ushort *)(uVar1 + *(uint *)(param_3 - 1)) < 0xaa) ||
            (param_3 = GetConstructor(param_3), (int)param_3 == 0)) {
      return;
    }
  }
  ExtractLocationForJSFunction(this,param_1,param_3);
  return;
}

