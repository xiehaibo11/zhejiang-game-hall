
/* v8::internal::Genesis::CreateObjectFunction(v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Genesis::CreateObjectFunction(Genesis *this,ulong *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  Factory *pFVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  
  pFVar6 = *(Factory **)this;
  puVar2 = (ulong *)FUN_01028494(pFVar6,pFVar6 + 0x8a0,0x421,0x1c,4,pFVar6 + 0xb0,0x1aa);
  *(undefined2 *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb)) + 0x13) = 1;
  *(undefined2 *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0xb)) + 0x15) = 0xffff;
  uVar7 = *puVar2;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 499);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  uVar7 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x1b);
  *(byte *)(uVar7 + 10) = *(byte *)(uVar7 + 10) & 7 | 0x18;
  puVar3 = (ulong *)Factory::NewFunctionPrototype(pFVar6,puVar2);
  pIVar8 = *(Isolate **)this;
  uVar7 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 - 1);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
  }
  puVar4 = (ulong *)Map::Copy(pIVar8,puVar4,"EmptyObjectPrototype");
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x100000;
  *(byte *)(*puVar4 + 10) = *(byte *)(*puVar4 + 10) | 2;
  uVar7 = *puVar4;
  uVar9 = *puVar3;
  if ((int)uVar7 == 0) {
    *(undefined4 *)(uVar9 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar7);
    *(int *)(uVar9 - 1) = (int)uVar7;
    if (((uVar7 & 1) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar9,0,uVar7);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
  }
  Map::SetPrototype(*(undefined8 *)this,puVar4,puVar3,1);
  uVar7 = *puVar3;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 0x103);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  JSFunction::SetPrototype(puVar2,puVar3);
  pIVar8 = *(Isolate **)this;
  uVar7 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x1b);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
  }
  puVar2 = (ulong *)Map::CopyInitialMapNormalized(*(undefined8 *)this,puVar2,0);
  Map::SetPrototype(*(undefined8 *)this,puVar2,pFVar6 + 0xb0,1);
  uVar7 = *puVar2;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 0x29b);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
    }
  }
  puVar2 = (ulong *)Map::Copy(*(undefined8 *)this,puVar2,"slow_object_with_object_prototype_map");
  Map::SetPrototype(*(undefined8 *)this,puVar2,puVar3,1);
  uVar7 = *puVar2;
  uVar9 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar9 + 0x29f);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
      return;
    }
  }
  return;
}

