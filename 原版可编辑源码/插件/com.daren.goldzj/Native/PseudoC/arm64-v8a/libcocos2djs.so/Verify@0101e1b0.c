
/* v8::internal::LargeObjectSpace::Verify(v8::internal::Isolate*) */

void __thiscall v8::internal::LargeObjectSpace::Verify(LargeObjectSpace *this,Isolate *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Heap *pHVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  lVar13 = *(long *)(this + 0x20);
  lVar5 = local_70;
  lVar1 = local_68;
  while( true ) {
    local_70 = lVar5;
    local_68 = lVar1;
    if (lVar13 == 0) {
      lVar13 = (**(code **)(*(long *)this + 0x78))(this,0);
      if ((lVar5 == lVar13) && (lVar5 = (**(code **)(*(long *)this + 0x78))(this,1), lVar1 == lVar5)
         ) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","external_backing_store_bytes[t] == ExternalBackingStoreBytes(t)"
              );
    }
    puVar8 = *(uint **)(lVar13 + 0x20);
    local_78 = (long)puVar8 + 1;
    if (puVar8 != *(uint **)((local_78 & 0xfffffffffffc0000) + 0x20)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","object.address() == page->area_start()");
    }
    uVar7 = *puVar8;
    uVar9 = local_78 & 0xffffffff00000000;
    uVar10 = uVar9 | uVar7;
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map.IsMap()");
    }
    uVar4 = ReadOnlyHeap::Contains(uVar10);
    if (((uVar4 & 1) == 0) &&
       (((uVar7 & 1) == 0 ||
        (*(long *)(*(long *)(this + 0x40) + 0x100) !=
         *(long *)(uVar9 | (ulong)uVar7 & 0xfffffffffffc0000 | 0x58))))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "ReadOnlyHeap::Contains(map) || heap()->map_space()->Contains(map)");
    }
    uVar9 = local_78 & 0xffffffff00000000 | 7;
    if (((((*(short *)(uVar9 + *(uint *)(local_78 - 1)) != 0x86) &&
          (puVar8 = (uint *)(local_78 - 1), *(short *)(uVar9 + *puVar8) != 0x9a)) &&
         ((0x3f < *(ushort *)(uVar9 + *puVar8) || ((*(byte *)(uVar9 + *puVar8) & 7) != 0)))) &&
        (((0x3f < *(ushort *)(uVar9 + *puVar8) || ((*(ushort *)(uVar9 + *puVar8) & 7) != 2)) &&
         ((0x3f < *(ushort *)(uVar9 + *puVar8) || ((*(ushort *)(uVar9 + *puVar8) & 7) != 5)))))) &&
       (((((0xe < *(ushort *)(uVar9 + *puVar8) - 0x76 && (*(short *)(uVar9 + *puVar8) != 0x87)) &&
          (1 < *(ushort *)(uVar9 + *puVar8) - 0x97)) &&
         ((*(short *)(uVar9 + *puVar8) != 0xa7 && (*(short *)(uVar9 + *puVar8) != 0xa4)))) &&
        ((((*(short *)(uVar9 + *puVar8) != 0x85 &&
           ((*(short *)(uVar9 + *puVar8) != 0x9f && (*(short *)(uVar9 + *puVar8) != 0x41)))) &&
          (*(short *)(uVar9 + *puVar8) != 0xa1)) &&
         ((((*(short *)(uVar9 + *puVar8) != 0x9e && (9 < *(ushort *)(uVar9 + *puVar8) - 0x88)) &&
           (*(short *)(uVar9 + *puVar8) != 0x96)) &&
          ((*(short *)(uVar9 + *puVar8) != 0xa3 && (FLAG_young_generation_large_objects == '\0')))))
         ))))) break;
    Object::ObjectVerify((Object *)&local_78,param_1);
    if (FLAG_verify_heap_skip_remembered_set == '\0') {
      Heap::VerifyRememberedSetFor(*(Heap **)(this + 0x40),local_78);
    }
    uVar9 = local_78;
    uVar4 = local_78 & 0xffffffff00000000;
    uVar15 = uVar4 | 7;
    if ((*(short *)(uVar15 + *(uint *)(local_78 - 1)) == 0x86) ||
       (*(short *)(uVar15 + *(uint *)(local_78 - 1)) == 0x9a)) {
      local_80 = *(undefined8 *)(this + 0x40);
      local_90 = &PTR__VerifyPointersVisitor_01ca7620;
      ppuStack_88 = &PTR__VerifyPointersVisitor_01ca76c8;
      uVar3 = HeapObject::SizeFromMap((HeapObject *)&local_78,uVar4 | *(uint *)(local_78 - 1));
      HeapObject::IterateBody((HeapObject *)&local_78,uVar10,uVar3,&local_90);
    }
    else if (*(ushort *)(uVar15 + *(uint *)(local_78 - 1)) - 0x76 < 0xf) {
      iVar6 = *(int *)(local_78 + 3);
      if (1 < iVar6) {
        iVar14 = 0;
        lVar5 = 0;
        puVar8 = (uint *)(local_78 + 7);
        uVar7 = *puVar8;
        while( true ) {
          if ((uVar7 & 1) != 0) {
            pHVar12 = *(Heap **)(this + 0x40);
            uVar11 = uVar4 | uVar7;
            uVar10 = ReadOnlyHeap::Contains(uVar11);
            if (((uVar10 & 1) == 0) && (uVar10 = Heap::Contains(pHVar12,uVar11), (uVar10 & 1) == 0))
            {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","IsValidHeapObject(heap(), element_object)");
            }
            if (*(short *)(uVar15 + *(uint *)((uVar4 | *(uint *)(uVar11 - 1)) - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","element_object.map().IsMap()");
            }
            iVar6 = *(int *)(uVar9 + 3);
          }
          lVar5 = lVar5 + 1;
          iVar14 = iVar14 + 4;
          if (iVar6 >> 1 <= lVar5) break;
          uVar7 = *(uint *)((long)puVar8 + (long)iVar14);
        }
      }
    }
    else if ((*(short *)(uVar15 + *(uint *)(local_78 - 1)) == 0xa4) &&
            (uVar7 = *(uint *)(local_78 + 3), (uVar7 & 0x7fe) != 0)) {
      uVar10 = 0;
      puVar8 = (uint *)(local_78 + 7);
      uVar2 = *puVar8;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          uVar11 = Heap::Contains(*(Heap **)(this + 0x40),uVar4 | uVar2);
          if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","heap()->Contains(property_object)");
          }
          if (*(short *)(uVar15 + *(uint *)((uVar4 | *(uint *)((uVar4 | uVar2) - 1)) - 1)) != 0xa2)
          {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","property_object.map().IsMap()");
          }
          uVar7 = *(uint *)(uVar9 + 3);
        }
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 1;
        if ((uVar7 >> 1 & 0x3ff) <= uVar10) break;
        uVar2 = *puVar8;
      }
    }
    lVar5 = local_70 + *(long *)(lVar13 + 200);
    lVar1 = local_68 + *(long *)(lVar13 + 0xd0);
    lVar13 = *(long *)(lVar13 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Found invalid Object (instance_type=%i) in large object space.",
           (ulong)*(ushort *)((local_78 & 0xffffffff00000000 | (ulong)*puVar8) + 7));
}

