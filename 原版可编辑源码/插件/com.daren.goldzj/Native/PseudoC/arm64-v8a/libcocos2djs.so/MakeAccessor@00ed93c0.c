
/* v8::internal::Accessors::MakeAccessor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, void (*)(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&), void (*)(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&)) */

ulong * v8::internal::Accessors::MakeAccessor
                  (Factory *param_1,ulong *param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_58;
  
  puVar2 = (ulong *)Factory::NewAccessorInfo(param_1);
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xfffffffc;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xfffffffa;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xfffffffe | 8;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xffffffee;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xffffffde;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xffffff3e;
  *(uint *)(*puVar2 + 7) = *(uint *)(*puVar2 + 7) & 0xfffffcfe;
  uVar7 = *param_2;
  if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) & 0xffe0) == 0x20
     ) {
    puVar3 = (ulong *)StringTable::LookupString(param_1,param_2);
    uVar7 = *puVar3;
  }
  uVar6 = *puVar2;
  *(int *)(uVar6 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 3,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar7);
    }
  }
  if (param_3 == 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0)
      ;
    }
  }
  else {
    puVar3 = (ulong *)Factory::NewForeign(param_1,param_3);
  }
  pcVar1 = ReconfigureToDataProperty;
  if (param_4 != (code *)0x0) {
    pcVar1 = param_4;
  }
  puVar4 = (ulong *)Factory::NewForeign(param_1,(ulong)pcVar1);
  uVar6 = *puVar2;
  uVar7 = *puVar3;
  *(int *)(uVar6 + 0x13) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar7);
    }
  }
  uVar6 = *puVar2;
  uVar7 = *puVar4;
  *(int *)(uVar6 + 0xf) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar7);
    }
  }
  local_58 = *puVar2;
  uVar7 = AccessorInfo::redirected_getter((AccessorInfo *)&local_58);
  if (uVar7 != 0) {
    puVar3 = (ulong *)Factory::NewForeign(param_1,uVar7);
    uVar6 = *puVar2;
    uVar7 = *puVar3;
    *(int *)(uVar6 + 0x17) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x17,uVar7);
      }
    }
  }
  return puVar2;
}

