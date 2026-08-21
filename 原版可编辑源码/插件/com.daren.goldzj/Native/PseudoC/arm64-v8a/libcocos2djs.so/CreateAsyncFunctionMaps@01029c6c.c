
/* v8::internal::Genesis::CreateAsyncFunctionMaps(v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Genesis::CreateAsyncFunctionMaps(Genesis *this,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Factory *this_00;
  ulong uVar8;
  char *local_50;
  undefined8 uStack_48;
  
  pIVar7 = *(Isolate **)this;
  uVar5 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
  }
  uVar3 = Factory::NewJSObject((Factory *)pIVar7,puVar2,1);
  JSObject::ForceSetPrototype(uVar3,param_2);
  this_00 = *(Factory **)this;
  uStack_48 = __strlen_chk("AsyncFunction",0xe);
  local_50 = "AsyncFunction";
  uVar4 = Factory::InternalizeUtf8String(this_00,(Vector *)&local_50);
  FUN_01036ca4(this_00,uVar3,uVar4);
  pIVar7 = *(Isolate **)this;
  uVar5 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2c7);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)Map::Copy(pIVar7,puVar2,"AsyncFunction");
  Map::SetPrototype(*(undefined8 *)this,puVar2,uVar3,1);
  uVar5 = *puVar2;
  uVar8 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar8 + 0x2d7);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar5);
    }
  }
  pIVar7 = *(Isolate **)this;
  uVar5 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2cb);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)Map::Copy(pIVar7,puVar2,"AsyncFunction with name");
  Map::SetPrototype(*(undefined8 *)this,puVar2,uVar3,1);
  uVar5 = *puVar2;
  uVar8 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar8 + 0x2db);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar5);
    }
  }
  pIVar7 = *(Isolate **)this;
  uVar5 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2cf);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)Map::Copy(pIVar7,puVar2,"AsyncFunction with home object");
  Map::SetPrototype(*(undefined8 *)this,puVar2,uVar3,1);
  uVar5 = *puVar2;
  uVar8 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar8 + 0x2df);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar5);
    }
  }
  pIVar7 = *(Isolate **)this;
  uVar5 = *(ulong *)(pIVar7 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar7 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2d3);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar5);
  }
  puVar2 = (ulong *)Map::Copy(pIVar7,puVar2,"AsyncFunction with name and home object");
  Map::SetPrototype(*(undefined8 *)this,puVar2,uVar3,1);
  uVar5 = *puVar2;
  uVar8 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar8 + 0x2e3);
  *puVar1 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar5);
    }
  }
  return;
}

