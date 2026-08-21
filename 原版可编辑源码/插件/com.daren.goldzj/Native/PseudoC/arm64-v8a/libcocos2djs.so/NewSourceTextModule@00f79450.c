
/* v8::internal::Factory::NewSourceTextModule(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

ulong * __thiscall v8::internal::Factory::NewSourceTextModule(Factory *this,ulong *param_2)

{
  Factory *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  Factory *pFVar10;
  Factory *pFVar11;
  Factory *pFVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_68;
  
  uVar3 = *(uint *)(*param_2 + 7);
  pFVar1 = this + 0x95a0;
  pIVar6 = (Isolate *)(*param_2 & 0xffffffff00000000);
  if (((uVar3 & 1) == 0) ||
     (local_68 = (ulong)pIVar6 | (ulong)uVar3,
     *(short *)(((ulong)pIVar6 | 7) + (ulong)*(uint *)(local_68 - 1)) != 0x83)) {
    local_68 = ScopeInfo::Empty(pIVar6);
  }
  uVar7 = ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_68);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pFVar1;
    if (puVar8 == *(ulong **)(this + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  local_68 = *puVar8;
  uVar4 = SourceTextModuleInfo::RegularExportCount((SourceTextModuleInfo *)&local_68);
  puVar9 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::New
                              (this,uVar4,0,0);
  local_68 = *puVar8;
  iVar5 = SourceTextModuleInfo::RegularExportCount((SourceTextModuleInfo *)&local_68);
  if (iVar5 == 0) {
    pFVar10 = this + 0x168;
  }
  else {
    pFVar10 = (Factory *)NewFixedArrayWithFiller(this,0xc,iVar5,*(undefined8 *)(this + 0xa0),0);
  }
  uVar7 = *puVar8;
  uVar15 = uVar7 & 0xffffffff00000000;
  iVar5 = *(int *)((uVar15 | *(uint *)(uVar7 + 0x17)) + 3) >> 1;
  if (iVar5 == 0) {
    pFVar11 = this + 0x168;
  }
  else {
    pFVar11 = (Factory *)NewFixedArrayWithFiller(this,0xc,iVar5,*(undefined8 *)(this + 0xa0),0);
    uVar7 = *puVar8;
    uVar15 = uVar7 & 0xffffffff00000000;
  }
  uVar3 = *(uint *)((uVar15 | *(uint *)(uVar7 + 7)) + 3);
  if ((int)uVar3 < 2) {
    pFVar12 = this + 0x168;
  }
  else {
    pFVar12 = (Factory *)NewFixedArrayWithFiller(this,0xc,uVar3 >> 1,*(undefined8 *)(this + 0xa0),0)
    ;
  }
  puVar8 = (ulong *)ArrayList::New((Isolate *)this,0);
  uVar7 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + 0x290) + 3) << 2,1,1,
                     0);
  uVar15 = *(ulong *)(this + 0x290);
  *(int *)(uVar7 - 1) = (int)uVar15;
  if (((uVar15 & 1) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar7,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pFVar1;
    if (puVar13 == *(ulong **)(this + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar13 + 1;
    *puVar13 = uVar7;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7)
    ;
    uVar7 = *puVar13;
  }
  uVar15 = *param_2;
  *(int *)(uVar7 + 0x17) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar14 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x17,uVar15);
      uVar14 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x17,uVar15);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *puVar9;
  *(int *)(uVar15 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 3,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 3,uVar7);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *(ulong *)pFVar10;
  *(int *)(uVar15 + 0x1b) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x1b,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x1b,uVar7);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *(ulong *)pFVar11;
  *(int *)(uVar15 + 0x1f) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x1f,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x1f,uVar7);
    }
  }
  uVar7 = *puVar13;
  iVar5 = Isolate::GenerateIdentityHash((Isolate *)this,0x3fffffff);
  *(int *)(uVar7 + 7) = iVar5 << 1;
  uVar15 = *puVar13;
  uVar7 = *(ulong *)(this + 0xa0);
  *(int *)(uVar15 + 0xf) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xf,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xf,uVar7);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *(ulong *)pFVar12;
  *(int *)(uVar15 + 0x23) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x23,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x23,uVar7);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *param_2 & 0xffffffff00000000;
  uVar14 = uVar7 | *(uint *)(*param_2 + 0xf);
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x5b) {
    uVar14 = uVar7 | *(uint *)(uVar14 + 0xb);
  }
  *(int *)(uVar15 + 0x27) = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar7 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x27,uVar14);
      uVar7 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x27,uVar14);
    }
  }
  *(undefined4 *)(*puVar13 + 0xb) = 0;
  uVar15 = *puVar13;
  uVar7 = *(ulong *)(this + 0xa8);
  *(int *)(uVar15 + 0x13) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x13,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x13,uVar7);
    }
  }
  uVar15 = *puVar13;
  uVar7 = *(ulong *)(this + 0xa8);
  *(int *)(uVar15 + 0x2b) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x2b,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x2b,uVar7);
    }
  }
  *(undefined4 *)(*puVar13 + 0x37) = 0xfffffffe;
  *(undefined4 *)(*puVar13 + 0x3b) = 0xfffffffe;
  uVar15 = *puVar13;
  uVar7 = *(ulong *)(this + 0xa0);
  *(int *)(uVar15 + 0x33) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x33,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x33,uVar7);
    }
  }
  *(undefined4 *)(*puVar13 + 0x43) = 0;
  uVar3 = *(int *)(*puVar13 + 0x43) >> 1;
  uVar2 = uVar3 | 1;
  if ((*(uint *)(*param_2 + 0x1b) & 0x1f) != 2) {
    uVar2 = uVar3 & 0x7ffffffe;
  }
  *(int *)(*puVar13 + 0x43) = uVar2 << 1;
  *(uint *)(*puVar13 + 0x43) = *(uint *)(*puVar13 + 0x43) & 0xfffffffa;
  uVar15 = *puVar13;
  uVar7 = *puVar8;
  *(int *)(uVar15 + 0x2f) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x2f,uVar7);
      uVar14 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x2f,uVar7);
    }
  }
  *(undefined4 *)(*puVar13 + 0x3f) = 0;
  return puVar13;
}

