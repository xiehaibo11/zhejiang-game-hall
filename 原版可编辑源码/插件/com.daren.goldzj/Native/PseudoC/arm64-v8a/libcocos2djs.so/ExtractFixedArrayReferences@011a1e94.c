
/* v8::internal::V8HeapExplorer::ExtractFixedArrayReferences(v8::internal::HeapEntry*,
   v8::internal::FixedArray) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractFixedArrayReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_3 + 3);
  if (1 < (int)uVar1) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      SetInternalReference
                (this,param_1,uVar2 & 0xffffffff,
                 param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 7 + (long)iVar3),
                 iVar3 + 8);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < uVar1 >> 1);
  }
  return;
}

