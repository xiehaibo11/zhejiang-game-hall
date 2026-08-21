
/* v8::internal::ValueSerializer::WriteJSMap(v8::internal::Handle<v8::internal::JSMap>) */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteJSMap(ValueSerializer *this,ulong *param_2)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  int iVar4;
  ushort uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  size_t local_68;
  
  pIVar6 = *(Isolate **)this;
  uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar13;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar13);
    uVar13 = *puVar7;
  }
  uVar13 = (ulong)*(uint *)(uVar13 + 7) & 0xfffffffe;
  puVar8 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar13,0);
  uVar10 = *puVar7;
  uVar16 = *(undefined8 *)(*(long *)this + 0xa8);
  iVar17 = (*(int *)(uVar10 + 0xb) >> 1) + (*(int *)(uVar10 + 7) >> 1);
  if (0 < iVar17) {
    iVar19 = 0;
    iVar12 = 3;
    while( true ) {
      iVar17 = iVar17 + -1;
      uVar18 = *(uint *)(uVar10 + (long)(int)((iVar12 + (*(uint *)(uVar10 + 0xf) >> 1)) * 4) + 7);
      if (uVar18 != (uint)uVar16) {
        uVar14 = *puVar8;
        iVar4 = iVar19 * 4;
        lVar1 = uVar14 + (long)iVar4;
        *(uint *)(lVar1 + 7) = uVar18;
        if ((uVar18 & 1) != 0) {
          uVar15 = uVar10 & 0xffffffff00000000 | (ulong)uVar18;
          uVar11 = uVar10 & 0xffffffff00000000 | (ulong)uVar18 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar11 + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,lVar1,uVar15);
            uVar10 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar15);
          }
        }
        uVar10 = *puVar7;
        uVar14 = *puVar8;
        iVar19 = iVar19 + 2;
        uVar18 = *(uint *)(uVar10 + (long)(int)((iVar12 + (*(uint *)(uVar10 + 0xf) >> 1)) * 4 + 4) +
                          7);
        lVar1 = uVar14 + (long)(iVar4 + 4);
        *(uint *)(lVar1 + 7) = uVar18;
        if ((uVar18 & 1) != 0) {
          uVar15 = uVar10 & 0xffffffff00000000 | (ulong)uVar18;
          uVar11 = uVar10 & 0xffffffff00000000 | (ulong)uVar18 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar11 + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,lVar1,uVar15);
            uVar10 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar15);
          }
        }
      }
      if (iVar17 == 0) break;
      uVar10 = *puVar7;
      iVar12 = iVar12 + 3;
    }
  }
  lVar1 = *(long *)(this + 0x18);
  uVar10 = lVar1 + 1;
  uVar18 = (uint)uVar13;
  if (*(ulong *)(this + 0x20) < uVar10) {
    local_68 = 0;
    uVar14 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
      uVar14 = uVar10;
    }
    sVar2 = uVar14 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar9 = realloc(*(void **)(this + 0x10),sVar2);
      local_68 = sVar2;
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,*(void **)(this + 0x10),sVar2,&local_68)
      ;
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar9;
      *(size_t *)(this + 0x20) = local_68;
      goto LAB_01141de4;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar9 = *(void **)(this + 0x10);
LAB_01141de4:
    *(ulong *)(this + 0x18) = uVar10;
    *(undefined1 *)((long)pvVar9 + lVar1) = 0x3b;
  }
  if (0 < (int)uVar18) {
    iVar17 = 0;
    do {
      pIVar6 = *(Isolate **)this;
      uVar10 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + (long)iVar17 + 7);
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar10);
      }
      uVar5 = WriteObject(this,puVar7);
      if (uVar5 < 0x100) {
        return 0;
      }
      if ((uVar5 & 0xff) == 0) {
        return 0;
      }
      uVar13 = uVar13 - 1;
      iVar17 = iVar17 + 4;
    } while (uVar13 != 0);
  }
  lVar1 = *(long *)(this + 0x18);
  uVar13 = lVar1 + 1;
  if (*(ulong *)(this + 0x20) < uVar13) {
    local_68 = 0;
    uVar10 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
      uVar10 = uVar13;
    }
    sVar2 = uVar10 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar9 = realloc(*(void **)(this + 0x10),sVar2);
      local_68 = sVar2;
    }
    else {
      pvVar9 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,*(void **)(this + 0x10),sVar2,&local_68)
      ;
    }
    if (pvVar9 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01141eb8;
    }
    *(void **)(this + 0x10) = pvVar9;
    *(size_t *)(this + 0x20) = local_68;
  }
  else {
    pvVar9 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar13;
  *(undefined1 *)((long)pvVar9 + lVar1) = 0x3a;
LAB_01141eb8:
  WriteVarint<unsigned_int>(this,uVar18);
  if (this[0x29] == (ValueSerializer)0x0) {
    uVar16 = 0x101;
  }
  else {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    uVar16 = 0;
  }
  return uVar16;
}

