
/* v8::internal::Factory::NewJSGlobalObject(v8::internal::Handle<v8::internal::JSFunction>) */

ulong * __thiscall v8::internal::Factory::NewJSGlobalObject(Factory *this,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  Logger *this_00;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar11;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar11)
    ;
    uVar11 = *puVar4;
  }
  puVar5 = (ulong *)BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                    ::New(this,(*(uint *)(uVar11 + 0xb) >> 9 & 0x7fe) + 0x40,0,0);
  uVar11 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x17);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar11;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar11)
    ;
  }
  uVar11 = *puVar4;
  uVar10 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar10 != 0) {
    lVar12 = 0;
    do {
      lVar1 = lVar12 + *puVar6;
      uVar2 = *(uint *)(lVar1 + 0x13);
      uVar11 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + 0xf);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(this + 0x95a0);
        if (puVar7 == *(ulong **)(this + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar11;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar11);
      }
      puVar8 = (ulong *)NewPropertyCell(this,puVar7,1);
      uVar11 = *puVar6;
      uVar13 = *puVar8;
      uVar3 = *(uint *)(lVar12 + uVar11 + 0x17);
      *(uint *)(uVar13 + 0xb) = uVar3;
      if ((uVar3 & 1) != 0) {
        uVar11 = uVar11 & 0xffffffff00000000;
        uVar14 = uVar11 | uVar3;
        uVar11 = uVar11 | (ulong)uVar3 & 0xfffffffffffc0000;
        uVar9 = *(ulong *)(uVar11 + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar14);
          uVar9 = *(ulong *)(uVar11 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar14);
        }
      }
      BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Add
                (this,puVar5,puVar7,puVar8,uVar2 >> 1 & 0x38 | 0xc1,0);
      lVar12 = lVar12 + 0xc;
    } while (uVar10 * 0xc != lVar12);
    uVar11 = *puVar4;
  }
  uVar11 = Heap::AllocateRawWithRetryOrFailSlowPath
                     ((Heap *)(this + 0x8850),(ulong)*(byte *)(uVar11 + 3) << 2,1,1,0);
  uVar10 = *puVar4;
  *(int *)(uVar11 - 1) = (int)uVar10;
  if (((uVar10 & 1) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar11,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar11;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar11)
    ;
  }
  InitializeJSObjectFromMap(this,puVar6,puVar5,puVar4);
  puVar4 = (ulong *)Map::CopyDropDescriptors(this,puVar4);
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x10000000;
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x2200000;
  this_00 = *(Logger **)(this + 0x9558);
  uVar11 = Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    Logger::MapDetails(this_00,*puVar4);
  }
  uVar10 = *puVar6;
  uVar11 = *puVar5;
  *(int *)(uVar10 + 3) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar11);
    }
  }
  uVar11 = *puVar4;
  uVar10 = *puVar6;
  if ((int)uVar11 == 0) {
    *(undefined4 *)(uVar10 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar10 & 0xffffffff00000000 | 0x8850),uVar10,uVar11);
    *(int *)(uVar10 - 1) = (int)uVar11;
    if (((uVar11 & 1) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar10,0,uVar11);
    }
  }
  return puVar6;
}

