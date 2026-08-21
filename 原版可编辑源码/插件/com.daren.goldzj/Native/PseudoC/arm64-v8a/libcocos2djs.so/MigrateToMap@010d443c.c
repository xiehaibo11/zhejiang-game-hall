
/* v8::internal::JSObject::MigrateToMap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::Map>, int) */

void v8::internal::JSObject::MigrateToMap
               (Isolate *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  CanonicalHandleScope *this;
  int *piVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  undefined4 *puVar23;
  Isolate *pIVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  Isolate *pIVar31;
  ulong uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  ulong local_68;
  
  if (*(int *)(*param_2 - 1) + (int)param_1 == (int)*param_3) {
    return;
  }
  pIVar31 = param_1 + *(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_1 + 0x95a0);
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
    *puVar7 = (ulong)pIVar31;
    uVar16 = *(uint *)(pIVar31 + 0xb);
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)pIVar31);
    pIVar31 = (Isolate *)*puVar7;
    uVar16 = *(uint *)(pIVar31 + 0xb);
  }
  if ((uVar16 >> 0x14 & 1) != 0) {
    FUN_010d8b9c(pIVar31);
    UpdatePrototypeUserRegistration(puVar7,param_3,param_1);
    pIVar31 = (Isolate *)*puVar7;
  }
  uVar32 = *param_3;
  if ((*(uint *)(pIVar31 + 0xb) >> 0x15 & 1) != 0) {
    if ((*(uint *)(uVar32 + 0xb) >> 0x15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","new_map->is_dictionary_map()");
    }
    uVar25 = *param_2;
    if ((int)uVar32 == 0) {
      *(undefined4 *)(uVar25 - 1) = 0;
      return;
    }
    Heap::VerifyObjectLayoutChange((Heap *)(uVar25 & 0xffffffff00000000 | 0x8850),uVar25,uVar32);
    *(int *)(uVar25 - 1) = (int)uVar32;
    if ((uVar32 & 1) == 0) {
      return;
    }
    if ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 10) >> 2 & 1) == 0) {
      return;
    }
    Heap_MarkingBarrierSlow(uVar25,0,uVar32);
    return;
  }
  if ((*(uint *)(uVar32 + 0xb) >> 0x15 & 1) != 0) {
    puVar7 = *(ulong **)(param_1 + 0x95a0);
    puVar9 = *(ulong **)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    pIVar31 = param_1 + *(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = puVar7;
      if (puVar9 == puVar7) {
        puVar8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar8 + 1;
      *puVar8 = (ulong)pIVar31;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)pIVar31);
      pIVar31 = (Isolate *)*puVar8;
    }
    uVar32 = (ulong)(*(uint *)(pIVar31 + 0xb) >> 10) & 0x3ff;
    if (param_4 < 1) {
      param_4 = 2;
    }
    iVar19 = (int)uVar32;
    plVar10 = (long *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                      ::New(param_1,iVar19 + param_4,0,0);
    uVar16 = *(uint *)(*puVar8 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(param_1 + 0x95a0);
      if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar11 + 1;
      *puVar11 = (ulong)(param_1 + uVar16);
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                    (ulong)(param_1 + uVar16));
    }
    if (iVar19 != 0) {
      lVar34 = 0;
      do {
        uVar16 = *(uint *)(lVar34 + *puVar11 + 0x13);
        uVar20 = *(uint *)(lVar34 + *puVar11 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)(param_1 + 0x95a0);
          if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
            puVar12 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar12 + 1;
          *puVar12 = (ulong)(param_1 + uVar20);
          if ((uVar16 >> 2 & 1) == 0) goto LAB_010d4930;
LAB_010d4880:
          uVar20 = *(uint *)(lVar34 + *puVar11 + 0x17);
          this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x010d4a78:
          if (this == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(param_1 + 0x95a0);
            if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
            *puVar13 = (ulong)(param_1 + uVar20);
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup(this,(ulong)(param_1 + uVar20));
          }
        }
        else {
          puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                        (ulong)(param_1 + uVar20));
          if ((uVar16 >> 2 & 1) != 0) goto LAB_010d4880;
LAB_010d4930:
          uVar25 = *puVar8;
          uVar20 = (uint)(*(int *)(param_1 + (ulong)*(uint *)(uVar25 + 0x17) + lVar34 + 0x13) >> 1)
                   >> 0x13 & 0x3ff;
          iVar17 = (uint)*(byte *)(uVar25 + 3) - (uint)*(byte *)(uVar25 + 4);
          if ((int)uVar20 < iVar17) {
            uVar26 = (ulong)*(byte *)(uVar25 + 4) << 0x1c;
            iVar28 = (uVar20 + *(byte *)(uVar25 + 4)) * 4;
          }
          else {
            iVar28 = (uVar20 - iVar17) * 4 + 8;
            uVar26 = 0x20000000;
          }
          uVar6 = (uint)(*(int *)(param_1 + (ulong)*(uint *)(uVar25 + 0x17) + lVar34 + 0x13) >> 1)
                  >> 6 & 7;
          local_68 = CONCAT71(local_68._1_7_,(char)uVar6);
          if (4 < uVar6) goto LAB_010d5668;
          uVar25 = (ulong)iVar28;
          uVar27 = *param_2;
          uVar29 = (ulong)((int)uVar20 < iVar17) << 0xd | (long)iVar17 << 0x10 | uVar25;
          uVar26 = uVar29 | uVar26;
          uVar20 = (uint)uVar29;
          if ((uVar16 >> 1 & 1) != 0) {
            if ((uVar20 >> 0xd & 1) == 0) {
              pIVar31 = param_1 + *(uint *)(uVar27 + 3);
              if ((((ulong)pIVar31 & 1) == 0) || ((int)pIVar31 == *(int *)(param_1 + 0x168))) {
                pIVar31 = *(Isolate **)(param_1 + 0x3b8);
              }
              uVar20 = *(uint *)(pIVar31 + ((uVar25 & 0x1ffc) - (uVar26 >> 0x1a & 0x7c)) + 7);
            }
            else {
              uVar20 = *(uint *)(uVar27 + (uVar25 & 0x1fff) + -1);
            }
            this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            goto joined_r0x010d4a78;
          }
          if ((uVar20 >> 0xd & 1) == 0) {
            pIVar31 = param_1 + *(uint *)(uVar27 + 3);
            if ((((ulong)pIVar31 & 1) == 0) || ((int)pIVar31 == *(int *)(param_1 + 0x168))) {
              pIVar31 = *(Isolate **)(param_1 + 0x3b8);
            }
            uVar20 = *(uint *)(pIVar31 + ((uVar25 & 0x1ffc) - (uVar26 >> 0x1a & 0x7c)) + 7);
          }
          else {
            uVar20 = *(uint *)(uVar27 + (uVar25 & 0x1fff) + -1);
          }
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(param_1 + 0x95a0);
            if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
            *puVar13 = (ulong)(param_1 + uVar20);
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                          (ulong)(param_1 + uVar20));
          }
          if ((uVar16 & 0x380) == 0x100) {
            uVar33 = *(undefined8 *)(*puVar13 + 3);
            puVar13 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                         ((Factory *)param_1);
            *(undefined8 *)(*puVar13 + 3) = uVar33;
          }
        }
        plVar10 = (long *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                          ::Add(param_1,plVar10,puVar12,puVar13,uVar16 >> 1 & 0x39 | 0xc0,0);
        lVar34 = lVar34 + 0xc;
      } while (uVar32 * 0xc - lVar34 != 0);
    }
    *(int *)(*plVar10 + 0x13) = iVar19 * 2 + 2;
    Heap::NotifyObjectLayoutChange((Heap *)(param_1 + 0x8850),*param_2,auStack_70,1);
    uVar32 = *param_3;
    lVar34 = (ulong)*(byte *)(uVar32 + 3) * 4;
    iVar19 = (uint)*(byte *)(*puVar8 + 3) * 4 - (int)lVar34;
    if (0 < iVar19) {
      Heap::CreateFillerObjectAt((Heap *)(param_1 + 0x8850),lVar34 + *param_2 + -1,iVar19,0,1);
      uVar32 = *param_3;
    }
    uVar25 = *param_2;
    if ((int)uVar32 == 0) {
      *(undefined4 *)(uVar25 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar25 & 0xffffffff00000000 | 0x8850),uVar25,uVar32);
      *(int *)(uVar25 - 1) = (int)uVar32;
      if (((uVar32 & 1) != 0) && ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar25,0,uVar32);
      }
    }
    local_68 = *param_2;
    JSReceiver::SetProperties((JSReceiver *)&local_68,*plVar10);
    uVar16 = (uint)*(byte *)(*param_3 + 4);
    uVar20 = (uint)*(byte *)(*param_3 + 3);
    iVar19 = uVar20 - uVar16;
    if ((uVar20 != uVar16) &&
       (MemoryChunk::InvalidateRecordedSlots((MemoryChunk *)(*param_2 & 0xfffffffffffc0000)),
       0 < iVar19)) {
      iVar17 = 0;
      do {
        uVar32 = *param_3;
        iVar28 = (uint)*(byte *)(uVar32 + 3) - (uint)*(byte *)(uVar32 + 4);
        if (iVar17 < iVar28) {
          uVar25 = (ulong)*(byte *)(uVar32 + 4) << 0x1c;
          iVar22 = (iVar17 + (uint)*(byte *)(uVar32 + 4)) * 4;
        }
        else {
          iVar22 = (iVar17 + ((uint)*(byte *)(uVar32 + 4) - (uint)*(byte *)(uVar32 + 3))) * 4 + 8;
          uVar25 = 0x20000000;
        }
        uVar27 = *param_2;
        uVar32 = (ulong)iVar22;
        uVar26 = (ulong)(iVar17 < iVar28) << 0xd | (long)iVar28 << 0x10 | uVar32;
        if (((uint)uVar26 >> 0xd & 1) == 0) {
          uVar16 = *(uint *)(uVar27 + 3);
          uVar27 = uVar27 & 0xffffffff00000000;
          if (((uVar16 & 1) == 0) || (uVar16 == *(uint *)(uVar27 + 0x168))) {
            uVar27 = *(ulong *)(uVar27 + 0x3b8);
          }
          else {
            uVar27 = uVar27 | uVar16;
          }
          puVar23 = (undefined4 *)
                    (((uVar32 & 0x1ffc) - ((uVar26 | uVar25) >> 0x1a & 0x7c)) + uVar27 + 7);
        }
        else {
          puVar23 = (undefined4 *)((uVar32 & 0x1fff) + uVar27 + -1);
        }
        iVar17 = iVar17 + 1;
        *puVar23 = 0;
      } while (iVar19 != iVar17);
    }
    lVar34 = *(long *)(param_1 + 0x9520);
    if (*(char *)(lVar34 + 0x1818) == '\0') {
      *(char *)(lVar34 + 0x1818) = '\x01';
      piVar14 = (int *)StatsCounterBase::FindLocationInStatsTable
                                 ((StatsCounterBase *)(lVar34 + 0x1800));
      *(int **)(lVar34 + 0x1810) = piVar14;
    }
    else {
      piVar14 = *(int **)(lVar34 + 0x1810);
    }
    if (piVar14 != (int *)0x0) {
      *piVar14 = *piVar14 + 1;
    }
    *(ulong **)(param_1 + 0x95a0) = puVar7;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(ulong **)(param_1 + 0x95a8) == puVar9) {
      return;
    }
    *(ulong **)(param_1 + 0x95a8) = puVar9;
    HandleScope::DeleteExtensions(param_1);
    return;
  }
  uVar32 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(param_1 + 0x95a0);
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar32;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar32);
  }
  uVar32 = *param_3;
  pIVar31 = param_1 + *(uint *)(uVar32 + 0x13);
  if ((((ulong)pIVar31 & 1) == 0) ||
     (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar31 + -1)) != 0xa2)) {
    pIVar31 = *(Isolate **)(param_1 + 0xa0);
  }
  if ((int)pIVar31 == (int)*puVar9) {
    if (((*(uint *)(uVar32 + 0xb) ^ *(uint *)(*puVar9 + 0xb)) & 0xffc00) != 0) {
      uVar16 = *(uint *)(param_1 +
                        ((long)(int)((*(uint *)(uVar32 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                         0x1000000000 >> 0x20 | 3U) + (ulong)*(uint *)(uVar32 + 0x17));
      if ((uVar16 >> 2 & 1) == 0) {
        uVar20 = (uint)(*(int *)(param_1 +
                                ((long)(int)((*(uint *)(uVar32 + 0xb) >> 10 & 0x3ff) - 1) *
                                 0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                                (ulong)*(uint *)(uVar32 + 0x17)) >> 1) >> 0x13 & 0x3ff;
        iVar19 = (uint)*(byte *)(uVar32 + 3) - (uint)*(byte *)(uVar32 + 4);
        if ((int)uVar20 < iVar19) {
          uVar25 = (ulong)*(byte *)(uVar32 + 4) << 0x1c;
          uVar6 = (uVar20 + *(byte *)(uVar32 + 4)) * 4;
        }
        else {
          uVar6 = (uVar20 - iVar19) * 4 + 8;
          uVar25 = 0x20000000;
        }
        uVar5 = (uint)(*(int *)(param_1 +
                               ((long)(int)((*(uint *)(uVar32 + 0xb) >> 10 & 0x3ff) - 1) *
                                0xc00000000 + 0x1000000000 >> 0x20 | 3U) +
                               (ulong)*(uint *)(uVar32 + 0x17)) >> 1) >> 6 & 7;
        local_68 = CONCAT71(local_68._1_7_,(char)uVar5);
        if (4 < uVar5) {
LAB_010d5668:
          uVar33 = Representation::Mnemonic((Representation *)&local_68);
          PrintF("%s\n",uVar33);
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar26 = (ulong)((int)uVar20 < iVar19) << 0xd | (long)iVar19 << 0x10 | (long)(int)uVar6;
        uVar25 = uVar26 | uVar25;
        if (((uint)uVar26 >> 0xd & 1) == 0) {
          iVar19 = (uVar6 >> 2 & 0x7ff) - ((uint)(uVar25 >> 0x1c) & 0x1f);
          pIVar31 = param_1 + *(uint *)(*param_2 + 3);
          if ((((ulong)pIVar31 & 1) == 0) ||
             (pIVar24 = pIVar31, (int)pIVar31 == *(int *)(param_1 + 0x168))) {
            pIVar24 = *(Isolate **)(param_1 + 0x3b8);
          }
          if ((int)(*(uint *)(pIVar24 + 3) >> 1 & 0x3ff) <= iVar19) {
            bVar2 = *(byte *)(uVar32 + 5);
            uVar20 = (uint)bVar2;
            if (2 < bVar2) {
              uVar20 = (uint)*(byte *)(uVar32 + 3) - (uint)bVar2;
            }
            if ((((ulong)pIVar31 & 1) == 0) || ((int)pIVar31 == *(int *)(param_1 + 0x168))) {
              pIVar31 = *(Isolate **)(param_1 + 0x3b8);
            }
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar15 = *(undefined8 **)(param_1 + 0x95a0);
              if (puVar15 == *(undefined8 **)(param_1 + 0x95a8)) {
                puVar15 = (undefined8 *)HandleScope::Extend(param_1);
              }
              *(undefined8 **)(param_1 + 0x95a0) = puVar15 + 1;
              *puVar15 = pIVar31;
            }
            else {
              puVar15 = (undefined8 *)
                        CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)pIVar31);
            }
            puVar9 = (ulong *)Factory::CopyPropertyArrayAndGrow(param_1,puVar15,uVar20 + 1);
            if ((uVar16 & 0x380) == 0x100) {
              param_1 = (Isolate *)
                        Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)param_1);
              *(undefined8 *)(*(long *)param_1 + 3) = 0xfff7fffffff7ffff;
            }
            else {
              param_1 = param_1 + 0x98;
            }
            uVar25 = *puVar9;
            uVar32 = *(ulong *)param_1;
            lVar34 = uVar25 + (long)(iVar19 * 4);
            *(int *)(lVar34 + 7) = (int)uVar32;
            if ((uVar32 & 1) != 0) {
              uVar26 = *(ulong *)((uVar32 & 0xfffffffffffc0000) + 8);
              lVar34 = lVar34 + 7;
              if (((uint)uVar26 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar25,lVar34,uVar32);
                uVar26 = *(ulong *)(uVar32 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar26 & 0x18) != 0) &&
                 ((*(byte *)((uVar25 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar25,lVar34,uVar32);
              }
            }
            local_68 = *param_2;
            JSReceiver::SetProperties((JSReceiver *)&local_68,*puVar9);
            uVar32 = *param_3;
            goto LAB_010d4d74;
          }
        }
        uVar25 = *(ulong *)(&DAT_019d75d8 + (ulong)uVar5 * 8) | uVar25;
        if ((uVar25 & 0xc000) == 0x4000) {
          plVar10 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                      ((Factory *)param_1);
          *(undefined8 *)(*plVar10 + 3) = 0xfff7fffffff7ffff;
          local_68 = *param_2;
          RawFastPropertyAtPut((JSObject *)&local_68,uVar25,*plVar10,4);
          uVar32 = *param_3;
        }
      }
    }
    uVar25 = *param_2;
    if ((int)uVar32 != 0) {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar25 & 0xffffffff00000000 | 0x8850),uVar25,uVar32);
      *(int *)(uVar25 - 1) = (int)uVar32;
      if (((uVar32 & 1) != 0) && ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar25,0,uVar32);
      }
      goto LAB_010d551c;
    }
  }
  else {
    local_68 = uVar32;
    uVar6 = Map::NumberOfFields((Map *)&local_68);
    uVar32 = *param_3;
    bVar2 = *(byte *)(uVar32 + 5);
    uVar20 = (uint)bVar2;
    uVar16 = (uint)*(byte *)(uVar32 + 3) - (uint)*(byte *)(uVar32 + 4);
    if (2 < bVar2) {
      uVar20 = (uint)*(byte *)(uVar32 + 3) - (uint)bVar2;
    }
    local_68 = *puVar9;
    uVar32 = Map::InstancesNeedRewriting((Map *)&local_68,*param_3,uVar6,uVar16,uVar20,auStack_70);
    if ((uVar32 & 1) == 0) {
      uVar32 = *param_3;
LAB_010d4d74:
      uVar25 = *param_2;
      if ((int)uVar32 != 0) {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar25 & 0xffffffff00000000 | 0x8850),uVar25,uVar32)
        ;
        *(int *)(uVar25 - 1) = (int)uVar32;
        if (((uVar32 & 1) != 0) && ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar25,0,uVar32);
        }
        goto LAB_010d551c;
      }
    }
    else {
      puVar8 = (ulong *)Factory::NewPropertyArray((Factory *)param_1,(uVar6 - uVar16) + uVar20);
      puVar11 = (ulong *)Factory::NewFixedArray((Factory *)param_1,uVar16,0);
      uVar20 = *(uint *)(*puVar9 + 0x17);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(param_1 + 0x95a0);
        if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar12 + 1;
        *puVar12 = (ulong)(param_1 + uVar20);
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                      (ulong)(param_1 + uVar20));
      }
      uVar20 = *(uint *)(*param_3 + 0x17);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(param_1 + 0x95a0);
        if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
        *puVar13 = (ulong)(param_1 + uVar20);
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                      (ulong)(param_1 + uVar20));
      }
      uVar32 = (ulong)(*(uint *)(*puVar9 + 0xb) >> 10) & 0x3ff;
      uVar20 = *(uint *)(*param_3 + 0xb);
      if ((int)uVar32 != 0) {
        lVar34 = 0;
        do {
          uVar5 = *(uint *)(lVar34 + *puVar13 + 0x13);
          if ((uVar5 >> 2 & 1) == 0) {
            uVar3 = uVar5 >> 7 & 7;
            uVar5 = *(uint *)(lVar34 + *puVar12 + 0x13);
            if ((uVar5 >> 2 & 1) == 0) {
              uVar25 = *puVar9;
              uVar18 = (uint)(*(int *)(param_1 + (ulong)*(uint *)(uVar25 + 0x17) + lVar34 + 0x13) >>
                             1) >> 0x13 & 0x3ff;
              iVar19 = (uint)*(byte *)(uVar25 + 3) - (uint)*(byte *)(uVar25 + 4);
              if ((int)uVar18 < iVar19) {
                uVar26 = (ulong)*(byte *)(uVar25 + 4) << 0x1c;
                iVar17 = (uVar18 + *(byte *)(uVar25 + 4)) * 4;
              }
              else {
                iVar17 = (uVar18 - iVar19) * 4 + 8;
                uVar26 = 0x20000000;
              }
              uVar4 = (uint)(*(int *)(param_1 + (ulong)*(uint *)(uVar25 + 0x17) + lVar34 + 0x13) >>
                            1) >> 6 & 7;
              local_68 = CONCAT71(local_68._1_7_,(char)uVar4);
              if (4 < uVar4) goto LAB_010d5668;
              uVar25 = (ulong)iVar17;
              uVar27 = (ulong)((int)uVar18 < iVar19) << 0xd | (long)iVar19 << 0x10 | uVar25;
              if (((uint)uVar27 >> 0xd & 1) == 0) {
                pIVar31 = param_1 + *(uint *)(*param_2 + 3);
                if ((((ulong)pIVar31 & 1) == 0) || ((int)pIVar31 == *(int *)(param_1 + 0x168))) {
                  pIVar31 = *(Isolate **)(param_1 + 0x3b8);
                }
                uVar18 = *(uint *)(pIVar31 +
                                  ((uVar25 & 0x1ffc) - ((uVar27 | uVar26) >> 0x1a & 0x7c)) + 7);
              }
              else {
                uVar18 = *(uint *)((uVar25 & 0x1fff) + *param_2 + -1);
              }
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                pIVar31 = *(Isolate **)(param_1 + 0x95a0);
                if (pIVar31 == *(Isolate **)(param_1 + 0x95a8)) {
                  pIVar31 = (Isolate *)HandleScope::Extend(param_1);
                }
                *(Isolate **)(param_1 + 0x95a0) = pIVar31 + 8;
                *(Isolate **)pIVar31 = param_1 + uVar18;
              }
              else {
                pIVar31 = (Isolate *)
                          CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                     (ulong)(param_1 + uVar18));
              }
              if ((uVar5 & 0x380) == 0x100) {
                if (uVar3 != 2) {
                  pIVar31 = (Isolate *)Object::WrapForRead(param_1,pIVar31,2);
                }
              }
              else if (uVar3 == 2) {
                pIVar31 = (Isolate *)Object::NewStorageFor(param_1,pIVar31,2);
              }
            }
            else if ((uVar5 >> 1 & 1) == 0) {
              uVar5 = *(uint *)(lVar34 + *puVar12 + 0x17);
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                pIVar31 = *(Isolate **)(param_1 + 0x95a0);
                if (pIVar31 == *(Isolate **)(param_1 + 0x95a8)) {
                  pIVar31 = (Isolate *)HandleScope::Extend(param_1);
                }
                *(Isolate **)(param_1 + 0x95a0) = pIVar31 + 8;
                *(Isolate **)pIVar31 = param_1 + uVar5;
              }
              else {
                pIVar31 = (Isolate *)
                          CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                     (ulong)(param_1 + uVar5));
              }
            }
            else {
              pIVar31 = param_1 + 0x98;
              if (uVar3 == 2) {
                pIVar31 = (Isolate *)
                          Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                    ((Factory *)param_1);
                *(undefined8 *)(*(ulong *)pIVar31 + 3) = 0xfff7fffffff7ffff;
              }
            }
            uVar25 = (ulong)(*(uint *)(lVar34 + *puVar13 + 0x13) >> 0x14) & 0x3ff;
            iVar19 = (int)uVar25;
            if (iVar19 < (int)uVar16) {
              uVar26 = *(ulong *)pIVar31;
              uVar27 = *puVar11;
              lVar30 = uVar27 + uVar25 * 4;
              *(int *)(lVar30 + 7) = (int)uVar26;
            }
            else {
              uVar26 = *(ulong *)pIVar31;
              uVar27 = *puVar8;
              lVar30 = uVar27 + (long)(int)((iVar19 - uVar16) * 4);
              *(int *)(lVar30 + 7) = (int)uVar26;
            }
            if ((uVar26 & 1) != 0) {
              uVar25 = *(ulong *)((uVar26 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar25 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar27,lVar30 + 7,uVar26);
                uVar25 = *(ulong *)(uVar26 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar25 & 0x18) != 0) &&
                 ((*(byte *)((uVar27 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar27,lVar30 + 7,uVar26);
              }
            }
          }
          lVar34 = lVar34 + 0xc;
        } while (uVar32 * 0xc - lVar34 != 0);
      }
      uVar25 = (ulong)(uVar20 >> 10) & 0x3ff;
      if ((int)uVar32 != (int)uVar25) {
        lVar30 = uVar25 - uVar32;
        lVar34 = uVar32 * 0xc00000000 + 0x1000000000;
        do {
          uVar32 = lVar34 >> 0x20 | 3;
          puVar21 = (uint *)(uVar32 + *puVar13);
          if ((*puVar21 >> 2 & 1) == 0) {
            pIVar31 = param_1 + 0x98;
            if ((*puVar21 & 0x380) == 0x100) {
              pIVar31 = (Isolate *)
                        Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)param_1);
              *(undefined8 *)(*(ulong *)pIVar31 + 3) = 0xfff7fffffff7ffff;
              puVar21 = (uint *)(*puVar13 + uVar32);
            }
            uVar32 = (ulong)(*puVar21 >> 0x14) & 0x3ff;
            iVar19 = (int)uVar32;
            if (iVar19 < (int)uVar16) {
              uVar26 = *puVar11;
              uVar25 = *(ulong *)pIVar31;
              lVar1 = uVar26 + uVar32 * 4;
              *(int *)(lVar1 + 7) = (int)uVar25;
            }
            else {
              uVar25 = *(ulong *)pIVar31;
              uVar26 = *puVar8;
              lVar1 = uVar26 + (long)(int)((iVar19 - uVar16) * 4);
              *(int *)(lVar1 + 7) = (int)uVar25;
            }
            if ((uVar25 & 1) != 0) {
              uVar32 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar32 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar26,lVar1 + 7,uVar25);
                uVar32 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar32 & 0x18) != 0) &&
                 ((*(byte *)((uVar26 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar26,lVar1 + 7,uVar25);
              }
            }
          }
          lVar30 = lVar30 + -1;
          lVar34 = lVar34 + 0xc00000000;
        } while (lVar30 != 0);
      }
      Heap::NotifyObjectLayoutChange((Heap *)(param_1 + 0x8850),*param_2,auStack_78,1);
      if ((int)uVar6 <= (int)uVar16) {
        uVar16 = uVar6;
      }
      if (0 < (int)uVar16) {
        uVar32 = 0;
        lVar34 = 7;
        do {
          uVar25 = *param_3;
          lVar30 = (ulong)*(byte *)(uVar25 + 3) - (ulong)*(byte *)(uVar25 + 4);
          if ((long)uVar32 < lVar30) {
            uVar26 = (ulong)*(byte *)(uVar25 + 4) << 0x1c;
            iVar19 = ((int)uVar32 + (uint)*(byte *)(uVar25 + 4)) * 4;
          }
          else {
            iVar19 = ((int)uVar32 + ((uint)*(byte *)(uVar25 + 4) - (uint)*(byte *)(uVar25 + 3))) * 4
                     + 8;
            uVar26 = 0x20000000;
          }
          local_68 = *param_2;
          RawFastPropertyAtPut
                    ((JSObject *)&local_68,
                     lVar30 * 0x10000 | (ulong)((long)uVar32 < lVar30) << 0xd | (long)iVar19 |
                     uVar26,param_1 + *(uint *)(lVar34 + *puVar11),4);
          uVar32 = uVar32 + 1;
          lVar34 = lVar34 + 4;
        } while (uVar32 < uVar16);
      }
      local_68 = *param_2;
      JSReceiver::SetProperties((JSReceiver *)&local_68,*puVar8);
      uVar32 = *param_3;
      lVar34 = (ulong)*(byte *)(uVar32 + 3) * 4;
      iVar19 = (uint)*(byte *)(*puVar9 + 3) * 4 - (int)lVar34;
      if (0 < iVar19) {
        Heap::CreateFillerObjectAt((Heap *)(param_1 + 0x8850),lVar34 + *param_2 + -1,iVar19,0,1);
        uVar32 = *param_3;
      }
      uVar25 = *param_2;
      if ((int)uVar32 != 0) {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar25 & 0xffffffff00000000 | 0x8850),uVar25,uVar32)
        ;
        *(int *)(uVar25 - 1) = (int)uVar32;
        if (((uVar32 & 1) != 0) && ((*(byte *)((uVar32 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar25,0,uVar32);
        }
        goto LAB_010d551c;
      }
    }
  }
  *(undefined4 *)(uVar25 - 1) = 0;
LAB_010d551c:
  uVar32 = *puVar7;
  if ((*(uint *)(uVar32 + 0xb) >> 0x14 & 1) != 0) {
    *(uint *)(uVar32 + 0xb) = *(uint *)(uVar32 + 0xb) & 0xffbfffff;
  }
  return;
}

