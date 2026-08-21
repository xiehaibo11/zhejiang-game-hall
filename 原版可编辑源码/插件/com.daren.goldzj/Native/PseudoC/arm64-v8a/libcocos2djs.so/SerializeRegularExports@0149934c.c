
/* v8::internal::SourceTextModuleDescriptor::SerializeRegularExports(v8::internal::Isolate*,
   v8::internal::Zone*) const */

ulong * __thiscall
v8::internal::SourceTextModuleDescriptor::SerializeRegularExports
          (SourceTextModuleDescriptor *this,Isolate *param_1,Zone *param_2)

{
  SourceTextModuleDescriptor *pSVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  SourceTextModuleDescriptor *pSVar8;
  ulong uVar9;
  SourceTextModuleDescriptor *pSVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  SourceTextModuleDescriptor *pSVar16;
  SourceTextModuleDescriptor *pSVar17;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  Zone *local_68;
  
  local_80 = (undefined8 *)0x0;
  lVar13 = *(long *)(this + 0x78);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = param_2;
  if (lVar13 * 3 != 0) {
    if ((ulong)(lVar13 * 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar6 = *(undefined8 **)(param_2 + 0x10);
    uVar7 = lVar13 * 0x18;
    if (uVar7 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar6) ||
        uVar7 - (*(long *)(param_2 + 0x18) - (long)puVar6) == 0) {
      *(undefined8 **)(param_2 + 0x10) = puVar6 + lVar13 * 3;
    }
    else {
      puVar6 = (undefined8 *)Zone::NewExpand(param_2,uVar7);
    }
    local_70 = puVar6 + lVar13 * 3;
    lVar13 = lVar13 * -3;
    local_78 = puVar6;
    do {
      *local_78 = 0;
      bVar3 = lVar13 != -1;
      lVar13 = lVar13 + 1;
      local_78 = local_78 + 1;
      local_80 = puVar6;
    } while (bVar3);
  }
  pSVar1 = this + 0x68;
  if (pSVar1 == *(SourceTextModuleDescriptor **)(this + 0x60)) {
    uVar7 = 0;
  }
  else {
    uVar11 = 0;
    pSVar16 = *(SourceTextModuleDescriptor **)(this + 0x60);
    do {
      while( true ) {
        iVar12 = 0;
        pSVar17 = pSVar16;
        do {
          pSVar8 = *(SourceTextModuleDescriptor **)(pSVar17 + 8);
          if (*(SourceTextModuleDescriptor **)(pSVar17 + 8) == (SourceTextModuleDescriptor *)0x0) {
            pSVar8 = pSVar17 + 0x10;
            pSVar10 = *(SourceTextModuleDescriptor **)pSVar8;
            if (*(SourceTextModuleDescriptor **)pSVar10 != pSVar17) {
              do {
                lVar13 = *(long *)pSVar8;
                pSVar8 = (SourceTextModuleDescriptor *)(lVar13 + 0x10);
                pSVar10 = *(SourceTextModuleDescriptor **)pSVar8;
              } while (*(long *)pSVar10 != lVar13);
            }
          }
          else {
            do {
              pSVar10 = pSVar8;
              pSVar8 = *(SourceTextModuleDescriptor **)pSVar10;
            } while (*(SourceTextModuleDescriptor **)pSVar10 != (SourceTextModuleDescriptor *)0x0);
          }
          iVar12 = iVar12 + 1;
          pSVar17 = pSVar1;
        } while ((pSVar10 != pSVar1) &&
                (pSVar17 = pSVar10, *(long *)(pSVar10 + 0x20) == *(long *)(pSVar16 + 0x20)));
        puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,iVar12,0);
        local_80[uVar11] = **(undefined8 **)(*(long *)(pSVar16 + 0x28) + 0x10);
        uVar7 = (long)*(int *)(*(long *)(pSVar16 + 0x28) + 0x24) << 1;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(param_1 + 0x95a0);
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar7;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
        }
        uVar7 = uVar11 + 3;
        local_80[uVar11 + 1] = puVar5;
        local_80[uVar11 + 2] = puVar4;
        uVar11 = uVar7;
        if (pSVar17 != pSVar16) break;
        if (pSVar1 == pSVar16) goto LAB_01499608;
      }
      iVar12 = 0;
      do {
        uVar15 = *puVar4;
        uVar14 = *(ulong *)**(undefined8 **)(*(long *)(pSVar16 + 0x28) + 8);
        lVar13 = uVar15 + (long)(iVar12 << 2);
        *(int *)(lVar13 + 7) = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar9 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          lVar13 = lVar13 + 7;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,lVar13,uVar14);
            uVar9 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar15,lVar13,uVar14);
          }
        }
        iVar12 = iVar12 + 1;
        pSVar8 = *(SourceTextModuleDescriptor **)(pSVar16 + 8);
        if (*(SourceTextModuleDescriptor **)(pSVar16 + 8) == (SourceTextModuleDescriptor *)0x0) {
          pSVar8 = pSVar16 + 0x10;
          pSVar10 = *(SourceTextModuleDescriptor **)pSVar8;
          if (*(SourceTextModuleDescriptor **)pSVar10 != pSVar16) {
            do {
              lVar13 = *(long *)pSVar8;
              pSVar8 = (SourceTextModuleDescriptor *)(lVar13 + 0x10);
              pSVar10 = *(SourceTextModuleDescriptor **)pSVar8;
            } while (*(long *)pSVar10 != lVar13);
          }
        }
        else {
          do {
            pSVar10 = pSVar8;
            pSVar8 = *(SourceTextModuleDescriptor **)pSVar10;
          } while (*(SourceTextModuleDescriptor **)pSVar10 != (SourceTextModuleDescriptor *)0x0);
        }
        pSVar16 = pSVar10;
      } while (pSVar17 != pSVar10);
      pSVar16 = pSVar17;
    } while (pSVar1 != pSVar17);
  }
LAB_01499608:
  uVar14 = uVar7 & 0xffffffff;
  uVar11 = (long)local_78 - (long)local_80 >> 3;
  if (uVar11 < uVar14) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Object>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Object>>>
    ::__append((vector<v8::internal::Handle<v8::internal::Object>,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::Object>>>
                *)&local_80,uVar14 - uVar11);
  }
  else if (uVar11 != uVar14) {
    local_78 = local_80 + uVar14;
  }
  puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar14,0);
  if ((int)uVar7 != 0) {
    iVar12 = 0;
    lVar13 = 0;
    do {
      uVar11 = *puVar4;
      uVar7 = **(ulong **)((long)local_80 + lVar13);
      *(int *)(uVar11 + (long)iVar12 + 7) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar15 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        lVar2 = uVar11 + (long)iVar12 + 7;
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,lVar2,uVar7);
          uVar15 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar11,lVar2,uVar7);
        }
      }
      lVar13 = lVar13 + 8;
      iVar12 = iVar12 + 4;
    } while (uVar14 * 8 - lVar13 != 0);
  }
  return puVar4;
}

