
/* v8::internal::V8HeapExplorer::ExtractStringReferences(v8::internal::HeapEntry*,
   v8::internal::String) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractStringReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_3 & 0xffffffff00000000;
  uVar4 = uVar5 | 7;
  if ((*(ushort *)(uVar4 + *(uint *)(param_3 - 1)) < 0x40) &&
     ((*(ushort *)(uVar4 + *(uint *)(param_3 - 1)) & 7) == 1)) {
    SetInternalReference(this,param_1,"first",uVar5 | *(uint *)(param_3 + 0xb),0xc);
    uVar1 = *(uint *)(param_3 + 0xf);
    pcVar2 = "second";
    uVar3 = 0x10;
  }
  else {
    if ((*(ushort *)(uVar4 + *(uint *)(param_3 - 1)) < 0x40) &&
       ((*(ushort *)(uVar4 + *(uint *)(param_3 - 1)) & 7) == 3)) {
      uVar1 = *(uint *)(param_3 + 0xb);
      pcVar2 = "parent";
    }
    else {
      if ((0x3f < *(ushort *)(uVar4 + *(uint *)(param_3 - 1))) ||
         ((*(ushort *)(uVar4 + *(uint *)(param_3 - 1)) & 7) != 5)) {
        return;
      }
      uVar1 = *(uint *)(param_3 + 0xb);
      pcVar2 = "actual";
    }
    uVar3 = 0xc;
  }
  SetInternalReference(this,param_1,pcVar2,uVar5 | uVar1,uVar3);
  return;
}

