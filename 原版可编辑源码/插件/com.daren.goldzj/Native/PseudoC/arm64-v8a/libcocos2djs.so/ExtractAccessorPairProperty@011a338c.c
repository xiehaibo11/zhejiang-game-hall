
/* v8::internal::V8HeapExplorer::ExtractAccessorPairProperty(v8::internal::HeapEntry*,
   v8::internal::Name, v8::internal::Object, int) */

void v8::internal::V8HeapExplorer::ExtractAccessorPairProperty
               (V8HeapExplorer *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_4 & 1) != 0) {
    uVar3 = param_4 & 0xffffffff00000000;
    uVar2 = uVar3 | 7;
    if (*(short *)(uVar2 + *(uint *)(param_4 - 1)) == 0x52) {
      SetPropertyReference();
      uVar1 = uVar3 | *(uint *)(param_4 + 3);
      if (((*(uint *)(param_4 + 3) & 1) == 0) || (*(short *)(uVar2 + *(uint *)(uVar1 - 1)) != 0x43))
      {
        SetPropertyReference(param_1,param_2,param_3,uVar1,"get %s",0xffffffff);
      }
      uVar3 = uVar3 | *(uint *)(param_4 + 7);
      if (((*(uint *)(param_4 + 7) & 1) == 0) || (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x43))
      {
        SetPropertyReference(param_1,param_2,param_3,uVar3,"set %s",0xffffffff);
        return;
      }
    }
  }
  return;
}

