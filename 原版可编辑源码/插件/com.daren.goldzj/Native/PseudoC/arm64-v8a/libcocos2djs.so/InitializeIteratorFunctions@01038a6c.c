
/* v8::internal::Genesis::InitializeIteratorFunctions() */

void __thiscall v8::internal::Genesis::InitializeIteratorFunctions(Genesis *this)

{
  Isolate *pIVar1;
  undefined4 *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  Isolate *pIVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong local_68;
  
  pIVar15 = *(Isolate **)this;
  pIVar3 = pIVar15 + 0x95a0;
  puVar4 = *(ulong **)pIVar3;
  puVar5 = *(ulong **)(pIVar15 + 0x95a8);
  *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
  uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
  uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar4;
    if (puVar5 == puVar4) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar15);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
    uVar12 = *puVar7;
  }
  uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xf7);
  if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar3;
    if (puVar8 == *(ulong **)(pIVar15 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar15);
    }
    *(ulong **)pIVar3 = puVar8 + 1;
    *puVar8 = uVar12;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
  }
  local_68 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x2e7);
  uVar12 = Map::GetPrototypeChainRootMap((Map *)&local_68,pIVar15);
  uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xf);
  if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar3;
    if (puVar9 == *(ulong **)(pIVar15 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar15);
    }
    *(ulong **)pIVar3 = puVar9 + 1;
    *puVar9 = uVar12;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
  }
  puVar10 = (ulong *)FUN_01036d60(pIVar15,"GeneratorFunction",0x439,0x20,puVar9,0x148);
  uVar12 = *puVar7;
  uVar16 = *puVar10;
  uVar6 = *(uint *)(uVar12 + 0x2e7);
  *(uint *)(uVar16 + 0x1b) = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar12 = uVar12 & 0xffffffff00000000;
    uVar18 = uVar12 | uVar6;
    uVar12 = uVar12 | (ulong)uVar6 & 0xfffffffffffc0000;
    uVar13 = *(ulong *)(uVar12 + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
      uVar13 = *(ulong *)(uVar12 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
    }
  }
  *(undefined2 *)((*puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb)) + 0x15) =
       0xffff;
  *(undefined2 *)((*puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb)) + 0x13) = 1;
  FUN_010369f8(pIVar15,puVar10,0x33);
  uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
  uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0xcf);
  if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)pIVar3;
    if (puVar11 == *(ulong **)(pIVar15 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(pIVar15);
    }
    *(ulong **)pIVar3 = puVar11 + 1;
    *puVar11 = uVar12;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
  }
  JSObject::ForceSetPrototype(puVar10,puVar11);
  pIVar1 = pIVar15 + 0x5d0;
  JSObject::AddProperty(pIVar15,puVar9,pIVar1,puVar10,3);
  uVar16 = (ulong)*(uint *)(*puVar7 + 0x2e7);
  uVar12 = *puVar7 & 0xffffffff00000000;
  uVar13 = *puVar10;
  uVar18 = uVar12 | uVar16;
  puVar17 = (uint *)(uVar18 + 0x13);
  if (((*puVar17 & 1) == 0) ||
     (*(short *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | *puVar17) - 1)) != 0xa2)) {
    *puVar17 = (uint)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar14 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar18,puVar17,uVar13);
        uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar14 & 0x18) != 0) &&
         ((*(byte *)((uVar12 | uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar18,puVar17,uVar13);
      }
    }
    local_68 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x2f7);
    uVar12 = Map::GetPrototypeChainRootMap((Map *)&local_68,pIVar15);
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar3;
      if (puVar9 == *(ulong **)(pIVar15 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar15);
      }
      *(ulong **)pIVar3 = puVar9 + 1;
      *puVar9 = uVar12;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
    }
    puVar10 = (ulong *)FUN_01036d60(pIVar15,"AsyncGeneratorFunction",0x439,0x20,puVar9,0x265);
    uVar12 = *puVar7;
    uVar16 = *puVar10;
    uVar6 = *(uint *)(uVar12 + 0x2f7);
    *(uint *)(uVar16 + 0x1b) = uVar6;
    if ((uVar6 & 1) != 0) {
      uVar12 = uVar12 & 0xffffffff00000000;
      uVar18 = uVar12 | uVar6;
      uVar12 = uVar12 | (ulong)uVar6 & 0xfffffffffffc0000;
      uVar13 = *(ulong *)(uVar12 + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
        uVar13 = *(ulong *)(uVar12 | 8);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
      }
    }
    *(undefined2 *)((*puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb)) + 0x15) =
         0xffff;
    *(undefined2 *)((*puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb)) + 0x13) = 1;
    FUN_010369f8(pIVar15,puVar10,0x11);
    uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
    uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0xcf);
    if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar3;
      if (puVar11 == *(ulong **)(pIVar15 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(pIVar15);
      }
      *(ulong **)pIVar3 = puVar11 + 1;
      *puVar11 = uVar12;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
    }
    JSObject::ForceSetPrototype(puVar10,puVar11);
    JSObject::AddProperty(pIVar15,puVar9,pIVar1,puVar10,3);
    uVar16 = (ulong)*(uint *)(*puVar7 + 0x2f7);
    uVar12 = *puVar7 & 0xffffffff00000000;
    uVar13 = *puVar10;
    uVar18 = uVar12 | uVar16;
    puVar17 = (uint *)(uVar18 + 0x13);
    if (((*puVar17 & 1) == 0) ||
       (*(short *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | *puVar17) - 1)) != 0xa2)) {
      *puVar17 = (uint)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar18,puVar17,uVar13);
          uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) &&
           ((*(byte *)((uVar12 | uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar18,puVar17,uVar13);
        }
      }
      uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 499);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar3;
        if (puVar9 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
      }
      puVar9 = (ulong *)Factory::NewJSObject((Factory *)pIVar15,puVar9,1);
      JSObject::ForceSetPrototype(puVar9,puVar8);
      FUN_01036ca4(pIVar15,puVar9,pIVar15 + 0x9b8);
      FUN_01036ba4(pIVar15,puVar9,"next",0x207,0,1);
      uVar16 = *puVar7;
      uVar12 = *puVar9;
      puVar2 = (undefined4 *)(uVar16 + 0x107);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      puVar9 = (ulong *)FUN_01036d60(pIVar15,"SetIterator",0x416,0x14,puVar9,0x97);
      uVar12 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0xb);
      *(uint *)(uVar12 + 0x1b) = *(uint *)(uVar12 + 0x1b) & 0xffffffdf;
      uVar12 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x1b);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar3;
        if (puVar9 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
        uVar12 = *puVar9;
      }
      uVar16 = *puVar7;
      puVar2 = (undefined4 *)(uVar16 + 0x283);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      puVar9 = (ulong *)Map::Copy(pIVar15,puVar9,"JS_SET_KEY_VALUE_ITERATOR_TYPE");
      *(undefined2 *)(*puVar9 + 7) = 0x415;
      uVar16 = *puVar7;
      uVar12 = *puVar9;
      puVar2 = (undefined4 *)(uVar16 + 0x287);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 499);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar3;
        if (puVar9 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
      }
      puVar9 = (ulong *)Factory::NewJSObject((Factory *)pIVar15,puVar9,1);
      JSObject::ForceSetPrototype(puVar9,puVar8);
      FUN_01036ca4(pIVar15,puVar9,pIVar15 + 0x7e8);
      FUN_01036ba4(pIVar15,puVar9,"next",0x182,0,1);
      uVar16 = *puVar7;
      uVar12 = *puVar9;
      *(int *)(uVar16 + 0xfb) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0xfb,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0xfb,uVar12);
        }
      }
      puVar8 = (ulong *)FUN_01036d60(pIVar15,"MapIterator",0x412,0x14,puVar9,0x97);
      uVar12 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xb);
      *(uint *)(uVar12 + 0x1b) = *(uint *)(uVar12 + 0x1b) & 0xffffffdf;
      uVar12 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x1b);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar12;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
        uVar12 = *puVar8;
      }
      uVar16 = *puVar7;
      puVar2 = (undefined4 *)(uVar16 + 0x1cf);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      puVar9 = (ulong *)Map::Copy(pIVar15,puVar8,"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
      *(undefined2 *)(*puVar9 + 7) = 0x413;
      uVar16 = *puVar7;
      uVar12 = *puVar9;
      puVar2 = (undefined4 *)(uVar16 + 0x1d3);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      puVar8 = (ulong *)Map::Copy(pIVar15,puVar8,"JS_MAP_VALUE_ITERATOR_TYPE");
      *(undefined2 *)(*puVar8 + 7) = 0x414;
      uVar16 = *puVar7;
      uVar12 = *puVar8;
      puVar2 = (undefined4 *)(uVar16 + 0x1d7);
      *puVar2 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,puVar2,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar12);
        }
      }
      local_68 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x2d7);
      uVar12 = Map::GetPrototypeChainRootMap((Map *)&local_68,pIVar15);
      uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xf);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar3;
        if (puVar8 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar8 + 1;
        *puVar8 = uVar12;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
      }
      puVar9 = (ulong *)FUN_01036d60(pIVar15,"AsyncFunction",0x439,0x20,puVar8,0x14c);
      uVar12 = *puVar7;
      uVar16 = *puVar9;
      uVar6 = *(uint *)(uVar12 + 0x2d7);
      *(uint *)(uVar16 + 0x1b) = uVar6;
      if ((uVar6 & 1) != 0) {
        uVar12 = uVar12 & 0xffffffff00000000;
        uVar18 = uVar12 | uVar6;
        uVar12 = uVar12 | (ulong)uVar6 & 0xfffffffffffc0000;
        uVar13 = *(ulong *)(uVar12 + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
          uVar13 = *(ulong *)(uVar12 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x1b,uVar18);
        }
      }
      *(undefined2 *)((*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0xb)) + 0x15) =
           0xffff;
      *(undefined2 *)((*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0xb)) + 0x13) = 1;
      uVar16 = *puVar7;
      uVar12 = *puVar9;
      *(int *)(uVar16 + 0x43) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x43,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x43,uVar12);
        }
      }
      uVar12 = *(ulong *)(pIVar15 + 0x2bc8) & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(pIVar15 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 0xcf);
      if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar3;
        if (puVar10 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar15);
        }
        *(ulong **)pIVar3 = puVar10 + 1;
        *puVar10 = uVar12;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar12);
      }
      JSObject::ForceSetPrototype(puVar9,puVar10);
      JSObject::AddProperty(pIVar15,puVar8,pIVar1,puVar9,3);
      JSFunction::SetPrototype(puVar9,puVar8);
      puVar8 = (ulong *)Factory::NewMap((Factory *)pIVar15,0x418,0x2c,3,0);
      uVar16 = *puVar7;
      uVar12 = *puVar8;
      *(int *)(uVar16 + 0x47) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x47,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x47,uVar12);
        }
      }
      puVar8 = (ulong *)FUN_01036b50(pIVar15,0xd5,pIVar15 + 200,1,0);
      uVar16 = *puVar7;
      uVar12 = *puVar8;
      *(int *)(uVar16 + 0x3b) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x3b,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x3b,uVar12);
        }
      }
      puVar8 = (ulong *)FUN_01036b50(pIVar15,0xd6,pIVar15 + 200,1,0);
      uVar16 = *puVar7;
      uVar12 = *puVar8;
      *(int *)(uVar16 + 0x3f) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,uVar16 + 0x3f,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0x3f,uVar12);
        }
      }
      *(ulong **)pIVar3 = puVar4;
      *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
      if (*(ulong **)(pIVar15 + 0x95a8) != puVar5) {
        *(ulong **)(pIVar15 + 0x95a8) = puVar5;
        HandleScope::DeleteExtensions(pIVar15);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
}

