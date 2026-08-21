
/* v8::internal::Genesis::CreateAsyncIteratorMaps(v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Genesis::CreateAsyncIteratorMaps(Genesis *this,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Factory *pFVar10;
  ulong uVar11;
  char *local_60;
  undefined8 uStack_58;
  
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  uVar3 = Factory::NewJSObject((Factory *)pIVar9,puVar2,1);
  FUN_01028fbc(*(long *)this,uVar3,*(long *)this + 0xc10,"[Symbol.asyncIterator]",0x9a,0,1,2);
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  uVar4 = Factory::NewJSObject((Factory *)pIVar9,puVar2,1);
  FUN_01029064(*(undefined8 *)this,uVar4,"next",0x271,1,1,2);
  FUN_01029064(*(undefined8 *)this,uVar4,"return",0x273,1,1,2);
  FUN_01029064(*(undefined8 *)this,uVar4,"throw",0x272,1,1,2);
  pFVar10 = *(Factory **)this;
  uStack_58 = __strlen_chk("Async-from-Sync Iterator",0x19);
  local_60 = "Async-from-Sync Iterator";
  uVar5 = Factory::InternalizeUtf8String(pFVar10,(Vector *)&local_60);
  FUN_01036ca4(pFVar10,uVar4,uVar5);
  JSObject::ForceSetPrototype(uVar4,uVar3);
  puVar2 = (ulong *)Factory::NewMap(*(Factory **)this,0x426,0x14,3,0);
  Map::SetPrototype(*(undefined8 *)this,puVar2,uVar4,1);
  uVar7 = *puVar2;
  uVar11 = **(ulong **)(this + 0x10);
  *(int *)(uVar11 + 0x37) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0x37,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0x37,uVar7);
    }
  }
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  puVar2 = (ulong *)Factory::NewJSObject((Factory *)pIVar9,puVar2,1);
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  uVar4 = Factory::NewJSObject((Factory *)pIVar9,puVar6,1);
  JSObject::ForceSetPrototype(uVar4,param_2);
  JSObject::AddProperty(*(long *)this,uVar4,*(long *)this + 0x908,puVar2,3);
  JSObject::AddProperty(*(long *)this,puVar2,*(long *)this + 0x5d0,uVar4,3);
  pFVar10 = *(Factory **)this;
  uStack_58 = __strlen_chk("AsyncGeneratorFunction",0x17);
  local_60 = "AsyncGeneratorFunction";
  uVar5 = Factory::InternalizeUtf8String(pFVar10,(Vector *)&local_60);
  FUN_01036ca4(pFVar10,uVar4,uVar5);
  JSObject::ForceSetPrototype(puVar2,uVar3);
  uVar7 = *puVar2;
  uVar11 = **(ulong **)(this + 0x10);
  *(int *)(uVar11 + 0xf3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xf3,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xf3,uVar7);
    }
  }
  pFVar10 = *(Factory **)this;
  uStack_58 = __strlen_chk("AsyncGenerator",0xf);
  local_60 = "AsyncGenerator";
  uVar3 = Factory::InternalizeUtf8String(pFVar10,(Vector *)&local_60);
  FUN_01036ca4(pFVar10,puVar2,uVar3);
  FUN_01029064(*(undefined8 *)this,puVar2,"next",0x266,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar2,"return",0x267,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar2,"throw",0x268,1,0,2);
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 699);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  puVar6 = (ulong *)FUN_010291f4(pIVar9,puVar6,uVar4,"AsyncGeneratorFunction");
  uVar7 = *puVar6;
  uVar11 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar11 + 0x2f7);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
    }
  }
  pIVar9 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2bf);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  puVar6 = (ulong *)FUN_010291f4(pIVar9,puVar6,uVar4,"AsyncGeneratorFunction with name");
  uVar7 = *puVar6;
  uVar11 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar11 + 0x2fb);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
    }
  }
  puVar6 = (ulong *)FUN_010291f4(*(undefined8 *)this,*(undefined8 *)(this + 0x20),uVar4,
                                 "AsyncGeneratorFunction with home object");
  uVar7 = *puVar6;
  uVar11 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar11 + 0x2ff);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
    }
  }
  puVar6 = (ulong *)FUN_010291f4(*(undefined8 *)this,*(undefined8 *)(this + 0x28),uVar4,
                                 "AsyncGeneratorFunction with name and home object");
  uVar7 = *puVar6;
  uVar11 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar11 + 0x303);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,puVar1,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar7);
    }
  }
  pIVar9 = *(Isolate **)this;
  uVar7 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 499);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
  }
  puVar6 = (ulong *)Map::Create(*(Isolate **)this,0);
  Map::SetPrototype(*(undefined8 *)this,puVar6,puVar2,1);
  uVar7 = *puVar6;
  uVar11 = **(ulong **)(this + 0x10);
  *(int *)(uVar11 + 0xdb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xdb,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xdb,uVar7);
    }
  }
  return;
}

