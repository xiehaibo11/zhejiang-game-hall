
/* v8::internal::Factory::CopyCode(v8::internal::Handle<v8::internal::Code>) */

ulong * __thiscall v8::internal::Factory::CopyCode(Factory *this,ulong *param_2)

{
  Heap *this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  CanonicalHandleScope *this_01;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_68;
  
  this_00 = (Heap *)(this + 0x8850);
  uVar2 = *(undefined4 *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf)) + 7);
  uVar6 = Heap::AllocateRawWithRetryOrFailSlowPath
                    (this_00,(ulong)*(byte *)(*(long *)(this + 0x1d8) + 3) << 2,1,1,0);
  uVar9 = *(ulong *)(this + 0x1d8);
  *(int *)(uVar6 - 1) = (int)uVar9;
  if (((uVar9 & 1) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar6,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(this + 0x95a0);
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar6 = *puVar7;
  }
  *(undefined4 *)(uVar6 + 3) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)(*puVar7 + 7) = uVar2;
  local_68 = *param_2;
  uVar5 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_68,
                     local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1));
  if ((this[0x89b8] != (Factory)0x0) && (*(long *)(this + 0x89c0) == 0)) {
    this[0x93f0] = (Factory)0x1;
  }
  uVar6 = Heap::AllocateRawWithRetryOrFailSlowPath(this_00,uVar5,2,1,0);
  uVar1 = uVar5 + 3;
  if (-1 < (int)uVar5) {
    uVar1 = uVar5;
  }
  puVar16 = (undefined4 *)(*param_2 - 1);
  puVar17 = (undefined4 *)(uVar6 - 1);
  if (6 < uVar5 + 3) {
    uVar9 = (long)((ulong)uVar1 << 0x20) >> 0x22;
    if (0xf < (uint)((int)uVar1 >> 2)) {
      MemCopy(puVar17,puVar16,uVar9 << 2);
      this_01 = *(CanonicalHandleScope **)(this + 0x95b8);
      goto joined_r0x00f779ec;
    }
    puVar11 = puVar16;
    puVar12 = puVar17;
    if ((7 < (uint)((int)uVar1 >> 2)) &&
       ((puVar16 + uVar9 <= puVar17 || (puVar17 + uVar9 <= puVar16)))) {
      uVar13 = uVar9 & 0xfffffffffffffff8;
      puVar14 = (undefined8 *)(uVar6 + 0xf);
      puVar15 = (undefined8 *)(*param_2 + 0xf);
      uVar10 = uVar13;
      do {
        puVar3 = puVar15 + -1;
        uVar18 = puVar15[-2];
        uVar20 = puVar15[1];
        uVar19 = *puVar15;
        uVar10 = uVar10 - 8;
        puVar15 = puVar15 + 4;
        puVar14[-1] = *puVar3;
        puVar14[-2] = uVar18;
        puVar14[1] = uVar20;
        *puVar14 = uVar19;
        puVar14 = puVar14 + 4;
      } while (uVar10 != 0);
      bVar4 = uVar13 == uVar9;
      puVar11 = puVar16 + uVar13;
      uVar9 = uVar9 - uVar13;
      puVar12 = puVar17 + uVar13;
      if (bVar4) goto LAB_00f779c0;
    }
    do {
      uVar9 = uVar9 - 1;
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar9 != 0);
  }
LAB_00f779c0:
  this_01 = *(CanonicalHandleScope **)(this + 0x95b8);
joined_r0x00f779ec:
  if (this_01 == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(this + 0x95a0);
    if (puVar8 == *(ulong **)(this + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar6;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup(this_01,uVar6);
  }
  uVar9 = *puVar8;
  uVar6 = *puVar7;
  puVar11 = (undefined4 *)(uVar9 + 0xf);
  *puVar11 = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar10 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar11,uVar6);
      uVar10 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,puVar11,uVar6);
    }
  }
  local_68 = *puVar8;
  Code::Relocate((Code *)&local_68,(long)puVar17 - (long)puVar16);
  IncrementalMarking::ProcessBlackAllocatedObject(*(IncrementalMarking **)(this + 0x9078),*puVar8);
  Heap_WriteBarrierForCodeSlow(*puVar8);
  if ((this[0x89b8] != (Factory)0x0) && (*(long *)(this + 0x89c0) == 0)) {
    Heap::ProtectUnprotectedMemoryChunks(this_00);
    this[0x93f0] = (Factory)0x0;
  }
  if (FLAG_verify_heap != '\0') {
    local_68 = *puVar8;
    Object::ObjectVerify((Object *)&local_68,(Isolate *)this);
  }
  return puVar8;
}

