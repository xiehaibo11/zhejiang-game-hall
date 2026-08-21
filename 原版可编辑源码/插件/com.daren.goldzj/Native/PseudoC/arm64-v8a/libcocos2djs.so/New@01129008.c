
/* v8::internal::SourceTextModuleInfo::New(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::SourceTextModuleDescriptor*) */

ulong * v8::internal::SourceTextModuleInfo::New
                  (Isolate *param_1,Zone *param_2,SourceTextModuleDescriptor *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  SourceTextModuleDescriptor *pSVar11;
  ulong uVar12;
  SourceTextModuleDescriptor *pSVar13;
  long lVar14;
  SourceTextModuleDescriptor *pSVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar2,0);
  puVar5 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar2,0);
  pSVar15 = *(SourceTextModuleDescriptor **)param_3;
  while (pSVar15 != param_3 + 8) {
    uVar18 = *puVar4;
    uVar17 = *(ulong *)**(undefined8 **)(pSVar15 + 0x20);
    lVar14 = uVar18 + (long)(*(int *)(pSVar15 + 0x28) << 2);
    *(int *)(lVar14 + 7) = (int)uVar17;
    if ((uVar17 & 1) != 0) {
      uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
      lVar14 = lVar14 + 7;
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar18,lVar14,uVar17);
        uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar18,lVar14,uVar17);
      }
    }
    *(int *)(*puVar5 + (long)(*(int *)(pSVar15 + 0x28) << 2) + 7) = *(int *)(pSVar15 + 0x2c) << 1;
    pSVar11 = *(SourceTextModuleDescriptor **)(pSVar15 + 8);
    if (*(SourceTextModuleDescriptor **)(pSVar15 + 8) == (SourceTextModuleDescriptor *)0x0) {
      pSVar11 = pSVar15 + 0x10;
      bVar3 = *(SourceTextModuleDescriptor **)*(SourceTextModuleDescriptor **)pSVar11 != pSVar15;
      pSVar15 = *(SourceTextModuleDescriptor **)pSVar11;
      if (bVar3) {
        do {
          lVar14 = *(long *)pSVar11;
          pSVar11 = (SourceTextModuleDescriptor *)(lVar14 + 0x10);
          pSVar15 = *(SourceTextModuleDescriptor **)pSVar11;
        } while (*(long *)pSVar15 != lVar14);
      }
    }
    else {
      do {
        pSVar15 = pSVar11;
        pSVar11 = *(SourceTextModuleDescriptor **)pSVar15;
      } while (*(SourceTextModuleDescriptor **)pSVar15 != (SourceTextModuleDescriptor *)0x0);
    }
  }
  puVar6 = (ulong *)Factory::NewFixedArray
                              ((Factory *)param_1,
                               (ulong)(*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x20)) >> 3,0
                              );
  puVar16 = *(undefined8 **)(param_3 + 0x20);
  puVar1 = *(undefined8 **)(param_3 + 0x28);
  if (puVar16 != puVar1) {
    iVar19 = 0;
    do {
      puVar7 = (ulong *)SourceTextModuleDescriptor::Entry::Serialize((Entry *)*puVar16,param_1);
      uVar18 = *puVar6;
      uVar17 = *puVar7;
      *(int *)(uVar18 + (long)iVar19 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        lVar14 = uVar18 + (long)iVar19 + 7;
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar18,lVar14,uVar17);
          uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar18,lVar14,uVar17);
        }
      }
      puVar16 = puVar16 + 1;
      iVar19 = iVar19 + 4;
    } while (puVar1 != puVar16);
  }
  puVar7 = (ulong *)Factory::NewFixedArray
                              ((Factory *)param_1,
                               (ulong)(*(long *)(param_3 + 0x48) - *(long *)(param_3 + 0x40)) >> 3,0
                              );
  puVar16 = *(undefined8 **)(param_3 + 0x40);
  puVar1 = *(undefined8 **)(param_3 + 0x48);
  if (puVar16 != puVar1) {
    iVar19 = 0;
    do {
      puVar8 = (ulong *)SourceTextModuleDescriptor::Entry::Serialize((Entry *)*puVar16,param_1);
      uVar18 = *puVar7;
      uVar17 = *puVar8;
      *(int *)(uVar18 + (long)iVar19 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        lVar14 = uVar18 + (long)iVar19 + 7;
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar18,lVar14,uVar17);
          uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar18,lVar14,uVar17);
        }
      }
      puVar16 = puVar16 + 1;
      iVar19 = iVar19 + 4;
    } while (puVar1 != puVar16);
  }
  puVar8 = (ulong *)SourceTextModuleDescriptor::SerializeRegularExports(param_3,param_1,param_2);
  puVar9 = (ulong *)Factory::NewFixedArray((Factory *)param_1,*(undefined4 *)(param_3 + 0x98),0);
  if (*(SourceTextModuleDescriptor **)(param_3 + 0x80) != param_3 + 0x88) {
    iVar19 = 0;
    pSVar15 = *(SourceTextModuleDescriptor **)(param_3 + 0x80);
    do {
      puVar10 = (ulong *)SourceTextModuleDescriptor::Entry::Serialize
                                   (*(Entry **)(pSVar15 + 0x28),param_1);
      uVar18 = *puVar9;
      uVar17 = *puVar10;
      lVar14 = uVar18 + (long)(iVar19 << 2);
      *(int *)(lVar14 + 7) = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        lVar14 = lVar14 + 7;
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar18,lVar14,uVar17);
          uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar18,lVar14,uVar17);
        }
      }
      iVar19 = iVar19 + 1;
      pSVar11 = *(SourceTextModuleDescriptor **)(pSVar15 + 8);
      if (*(SourceTextModuleDescriptor **)(pSVar15 + 8) == (SourceTextModuleDescriptor *)0x0) {
        pSVar11 = pSVar15 + 0x10;
        pSVar13 = *(SourceTextModuleDescriptor **)pSVar11;
        if (*(SourceTextModuleDescriptor **)pSVar13 != pSVar15) {
          do {
            lVar14 = *(long *)pSVar11;
            pSVar11 = (SourceTextModuleDescriptor *)(lVar14 + 0x10);
            pSVar13 = *(SourceTextModuleDescriptor **)pSVar11;
          } while (*(long *)pSVar13 != lVar14);
        }
      }
      else {
        do {
          pSVar13 = pSVar11;
          pSVar11 = *(SourceTextModuleDescriptor **)pSVar13;
        } while (*(SourceTextModuleDescriptor **)pSVar13 != (SourceTextModuleDescriptor *)0x0);
      }
      pSVar15 = pSVar13;
    } while (pSVar13 != param_3 + 0x88);
  }
  puVar10 = (ulong *)Factory::NewSourceTextModuleInfo((Factory *)param_1);
  uVar18 = *puVar10;
  uVar17 = *puVar4;
  *(int *)(uVar18 + 7) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 7,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 7,uVar17);
    }
  }
  uVar18 = *puVar10;
  uVar17 = *puVar6;
  *(int *)(uVar18 + 0xb) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0xb,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0xb,uVar17);
    }
  }
  uVar18 = *puVar10;
  uVar17 = *puVar8;
  *(int *)(uVar18 + 0xf) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0xf,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0xf,uVar17);
    }
  }
  uVar18 = *puVar10;
  uVar17 = *puVar7;
  *(int *)(uVar18 + 0x13) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x13,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x13,uVar17);
    }
  }
  uVar18 = *puVar10;
  uVar17 = *puVar9;
  *(int *)(uVar18 + 0x17) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x17,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x17,uVar17);
    }
  }
  uVar18 = *puVar10;
  uVar17 = *puVar5;
  *(int *)(uVar18 + 0x1b) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar12 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar18,uVar18 + 0x1b,uVar17);
      uVar12 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar18,uVar18 + 0x1b,uVar17);
    }
  }
  return puVar10;
}

