
/* v8::internal::Genesis::InstallABunchOfRandomThings() */

undefined8 __thiscall v8::internal::Genesis::InstallABunchOfRandomThings(Genesis *this)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong local_90;
  undefined8 local_88 [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pIVar11 = *(Isolate **)this;
  uVar3 = *(undefined8 *)(pIVar11 + 0x95a0);
  lVar4 = *(long *)(pIVar11 + 0x95a8);
  *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + 1;
  puVar7 = (ulong *)Factory::NewFixedArray(*(Factory **)this,0x400,0);
  uVar12 = *puVar7;
  uVar13 = **(ulong **)(this + 0x10);
  *(int *)(uVar13 + 0xc3) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xc3,uVar12);
      uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xc3,uVar12);
    }
  }
  puVar7 = (ulong *)HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                    ::New(*(undefined8 *)this,0x100,0,0);
  uVar12 = *puVar7;
  uVar13 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar13 + 0x2a3);
  *puVar1 = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,puVar1,uVar12);
      uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar12);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(this + 0x10) + 499);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
    uVar12 = *puVar7;
  }
  uVar13 = uVar12 & 0xffffffff00000000;
  uVar10 = **(ulong **)(this + 0x10);
  uVar5 = *(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(uVar12 + 0x1b)) + 0xf)) - 1);
  puVar15 = (uint *)(uVar10 + 0x1f7);
  *puVar15 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar14 = uVar13 | uVar5;
    uVar13 = uVar13 | (ulong)uVar5 & 0xfffffffffffc0000;
    uVar12 = *(ulong *)(uVar13 + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar15,uVar14);
      uVar12 = *(ulong *)(uVar13 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar15,uVar14);
    }
  }
  pIVar8 = *(Isolate **)this;
  uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x30b);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
    uVar12 = *puVar7;
  }
  uVar13 = uVar12 & 0xffffffff00000000;
  uVar10 = **(ulong **)(this + 0x10);
  uVar5 = *(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(uVar12 + 0x1b)) + 0xf)) - 1);
  puVar15 = (uint *)(uVar10 + 0x30f);
  *puVar15 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar14 = uVar13 | uVar5;
    uVar13 = uVar13 | (ulong)uVar5 & 0xfffffffffffc0000;
    uVar12 = *(ulong *)(uVar13 + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar15,uVar14);
      uVar12 = *(ulong *)(uVar13 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar15,uVar14);
    }
  }
  local_88[0] = **(undefined8 **)(this + 0x10);
  uVar12 = Context::global_object((Context *)local_88);
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
  }
  FUN_01036ba4(*(undefined8 *)this,puVar7,"decodeURI",0x14e,1,0);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"decodeURIComponent",0x14f,1,0);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"encodeURI",0x150,1,0);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"encodeURIComponent",0x151,1,0);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"escape",0x152,1,0);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"unescape",0x153,1,0);
  puVar9 = (ulong *)FUN_01029064(*(undefined8 *)this,puVar7,"eval",0x154,1,0,2);
  uVar12 = *puVar9;
  uVar13 = **(ulong **)(this + 0x10);
  puVar1 = (undefined4 *)(uVar13 + 0x36b);
  *puVar1 = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,puVar1,uVar12);
      uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar12);
    }
  }
  FUN_01036ba4(*(undefined8 *)this,puVar7,"isFinite",0x155,1,1);
  FUN_01036ba4(*(undefined8 *)this,puVar7,"isNaN",0x156,1,1);
  pIVar8 = *(Isolate **)this;
  uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x2f);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
    uVar12 = *puVar7;
  }
  uVar13 = uVar12 & 0xffffffff00000000;
  if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar12 - 1)) & 1) == 0) {
    uVar12 = uVar13 | *(uint *)(uVar12 + 0x1b);
    if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0xa2) {
      uVar12 = uVar13 | *(uint *)(uVar12 + 0xf);
    }
  }
  else {
    uVar5 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar12 - 1));
    uVar12 = uVar13 | uVar5;
    if ((uVar5 & 1) != 0) {
      do {
        if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2) break;
        puVar15 = (uint *)(uVar12 + 0x13);
        uVar12 = uVar13 | *puVar15;
      } while ((*puVar15 & 1) != 0);
    }
  }
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar12;
    uVar5 = *(uint *)(uVar12 + 0xb);
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
    uVar12 = *puVar7;
    uVar5 = *(uint *)(uVar12 + 0xb);
  }
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length.IsSmi()");
  }
  if (1 < uVar5) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Smi::ToInt(length) == 0");
  }
  if (0x1f < *(byte *)((uVar12 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar12 - 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","proto->HasSmiOrObjectElements()");
  }
  uVar13 = *(ulong *)(*(long *)this + 0x168);
  *(int *)(uVar12 + 7) = (int)uVar13;
  if ((uVar13 & 1) != 0) {
    uVar10 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar13);
      uVar10 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar13);
    }
  }
  puVar7 = (ulong *)Factory::NewMap(*(Factory **)this,0x421,0x1c,3,4);
  Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,4);
  Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x700,0,0,4);
  local_90 = *puVar7;
  Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
  Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x9b0,1,0,4);
  local_90 = *puVar7;
  Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
  Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x670,2,0,4);
  local_90 = *puVar7;
  Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
  Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x5b8,3,0,4);
  local_90 = *puVar7;
  Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
  pIVar8 = *(Isolate **)this;
  uVar12 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
  uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar12;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
  }
  Map::SetPrototype(pIVar8,puVar7,puVar9,1);
  uVar13 = *puVar7;
  uVar12 = **(ulong **)(this + 0x10);
  uVar5 = *(uint *)(uVar12 + 499);
  puVar15 = (uint *)(uVar13 + 0x13);
  if (((*puVar15 & 1) == 0) ||
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*puVar15) - 1)) != 0xa2)) {
    *puVar15 = uVar5;
    if ((uVar5 & 1) != 0) {
      uVar12 = uVar12 & 0xffffffff00000000;
      uVar14 = uVar12 | uVar5;
      uVar12 = uVar12 | (ulong)uVar5 & 0xfffffffffffc0000;
      uVar10 = *(ulong *)(uVar12 + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,puVar15,uVar14);
        uVar10 = *(ulong *)(uVar12 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,puVar15,uVar14);
      }
    }
    uVar12 = *puVar7;
    uVar13 = **(ulong **)(this + 0x10);
    *(int *)(uVar13 + 0x1b) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x1b,uVar12);
        uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x1b,uVar12);
      }
    }
    puVar7 = (ulong *)Factory::NewMap(*(Factory **)this,0x421,0x1c,3,4);
    Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,4);
    Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xac8,0,0,4);
    local_90 = *puVar7;
    Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
    Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xb00,1,0,4);
    local_90 = *puVar7;
    Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
    Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x670,2,0,4);
    local_90 = *puVar7;
    Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
    Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x5b8,3,0,4);
    local_90 = *puVar7;
    Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
    pIVar8 = *(Isolate **)this;
    uVar12 = *(ulong *)(pIVar8 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar8 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x103);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar12;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
    }
    Map::SetPrototype(pIVar8,puVar7,puVar9,1);
    uVar13 = *puVar7;
    uVar12 = **(ulong **)(this + 0x10);
    uVar5 = *(uint *)(uVar12 + 499);
    puVar15 = (uint *)(uVar13 + 0x13);
    if (((*puVar15 & 1) == 0) ||
       (*(short *)((uVar13 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*puVar15) - 1)) != 0xa2)) {
      *puVar15 = uVar5;
      if ((uVar5 & 1) != 0) {
        uVar12 = uVar12 & 0xffffffff00000000;
        uVar14 = uVar12 | uVar5;
        uVar12 = uVar12 | (ulong)uVar5 & 0xfffffffffffc0000;
        uVar10 = *(ulong *)(uVar12 + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,puVar15,uVar14);
          uVar10 = *(ulong *)(uVar12 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar13,puVar15,uVar14);
        }
      }
      uVar12 = *puVar7;
      uVar13 = **(ulong **)(this + 0x10);
      *(int *)(uVar13 + 0x9f) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x9f,uVar12);
          uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x9f,uVar12);
        }
      }
      puVar7 = (ulong *)CreateInitialMapForArraySubclass(this,0x2c,7);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x750,0,0,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x770,1,0,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x728,2,0,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xbc0,3,2,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xbc8,4,2,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xbd0,5,2,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0xbd8,6,2,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      uVar12 = *puVar7;
      uVar13 = **(ulong **)(this + 0x10);
      puVar1 = (undefined4 *)(uVar13 + 0x25f);
      *puVar1 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,puVar1,uVar12);
          uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar12);
        }
      }
      puVar7 = (ulong *)CreateInitialMapForArraySubclass(this,0x14,1);
      Descriptor::DataField((Descriptor *)local_88,*(long *)this,*(long *)this + 0x728,0,0,4);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      uVar12 = *puVar7;
      uVar13 = **(ulong **)(this + 0x10);
      puVar1 = (undefined4 *)(uVar13 + 0x263);
      *puVar1 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,puVar1,uVar12);
          uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar13,puVar1,uVar12);
        }
      }
      lVar2 = *(long *)this + 0xe18;
      Descriptor::AccessorConstant((Descriptor *)local_88,*(long *)this + 0xc18,lVar2,2);
      pIVar8 = *(Isolate **)this;
      uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x28f);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
      }
      Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,1);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::AccessorConstant((Descriptor *)local_88,*(long *)this + 0xc18,lVar2,2);
      pIVar8 = *(Isolate **)this;
      uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xbf);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
      }
      Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,1);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::AccessorConstant((Descriptor *)local_88,*(long *)this + 0xc18,lVar2,2);
      pIVar8 = *(Isolate **)this;
      uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x293);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
      }
      Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,1);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      Descriptor::AccessorConstant((Descriptor *)local_88,*(long *)this + 0xc18,lVar2,2);
      pIVar8 = *(Isolate **)this;
      uVar12 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x297);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar12);
      }
      Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,1);
      local_90 = *puVar7;
      Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
      if (pIVar11 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar11 + 0x95a0) = uVar3;
        *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + -1;
        if (*(long *)(pIVar11 + 0x95a8) != lVar4) {
          *(long *)(pIVar11 + 0x95a8) = lVar4;
          HandleScope::DeleteExtensions(pIVar11);
        }
      }
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
}

