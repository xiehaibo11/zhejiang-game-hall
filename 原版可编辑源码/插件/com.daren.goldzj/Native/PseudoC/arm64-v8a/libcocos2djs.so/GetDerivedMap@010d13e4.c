
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::JSFunction::GetDerivedMap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, v8::internal::Handle<v8::internal::JSReceiver>)
    */

ulong * v8::internal::JSFunction::GetDerivedMap(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  CanonicalHandleScope *pCVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pIVar2 = param_1 + 0x95a0;
  EnsureHasInitialMap(param_2);
  uVar16 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar16;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
  }
  uVar16 = *param_3;
  if ((uint)uVar16 == (uint)*param_2) {
    return puVar7;
  }
  uVar11 = uVar16 & 0xffffffff00000000;
  uVar12 = uVar11 | 7;
  if ((*(short *)(uVar12 + *(uint *)(uVar16 - 1)) == 0x439) &&
     (*(char *)((uVar11 | 9) + (ulong)*(uint *)(uVar16 - 1)) < '\0')) {
    puVar15 = (uint *)(uVar16 + 0x1b);
    if (*(short *)(uVar12 + *(uint *)(uVar11 + *puVar15 + -1)) == 0xa2) {
      uVar14 = uVar11 | *puVar15;
      do {
        uVar13 = *(uint *)(uVar14 + 0x13);
        uVar14 = uVar11 | uVar13;
        if ((uVar13 & 1) == 0) break;
      } while (*(short *)(uVar12 + *(uint *)(uVar14 - 1)) == 0xa2);
      if (uVar13 == (uint)*param_2) goto LAB_010d1c8c;
    }
    uVar14 = *puVar7;
    sVar4 = *(short *)(uVar14 + 7);
    if (((*(uint *)((uVar11 | *(uint *)(uVar16 + 0xb)) + 0x1b) & 0x1f) - 5 & 0xff) < 2) {
      bVar3 = *(byte *)(uVar14 + 3);
      if (bVar3 == 0) {
        iVar5 = 0;
      }
      else {
        if (sVar4 == 0x421) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = JSObject::GetHeaderSize(sVar4,*(char *)(uVar14 + 9) < '\0');
        }
        iVar5 = (((int)((uint)bVar3 * 4 - iVar5) >> 2) - (uint)*(byte *)(uVar14 + 3)) +
                (uint)*(byte *)(uVar14 + 4);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 >> 1;
      }
      uVar6 = CalculateExpectedNofProperties(param_1,param_3);
      CalculateInstanceSizeHelper(sVar4,1,iVar5,uVar6,&local_ac,&local_b0);
      uVar16 = *puVar7;
      bVar3 = *(byte *)(uVar16 + 5);
      uVar13 = (uint)bVar3;
      if (2 < bVar3) {
        uVar13 = (uint)*(byte *)(uVar16 + 3) - (uint)bVar3;
      }
      bVar3 = *(byte *)(uVar16 + 5);
      if (bVar3 < 3) {
        bVar3 = *(byte *)(uVar16 + 3);
      }
      if (local_ac < (int)((uint)bVar3 * 4)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","constructor_initial_map->UsedInstanceSize() <= instance_size")
        ;
      }
      puVar7 = (ulong *)Map::CopyInitialMap(param_1,puVar7,local_ac,local_b0,
                                            ((uint)*(byte *)(uVar16 + 4) -
                                            (uint)*(byte *)(uVar16 + 3)) + uVar13 + local_b0);
      *(byte *)(*puVar7 + 10) = *(byte *)(*puVar7 + 10) & 0xfe;
      uVar16 = *param_3 & 0xffffffff00000000;
      uVar11 = uVar16 | *(uint *)(*param_3 + 0x1b);
      if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xa2) {
        uVar11 = uVar16 | *(uint *)(uVar11 + 0xf);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar2;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar8 + 1;
        *puVar8 = uVar11;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      }
      SetInitialMap(param_3,puVar7,puVar8);
      uVar11 = *puVar7;
      uVar16 = *param_2;
      puVar15 = (uint *)(uVar11 + 0x13);
      if (((*puVar15 & 1) == 0) ||
         (*(short *)((uVar11 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*puVar15) - 1)) != 0xa2))
      {
        *puVar15 = (uint)uVar16;
        if ((uVar16 & 1) != 0) {
          uVar12 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar11,puVar15,uVar16);
            uVar12 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar11,puVar15,uVar16);
          }
        }
        *(uint *)(*puVar7 + 0xb) = *(uint *)(*puVar7 + 0xb) & 0x1fffffff;
        local_a8 = *puVar7;
        Map::StartInobjectSlackTracking((Map *)&local_a8);
        uVar11 = *param_3 & 0xffffffff00000000;
        puVar15 = (uint *)(*param_3 + 0x1b);
LAB_010d1c8c:
        uVar13 = *puVar15;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar2;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar7 + 1;
          *puVar7 = uVar11 | uVar13;
          return puVar7;
        }
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar13);
        return puVar7;
      }
      goto LAB_010d1d04;
    }
  }
  if (*(short *)(uVar12 + *(uint *)(uVar16 - 1)) == 0x439) {
    if (*(char *)((uVar11 | 9) + (ulong)*(uint *)(uVar16 - 1)) < '\0') {
      EnsureHasInitialMap(param_3);
      uVar11 = *param_3;
      uVar16 = uVar11 & 0xffffffff00000000;
      if ((*(byte *)((uVar16 | 9) + (ulong)*(uint *)(uVar11 - 1)) & 1) == 0) {
        uVar11 = uVar16 | *(uint *)(uVar11 + 0x1b);
        if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2) goto LAB_010d1740;
        uVar11 = uVar16 | *(uint *)(uVar11 + 0xf);
        pCVar10 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      }
      else {
        uVar13 = *(uint *)((uVar16 | 0x13) + (ulong)*(uint *)(uVar11 - 1));
        uVar11 = uVar16 | uVar13;
        if ((uVar13 & 1) != 0) {
          do {
            if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2) break;
            puVar15 = (uint *)(uVar11 + 0x13);
            uVar11 = uVar16 | *puVar15;
          } while ((*puVar15 & 1) != 0);
        }
LAB_010d1740:
        pCVar10 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      }
      if (pCVar10 != (CanonicalHandleScope *)0x0) {
        pIVar9 = (Isolate *)CanonicalHandleScope::Lookup(pCVar10,uVar11);
        uVar16 = *(ulong *)pIVar9;
        goto joined_r0x010d1758;
      }
      pIVar9 = *(Isolate **)pIVar2;
      if (pIVar9 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar9 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)pIVar2 = pIVar9 + 8;
      *(ulong *)pIVar9 = uVar11;
      uVar16 = *(ulong *)pIVar9;
    }
    else {
      pIVar9 = param_1 + 0xa0;
      uVar16 = *(ulong *)pIVar9;
    }
joined_r0x010d16d0:
    if ((uVar16 & 1) == 0) goto LAB_010d1774;
LAB_010d175c:
    if (*(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0xa9)
    goto LAB_010d1774;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x908);
    local_88 = param_1 + 0x908;
    uVar6 = 3;
    if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x40) &&
       (uVar6 = 3, (*(byte *)(uVar16 + 7) & 1) != 0)) {
      uVar6 = 0;
    }
    local_a8 = CONCAT44(local_a8._4_4_,uVar6);
    local_9c = 0xc000000000;
    local_90 = param_1;
    if ((*(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) & 0xffe0) ==
        0x20) {
      local_88 = (Isolate *)StringTable::LookupString(param_1);
    }
    uStack_80 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_78 = param_3;
    local_68 = param_3;
    LookupIterator::Start<false>((LookupIterator *)&local_a8);
    if (local_a8._4_4_ == 4) {
      pIVar9 = local_90 + 0xa0;
    }
    else {
      pIVar9 = (Isolate *)Object::GetProperty((LookupIterator *)&local_a8,false);
      if (pIVar9 == (Isolate *)0x0) {
        return (ulong *)0x0;
      }
    }
    EnsureHasInitialMap(param_2);
    uVar16 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar16;
      uVar16 = *(ulong *)pIVar9;
      goto joined_r0x010d16d0;
    }
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
    uVar16 = *(ulong *)pIVar9;
joined_r0x010d1758:
    if ((uVar16 & 1) != 0) goto LAB_010d175c;
LAB_010d1774:
    puVar8 = (ulong *)JSReceiver::GetFunctionRealm(param_3);
    if (puVar8 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar16 = *(ulong *)(param_1 + 0xb90);
    pIVar9 = param_1 + 0xb90;
    local_90 = (Isolate *)((ulong)*(uint *)((long)param_2 + 4) << 0x20);
    uVar13 = 2;
    if (*(short *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar16 - 1))
        == 0x40) {
      uVar13 = (*(int *)(uVar16 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_a8 = CONCAT44(local_a8._4_4_,uVar13);
    local_9c = 0xc000000000;
    if ((*(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) & 0xffe0) ==
        0x20) {
      pIVar9 = (Isolate *)StringTable::LookupString();
    }
    uStack_80 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_88 = pIVar9;
    local_78 = param_2;
    local_68 = param_2;
    LookupIterator::Start<false>((LookupIterator *)&local_a8);
    if (local_a8._4_4_ == 4) {
      pIVar9 = local_90 + 0xa0;
    }
    else {
      pIVar9 = (Isolate *)JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
    }
    lVar1 = (long)(int)(((uint)*(ulong *)pIVar9 & 0x7ffffffe) << 1) + 7;
    if ((*(ulong *)pIVar9 & 1) != 0) {
      lVar1 = 499;
    }
    uVar16 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + *puVar8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar2;
      if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar8 + 1;
      *puVar8 = uVar16;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      uVar16 = *puVar8;
    }
    uVar11 = uVar16 & 0xffffffff00000000;
    if ((*(byte *)((uVar11 | 9) + (ulong)*(uint *)(uVar16 - 1)) & 1) == 0) {
      uVar16 = uVar11 | *(uint *)(uVar16 + 0x1b);
      if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) goto LAB_010d1940;
      uVar16 = uVar11 | *(uint *)(uVar16 + 0xf);
      pCVar10 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    }
    else {
      uVar13 = *(uint *)((uVar11 | 0x13) + (ulong)*(uint *)(uVar16 - 1));
      uVar16 = uVar11 | uVar13;
      if ((uVar13 & 1) != 0) {
        do {
          if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) break;
          puVar15 = (uint *)(uVar16 + 0x13);
          uVar16 = uVar11 | *puVar15;
        } while ((*puVar15 & 1) != 0);
      }
LAB_010d1940:
      pCVar10 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    }
    if (pCVar10 == (CanonicalHandleScope *)0x0) {
      pIVar9 = *(Isolate **)pIVar2;
      if (pIVar9 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar9 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)pIVar2 = pIVar9 + 8;
      *(ulong *)pIVar9 = uVar16;
    }
    else {
      pIVar9 = (Isolate *)CanonicalHandleScope::Lookup(pCVar10,uVar16);
    }
  }
  uVar16 = *puVar7;
  bVar3 = *(byte *)(uVar16 + 5);
  uVar13 = (uint)bVar3;
  if (2 < bVar3) {
    uVar13 = (uint)*(byte *)(uVar16 + 3) - (uint)bVar3;
  }
  puVar7 = (ulong *)Map::CopyInitialMap(param_1,puVar7,(ulong)*(byte *)(uVar16 + 3) << 2,
                                        (uint)*(byte *)(uVar16 + 3) - (uint)*(byte *)(uVar16 + 4),
                                        uVar13);
  *(byte *)(*puVar7 + 10) = *(byte *)(*puVar7 + 10) & 0xfe;
  uVar16 = *(ulong *)pIVar9;
  if (((uVar16 & 1) == 0) ||
     (*(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","prototype->IsJSReceiver()");
  }
  uVar11 = *puVar7;
  if (*(int *)(uVar11 + 0xf) != (int)uVar16) {
    Map::SetPrototype(param_1,puVar7,pIVar9,1);
    uVar11 = *puVar7;
  }
  uVar16 = *param_2;
  puVar15 = (uint *)(uVar11 + 0x13);
  if (((*puVar15 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*puVar15) - 1)) != 0xa2)) {
    *puVar15 = (uint)uVar16;
    if ((uVar16 & 1) != 0) {
      uVar12 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,puVar15,uVar16);
        uVar12 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,puVar15,uVar16);
      }
    }
    return puVar7;
  }
LAB_010d1d04:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
}

