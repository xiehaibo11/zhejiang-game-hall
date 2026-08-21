
/* v8::internal::Factory::CodeBuilder::BuildInternal(bool) */

ulong * __thiscall v8::internal::Factory::CodeBuilder::BuildInternal(CodeBuilder *this,bool param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  Heap *this_00;
  uint uVar3;
  CodeBuilder CVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  void *__s;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong local_68;
  
  pIVar8 = *(Isolate **)this;
  puVar5 = (ulong *)NewByteArray((Factory *)pIVar8,*(undefined4 *)(*(long *)(this + 8) + 0x34),1);
  if ((this[0x39] == (CodeBuilder)0x0) || ((*(uint *)(this + 0x24) | 0x10) != 0x10)) {
    uVar10 = 4;
    if (this[0x39] == (CodeBuilder)0x0) {
      uVar10 = 1;
    }
    uVar7 = Factory::New((Factory *)pIVar8,pIVar8 + 0x1d8,uVar10);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
      uVar7 = *puVar6;
    }
    *(undefined4 *)(uVar7 + 3) = *(undefined4 *)(pIVar8 + 0xa0);
    *(undefined4 *)(*puVar6 + 7) = 0;
    *(undefined4 *)(*puVar6 + 7) = *(undefined4 *)(this + 0x24);
    lVar11 = *(long *)this;
  }
  else {
    lVar11 = *(long *)this;
    puVar6 = (ulong *)(lVar11 + 0x468);
    if (*(uint *)(this + 0x24) != 0) {
      puVar6 = (ulong *)(lVar11 + 0x470);
    }
  }
  lVar13 = *(long *)(this + 8);
  pcVar2 = (char *)(lVar11 + 0x89b8);
  this_00 = (Heap *)(lVar11 + 0x8850);
  iVar14 = *(int *)(lVar13 + 0xc);
  if (*(long *)(lVar13 + 0x38) != 0) {
    iVar14 = (*(int *)(lVar13 + 0xc) + 0xfU & 0xfffffff8) + *(int *)(lVar13 + 0x40);
  }
  uVar3 = (iVar14 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0;
  if ((*pcVar2 != '\0') && (*(long *)(lVar11 + 0x89c0) == 0)) {
    *(undefined1 *)(lVar11 + 0x93f0) = 1;
  }
  uVar10 = 4;
  if (this[0x38] != (CodeBuilder)0x0) {
    uVar10 = 2;
  }
  if (param_1) {
    uVar7 = Heap::AllocateRawWithRetryOrFailSlowPath();
    CVar4 = this[0x3a];
  }
  else {
    uVar7 = Heap::AllocateRawWithLightRetrySlowPath(this_00,uVar3,uVar10,1,0);
    if ((int)uVar7 == 0) {
      if ((*pcVar2 == '\0') || (*(long *)(lVar11 + 0x89c0) != 0)) {
        return (ulong *)0x0;
      }
      Heap::ProtectUnprotectedMemoryChunks(this_00);
      puVar9 = (ulong *)0x0;
      goto LAB_00f6b47c;
    }
    CVar4 = this[0x3a];
  }
  if (CVar4 == (CodeBuilder)0x0) {
    uVar7 = Heap::EnsureImmovableCode(this_00,uVar7,uVar3);
  }
  *(undefined4 *)(uVar7 - 1) = *(undefined4 *)(pIVar8 + 0x120);
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar7;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar7);
  }
  lVar13 = *(long *)(*(long *)(this + 8) + 0x38);
  *(undefined4 *)(*puVar9 + 0x13) = *(undefined4 *)(*(long *)(this + 8) + 0xc);
  uVar15 = *puVar9;
  uVar7 = *puVar5;
  *(int *)(uVar15 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 3,uVar7);
      uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 3,uVar7);
    }
  }
  if (0xfffffe < *(uint *)(this + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= stack_slots && stack_slots < StackSlotsField::kMax");
  }
  *(uint *)(*puVar9 + 0x17) =
       (uint)(lVar13 != 0) | *(uint *)(this + 0x3c) << 7 | *(int *)(this + 0x10) << 1 |
       (uint)(byte)this[0x3b] << 6;
  *(undefined4 *)(*puVar9 + 0x27) = *(undefined4 *)(this + 0x20);
  uVar15 = *puVar9;
  uVar7 = *puVar6;
  puVar1 = (undefined4 *)(uVar15 + 0xf);
  *puVar1 = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,puVar1,uVar7);
      uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,puVar1,uVar7);
    }
  }
  uVar15 = *puVar9;
  uVar7 = **(ulong **)(this + 0x30);
  *(int *)(uVar15 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 7,uVar7);
      uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 7,uVar7);
    }
  }
  uVar15 = *puVar9;
  uVar7 = **(ulong **)(this + 0x28);
  *(int *)(uVar15 + 0xb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xb,uVar7);
      uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xb,uVar7);
    }
  }
  *(undefined4 *)(*puVar9 + 0x1b) = *(undefined4 *)(*(long *)(this + 8) + 0x10);
  *(undefined4 *)(*puVar9 + 0x1f) = *(undefined4 *)(*(long *)(this + 8) + 0x18);
  *(undefined4 *)(*puVar9 + 0x23) = *(undefined4 *)(*(long *)(this + 8) + 0x28);
  puVar5 = *(ulong **)(this + 0x18);
  if (puVar5 != (ulong *)0x0) {
    if (*(BuiltinsConstantsTableBuilder **)(*(long *)this + 0xc678) !=
        (BuiltinsConstantsTableBuilder *)0x0) {
      BuiltinsConstantsTableBuilder::PatchSelfReference
                (*(BuiltinsConstantsTableBuilder **)(*(long *)this + 0xc678),puVar5,puVar9);
    }
    *puVar5 = *puVar9;
  }
  local_68 = *puVar9;
  Code::CopyFromNoFlush((Code *)&local_68,this_00,*(CodeDesc **)(this + 8));
  uVar7 = *puVar9;
  *(undefined8 *)(uVar7 + 0x33) = 0;
  *(undefined8 *)(uVar7 + 0x2b) = 0;
  *(undefined4 *)(uVar7 + 0x3b) = 0;
  if ((*(byte *)(uVar7 + 0x17) & 1) == 0) {
    iVar14 = *(int *)(uVar7 + 0x13);
    __s = (void *)(uVar7 + (long)iVar14 + 0x3f);
  }
  else {
    uVar3 = *(int *)(uVar7 + 0x13) + 0x47U & 0xfffffff8;
    lVar13 = uVar7 + (long)(int)uVar3;
    iVar14 = (int)*(undefined8 *)(lVar13 + -1);
    __s = (void *)(lVar13 + iVar14 + 7);
    iVar14 = iVar14 + uVar3 + -0x38;
  }
  memset(__s,0,uVar7 + ~(ulong)__s + (long)(int)((iVar14 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0));
  if (FLAG_verify_heap != '\0') {
    local_68 = *puVar9;
    Object::ObjectVerify((Object *)&local_68,*(Isolate **)this);
  }
  local_68 = *puVar9;
  Code::FlushICache((Code *)&local_68);
  if (*pcVar2 == '\0') {
    return puVar9;
  }
  if (*(long *)(lVar11 + 0x89c0) != 0) {
    return puVar9;
  }
  Heap::ProtectUnprotectedMemoryChunks(this_00);
LAB_00f6b47c:
  *(undefined1 *)(lVar11 + 0x93f0) = 0;
  return puVar9;
}

