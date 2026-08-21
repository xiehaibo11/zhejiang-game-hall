
/* v8::internal::ScopeInfo::Create(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::Scope*, v8::internal::MaybeHandle<v8::internal::ScopeInfo>) */

ulong * v8::internal::ScopeInfo::Create(Factory *param_1,Zone *param_2,long param_3,ulong *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ushort uVar33;
  long *plVar34;
  long lVar35;
  uint uVar36;
  ushort uVar37;
  long lVar38;
  int iVar39;
  long *plVar40;
  uint local_a0;
  uint local_88;
  int local_84;
  int local_64;
  
  plVar34 = (long *)(param_3 + 0x38);
  if (plVar34 == *(long **)(param_3 + 0x40)) {
    iVar32 = 0;
    iVar39 = 0;
  }
  else {
    iVar39 = 0;
    iVar32 = 0;
    plVar40 = plVar34;
    do {
      uVar33 = *(ushort *)(*plVar40 + 0x28) >> 7 & 7;
      if (uVar33 == 6) {
LAB_0112840c:
        iVar39 = iVar39 + 1;
      }
      else if (uVar33 == 5) {
        iVar32 = iVar32 + 1;
      }
      else if (uVar33 == 3) goto LAB_0112840c;
      plVar40 = (long *)(*plVar40 + 0x18);
    } while (plVar40 != *(long **)(param_3 + 0x40));
  }
  if (((*(byte *)(param_3 + 0x82) & 1) == 0) ||
     (lVar13 = Scope::AsDeclarationScope(), (*(byte *)(lVar13 + 0x84) >> 4 & 1) == 0)) {
    local_64 = 0;
    if ((*(byte *)(param_3 + 0x82) & 1) == 0) goto LAB_01128478;
LAB_011284bc:
    lVar13 = Scope::AsDeclarationScope();
    bVar9 = *(long *)(lVar13 + 0xc0) != 0;
  }
  else {
    lVar13 = Scope::AsDeclarationScope();
    uVar33 = *(ushort *)(*(long *)(lVar13 + 0xb0) + 0x28);
    if ((uVar33 >> 0xb & 1) == 0) {
      local_64 = 3;
    }
    else {
      local_64 = 1;
      if ((uVar33 & 0x380) == 0x180) {
        local_64 = 2;
        iVar39 = iVar39 + 1;
      }
    }
    if ((*(byte *)(param_3 + 0x82) & 1) != 0) goto LAB_011284bc;
LAB_01128478:
    bVar9 = false;
  }
  bVar2 = *(byte *)(param_3 + 0x80);
  if (bVar2 == 2) {
    lVar13 = Scope::AsDeclarationScope();
    if (*(long *)(lVar13 + 0xb8) != 0) {
      lVar13 = Scope::AsDeclarationScope();
      uVar33 = *(ushort *)(*(long *)(lVar13 + 0xb8) + 0x28);
      if ((uVar33 >> 0xb & 1) != 0) {
        iVar19 = 1;
        if ((uVar33 & 0x380) == 0x180) {
          iVar19 = 2;
        }
        cVar3 = *(char *)(param_3 + 0x80);
        goto joined_r0x01128530;
      }
    }
    iVar19 = 3;
    if (*(char *)(param_3 + 0x80) != '\0') goto LAB_01128534;
LAB_01128b94:
    lVar13 = Scope::AsClassScope();
    uVar20 = *(ulong *)(lVar13 + 0x88) & 0xfffffffffffffff8;
    lVar13 = 0;
    if (uVar20 != 0) {
      lVar13 = *(long *)(uVar20 + 0x28);
    }
    bVar12 = lVar13 != 0;
    if (*(char *)(param_3 + 0x80) == '\0') {
      lVar13 = Scope::AsClassScope();
      if ((*(char *)(lVar13 + 0x9b) != '\0') || (*(char *)(lVar13 + 0x99) != '\0')) {
        local_88 = 1;
        goto LAB_0112853c;
      }
      if (*(char *)(lVar13 + 0x98) != '\0') {
        local_88 = *(byte *)(lVar13 + 0x81) >> 6 & 1;
        goto LAB_0112853c;
      }
    }
  }
  else {
    iVar19 = 3;
    if (1 < bVar2 - 3) {
      iVar19 = 3;
      if (bVar2 != 1) {
        iVar19 = 0;
      }
      cVar3 = *(char *)(param_3 + 0x80);
joined_r0x01128530:
      if (cVar3 == '\0') goto LAB_01128b94;
    }
LAB_01128534:
    bVar12 = false;
  }
  local_88 = 0;
LAB_0112853c:
  cVar3 = *(char *)(param_3 + 0x80);
  if ((*(byte *)(param_3 + 0x82) & 1) == 0) {
    local_a0 = 0;
    cVar4 = cVar3;
  }
  else {
    lVar13 = Scope::AsDeclarationScope();
    local_a0 = *(uint *)(lVar13 + 0x88);
    cVar4 = *(char *)(param_3 + 0x80);
  }
  iVar7 = iVar39 * 2;
  iVar24 = iVar32 * 3 + 2;
  local_84 = iVar7 + 3;
  if (cVar4 != '\x03') {
    iVar24 = 0;
  }
  iVar26 = local_84;
  if (param_4 != (ulong *)0x0) {
    iVar26 = iVar7 + 4;
  }
  if (local_64 - 1U < 2) {
    iVar26 = iVar26 + 1;
  }
  if (bVar2 == 2) {
    iVar26 = iVar26 + 1;
  }
  puVar14 = (ulong *)Factory::NewScopeInfo
                               (param_1,iVar26 + local_88 + (uint)(iVar19 != 0) * 2 +
                                        (uint)((byte)(cVar3 - 1U) < 4) * 2 + iVar24,1);
  uVar20 = *puVar14;
  uVar37 = 0;
  uVar21 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
  uVar33 = 0;
  bVar10 = (uVar21 & 0x18) == 0;
  bVar11 = (uVar21 & 0x40000) != 0;
  bVar8 = bVar11 || bVar10;
  if (*(char *)(param_3 + 0x80) == '\x02') {
    lVar13 = Scope::AsDeclarationScope();
    uVar33 = *(ushort *)(lVar13 + 0x83) & 1;
    uVar37 = *(ushort *)(lVar13 + 0x83) >> 1 & 1;
  }
  uVar6 = *(ushort *)(param_3 + 0x81);
  if ((uVar6 >> 8 & 1) == 0) {
    uVar36 = 0;
    uVar18 = 0;
  }
  else {
    lVar13 = Scope::AsDeclarationScope();
    uVar36 = (uint)*(byte *)(lVar13 + 0x85);
    lVar13 = Scope::AsDeclarationScope();
    uVar6 = *(ushort *)(param_3 + 0x81);
    uVar18 = (*(ushort *)(lVar13 + 0x81) & 4) << 2;
  }
  uVar28 = 0x200;
  if (!bVar12) {
    uVar28 = 0;
  }
  bVar5 = *(byte *)(param_3 + 0x80);
  uVar29 = 0x400;
  if (local_88 == 0) {
    uVar29 = 0;
  }
  uVar25 = 0;
  uVar30 = 0x800;
  if (!bVar9) {
    uVar30 = 0;
  }
  uVar31 = 0x8000;
  if (uVar37 == 0) {
    uVar31 = 0;
  }
  uVar16 = 0x10000;
  if (uVar33 == 0) {
    uVar16 = 0;
  }
  uVar23 = (uint)uVar6;
  if (((bVar5 != 2) && (bVar5 != 4)) &&
     (uVar25 = 0x1000000, (*(byte *)(*(long *)(param_3 + 8) + 0x81) & 1) != 0 || (uVar6 & 1) == 0))
  {
    uVar25 = 0;
  }
  if (((bVar5 | 4) == 7) || ((uVar6 >> 2 & 1) != 0)) {
    uVar17 = 0x4000000;
  }
  else {
    uVar17 = 0;
  }
  *(uint *)(uVar20 + 7) =
       (local_64 << 7 | (uint)(param_4 != (ulong *)0x0) << 0x16 | uVar30 | (uint)(bVar2 == 2) << 0xe
        | uVar28 | iVar19 << 0xc | uVar29 | uVar31 | uVar16 | (uint)bVar5 | uVar18 | uVar36 << 0x11
        | (uVar6 & 1) << 5 | uVar6 >> 2 & 0x40 | (uVar23 & 0x20) << 0x12 | (uVar23 & 0x200) << 0x10
        | uVar25 | uVar17) << 1 | (uVar23 & 0x800) << 0x11;
  *(uint *)(uVar20 + 0xb) = local_a0 << 1;
  lVar13 = uVar20 + 7;
  *(int *)(uVar20 + 0xf) = iVar7;
  if (*(int *)(uVar20 + 3) < 2) {
    uVar18 = 0;
    iVar24 = 5;
  }
  else {
    iVar24 = (*(int *)(uVar20 + 0xf) >> 1) + (*(int *)(uVar20 + 0xf) >> 1) +
             (*(uint *)(uVar20 + 7) >> 0xb & 1) + (uint)((*(uint *)(uVar20 + 7) & 0x6000) != 0) * 2
             + (*(uint *)(uVar20 + 7) >> 0xf & 1);
    if ((*(uint *)(uVar20 + 7) >> 8 & 3) - 1 < 2) {
      iVar24 = iVar24 + 1;
    }
    uVar18 = *(uint *)(uVar20 + 7) >> 0x17 & 1;
    iVar24 = iVar24 + (uint)(((*(uint *)(uVar20 + 7) >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 5;
  }
  plVar40 = *(long **)(param_3 + 0x40);
  pbVar27 = (byte *)(uVar20 & 0xfffffffffffc0000 | 8);
  iVar39 = iVar39 + 3;
  if (plVar34 != plVar40) {
    iVar24 = uVar18 + iVar24;
    do {
      lVar38 = *plVar34;
      uVar33 = *(ushort *)(lVar38 + 0x28);
      uVar37 = uVar33 >> 7 & 7;
      if (uVar37 == 6) {
LAB_011288f0:
        if (((*(byte *)(param_3 + 0x80) | 4) == 7) || ((*(byte *)(param_3 + 0x81) >> 2 & 1) != 0)) {
          iVar26 = 3;
        }
        else {
          iVar26 = 2;
        }
        iVar26 = *(int *)(lVar38 + 0x20) - iVar26;
        uVar21 = *(ulong *)**(undefined8 **)(lVar38 + 8);
        puVar1 = (undefined4 *)(lVar13 + (iVar26 * 4 + 0xc));
        *puVar1 = (int)uVar21;
        if ((bVar8) && ((uVar21 & 1) != 0)) {
          uVar22 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar22 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar20,puVar1,uVar21);
            uVar22 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar22 & 0x18) != 0) && ((*pbVar27 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar21);
          }
        }
        *(uint *)(lVar13 + (iVar26 + iVar39) * 4) =
             (uVar33 >> 8 & 0x10 | uVar33 & 0xf | uVar33 >> 9 & 0x20) << 1 |
             (uint)(uVar33 >> 0xf) << 0x17 | 0x7fff80;
      }
      else if (uVar37 == 5) {
        iVar26 = iVar24 * 4;
        puVar1 = (undefined4 *)(lVar13 + iVar26);
        uVar21 = *(ulong *)**(undefined8 **)(lVar38 + 8);
        *puVar1 = (int)uVar21;
        if ((bVar8) && ((uVar21 & 1) != 0)) {
          uVar22 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar22 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar20,puVar1,uVar21);
            uVar22 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar22 & 0x18) != 0) && ((*pbVar27 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar21);
          }
        }
        iVar24 = iVar24 + 3;
        *(int *)(lVar13 + (iVar26 + 4)) = *(int *)(lVar38 + 0x20) << 1;
        uVar33 = *(ushort *)(lVar38 + 0x28);
        *(uint *)(lVar13 + (iVar26 + 8)) =
             ((byte)(uVar33 >> 8) & 0x10 | uVar33 & 0xf | uVar33 >> 9 & 0x20) << 1 |
             (uint)uVar33 << 8 | 0x7fff80;
      }
      else if (uVar37 == 3) goto LAB_011288f0;
      plVar34 = (long *)(*plVar34 + 0x18);
    } while (plVar34 != plVar40);
  }
  if ((*(byte *)(param_3 + 0x82) & 1) != 0) {
    lVar38 = Scope::AsDeclarationScope();
    if (0 < (int)local_a0) {
      lVar35 = 0;
      uVar18 = 0;
      do {
        lVar38 = *(long *)(*(long *)(lVar38 + 0x90) + lVar35);
        if ((*(ushort *)(lVar38 + 0x28) & 0x380) == 0x180) {
          if (((*(byte *)(param_3 + 0x80) | 4) == 7) || ((*(byte *)(param_3 + 0x81) >> 2 & 1) != 0))
          {
            iVar24 = -3;
          }
          else {
            iVar24 = -2;
          }
          lVar38 = (long)((*(int *)(lVar38 + 0x20) + iVar39 + iVar24) * 4);
          *(uint *)(lVar13 + lVar38) = *(uint *)(lVar13 + lVar38) & 0xff80007e | uVar18;
        }
        lVar38 = Scope::AsDeclarationScope();
        lVar35 = lVar35 + 8;
        uVar18 = uVar18 + 0x80;
      } while ((ulong)local_a0 * 8 - lVar35 != 0);
    }
    if ((*(byte *)(lVar38 + 0x84) >> 4 & 1) != 0) {
      lVar38 = Scope::AsDeclarationScope();
      lVar38 = *(long *)(lVar38 + 0xb0);
      uVar33 = *(ushort *)(lVar38 + 0x28);
      if ((uVar33 & 0x380) == 0x180) {
        if (((*(byte *)(param_3 + 0x80) | 4) == 7) || ((*(byte *)(param_3 + 0x81) >> 2 & 1) != 0)) {
          iVar24 = 3;
        }
        else {
          iVar24 = 2;
        }
        iVar24 = *(int *)(lVar38 + 0x20) - iVar24;
        uVar21 = *(ulong *)**(undefined8 **)(lVar38 + 8);
        puVar1 = (undefined4 *)(lVar13 + (iVar24 * 4 + 0xc));
        *puVar1 = (int)uVar21;
        if ((bVar8) && ((uVar21 & 1) != 0)) {
          uVar22 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar22 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar20,puVar1,uVar21);
            uVar22 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar22 & 0x18) != 0) && ((*pbVar27 & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar21);
          }
        }
        *(uint *)(lVar13 + (iVar24 + iVar39) * 4) =
             (uVar33 >> 8 & 0x10 | uVar33 & 0xf | uVar33 >> 9 & 0x20) << 1 |
             (uint)(uVar33 >> 0xf) << 0x17 | 0x7fff80;
      }
    }
  }
  if (local_88 != 0) {
    lVar38 = Scope::AsClassScope();
    iVar39 = local_84 * 4;
    local_84 = iVar7 + 4;
    *(int *)(lVar13 + iVar39) = *(int *)(*(long *)(lVar38 + 0x90) + 0x20) << 1;
  }
  if (local_64 - 1U < 2) {
    lVar38 = Scope::AsDeclarationScope();
    iVar39 = local_84 << 2;
    local_84 = local_84 + 1;
    *(int *)(lVar13 + iVar39) = *(int *)(*(long *)(lVar38 + 0xb0) + 0x20) << 1;
  }
  if (iVar19 != 0) {
    lVar38 = Scope::AsDeclarationScope();
    lVar38 = *(long *)(lVar38 + 0xb8);
    if (lVar38 == 0) {
      uVar21 = 0;
      iVar39 = -2;
    }
    else {
      iVar39 = *(int *)(lVar38 + 0x20) << 1;
      uVar21 = *(ulong *)**(undefined8 **)(lVar38 + 8);
    }
    iVar19 = local_84 * 4;
    puVar1 = (undefined4 *)(lVar13 + iVar19);
    *puVar1 = (int)uVar21;
    if ((bVar8) && ((uVar21 & 1) != 0)) {
      uVar22 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar22 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar20,puVar1,uVar21);
        uVar22 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar22 & 0x18) != 0) && ((*pbVar27 & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar21);
      }
    }
    local_84 = local_84 + 2;
    *(int *)(lVar13 + (iVar19 + 4)) = iVar39;
  }
  local_84 = local_84 + (uint)(bVar2 == 2);
  if ((byte)(cVar3 - 1U) < 4) {
    iVar39 = local_84 * 4;
    local_84 = local_84 + 2;
    *(int *)(lVar13 + iVar39) = *(int *)(param_3 + 0x70) << 1;
    *(int *)(lVar13 + (iVar39 + 4)) = *(int *)(param_3 + 0x74) << 1;
  }
  iVar39 = local_84;
  if (param_4 != (ulong *)0x0) {
    uVar21 = *param_4;
    iVar39 = local_84 + 1;
    puVar1 = (undefined4 *)(lVar13 + (local_84 << 2));
    *puVar1 = (int)uVar21;
    if ((bVar11 || bVar10) && ((uVar21 & 1) != 0)) {
      uVar22 = *(ulong *)((uVar21 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar22 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar20,puVar1,uVar21);
        uVar22 = *(ulong *)(uVar21 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar22 & 0x18) != 0) && ((*pbVar27 & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar21);
      }
    }
  }
  if (*(char *)(param_3 + 0x80) == '\x03') {
    lVar13 = Scope::AsModuleScope();
    puVar15 = (ulong *)SourceTextModuleInfo::New
                                 ((Isolate *)param_1,param_2,
                                  *(SourceTextModuleDescriptor **)(lVar13 + 0xe0));
    uVar21 = *puVar14;
    uVar20 = *puVar15;
    lVar13 = uVar21 + (long)(iVar39 * 4);
    *(int *)(lVar13 + 7) = (int)uVar20;
    if ((uVar20 & 1) != 0) {
      uVar22 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
      lVar13 = lVar13 + 7;
      if (((uint)uVar22 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar21,lVar13,uVar20);
        uVar22 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar22 & 0x18) != 0) && ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar21,lVar13,uVar20);
      }
    }
    *(int *)(*puVar14 + (long)(iVar39 * 4 + 4) + 7) = iVar32 << 1;
  }
  return puVar14;
}

