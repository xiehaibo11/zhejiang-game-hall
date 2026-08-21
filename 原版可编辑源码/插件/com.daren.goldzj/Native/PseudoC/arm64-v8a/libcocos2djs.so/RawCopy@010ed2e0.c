
/* v8::internal::Map::RawCopy(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>, int,
   int) */

ulong * v8::internal::Map::RawCopy
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = (ulong *)Factory::NewMap((Factory *)param_1,*(undefined2 *)(*param_2 + 7),param_3,3,
                                    param_4);
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  SetPrototype(param_1,puVar4,puVar5,1);
  uVar6 = *puVar4;
  uVar2 = *(uint *)(*param_2 + 0x13);
  uVar7 = *param_2 & 0xffffffff00000000;
  uVar8 = uVar7 | uVar2;
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar8 + 0x13);
      uVar8 = uVar7 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  *(int *)(uVar6 + 0x13) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar8);
    }
  }
  *(undefined1 *)(*puVar4 + 9) = *(undefined1 *)(*param_2 + 9);
  *(undefined1 *)(*puVar4 + 10) = *(undefined1 *)(*param_2 + 10);
  uVar2 = *(uint *)(*param_2 + 0xb);
  uVar3 = uVar2 & 0xfc300000;
  if ((*(uint *)(*param_2 + 0xb) & 0x200000) != 0) {
    uVar3 = uVar2 & 0xfe300000;
  }
  *(uint *)(*puVar4 + 0xb) = uVar3 | 0x4003ff;
  return puVar4;
}

