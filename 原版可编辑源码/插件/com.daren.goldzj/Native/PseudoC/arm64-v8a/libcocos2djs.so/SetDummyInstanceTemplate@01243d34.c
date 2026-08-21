
/* v8::internal::SetDummyInstanceTemplate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::SetDummyInstanceTemplate(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)ObjectTemplate::New(param_1,0);
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*param_2 + 0xb)) + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  pIVar3 = param_1 + *(uint *)(*puVar2 + 0x23);
  if ((int)pIVar3 == *(int *)(param_1 + 0xa0)) {
    pIVar3 = (Isolate *)FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1);
  }
  uVar4 = *puVar1;
  *(int *)(pIVar3 + 0x17) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(pIVar3,pIVar3 + 0x17,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)(((ulong)pIVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(pIVar3,pIVar3 + 0x17,uVar4);
      return;
    }
  }
  return;
}

