
/* v8::internal::Runtime_RegExpSplit(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_RegExpSplit(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  double dVar24;
  int local_dc;
  uint local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  Isolate *local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_015826e0(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar17 = *param_2;
  if (((uVar17 & 1) == 0) ||
     (*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  puVar16 = param_2 + -1;
  uVar17 = *puVar16;
  if (((uVar17 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar17 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar17 = uVar17 | *(uint *)((uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x243);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = puVar2;
    if (puVar3 == puVar2) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
  }
  lVar9 = Object::SpeciesConstructor(param_3,param_2,puVar8);
  if (lVar9 != 0) {
    uVar17 = *(ulong *)(param_3 + 0x6b0);
    local_a8 = param_3 + 0x6b0;
    local_c8 = 3;
    if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x40) &&
       (local_c8 = 3, (*(byte *)(uVar17 + 7) & 1) != 0)) {
      local_c8 = 0;
    }
    local_bc = 0xc000000000;
    local_b0 = param_3;
    if ((*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) & 0xffe0) ==
        0x20) {
      local_a8 = (Isolate *)StringTable::LookupString(param_3);
    }
    uStack_a0 = 0;
    uStack_90 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_98 = param_2;
    local_88 = param_2;
    LookupIterator::Start<false>((LookupIterator *)&local_c8);
    if (local_c4 == 4) {
      pIVar10 = local_b0 + 0xa0;
      uVar17 = *(ulong *)pIVar10;
    }
    else {
      pIVar10 = (Isolate *)Object::GetProperty((LookupIterator *)&local_c8,false);
      if (pIVar10 == (Isolate *)0x0) goto LAB_01582590;
      uVar17 = *(ulong *)pIVar10;
    }
    if (((uVar17 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)))) {
      pIVar10 = (Isolate *)Object::ConvertToString(param_3,pIVar10);
    }
    if (pIVar10 != (Isolate *)0x0) {
      uVar11 = Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,0x75);
      uVar5 = String::IndexOf(param_3,pIVar10,uVar11,0);
      uVar11 = Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,0x79);
      iVar6 = String::IndexOf(param_3,pIVar10,uVar11,0);
      if ((-1 < iVar6) ||
         (pIVar10 = (Isolate *)Factory::NewConsString((Factory *)param_3,pIVar10,uVar11),
         pIVar10 != (Isolate *)0x0)) {
        puVar12 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
        if (puVar12 == (undefined8 *)0x0) {
          plVar13 = (long *)V8::GetCurrentPlatform();
          (**(code **)(*plVar13 + 0x18))();
          puVar12 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
          if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
          }
        }
        *puVar12 = param_2;
        puVar12[1] = pIVar10;
        lVar9 = Execution::New(param_3,lVar9,2,puVar12);
        if (lVar9 == 0) {
          uVar11 = *(undefined8 *)(param_3 + 0x180);
          operator_delete__(puVar12);
          goto LAB_01582594;
        }
        puVar15 = param_2 + -2;
        operator_delete__(puVar12);
        uVar17 = *puVar15;
        puVar8 = puVar15;
        if ((uVar17 & 1) == 0) {
joined_r0x015823cc:
          if (puVar8 == (ulong *)0x0) goto LAB_01582590;
          uVar17 = *puVar8;
          if ((uVar17 & 1) == 0) {
            iVar6 = (int)uVar17 >> 1;
          }
          else {
            dVar24 = *(double *)(uVar17 + 3);
            if ((((dVar24 < -2147483648.0) || (2147483647.0 < dVar24)) || (ABS(dVar24) == INFINITY))
               || ((NAN(ABS(dVar24)) || (iVar6 = (int)dVar24, dVar24 != (double)(int)dVar24)))) {
              uVar4 = 0xfffffbce;
              if (((ulong)dVar24 & 0x7ff0000000000000) != 0) {
                uVar4 = ((uint)((ulong)dVar24 >> 0x34) & 0x7ff) - 0x433;
              }
              if ((int)uVar4 < 0) {
                if (-0x35 < (int)uVar4) {
                  uVar17 = (ulong)dVar24 & 0xfffffffffffff;
                  if (((ulong)dVar24 & 0x7ff0000000000000) != 0) {
                    uVar17 = (ulong)dVar24 & 0xfffffffffffff | 0x10000000000000;
                  }
                  iVar19 = (int)(uVar17 >> ((ulong)-uVar4 & 0x3f));
                  goto LAB_01582584;
                }
              }
              else if ((int)uVar4 < 0x20) {
                uVar17 = (ulong)dVar24 & 0xfffffffffffff;
                if (((ulong)dVar24 & 0x7ff0000000000000) != 0) {
                  uVar17 = (ulong)dVar24 & 0xfffffffffffff | 0x10000000000000;
                }
                iVar19 = (int)(uVar17 << ((ulong)uVar4 & 0x3f));
LAB_01582584:
                iVar6 = -iVar19;
                if (-1 < (long)dVar24) {
                  iVar6 = iVar19;
                }
                goto joined_r0x01582560;
              }
              iVar6 = 0;
            }
          }
        }
        else {
          if ((int)uVar17 != *(int *)(param_3 + 0xa0)) {
            if (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x42
               ) {
              puVar8 = (ulong *)Object::ConvertToNumberOrNumeric(param_3,puVar15,0);
            }
            goto joined_r0x015823cc;
          }
          iVar6 = -1;
        }
joined_r0x01582560:
        if (puVar15 != (ulong *)0x0) {
          if (iVar6 == 0) {
LAB_01582530:
            puVar12 = (undefined8 *)Factory::NewJSArray((Factory *)param_3,3,0,0,1,0);
          }
          else {
            uVar4 = *(uint *)(*puVar16 + 7);
            if (uVar4 != 0) {
              local_68 = Factory::NewFixedArrayWithHoles((Factory *)param_3,8,0);
              uVar7 = 0;
              local_dc = 0;
              local_d0 = 0;
              do {
                lVar14 = RegExpUtils::SetLastIndex(param_3,lVar9,uVar7);
                if ((lVar14 == 0) ||
                   (puVar8 = (ulong *)RegExpUtils::RegExpExec(param_3,lVar9,puVar16,param_3 + 0xa0),
                   puVar8 == (ulong *)0x0)) goto LAB_01582590;
                if (((*puVar8 & 1) == 0) || ((int)*puVar8 != *(int *)(param_3 + 0xb0))) {
                  puVar15 = (ulong *)RegExpUtils::GetLastIndex(param_3,lVar9);
                  if (puVar15 == (ulong *)0x0) goto LAB_01582590;
                  uVar17 = *puVar15;
                  if ((uVar17 & 1) == 0) {
                    uVar17 = (ulong)(((uint)(uVar17 >> 1) & 0x7fffffff &
                                     ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 1);
                    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar15 = *(ulong **)pIVar1;
                      if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
                        puVar15 = (ulong *)HandleScope::Extend(param_3);
                      }
                      *(ulong **)pIVar1 = puVar15 + 1;
                      *puVar15 = uVar17;
                    }
                    else {
                      puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                                    uVar17);
                    }
                  }
                  else {
                    puVar15 = (ulong *)Object::ConvertToLength(param_3,puVar15);
                  }
                  if (puVar15 == (ulong *)0x0) goto LAB_01582590;
                  uVar17 = *puVar15;
                  if ((uVar17 & 1) == 0) {
                    uVar23 = 0;
                    if (1 < (int)uVar17) {
                      uVar23 = (int)uVar17 >> 1;
                    }
                  }
                  else if (1.0 <= *(double *)(uVar17 + 3)) {
                    dVar24 = (double)NEON_fminnm(*(double *)(uVar17 + 3),0x41efffffffe00000);
                    uVar23 = (int)dVar24;
                  }
                  else {
                    uVar23 = 0;
                  }
                  uVar20 = uVar4;
                  if (uVar23 <= uVar4) {
                    uVar20 = uVar23;
                  }
                  if (uVar20 == local_d0) goto LAB_01582178;
                  if ((local_d0 != 0) || (puVar15 = puVar16, *(uint *)(*puVar16 + 7) != uVar7)) {
                    puVar15 = (ulong *)Factory::NewProperSubString
                                                 ((Factory *)param_3,puVar16,local_d0,uVar7);
                  }
                  iVar19 = local_dc + 1;
                  local_68 = FixedArray::SetAndGrow(param_3,local_68,local_dc,puVar15);
                  if (iVar19 == iVar6) goto LAB_01582650;
                  puVar15 = (ulong *)Object::GetProperty(param_3,puVar8,param_3 + 0x7b8);
                  if (puVar15 == (ulong *)0x0) goto LAB_01582590;
                  uVar17 = *puVar15;
                  if ((uVar17 & 1) == 0) {
                    uVar17 = (ulong)(((uint)(uVar17 >> 1) & 0x7fffffff &
                                     ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 1);
                    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar15 = *(ulong **)pIVar1;
                      if (puVar15 == *(ulong **)(param_3 + 0x95a8)) {
                        puVar15 = (ulong *)HandleScope::Extend(param_3);
                      }
                      *(ulong **)pIVar1 = puVar15 + 1;
                      *puVar15 = uVar17;
                    }
                    else {
                      puVar15 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),
                                                    uVar17);
                    }
                  }
                  else {
                    puVar15 = (ulong *)Object::ConvertToLength(param_3,puVar15);
                  }
                  if (puVar15 == (ulong *)0x0) goto LAB_01582590;
                  uVar17 = *puVar15;
                  local_d0 = uVar20;
                  uVar7 = uVar20;
                  if ((uVar17 & 1) == 0) {
                    if (1 < (int)uVar17) {
                      uVar23 = (int)uVar17 >> 1;
joined_r0x01582300:
                      if (1 < uVar23) {
                        uVar20 = 1;
                        iVar21 = local_dc + 2;
                        do {
                          lVar14 = Object::GetElement(param_3,puVar8,uVar20);
                          if (lVar14 == 0) goto LAB_01582590;
                          local_68 = FixedArray::SetAndGrow(param_3,local_68,iVar21 + -1,lVar14);
                          if (iVar6 == iVar21) goto LAB_01582650;
                          uVar20 = uVar20 + 1;
                          iVar21 = iVar21 + 1;
                          iVar19 = uVar23 + local_dc;
                        } while (uVar23 != uVar20);
                      }
                    }
                  }
                  else if (1.0 <= *(double *)(uVar17 + 3)) {
                    dVar24 = (double)NEON_fminnm(*(double *)(uVar17 + 3),0x41efffffffe00000);
                    uVar23 = (uint)dVar24;
                    goto joined_r0x01582300;
                  }
                }
                else {
LAB_01582178:
                  uVar7 = RegExpUtils::AdvanceStringIndex(puVar16,uVar7,~uVar5 >> 0x1f);
                  iVar19 = local_dc;
                }
                local_dc = iVar19;
              } while (uVar7 < uVar4);
              if ((local_d0 != 0) || (*(uint *)(*puVar16 + 7) != uVar4)) {
                puVar16 = (ulong *)Factory::NewProperSubString
                                             ((Factory *)param_3,puVar16,local_d0,uVar4);
              }
              iVar6 = local_dc + 1;
              local_68 = FixedArray::SetAndGrow(param_3,local_68,local_dc,puVar16);
LAB_01582650:
              plVar13 = (long *)FixedArray::ShrinkOrEmpty(param_3,local_68,iVar6);
              puVar12 = (undefined8 *)
                        Factory::NewJSArrayWithElements
                                  (param_3,plVar13,3,*(int *)(*plVar13 + 3) >> 1,0);
              uVar11 = *puVar12;
              if (param_3 == (Isolate *)0x0) {
                return uVar11;
              }
              goto LAB_01582594;
            }
            puVar8 = (ulong *)RegExpUtils::RegExpExec(param_3,lVar9,puVar16,param_3 + 0xa0);
            if (puVar8 == (ulong *)0x0) goto LAB_01582590;
            if (((*puVar8 & 1) == 0) || ((int)*puVar8 != *(int *)(param_3 + 0xb0)))
            goto LAB_01582530;
            puVar8 = (ulong *)Factory::NewUninitializedFixedArray((Factory *)param_3,1);
            uVar22 = *puVar8;
            uVar17 = *puVar16;
            *(int *)(uVar22 + 7) = (int)uVar17;
            if ((uVar17 & 1) != 0) {
              uVar18 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar18 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar22,uVar22 + 7,uVar17);
                uVar18 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar18 & 0x18) != 0) &&
                 ((*(byte *)((uVar22 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar22,uVar22 + 7,uVar17);
              }
            }
            puVar12 = (undefined8 *)
                      Factory::NewJSArrayWithElements(param_3,puVar8,3,*(int *)(*puVar8 + 3) >> 1,0)
            ;
          }
          uVar11 = *puVar12;
          goto LAB_01582594;
        }
      }
    }
  }
LAB_01582590:
  uVar11 = *(undefined8 *)(param_3 + 0x180);
LAB_01582594:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

