
void FUN_0147e534(Isolate *param_1,ulong *param_2,uint param_3,undefined8 *param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*param_2 + 0xf);
  if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
    uVar6 = *param_2 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
  }
  else {
    puVar3 = (ulong *)v8::internal::TemplateList::New(param_1,param_3);
  }
  *(uint *)(*param_2 + 0xb) = *(uint *)(*param_2 + 0xb) + 2 & 0xfffffffe;
  if (0 < (int)param_3) {
    uVar6 = (ulong)param_3;
    do {
      pIVar1 = param_1 + 0xa0;
      if ((Isolate *)*param_4 != (Isolate *)0x0) {
        pIVar1 = (Isolate *)*param_4;
      }
      puVar3 = (ulong *)v8::internal::TemplateList::Add(param_1,puVar3,pIVar1);
      uVar6 = uVar6 - 1;
      param_4 = param_4 + 1;
    } while (uVar6 != 0);
  }
  uVar5 = *param_2;
  uVar6 = *puVar3;
  *(int *)(uVar5 + 0xf) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xf,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xf,uVar6);
      return;
    }
  }
  return;
}

