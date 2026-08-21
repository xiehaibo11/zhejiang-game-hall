
/* v8::internal::ValueSerializer::WriteJSSet(v8::internal::Handle<v8::internal::JSSet>) */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteJSSet(ValueSerializer *this,ulong *param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong *puVar10;
  void *pvVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  size_t local_68;
  
  pIVar8 = *(Isolate **)this;
  uVar16 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar16;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar16);
    uVar16 = *puVar9;
  }
  iVar5 = *(int *)(uVar16 + 7);
  uVar3 = iVar5 >> 1;
  puVar10 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar3,0);
  uVar16 = *puVar9;
  uVar19 = *(undefined8 *)(*(long *)this + 0xa8);
  iVar20 = (*(int *)(uVar16 + 0xb) >> 1) + (*(int *)(uVar16 + 7) >> 1);
  if (0 < iVar20) {
    iVar13 = 0;
    iVar15 = 3;
    while( true ) {
      iVar20 = iVar20 + -1;
      uVar6 = *(uint *)(uVar16 + (long)(int)((iVar15 + (*(uint *)(uVar16 + 0xf) >> 1)) * 4) + 7);
      if (uVar6 != (uint)uVar19) {
        uVar12 = *puVar10;
        iVar1 = iVar13 + 1;
        lVar17 = uVar12 + (long)(iVar13 << 2);
        *(uint *)(lVar17 + 7) = uVar6;
        iVar13 = iVar1;
        if ((uVar6 & 1) != 0) {
          uVar18 = uVar16 & 0xffffffff00000000 | (ulong)uVar6;
          uVar14 = uVar16 & 0xffffffff00000000 | (ulong)uVar6 & 0xfffffffffffc0000;
          uVar16 = *(ulong *)(uVar14 + 8);
          lVar17 = lVar17 + 7;
          if (((uint)uVar16 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar12,lVar17,uVar18);
            uVar16 = *(ulong *)(uVar14 | 8);
          }
          if (((uVar16 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar12,lVar17,uVar18);
          }
        }
      }
      if (iVar20 == 0) break;
      uVar16 = *puVar9;
      iVar15 = iVar15 + 2;
    }
  }
  lVar17 = *(long *)(this + 0x18);
  uVar16 = lVar17 + 1;
  if (*(ulong *)(this + 0x20) < uVar16) {
    local_68 = 0;
    uVar12 = *(ulong *)(this + 0x20) * 2;
    plVar4 = *(long **)(this + 8);
    if (uVar12 < uVar16 || uVar12 - uVar16 == 0) {
      uVar12 = uVar16;
    }
    sVar2 = uVar12 + 0x40;
    if (plVar4 == (long *)0x0) {
      pvVar11 = realloc(*(void **)(this + 0x10),sVar2);
      local_68 = sVar2;
    }
    else {
      pvVar11 = (void *)(**(code **)(*plVar4 + 0x30))
                                  (plVar4,*(void **)(this + 0x10),sVar2,&local_68);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar11;
      *(size_t *)(this + 0x20) = local_68;
      goto LAB_011421a4;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar11 = *(void **)(this + 0x10);
LAB_011421a4:
    *(ulong *)(this + 0x18) = uVar16;
    *(undefined1 *)((long)pvVar11 + lVar17) = 0x27;
  }
  if (1 < iVar5) {
    iVar20 = 0;
    lVar17 = 0;
    do {
      pIVar8 = *(Isolate **)this;
      uVar16 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + (long)iVar20 + 7);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar16;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar16);
      }
      uVar7 = WriteObject(this,puVar9);
      if (uVar7 < 0x100) {
        return 0;
      }
      if ((uVar7 & 0xff) == 0) {
        return 0;
      }
      lVar17 = lVar17 + 1;
      iVar20 = iVar20 + 4;
    } while (lVar17 < (int)uVar3);
  }
  lVar17 = *(long *)(this + 0x18);
  uVar16 = lVar17 + 1;
  if (*(ulong *)(this + 0x20) < uVar16) {
    local_68 = 0;
    uVar12 = *(ulong *)(this + 0x20) * 2;
    plVar4 = *(long **)(this + 8);
    if (uVar12 < uVar16 || uVar12 - uVar16 == 0) {
      uVar12 = uVar16;
    }
    sVar2 = uVar12 + 0x40;
    if (plVar4 == (long *)0x0) {
      pvVar11 = realloc(*(void **)(this + 0x10),sVar2);
      local_68 = sVar2;
    }
    else {
      pvVar11 = (void *)(**(code **)(*plVar4 + 0x30))
                                  (plVar4,*(void **)(this + 0x10),sVar2,&local_68);
    }
    if (pvVar11 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01142284;
    }
    *(void **)(this + 0x10) = pvVar11;
    *(size_t *)(this + 0x20) = local_68;
  }
  else {
    pvVar11 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar16;
  *(undefined1 *)((long)pvVar11 + lVar17) = 0x2c;
LAB_01142284:
  WriteVarint<unsigned_int>(this,uVar3);
  if (this[0x29] == (ValueSerializer)0x0) {
    uVar19 = 0x101;
  }
  else {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    uVar19 = 0;
  }
  return uVar19;
}

