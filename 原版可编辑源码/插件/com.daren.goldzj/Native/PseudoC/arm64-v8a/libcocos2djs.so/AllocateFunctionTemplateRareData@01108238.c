
/* v8::internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>) */

ulong v8::internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                (Factory *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Factory::NewStruct(param_1,0x5e,1);
  uVar4 = *param_2;
  uVar3 = *puVar1;
  *(int *)(uVar4 + 0x23) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x23,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x23,uVar3);
    }
  }
  return *puVar1;
}

