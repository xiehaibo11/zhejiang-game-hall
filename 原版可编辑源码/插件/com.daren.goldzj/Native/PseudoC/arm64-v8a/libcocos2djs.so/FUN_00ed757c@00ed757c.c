
ulong * FUN_00ed757c(Factory *param_1,ulong *param_2,ulong param_3,code *param_4,Factory *param_5,
                    uint param_6,ulong *param_7,byte param_8,byte param_9)

{
  Factory *pFVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_68;
  
  pFVar1 = param_1 + 0x95a0;
  puVar3 = (ulong *)v8::internal::Factory::NewAccessorInfo(param_1);
  if (param_3 == 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pFVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar4 + 1;
      *puVar4 = 0;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
    }
  }
  else {
    puVar4 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_3);
  }
  uVar8 = *puVar3;
  uVar7 = *puVar4;
  *(int *)(uVar8 + 0x13) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x13,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x13,uVar7);
    }
  }
  pcVar2 = v8::internal::Accessors::ReconfigureToDataProperty;
  if ((param_4 == (code *)0x0 & param_8) == 0) {
    pcVar2 = param_4;
  }
  if (pcVar2 == (code *)0x0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pFVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar4 + 1;
      *puVar4 = 0;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
    }
  }
  else {
    puVar4 = (ulong *)v8::internal::Factory::NewForeign(param_1,(ulong)pcVar2);
  }
  uVar8 = *puVar3;
  uVar7 = *puVar4;
  *(int *)(uVar8 + 0xf) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
    }
  }
  local_68 = *puVar3;
  uVar7 = v8::internal::AccessorInfo::redirected_getter((AccessorInfo *)&local_68);
  if (uVar7 != 0) {
    puVar4 = (ulong *)v8::internal::Factory::NewForeign(param_1,uVar7);
    uVar8 = *puVar3;
    uVar7 = *puVar4;
    *(int *)(uVar8 + 0x17) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x17,uVar7);
      }
    }
  }
  pFVar1 = param_1 + 0xa0;
  if (param_5 != (Factory *)0x0) {
    pFVar1 = param_5;
  }
  uVar8 = *puVar3;
  uVar7 = *(ulong *)pFVar1;
  *(int *)(uVar8 + 0x1b) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
    }
  }
  uVar6 = 8;
  if ((param_8 & 1) == 0) {
    uVar6 = 0;
  }
  *(uint *)(*puVar3 + 7) = *(uint *)(*puVar3 + 7) & 0xfffffff6 | uVar6;
  uVar6 = 0x20;
  if ((param_9 & 1) == 0) {
    uVar6 = 0;
  }
  *(uint *)(*puVar3 + 7) = *(uint *)(*puVar3 + 7) & 0xffffffde | uVar6;
  uVar8 = *param_2;
  uVar7 = uVar8 & 0xffffffff00000000 | 7;
  if (((*(ushort *)(uVar7 + *(uint *)(uVar8 - 1)) & 0xffe0) == 0x20) &&
     (0x1f < *(ushort *)(uVar7 + *(uint *)(uVar8 - 1)))) {
    puVar4 = (ulong *)v8::internal::StringTable::LookupString(param_1,param_2);
    uVar8 = *puVar4;
  }
  uVar7 = *puVar3;
  *(int *)(uVar7 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar8);
    }
  }
  if ((param_6 & 1) != 0) {
    *(uint *)(*puVar3 + 7) = *(uint *)(*puVar3 + 7) & 0xfffffffc | 2;
  }
  if ((param_6 >> 1 & 1) != 0) {
    *(uint *)(*puVar3 + 7) = *(uint *)(*puVar3 + 7) & 0xfffffffe | 4;
  }
  *(uint *)(*puVar3 + 7) = *(uint *)(*puVar3 + 7) & 0xffffe3fe;
  if (param_7 != (ulong *)0x0) {
    uVar8 = *puVar3;
    uVar7 = *param_7;
    *(int *)(uVar8 + 0xb) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
      }
    }
  }
  return puVar3;
}

