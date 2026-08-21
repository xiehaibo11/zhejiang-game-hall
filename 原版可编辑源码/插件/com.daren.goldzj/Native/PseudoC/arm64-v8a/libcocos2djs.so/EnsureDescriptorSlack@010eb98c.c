
/* v8::internal::Map::EnsureDescriptorSlack(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, int) */

void v8::internal::Map::EnsureDescriptorSlack(Isolate *param_1,ulong *param_2,int param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  Map *pMVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_60;
  ulong local_58;
  
  pMVar4 = (Map *)&local_60;
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar2;
  }
  if ((short)(*(short *)(uVar6 + 3) - *(short *)(uVar6 + 5)) < param_3) {
    uVar1 = *(uint *)(*param_2 + 0xb) >> 10 & 0x3ff;
    puVar3 = (ulong *)DescriptorArray::CopyUpTo(param_1,puVar2,uVar1,param_3);
    if (uVar1 == 0) {
      local_58 = *param_2;
      pMVar4 = (Map *)&local_58;
    }
    else {
      uVar6 = *puVar2;
      uVar7 = *puVar3;
      uVar1 = *(uint *)(uVar6 + 0xb);
      *(uint *)(uVar7 + 0xb) = uVar1;
      if ((uVar1 & 1) != 0) {
        uVar6 = uVar6 & 0xffffffff00000000;
        uVar8 = uVar6 | uVar1;
        uVar6 = uVar6 | (ulong)uVar1 & 0xfffffffffffc0000;
        uVar5 = *(ulong *)(uVar6 + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar8);
          uVar5 = *(ulong *)(uVar6 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar8);
        }
      }
      uVar6 = *puVar2;
      local_58 = *param_2;
      if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierForDescriptorArraySlow
                  (param_1 + 0x8850,local_58,uVar6,(int)*(short *)(uVar6 + 5));
        local_58 = *param_2;
        uVar6 = *puVar2;
      }
      if (*(int *)(local_58 + 0x17) == (int)uVar6) {
        do {
          uVar6 = local_58 & 0xffffffff00000000;
          if (((*(uint *)(local_58 + 0x13) & 1) == 0) ||
             (uVar7 = uVar6 | *(uint *)(local_58 + 0x13),
             *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2)) {
            uVar7 = *(ulong *)(uVar6 + 0xa0);
          }
        } while ((((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) &&
                (SetInstanceDescriptors
                           ((Map *)&local_58,param_1,*puVar3,*(uint *)(local_58 + 0xb) >> 10 & 0x3ff
                           ), local_58 = uVar7, *(int *)(uVar7 + 0x17) == (int)*puVar2));
      }
      local_60 = *param_2;
    }
    SetInstanceDescriptors(pMVar4,param_1,*puVar3,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff);
  }
  return;
}

