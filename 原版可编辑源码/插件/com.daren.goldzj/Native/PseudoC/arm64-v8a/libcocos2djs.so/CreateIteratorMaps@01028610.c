
/* v8::internal::Genesis::CreateIteratorMaps(v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Genesis::CreateIteratorMaps(Genesis *this,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Factory *pFVar9;
  ulong uVar10;
  char *local_60;
  undefined8 uStack_58;
  
  pIVar8 = *(Isolate **)this;
  uVar6 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  puVar2 = (ulong *)Factory::NewJSObject((Factory *)pIVar8,puVar2,1);
  FUN_01028fbc(*(long *)this,puVar2,*(long *)this + 0xc18,"[Symbol.iterator]",0x9a,0,1,2);
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  *(int *)(uVar10 + 0xf7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xf7,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xf7,uVar6);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar6 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  puVar3 = (ulong *)Factory::NewJSObject((Factory *)pIVar8,puVar3,1);
  uVar6 = *puVar3;
  uVar10 = **(ulong **)(this + 0x10);
  *(int *)(uVar10 + 0xef) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xef,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xef,uVar6);
    }
  }
  JSObject::ForceSetPrototype(puVar3,puVar2);
  pIVar8 = *(Isolate **)this;
  uVar6 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  uVar4 = Factory::NewJSObject((Factory *)pIVar8,puVar2,1);
  JSObject::ForceSetPrototype(uVar4,param_2);
  pFVar9 = *(Factory **)this;
  uStack_58 = __strlen_chk("GeneratorFunction",0x12);
  local_60 = "GeneratorFunction";
  uVar5 = Factory::InternalizeUtf8String(pFVar9,(Vector *)&local_60);
  FUN_01036ca4(pFVar9,uVar4,uVar5);
  JSObject::AddProperty(*(long *)this,uVar4,*(long *)this + 0x908,puVar3,3);
  JSObject::AddProperty(*(long *)this,puVar3,*(long *)this + 0x5d0,uVar4,3);
  pFVar9 = *(Factory **)this;
  uStack_58 = __strlen_chk("Generator",10);
  local_60 = "Generator";
  uVar5 = Factory::InternalizeUtf8String(pFVar9,(Vector *)&local_60);
  FUN_01036ca4(pFVar9,puVar3,uVar5);
  FUN_01029064(*(undefined8 *)this,puVar3,"next",0x149,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar3,"return",0x14a,1,0,2);
  FUN_01029064(*(undefined8 *)this,puVar3,"throw",0x14b,1,0,2);
  puVar2 = (ulong *)FUN_0102910c(*(long *)this,*(long *)this + 0x848,0x149,1,0);
  uVar6 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb);
  *(uint *)(uVar6 + 0x1b) = *(uint *)(uVar6 + 0x1b) & 0xffffffdf;
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x3db);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)FUN_0102910c(*(long *)this,*(long *)this + 0x848,0x293,1,0);
  uVar6 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb);
  *(uint *)(uVar6 + 0x1b) = *(uint *)(uVar6 + 0x1b) & 0xffffffdf;
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x3df);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)FUN_0102910c(*(long *)this,*(long *)this + 200,0x294,1,0);
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  *(int *)(uVar10 + 0x8f) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x8f,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x8f,uVar6);
    }
  }
  puVar2 = (ulong *)FUN_0102910c(*(long *)this,*(long *)this + 200,0x295,1,0);
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  *(int *)(uVar10 + 0x93) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x93,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x93,uVar6);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar6 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1))
                                              + 0x13)) + 699);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  puVar2 = (ulong *)FUN_010291f4(pIVar8,puVar2,uVar4,"GeneratorFunction");
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x2e7);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar6 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) - 1))
                                              + 0x13)) + 0x2bf);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  puVar2 = (ulong *)FUN_010291f4(pIVar8,puVar2,uVar4,"GeneratorFunction with name");
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x2eb);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)FUN_010291f4(*(undefined8 *)this,*(undefined8 *)(this + 0x20),uVar4,
                                 "GeneratorFunction with home object");
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x2ef);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  puVar2 = (ulong *)FUN_010291f4(*(undefined8 *)this,*(undefined8 *)(this + 0x28),uVar4,
                                 "GeneratorFunction with name and home object");
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar10 + 0x2f3);
  *puVar1 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar6);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar6 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 499);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar6);
  }
  puVar2 = (ulong *)Map::Create(*(Isolate **)this,0);
  Map::SetPrototype(*(undefined8 *)this,puVar2,puVar3,1);
  uVar6 = *puVar2;
  uVar10 = **(ulong **)(this + 0x10);
  *(int *)(uVar10 + 0xd7) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xd7,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xd7,uVar6);
    }
  }
  return;
}

