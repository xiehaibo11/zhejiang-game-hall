
/* v8::internal::V8HeapExplorer::ExtractDescriptorArrayReferences(v8::internal::HeapEntry*,
   v8::internal::DescriptorArray) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractDescriptorArrayReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  SetInternalReference
            (this,param_1,"enum_cache",
             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb),0xc);
  uVar4 = param_3 + 0xf + (long)*(short *)(param_3 + 3) * 0xc;
  if (param_3 + 0xf < uVar4) {
    iVar3 = 0;
    lVar5 = 0xf;
    do {
      uVar1 = *(uint *)(param_3 + lVar5);
      uVar2 = (ulong)uVar1 & 3;
      if ((uVar1 == 3) || (uVar2 != 3)) {
        if (uVar2 == 1) {
          SetInternalReference(this,param_1,iVar3);
        }
      }
      else {
        SetWeakReference(this,param_1,iVar3,
                         param_3 + lVar5 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd,
                         lVar5 + 1);
      }
      lVar5 = lVar5 + 4;
      iVar3 = iVar3 + 1;
    } while (param_3 + lVar5 < uVar4);
  }
  return;
}

