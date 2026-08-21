
/* WARNING: Removing unreachable block (ram,0x01017b7c) */
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::PagedSpace::Verify(v8::internal::Isolate*, v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::PagedSpace::Verify(PagedSpace *this,Isolate *param_1,ObjectVisitor *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  local_78 = 0;
  local_70 = 0;
  uVar13 = *(ulong *)(this + 0x20);
  bVar5 = *(long *)(this + 0x68) == *(long *)(this + 0x70);
  if (uVar13 == 0) {
LAB_01017e7c:
    lVar4 = local_70;
    lVar9 = local_78;
    lVar8 = (**(code **)(*(long *)this + 0x78))(this,0);
    if ((lVar9 == lVar8) && (lVar9 = (**(code **)(*(long *)this + 0x78))(this,1), lVar4 == lVar9)) {
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","allocation_pointer_found_in_space");
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","external_space_bytes[t] == ExternalBackingStoreBytes(t)");
  }
LAB_01017b1c:
  if (this != *(PagedSpace **)(uVar13 + 0x58)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","page->owner() == this");
  }
  local_88 = 0;
  local_80 = 0;
  if (*(long *)(uVar13 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","page->SweepingDone()");
  }
  uVar15 = *(ulong *)(uVar13 + 0xe0);
  bVar5 = (bool)(bVar5 | uVar13 == (*(long *)(this + 0x68) - 4U & 0xfffffffffffc0000));
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(param_1 + 0x9050));
  uVar11 = *(ulong *)(uVar13 + 0x20);
  uVar2 = *(ulong *)(uVar13 + 0x28);
  uVar16 = uVar13;
LAB_01017bf0:
  do {
    if (uVar15 == uVar16) goto LAB_01017e20;
    uVar10 = *(ulong *)(uVar16 + 0xe0);
    puVar14 = *(uint **)(uVar16 + 0x28);
    puVar1 = *(uint **)(uVar16 + 0x20);
    do {
      do {
        puVar12 = puVar1;
        uVar16 = uVar10;
        if (puVar12 == puVar14) goto LAB_01017bf0;
      } while ((puVar12 == *(uint **)(this + 0x68)) &&
              (puVar1 = *(uint **)(this + 0x70), puVar12 != *(uint **)(this + 0x70)));
      local_68 = (long)puVar12 + 1;
      iVar6 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_68,local_68 & 0xffffffff00000000 | (ulong)*puVar12);
      puVar1 = (uint *)((long)puVar12 + (long)iVar6);
    } while ((*(ushort *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) | 1)
             == 0xa1);
    iVar6 = (int)local_68;
    uVar7 = local_68;
  } while (iVar6 == 0);
joined_r0x01017c14:
  local_90 = uVar7;
  local_68 = local_90;
  if (iVar6 != 0) {
    if (local_90 - 1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","end_of_previous_object <= object.address()");
    }
    uVar3 = *(uint *)(local_90 - 1);
    uVar11 = local_90 & 0xffffffff00000000;
    uVar16 = uVar11 | uVar3;
    if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map.IsMap()");
    }
    uVar7 = ReadOnlyHeap::Contains(uVar16);
    if (((uVar7 & 1) == 0) &&
       (((uVar3 & 1) == 0 ||
        (*(long *)(param_1 + 0x8950) != *(long *)(uVar11 | (ulong)uVar3 & 0xfffffffffffc0000 | 0x58)
        )))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "ReadOnlyHeap::Contains(map) || isolate->heap()->map_space()->Contains(map)");
    }
    (**(code **)(*(long *)this + 0xa0))(this,local_90);
    Object::ObjectVerify((Object *)&local_90,param_1);
    if (FLAG_verify_heap_skip_remembered_set == '\0') {
      Heap::VerifyRememberedSetFor((Heap *)(param_1 + 0x8850),local_90);
    }
    iVar6 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_90,
                       local_90 & 0xffffffff00000000 | (ulong)*(uint *)(local_90 - 1));
    HeapObject::IterateBody((HeapObject *)&local_90,uVar16,iVar6,param_2);
    uVar16 = local_90;
    puVar12 = (uint *)(local_90 - 1);
    uVar11 = (long)puVar12 + (long)iVar6;
    if (uVar2 < uVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","object.address() + size <= top");
    }
    uVar7 = local_90 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar7 + *(uint *)(local_90 - 1)) < 0x40) &&
       ((*(ushort *)(uVar7 + *puVar12) & 7) == 2)) {
      local_68 = local_90;
      iVar6 = ExternalString::ExternalPayloadSize((ExternalString *)&local_68);
      local_80 = local_80 + iVar6;
    }
    else if ((*(short *)(uVar7 + *puVar12) == 0x424) &&
            (uVar7 = ArrayBufferTracker::IsTracked(local_90), (uVar7 & 1) != 0)) {
      if ((*(uint *)(uVar16 + 0x1b) >> 4 & 1) == 0) {
        lVar9 = *(long *)(uVar16 + 0xb);
      }
      else {
        lVar9 = 0;
      }
      local_88 = local_88 + lVar9;
    }
joined_r0x01017d8c:
    puVar12 = puVar1;
    if (puVar12 != puVar14) goto LAB_01017de0;
    goto LAB_01017e04;
  }
  goto LAB_01017e24;
LAB_01017de0:
  if ((puVar12 != *(uint **)(this + 0x68)) ||
     (puVar1 = *(uint **)(this + 0x70), puVar12 == *(uint **)(this + 0x70))) {
    local_68 = (long)puVar12 + 1;
    iVar6 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_68,local_68 & 0xffffffff00000000 | (ulong)*puVar12);
    puVar1 = (uint *)((long)puVar12 + (long)iVar6);
    if ((*(ushort *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) | 1) ==
        0xa1) goto joined_r0x01017d8c;
    iVar6 = (int)local_68;
    uVar7 = local_68;
    if (iVar6 == 0) {
LAB_01017e04:
      if (uVar15 == uVar10) goto LAB_01017e20;
      puVar14 = *(uint **)(uVar10 + 0x28);
      puVar1 = *(uint **)(uVar10 + 0x20);
      uVar10 = *(ulong *)(uVar10 + 0xe0);
      goto joined_r0x01017d8c;
    }
    goto joined_r0x01017c14;
  }
  goto joined_r0x01017d8c;
LAB_01017e20:
  local_90 = 0;
LAB_01017e24:
  if ((local_88 != *(long *)(uVar13 + 200)) ||
     (local_78 = local_78 + local_88, local_80 != *(long *)(uVar13 + 0xd0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","external_page_bytes[t] == page->ExternalBackingStoreBytes(t)");
  }
  local_70 = local_70 + local_80;
  uVar13 = *(ulong *)(uVar13 + 0xe0);
  if (uVar13 == 0) goto LAB_01017e7c;
  goto LAB_01017b1c;
}

