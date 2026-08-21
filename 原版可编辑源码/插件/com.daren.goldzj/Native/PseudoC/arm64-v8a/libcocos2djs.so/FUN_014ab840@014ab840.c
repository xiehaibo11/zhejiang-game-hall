
bool FUN_014ab840(long *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  char cVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  LookupIterator aLStack_98 [88];
  
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if (param_2 < ~*(uint *)(param_1 + 2)) {
    param_2 = *(uint *)(param_1 + 2) + param_2;
    if ((uVar1 >> 2 & 1) == 0) {
      v8::internal::LookupIterator::LookupIterator(aLStack_98,*param_1,param_1[1],param_2,1,0);
      cVar3 = v8::internal::JSReceiver::CreateDataProperty(aLStack_98,param_3,1);
      return cVar3 != '\0';
    }
    if ((uVar1 & 1) != 0) {
      uVar9 = *(ulong *)param_1[1];
      if (param_2 < (uint)(*(int *)(uVar9 + 3) >> 1)) {
        uVar8 = *param_3;
        lVar6 = uVar9 + (long)(int)(param_2 * 4);
        *(int *)(lVar6 + 7) = (int)uVar8;
        if ((uVar8 & 1) == 0) {
          return true;
        }
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar6 = lVar6 + 7;
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar9,lVar6,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar7 & 0x18) == 0) {
          return true;
        }
        if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
          return true;
        }
        v8::internal::Heap_GenerationalBarrierSlow(uVar9,lVar6,uVar8);
        return true;
      }
      FUN_014acb2c(param_1);
    }
    pIVar2 = (Isolate *)*param_1;
    uVar9 = *(ulong *)param_1[1];
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar9);
    }
    puVar5 = (ulong *)v8::internal::NumberDictionary::Set(*param_1,puVar4,param_2,param_3,0,0xc0);
    if ((puVar4 != puVar5) &&
       (((puVar4 == (ulong *)0x0 || (puVar5 == (ulong *)0x0)) || (*puVar5 != *puVar4)))) {
      v8::internal::GlobalHandles::Destroy((ulong *)param_1[1]);
      lVar6 = v8::internal::GlobalHandles::Create(*(GlobalHandles **)(*param_1 + 0x95e0),*puVar5);
      param_1[1] = lVar6;
    }
  }
  else {
    *(uint *)((long)param_1 + 0x14) = uVar1 | 2;
  }
  return true;
}

