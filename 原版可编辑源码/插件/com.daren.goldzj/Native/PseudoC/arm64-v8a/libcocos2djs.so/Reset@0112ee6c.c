
/* v8::internal::SourceTextModule::Reset(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

void v8::internal::SourceTextModule::Reset(Factory *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  
  puVar2 = (ulong *)Factory::NewFixedArray
                              (param_1,*(int *)((*param_2 & 0xffffffff00000000 |
                                                (ulong)*(uint *)(*param_2 + 0x1b)) + 3) >> 1,0);
  puVar3 = (ulong *)Factory::NewFixedArray
                              (param_1,*(int *)((*param_2 & 0xffffffff00000000 |
                                                (ulong)*(uint *)(*param_2 + 0x1f)) + 3) >> 1,0);
  puVar4 = (ulong *)Factory::NewFixedArray
                              (param_1,*(int *)((*param_2 & 0xffffffff00000000 |
                                                (ulong)*(uint *)(*param_2 + 0x23)) + 3) >> 1,0);
  uVar7 = *param_2;
  if ((*(uint *)(uVar7 + 0xb) & 0xfffffffe) == 4) {
    puVar8 = (uint *)(uVar7 + 0x17);
    uVar5 = uVar7 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar5 | *puVar8) + 0xb);
    *puVar8 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar9 = uVar5 | uVar1;
      uVar5 = uVar5 | (ulong)uVar1 & 0xfffffffffffc0000;
      uVar6 = *(ulong *)(uVar5 + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,puVar8,uVar9);
        uVar6 = *(ulong *)(uVar5 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,puVar8,uVar9);
      }
    }
  }
  uVar5 = *param_2;
  uVar7 = *puVar2;
  *(int *)(uVar5 + 0x1b) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1b,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1b,uVar7);
    }
  }
  uVar5 = *param_2;
  uVar7 = *puVar3;
  *(int *)(uVar5 + 0x1f) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1f,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1f,uVar7);
    }
  }
  uVar5 = *param_2;
  uVar7 = *puVar4;
  *(int *)(uVar5 + 0x23) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x23,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x23,uVar7);
    }
  }
  *(undefined4 *)(*param_2 + 0x37) = 0xfffffffe;
  *(undefined4 *)(*param_2 + 0x3b) = 0xfffffffe;
  return;
}

