
/* v8::internal::ApiNatives::AddNativeDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::TemplateInfo>,
   v8::internal::Handle<v8::internal::AccessorInfo>) */

void v8::internal::ApiNatives::AddNativeDataProperty
               (Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*param_2 + 0x13);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) {
    uVar4 = *param_2 & 0xffffffff00000000 | (ulong)uVar1;
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
  }
  else {
    puVar2 = (ulong *)TemplateList::New(param_1,1);
  }
  puVar2 = (ulong *)TemplateList::Add(param_1,puVar2,param_3);
  uVar5 = *param_2;
  uVar4 = *puVar2;
  *(int *)(uVar5 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
      return;
    }
  }
  return;
}

