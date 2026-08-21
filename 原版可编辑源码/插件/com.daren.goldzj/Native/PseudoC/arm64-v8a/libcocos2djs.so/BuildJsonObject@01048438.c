
/* v8::internal::JsonParser<unsigned short>::BuildJsonObject(v8::internal::JsonParser<unsigned
   short>::JsonContinuation const&, std::__ndk1::vector<v8::internal::JsonProperty,
   std::__ndk1::allocator<v8::internal::JsonProperty> > const&,
   v8::internal::Handle<v8::internal::Map>) */

ulong * __thiscall
v8::internal::JsonParser<unsigned_short>::BuildJsonObject
          (JsonParser<unsigned_short> *this,long param_1,long *param_2,ulong *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  Isolate *pIVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  uint uVar33;
  undefined4 *puVar34;
  int local_110;
  undefined4 *local_100;
  ulong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ulong local_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  pIVar25 = *(Isolate **)this;
  iVar6 = *(int *)(param_1 + 0x20);
  uVar16 = *(uint *)(param_1 + 0x18) >> 2;
  uVar24 = (ulong)uVar16;
  uVar21 = *(ulong *)(pIVar25 + 0x2bc8) & 0xffffffff00000000;
  uVar16 = (int)((ulong)(param_2[1] - *param_2) >> 3) * -0x55555555 - uVar16;
  uVar21 = uVar21 | *(uint *)((uVar21 | *(uint *)(*(ulong *)(pIVar25 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar25 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar25 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar25 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar25);
    }
    *(ulong **)(pIVar25 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar21;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar25 + 0x95b8),uVar21);
  }
  puVar7 = (ulong *)Factory::ObjectLiteralMapFromCache((Factory *)pIVar25,puVar7,uVar16 - iVar6);
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 == 0) {
    puVar8 = (ulong *)(*(long *)this + 0x168);
LAB_01048660:
    puVar13 = puVar7;
    if (param_4 != (ulong *)0x0) goto LAB_0104866c;
LAB_01048758:
    uVar2 = 0;
  }
  else {
    iVar18 = *(int *)(param_1 + 0x1c);
    iVar6 = base::bits::RoundUpToPowerOfTwo32(iVar6 + (iVar6 >> 1));
    if (iVar6 < 5) {
      iVar6 = 4;
    }
    if (iVar18 + 1U < (uint)(iVar6 * 9)) {
      puVar8 = (ulong *)Factory::NewFixedArrayWithHoles
                                  (*(Factory **)this,*(int *)(param_1 + 0x1c) + 1,0);
      if (0 < (int)uVar16) {
        uVar21 = (ulong)uVar16;
        uVar17 = *(ulong *)((*puVar8 & 0xfffffffffffc0000) + 8);
        lVar30 = uVar24 * 0x18;
        do {
          piVar1 = (int *)(*param_2 + lVar30);
          if ((*(byte *)(piVar1 + 2) >> 3 & 1) != 0) {
            uVar28 = *puVar8;
            uVar26 = **(ulong **)(piVar1 + 4);
            lVar32 = uVar28 + (long)(*piVar1 << 2);
            *(int *)(lVar32 + 7) = (int)uVar26;
            if (((uVar17 & 0x40000) != 0 || (uVar17 & 0x18) == 0) && (uVar26 & 1) != 0) {
              uVar19 = *(ulong *)((uVar26 & 0xfffffffffffc0000) + 8);
              lVar32 = lVar32 + 7;
              if (((uint)uVar19 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar28,lVar32,uVar26);
                uVar19 = *(ulong *)(uVar26 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar19 & 0x18) != 0) &&
                 ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar28,lVar32,uVar26);
              }
            }
          }
          uVar21 = uVar21 - 1;
          lVar30 = lVar30 + 0x18;
        } while (uVar21 != 0);
      }
      goto LAB_01048660;
    }
    puVar8 = (ulong *)HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                      ::New(*(undefined8 *)this,*(undefined4 *)(param_1 + 0x20),0,0);
    uVar21 = (ulong)uVar16;
    if (0 < (int)uVar16) {
      lVar30 = uVar24 * 0x18;
      do {
        puVar20 = (undefined4 *)(*param_2 + lVar30);
        if ((*(byte *)(puVar20 + 2) >> 3 & 1) != 0) {
          puVar8 = (ulong *)NumberDictionary::Set
                                      (*(undefined8 *)this,puVar8,*puVar20,
                                       *(undefined8 *)(puVar20 + 4),0,0xc0);
        }
        uVar21 = uVar21 - 1;
        lVar30 = lVar30 + 0x18;
      } while (uVar21 != 0);
    }
    puVar13 = (ulong *)Map::AsElementsKind(*(undefined8 *)this,puVar7,0xc);
    if (param_4 == (ulong *)0x0) goto LAB_01048758;
LAB_0104866c:
    uVar21 = *param_4;
    if (((*(byte *)(*puVar13 + 10) ^ *(byte *)(uVar21 + 10)) < 8) &&
       (*(char *)(uVar21 + 3) == *(char *)(*puVar13 + 3))) {
      uVar2 = *(uint *)(uVar21 + 0xb) >> 10 & 0x3ff;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((int)uVar16 < 1) {
    local_110 = 0;
    iVar6 = 0;
    uVar21 = 0;
    if (uVar16 != 0) goto LAB_01048e70;
  }
  else {
    uVar21 = 0;
    iVar6 = 0;
    lVar30 = uVar24 * 0x18;
    local_110 = 0;
    do {
      lVar29 = *param_2;
      lVar32 = lVar29 + lVar30;
      if ((*(byte *)(lVar32 + 8) >> 3 & 1) == 0) {
        uVar17 = (long)iVar6 * 0xc00000000 + 0x1000000000 >> 0x20;
        if (iVar6 < (int)uVar2) {
          uVar26 = *param_4 & 0xffffffff00000000;
          pIVar25 = *(Isolate **)this;
          uVar26 = uVar26 | *(uint *)((uVar26 | *(uint *)(*param_4 + 0x17)) + uVar17 + -1);
          if (*(CanonicalHandleScope **)(pIVar25 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(pIVar25 + 0x95a0);
            if (puVar9 == *(ulong **)(pIVar25 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar25);
            }
            *(ulong **)(pIVar25 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar26;
            puVar27 = (ulong *)0x0;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar25 + 0x95b8),uVar26);
            puVar27 = (ulong *)0x0;
          }
        }
        else {
          local_d8 = *(ulong *)this;
          uVar26 = *puVar13;
          uStack_d0 = 0;
          uStack_cc = 0;
          local_c8 = (undefined4)uVar26;
          uStack_c4 = (undefined4)(uVar26 >> 0x20);
          local_c0 = *(uint *)(uVar26 + 0x23) + local_d8;
          iVar18 = 1;
          if (((local_c0 & 1) != 0) && ((int)local_c0 != 3)) {
            uVar26 = local_c0 & 3;
            iVar18 = (int)uVar26;
            if (uVar26 != 3) {
              if (uVar26 != 1) goto LAB_01049434;
              uVar26 = local_c0 & 0xffffffff00000000 | 7;
              if (*(short *)(uVar26 + *(uint *)(local_c0 - 1)) == 0x98) {
                iVar18 = 4;
              }
              else {
                iVar18 = (uint)(*(short *)(uVar26 + *(uint *)(local_c0 - 1)) != 100) << 1;
              }
            }
          }
          local_b8 = (ulong *)CONCAT44(local_b8._4_4_,iVar18);
          puVar9 = (ulong *)TransitionsAccessor::ExpectedTransitionKey
                                      ((TransitionsAccessor *)&local_d8);
          if (puVar9 == (ulong *)0x0) {
            puVar27 = (ulong *)0x0;
          }
          else {
            pIVar10 = *(Isolate **)this;
            pIVar25 = pIVar10 + *(uint *)(*puVar13 + 0x23);
            if ((((ulong)pIVar25 & 1) == 0) || ((int)pIVar25 == 3)) goto LAB_01049434;
            if (((ulong)pIVar25 & 3) == 3) {
              uVar26 = (ulong)pIVar25 & 0xfffffffffffffffd;
            }
            else {
              if ((((ulong)pIVar25 & 3) != 1) ||
                 (*(short *)(((ulong)pIVar25 & 0xffffffff00000000 | 7) +
                            (ulong)*(uint *)(pIVar25 + -1)) != 0x98)) goto LAB_01049434;
              uVar26 = (ulong)pIVar25 & 0xffffffff00000000 |
                       (ulong)*(uint *)(pIVar25 + 0x13) & 0xfffffffd;
            }
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar27 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar27 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar27 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar27 + 1;
              *puVar27 = uVar26;
            }
            else {
              puVar27 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar26);
            }
          }
        }
        puVar11 = (ulong *)MakeString(this,lVar32,puVar9);
        if ((puVar11 == puVar9) ||
           (((puVar9 != (ulong *)0x0 && (puVar11 != (ulong *)0x0)) && (*puVar11 == *puVar9)))) {
          puVar9 = param_4;
          if ((int)uVar2 <= iVar6) {
            puVar9 = puVar27;
          }
        }
        else {
          if (iVar6 < (int)uVar2) {
            if (iVar6 != 0) {
              pIVar25 = *(Isolate **)this;
              local_d8 = *param_4;
              uVar26 = Map::FindFieldOwner((Map *)&local_d8,pIVar25,(long)(iVar6 + -1));
              if (*(CanonicalHandleScope **)(pIVar25 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar13 = *(ulong **)(pIVar25 + 0x95a0);
                if (puVar13 == *(ulong **)(pIVar25 + 0x95a8)) {
                  puVar13 = (ulong *)HandleScope::Extend(pIVar25);
                }
                *(ulong **)(pIVar25 + 0x95a0) = puVar13 + 1;
                *puVar13 = uVar26;
              }
              else {
                puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(pIVar25 + 0x95b8),uVar26);
              }
            }
            uVar2 = 0;
          }
          local_d8 = *(ulong *)this;
          uStack_d0 = SUB84(puVar13,0);
          uStack_cc = (undefined4)((ulong)puVar13 >> 0x20);
          uVar26 = *puVar13;
          local_c8 = (undefined4)uVar26;
          uStack_c4 = (undefined4)(uVar26 >> 0x20);
          local_c0 = *(uint *)(uVar26 + 0x23) + local_d8;
          iVar18 = 1;
          if (((local_c0 & 1) != 0) && ((int)local_c0 != 3)) {
            uVar26 = local_c0 & 3;
            iVar18 = (int)uVar26;
            if (uVar26 != 3) {
              if (uVar26 != 1) goto LAB_01049434;
              uVar26 = local_c0 & 0xffffffff00000000 | 7;
              if (*(short *)(uVar26 + *(uint *)(local_c0 - 1)) == 0x98) {
                iVar18 = 4;
              }
              else {
                iVar18 = (uint)(*(short *)(uVar26 + *(uint *)(local_c0 - 1)) != 100) << 1;
              }
            }
          }
          local_b8 = (ulong *)CONCAT44(local_b8._4_4_,iVar18);
          puVar9 = (ulong *)TransitionsAccessor::FindTransitionToDataProperty
                                      ((TransitionsAccessor *)&local_d8,puVar11,1);
          if (puVar9 == (ulong *)0x0) goto LAB_01048dd0;
        }
        uVar26 = *puVar9;
        puVar27 = *(ulong **)(lVar29 + lVar30 + 0x10);
        uVar19 = uVar26 & 0xffffffff00000000 | (ulong)*(uint *)(uVar26 + 0x17);
        uVar28 = *puVar27;
        uVar33 = *(int *)(uVar19 + (uVar17 | 3)) >> 1;
        uVar15 = uVar33 >> 6 & 7;
        if ((uVar15 - 1 == 0) && (FLAG_track_fields != '\0')) {
          if ((uVar28 & 1) != 0) goto LAB_01048b7c;
LAB_01048d38:
          if (uVar15 == 2) {
            local_110 = (~(uint)*puVar27 & 1) + local_110;
          }
        }
        else {
          if ((uVar15 == 2) && (FLAG_track_double_fields != '\0')) {
            if (((uVar28 & 1) != 0) &&
               (*(short *)((uVar28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar28 - 1)) != 0x42
               )) goto LAB_01048b7c;
            goto LAB_01048d38;
          }
          if ((uVar15 != 3) || (FLAG_track_heap_object_fields == '\0')) {
            if ((FLAG_track_fields == '\0') || (uVar15 != 0)) {
              if (uVar15 != 3) goto LAB_01048d38;
              goto LAB_01048ce0;
            }
LAB_01048b7c:
            pIVar25 = *(Isolate **)this;
            if (FLAG_track_fields == '\0') {
LAB_01048bf0:
              uVar22 = 4;
LAB_01048bf4:
              bVar5 = uVar15 < uVar22;
              if (uVar22 != uVar15) {
LAB_01048c0c:
                if (!bVar5) {
                  bVar5 = uVar22 == 0;
                  if (uVar15 != 3) {
                    bVar5 = uVar22 < uVar15;
                  }
                  uVar22 = uVar15;
                  if (!bVar5) {
                    uVar22 = 4;
                  }
                }
              }
            }
            else {
              if ((uVar28 & 1) == 0) {
                uVar22 = 1;
                goto LAB_01048bf4;
              }
              if ((FLAG_track_double_fields != '\0') &&
                 (*(short *)(((ulong)pIVar25 | 7) + (ulong)*(uint *)(uVar28 - 1)) == 0x42)) {
                uVar22 = 2;
                goto LAB_01048bf4;
              }
              if ((FLAG_track_computed_fields != '\0') && ((int)uVar28 == *(int *)(pIVar25 + 0x98)))
              {
                uVar22 = 0;
                goto LAB_01048bf4;
              }
              if (FLAG_track_heap_object_fields == '\0') goto LAB_01048bf0;
              bVar5 = uVar15 == 0;
              uVar22 = 3;
              if (uVar15 != 3) goto LAB_01048c0c;
            }
            if (uVar15 == 0) {
              if (uVar22 != 2) {
LAB_01048c68:
                local_d8 = uVar28;
                uVar14 = Object::OptimalType((Object *)&local_d8,pIVar25,uVar22);
                uVar33 = uVar33 >> 2;
                uVar31 = *(undefined8 *)this;
                uVar15 = uVar22;
LAB_01048c98:
                Map::GeneralizeField(uVar31,puVar9,(long)iVar6,uVar33 & 1,uVar15,uVar14);
                goto LAB_01048d58;
              }
            }
            else if (((uVar22 == 4) && ((uVar15 - 1 & 0xff) < 3)) &&
                    (FLAG_modify_field_representation_inplace != '\0')) goto LAB_01048c68;
            if (iVar6 != 0) {
              local_d8 = uVar26;
              uVar17 = Map::FindFieldOwner((Map *)&local_d8,pIVar25,(long)(iVar6 + -1));
              if (*(CanonicalHandleScope **)(pIVar25 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar13 = *(ulong **)(pIVar25 + 0x95a0);
                if (puVar13 == *(ulong **)(pIVar25 + 0x95a8)) {
                  puVar13 = (ulong *)HandleScope::Extend(pIVar25);
                }
                *(ulong **)(pIVar25 + 0x95a0) = puVar13 + 1;
                *puVar13 = uVar17;
              }
              else {
                puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(pIVar25 + 0x95b8),uVar17);
              }
            }
            goto LAB_01048dd0;
          }
          if ((uVar28 & 1) == 0) goto LAB_01048b7c;
LAB_01048ce0:
          local_d8 = Map::UnwrapFieldType
                               (uVar26 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + uVar19 + 7))
          ;
          uVar17 = FieldType::NowContains((FieldType *)&local_d8,*puVar27);
          if ((uVar17 & 1) == 0) {
            local_d8 = *puVar27;
            uVar14 = Object::OptimalType((Object *)&local_d8,*(undefined8 *)this,uVar15);
            uVar31 = *(undefined8 *)this;
            uVar33 = uVar33 >> 2 & 0xc0000001;
            goto LAB_01048c98;
          }
        }
LAB_01048d58:
        iVar6 = iVar6 + 1;
        puVar13 = puVar9;
      }
      uVar21 = uVar21 + 1;
      lVar30 = lVar30 + 0x18;
    } while (uVar16 != uVar21);
    uVar21 = (ulong)uVar16;
LAB_01048dd0:
    if ((uint)uVar21 != uVar16) goto LAB_01048e70;
  }
  if ((iVar6 < (int)uVar2) && (iVar6 != 0)) {
    pIVar25 = *(Isolate **)this;
    local_d8 = *puVar13;
    uVar17 = Map::FindFieldOwner((Map *)&local_d8,pIVar25,(long)(iVar6 + -1));
    if (*(CanonicalHandleScope **)(pIVar25 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(pIVar25 + 0x95a0);
      if (puVar13 == *(ulong **)(pIVar25 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(pIVar25);
      }
      *(ulong **)(pIVar25 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar17;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar25 + 0x95b8),uVar17);
    }
  }
LAB_01048e70:
  if (local_110 < 1) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)Factory::NewByteArray(*(Factory **)this,local_110 << 4,0);
  }
  if ((*(uint *)(*puVar7 + 0xb) >> 0x15 & 1) == 0) {
    puVar7 = (ulong *)Factory::NewJSObjectFromMap(*(Factory **)this,puVar13,0,0);
  }
  else {
    puVar7 = (ulong *)Factory::NewSlowJSObjectFromMap(*(Factory **)this,puVar13,2,0,0);
  }
  uVar26 = *puVar7;
  uVar17 = *puVar8;
  *(int *)(uVar26 + 7) = (int)uVar17;
  if ((uVar17 & 1) != 0) {
    uVar28 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar28 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar26,uVar26 + 7,uVar17);
      uVar28 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar28 & 0x18) != 0) && ((*(byte *)((uVar26 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar26,uVar26 + 7,uVar17);
    }
  }
  uVar17 = *(ulong *)((*puVar7 & 0xfffffffffffc0000) + 8);
  if (plVar12 == (long *)0x0) {
    puVar20 = (undefined4 *)0x0;
  }
  else {
    puVar20 = (undefined4 *)(*plVar12 + 7);
  }
  if ((int)uVar21 != 0) {
    local_100 = puVar20;
    puVar34 = puVar20 + 1;
    if (((ulong)puVar20 & 7) != 0) {
      local_100 = puVar20 + 3;
      puVar34 = puVar20;
    }
    iVar6 = 0;
    uVar26 = uVar21 & 0xffffffff;
    lVar30 = uVar24 * 0x18;
    do {
      if ((*(byte *)(*param_2 + lVar30 + 8) >> 3 & 1) == 0) {
        uVar19 = *puVar13;
        uVar23 = (long)iVar6 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
        uVar28 = **(ulong **)(*param_2 + lVar30 + 0x10);
        uVar2 = *(int *)((uVar19 & 0xffffffff00000000) + uVar23 + (ulong)*(uint *)(uVar19 + 0x17))
                >> 1;
        uVar33 = uVar2 >> 0x13 & 0x3ff;
        iVar18 = (uint)*(byte *)(uVar19 + 3) - (uint)*(byte *)(uVar19 + 4);
        if ((int)uVar33 < iVar18) {
          uVar33 = (uVar33 + *(byte *)(uVar19 + 4)) * 4;
        }
        else {
          uVar33 = (uVar33 - iVar18) * 4 + 8;
        }
        uVar2 = uVar2 >> 6 & 7;
        local_d8 = CONCAT71(local_d8._1_7_,(char)uVar2);
        if (4 < uVar2) {
          uVar14 = Representation::Mnemonic((Representation *)&local_d8);
          PrintF("%s\n",uVar14);
LAB_01049434:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar6 = iVar6 + 1;
        if ((*(uint *)((uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + 0x17)) + uVar23) &
            0x380) == 0x100) {
          iVar18 = (int)uVar28;
          if ((uVar28 & 1) == 0) {
            uVar28 = *(ulong *)(*(long *)this + 0x88);
            *local_100 = (int)uVar28;
            if (((uVar28 & 1) != 0) &&
               ((*(byte *)((uVar28 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
              Heap_MarkingBarrierSlow((long)local_100 + 1,0);
            }
            local_100 = local_100 + 4;
            uVar19 = *(ulong *)(*(long *)this + 0x140);
            uVar28 = (long)puVar34 + 1;
            *puVar34 = (int)uVar19;
            if (((uVar19 & 1) != 0) &&
               ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
              Heap_MarkingBarrierSlow(uVar28,0);
            }
            *(double *)(puVar34 + 1) = (double)(iVar18 >> 1);
            puVar34 = puVar34 + 4;
          }
          else {
            uVar19 = *(ulong *)(*(long *)this + 0x140);
            if ((int)uVar19 == 0) {
              *(undefined4 *)(uVar28 - 1) = 0;
            }
            else {
              Heap::VerifyObjectLayoutChange
                        ((Heap *)(uVar28 & 0xffffffff00000000 | 0x8850),uVar28,uVar19);
              *(int *)(uVar28 - 1) = (int)uVar19;
              if (((uVar19 & 1) != 0) &&
                 ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                Heap_MarkingBarrierSlow(uVar28,0,uVar19);
              }
            }
          }
        }
        uVar19 = *puVar7;
        lVar32 = (uVar33 & 0x1fff) + uVar19;
        *(int *)(lVar32 + -1) = (int)uVar28;
        if (((uVar17 & 0x40000) != 0 || (uVar17 & 0x18) == 0) && (uVar28 & 1) != 0) {
          uVar23 = *(ulong *)((uVar28 & 0xfffffffffffc0000) + 8);
          lVar32 = lVar32 + -1;
          if (((uint)uVar23 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar19,lVar32,uVar28);
            uVar23 = *(ulong *)(uVar28 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar19,lVar32,uVar28);
          }
        }
      }
      uVar26 = uVar26 - 1;
      lVar30 = lVar30 + 0x18;
    } while (uVar26 != 0);
  }
  if (plVar12 != (long *)0x0) {
    *(undefined4 *)(*plVar12 + 3) = 0;
  }
  if ((int)uVar21 < (int)uVar16) {
    lVar32 = (ulong)uVar16 - (uVar21 & 0xffffffff);
    lVar30 = (uVar24 + (uVar21 & 0xffffffff)) * 0x18;
    do {
      pIVar25 = *(Isolate **)this;
      uVar14 = *(undefined8 *)(pIVar25 + 0x95a0);
      lVar3 = *(long *)(pIVar25 + 0x95a8);
      *(int *)(pIVar25 + 0x95b0) = *(int *)(pIVar25 + 0x95b0) + 1;
      lVar29 = *param_2 + lVar30;
      if ((*(byte *)(lVar29 + 8) >> 3 & 1) == 0) {
        puVar8 = (ulong *)MakeString(this,lVar29,0);
        local_c0 = *(ulong *)this;
        uVar31 = *(undefined8 *)(lVar29 + 0x10);
        if (*(short *)((local_c0 | 7) + (ulong)*(uint *)(*puVar8 - 1)) == 0x40) {
          uVar16 = ~*(uint *)(*puVar8 + 7) & 1;
        }
        else {
          uVar16 = 1;
        }
        local_d8 = CONCAT44(local_d8._4_4_,uVar16);
        uStack_cc = 0;
        local_c8 = 0xc0;
        if ((*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) &
            0xffe0) == 0x20) {
          puVar8 = (ulong *)StringTable::LookupString();
        }
        uStack_b0 = 0;
        uStack_a0 = 0;
        local_90 = 0xffffffffffffffff;
        uStack_88 = 0xffffffffffffffff;
        local_b8 = puVar8;
        local_a8 = puVar7;
        local_98 = puVar7;
        LookupIterator::Start<false>((LookupIterator *)&local_d8);
        lVar29 = JSObject::DefineOwnPropertyIgnoreAttributes(&local_d8,uVar31,0,1);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
      }
      if (pIVar25 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar25 + 0x95a0) = uVar14;
        *(int *)(pIVar25 + 0x95b0) = *(int *)(pIVar25 + 0x95b0) + -1;
        if (*(long *)(pIVar25 + 0x95a8) != lVar3) {
          *(long *)(pIVar25 + 0x95a8) = lVar3;
          HandleScope::DeleteExtensions(pIVar25);
        }
      }
      lVar32 = lVar32 + -1;
      lVar30 = lVar30 + 0x18;
    } while (lVar32 != 0);
  }
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}

