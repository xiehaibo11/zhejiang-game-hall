
ulong * FUN_00ea7ab8(Factory *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                    ulong param_6,ulong param_7,ulong param_8,Factory *param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  Factory *pFVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = (ulong *)v8::internal::Factory::NewStruct(param_1,0x5f,1);
  *(undefined4 *)(*puVar4 + 0x23) = 0;
  if (param_2 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_2);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 3) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 3,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 3,uVar7);
      }
    }
  }
  if (param_3 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_3);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar7);
      }
    }
  }
  if (param_4 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_4);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 0xb) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
      }
    }
  }
  if (param_5 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_5);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 0xf) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
      }
    }
  }
  if (param_6 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_6);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 0x13) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x13,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x13,uVar7);
      }
    }
  }
  if (param_7 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_7);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 0x17) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x17,uVar7);
      }
    }
  }
  if (param_8 != 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewForeign(param_1,param_8);
    uVar8 = *puVar4;
    uVar7 = *puVar5;
    *(int *)(uVar8 + 0x1b) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
      }
    }
  }
  uVar1 = *(int *)(*puVar4 + 0x23) >> 1;
  uVar2 = uVar1 | 1;
  if ((param_10 & 4) != 0) {
    uVar2 = uVar1 & 0x7ffffffe;
  }
  *(int *)(*puVar4 + 0x23) = uVar2 << 1;
  uVar1 = *(int *)(*puVar4 + 0x23) >> 1;
  uVar2 = uVar1 & 0x7ffffffd;
  if ((param_10 & 1) != 0) {
    uVar2 = uVar1 | 2;
  }
  *(int *)(*puVar4 + 0x23) = uVar2 << 1;
  uVar1 = *(int *)(*puVar4 + 0x23) >> 1;
  uVar2 = uVar1 & 0x7ffffffb;
  if ((param_10 & 2) != 0) {
    uVar2 = uVar1 | 4;
  }
  *(int *)(*puVar4 + 0x23) = uVar2 << 1;
  uVar1 = *(int *)(*puVar4 + 0x23) >> 1;
  uVar2 = uVar1 & 0x7fffffef;
  if ((param_10 & 8) != 0) {
    uVar2 = uVar1 | 0x10;
  }
  pFVar3 = param_1 + 0xa0;
  if (param_9 != (Factory *)0x0) {
    pFVar3 = param_9;
  }
  *(int *)(*puVar4 + 0x23) = uVar2 << 1;
  uVar8 = *puVar4;
  uVar7 = *(ulong *)pFVar3;
  *(int *)(uVar8 + 0x1f) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1f,uVar7);
    }
  }
  *(uint *)(*puVar4 + 0x23) = *(uint *)(*puVar4 + 0x23) & 0xffffffee;
  return puVar4;
}

