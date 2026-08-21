
/* v8::internal::Map::GetOrCreatePrototypeInfo(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Isolate*) */

ulong * v8::internal::Map::GetOrCreatePrototypeInfo(ulong *param_1,Factory *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *param_1 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar3 | *(uint *)(*param_1 - 1)) + 0x23);
  if (((uVar1 & 1) == 0) ||
     (uVar5 = uVar3 | uVar1, *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 100)) {
    puVar2 = (ulong *)Factory::NewPrototypeInfo(param_2);
    uVar5 = (ulong)*(uint *)(*param_1 - 1);
    uVar6 = *puVar2;
    uVar3 = *param_1 & 0xffffffff00000000;
    uVar7 = uVar3 | uVar5;
    *(int *)(uVar7 + 0x23) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x23,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) &&
         ((*(byte *)((uVar3 | uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x23,uVar6);
      }
    }
  }
  else if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_2 + 0x95a0);
    if (puVar2 == *(ulong **)(param_2 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar5);
  }
  return puVar2;
}

