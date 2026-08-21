
undefined8 FUN_015826e0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  Isolate *pIVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  double dVar25;
  int local_134;
  uint local_128;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  Isolate *local_b8;
  Isolate *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x1e2);
  }
  if (DAT_01d47268 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47268 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47268;
  local_120 = (byte **)0x0;
  if ((*DAT_01d47268 & 5) != 0) {
    local_d0 = (long *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar4,"V8.Runtime_Runtime_RegExpSplit",0,0,0,0,0,0,0,&local_d0,0
                      );
    plVar8 = (long *)CONCAT44(uStack_c4,local_c8);
    local_c8 = 0;
    uStack_c4 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_RegExpSplit";
    local_118 = pbVar4;
    local_108 = uVar9;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar17 = *param_2;
  if (((uVar17 & 1) == 0) ||
     (*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  puVar15 = param_2 + -1;
  uVar17 = *puVar15;
  if (((uVar17 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar17 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar17 = uVar17 | *(uint *)((uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x243);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = puVar1;
    if (puVar2 == puVar1) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar17;
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17);
  }
  lVar11 = v8::internal::Object::SpeciesConstructor(param_3,param_2,puVar10);
  if (lVar11 == 0) {
LAB_01582fe8:
    uVar9 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uVar17 = *(ulong *)(param_3 + 0x6b0);
    local_b0 = param_3 + 0x6b0;
    uVar19 = 3;
    if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x40) &&
       (uVar19 = 3, (*(byte *)(uVar17 + 7) & 1) != 0)) {
      uVar19 = 0;
    }
    local_d0 = (long *)CONCAT44(local_d0._4_4_,uVar19);
    uStack_c4 = 0;
    uStack_c0 = 0xc0;
    local_b8 = param_3;
    if ((*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) & 0xffe0) ==
        0x20) {
      local_b0 = (Isolate *)v8::internal::StringTable::LookupString(param_3);
    }
    uStack_a8 = 0;
    uStack_98 = 0;
    local_80 = 0xffffffffffffffff;
    uStack_88 = 0xffffffffffffffff;
    local_a0 = param_2;
    local_90 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d0);
    if (local_d0._4_4_ == 4) {
      pIVar12 = local_b8 + 0xa0;
      uVar17 = *(ulong *)pIVar12;
    }
    else {
      pIVar12 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
      if (pIVar12 == (Isolate *)0x0) goto LAB_01582fe8;
      uVar17 = *(ulong *)pIVar12;
    }
    if (((uVar17 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)))) {
      pIVar12 = (Isolate *)v8::internal::Object::ConvertToString(param_3,pIVar12);
    }
    if (pIVar12 == (Isolate *)0x0) goto LAB_01582fe8;
    uVar9 = v8::internal::Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,0x75);
    uVar5 = v8::internal::String::IndexOf(param_3,pIVar12,uVar9,0);
    uVar9 = v8::internal::Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,0x79);
    iVar6 = v8::internal::String::IndexOf(param_3,pIVar12,uVar9,0);
    if ((iVar6 < 0) &&
       (pIVar12 = (Isolate *)v8::internal::Factory::NewConsString((Factory *)param_3,pIVar12,uVar9),
       pIVar12 == (Isolate *)0x0)) goto LAB_01582fe8;
    plVar8 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)v8::internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar8 + 0x18))();
      plVar8 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    *plVar8 = (long)param_2;
    plVar8[1] = (long)pIVar12;
    lVar11 = v8::internal::Execution::New(param_3,lVar11,2,plVar8);
    if (lVar11 == 0) {
      uVar9 = *(undefined8 *)(param_3 + 0x180);
      operator_delete__(plVar8);
    }
    else {
      param_2 = param_2 + -2;
      operator_delete__(plVar8);
      uVar17 = *param_2;
      puVar10 = param_2;
      if ((uVar17 & 1) == 0) {
joined_r0x01582e24:
        if (puVar10 == (ulong *)0x0) goto LAB_01582fe8;
        uVar17 = *puVar10;
        if ((uVar17 & 1) == 0) {
          iVar6 = (int)uVar17 >> 1;
        }
        else {
          dVar25 = *(double *)(uVar17 + 3);
          if ((((dVar25 < -2147483648.0) || (2147483647.0 < dVar25)) || (ABS(dVar25) == INFINITY))
             || ((NAN(ABS(dVar25)) || (iVar6 = (int)dVar25, dVar25 != (double)(int)dVar25)))) {
            uVar3 = 0xfffffbce;
            if (((ulong)dVar25 & 0x7ff0000000000000) != 0) {
              uVar3 = ((uint)((ulong)dVar25 >> 0x34) & 0x7ff) - 0x433;
            }
            if ((int)uVar3 < 0) {
              if (-0x35 < (int)uVar3) {
                uVar17 = (ulong)dVar25 & 0xfffffffffffff;
                if (((ulong)dVar25 & 0x7ff0000000000000) != 0) {
                  uVar17 = (ulong)dVar25 & 0xfffffffffffff | 0x10000000000000;
                }
                iVar20 = (int)(uVar17 >> ((ulong)-uVar3 & 0x3f));
                goto LAB_01582fdc;
              }
            }
            else if ((int)uVar3 < 0x20) {
              uVar17 = (ulong)dVar25 & 0xfffffffffffff;
              if (((ulong)dVar25 & 0x7ff0000000000000) != 0) {
                uVar17 = (ulong)dVar25 & 0xfffffffffffff | 0x10000000000000;
              }
              iVar20 = (int)(uVar17 << ((ulong)uVar3 & 0x3f));
LAB_01582fdc:
              iVar6 = -iVar20;
              if (-1 < (long)dVar25) {
                iVar6 = iVar20;
              }
              goto joined_r0x01582fb8;
            }
            iVar6 = 0;
          }
        }
      }
      else {
        if ((int)uVar17 != *(int *)(param_3 + 0xa0)) {
          if (*(short *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0x42)
          {
            puVar10 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,param_2,0);
          }
          goto joined_r0x01582e24;
        }
        iVar6 = -1;
      }
joined_r0x01582fb8:
      if (param_2 == (ulong *)0x0) goto LAB_01582fe8;
      if (iVar6 == 0) {
LAB_01582f88:
        puVar16 = (undefined8 *)v8::internal::Factory::NewJSArray((Factory *)param_3,3,0,0,1,0);
      }
      else {
        uVar3 = *(uint *)(*puVar15 + 7);
        if (uVar3 != 0) {
          local_68 = v8::internal::Factory::NewFixedArrayWithHoles((Factory *)param_3,8,0);
          uVar7 = 0;
          local_134 = 0;
          local_128 = 0;
          do {
            lVar13 = v8::internal::RegExpUtils::SetLastIndex(param_3,lVar11,uVar7);
            if ((lVar13 == 0) ||
               (puVar10 = (ulong *)v8::internal::RegExpUtils::RegExpExec
                                             (param_3,lVar11,puVar15,param_3 + 0xa0),
               puVar10 == (ulong *)0x0)) goto LAB_01582fe8;
            if (((*puVar10 & 1) == 0) || ((int)*puVar10 != *(int *)(param_3 + 0xb0))) {
              puVar14 = (ulong *)v8::internal::RegExpUtils::GetLastIndex(param_3,lVar11);
              if (puVar14 == (ulong *)0x0) goto LAB_01582fe8;
              uVar17 = *puVar14;
              if ((uVar17 & 1) == 0) {
                uVar17 = (ulong)(((uint)(uVar17 >> 1) & 0x7fffffff &
                                 ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 1);
                if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar14 = *(ulong **)(param_3 + 0x95a0);
                  if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
                    puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                  }
                  *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
                  *puVar14 = uVar17;
                }
                else {
                  puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17)
                  ;
                }
              }
              else {
                puVar14 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar14);
              }
              if (puVar14 == (ulong *)0x0) goto LAB_01582fe8;
              uVar17 = *puVar14;
              if ((uVar17 & 1) == 0) {
                uVar24 = 0;
                if (1 < (int)uVar17) {
                  uVar24 = (int)uVar17 >> 1;
                }
              }
              else if (1.0 <= *(double *)(uVar17 + 3)) {
                dVar25 = (double)NEON_fminnm(*(double *)(uVar17 + 3),0x41efffffffe00000);
                uVar24 = (int)dVar25;
              }
              else {
                uVar24 = 0;
              }
              uVar21 = uVar3;
              if (uVar24 <= uVar3) {
                uVar21 = uVar24;
              }
              if (uVar21 == local_128) goto LAB_01582bd0;
              if ((local_128 != 0) || (puVar14 = puVar15, *(uint *)(*puVar15 + 7) != uVar7)) {
                puVar14 = (ulong *)v8::internal::Factory::NewProperSubString
                                             ((Factory *)param_3,puVar15,local_128,uVar7);
              }
              iVar20 = local_134 + 1;
              local_68 = v8::internal::FixedArray::SetAndGrow(param_3,local_68,local_134,puVar14);
              if (iVar20 == iVar6) goto LAB_015830e0;
              puVar14 = (ulong *)v8::internal::Object::GetProperty(param_3,puVar10,param_3 + 0x7b8);
              if (puVar14 == (ulong *)0x0) goto LAB_01582fe8;
              uVar17 = *puVar14;
              if ((uVar17 & 1) == 0) {
                uVar17 = (ulong)(((uint)(uVar17 >> 1) & 0x7fffffff &
                                 ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 1);
                if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar14 = *(ulong **)(param_3 + 0x95a0);
                  if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
                    puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                  }
                  *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
                  *puVar14 = uVar17;
                }
                else {
                  puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar17)
                  ;
                }
              }
              else {
                puVar14 = (ulong *)v8::internal::Object::ConvertToLength(param_3,puVar14);
              }
              if (puVar14 == (ulong *)0x0) goto LAB_01582fe8;
              uVar17 = *puVar14;
              local_128 = uVar21;
              uVar7 = uVar21;
              if ((uVar17 & 1) == 0) {
                if (1 < (int)uVar17) {
                  uVar24 = (int)uVar17 >> 1;
joined_r0x01582d58:
                  if (1 < uVar24) {
                    uVar21 = 1;
                    iVar22 = local_134 + 2;
                    do {
                      lVar13 = v8::internal::Object::GetElement(param_3,puVar10,uVar21);
                      if (lVar13 == 0) goto LAB_01582fe8;
                      local_68 = v8::internal::FixedArray::SetAndGrow
                                           (param_3,local_68,iVar22 + -1,lVar13);
                      if (iVar6 == iVar22) goto LAB_015830e0;
                      uVar21 = uVar21 + 1;
                      iVar22 = iVar22 + 1;
                      iVar20 = uVar24 + local_134;
                    } while (uVar24 != uVar21);
                  }
                }
              }
              else if (1.0 <= *(double *)(uVar17 + 3)) {
                dVar25 = (double)NEON_fminnm(*(double *)(uVar17 + 3),0x41efffffffe00000);
                uVar24 = (uint)dVar25;
                goto joined_r0x01582d58;
              }
            }
            else {
LAB_01582bd0:
              uVar7 = v8::internal::RegExpUtils::AdvanceStringIndex(puVar15,uVar7,~uVar5 >> 0x1f);
              iVar20 = local_134;
            }
            local_134 = iVar20;
          } while (uVar7 < uVar3);
          if ((local_128 != 0) || (*(uint *)(*puVar15 + 7) != uVar3)) {
            puVar15 = (ulong *)v8::internal::Factory::NewProperSubString
                                         ((Factory *)param_3,puVar15,local_128,uVar3);
          }
          iVar6 = local_134 + 1;
          local_68 = v8::internal::FixedArray::SetAndGrow(param_3,local_68,local_134,puVar15);
LAB_015830e0:
          plVar8 = (long *)v8::internal::FixedArray::ShrinkOrEmpty(param_3,local_68,iVar6);
          puVar16 = (undefined8 *)
                    v8::internal::Factory::NewJSArrayWithElements
                              (param_3,plVar8,3,*(int *)(*plVar8 + 3) >> 1,0);
          uVar9 = *puVar16;
          if (param_3 == (Isolate *)0x0) goto LAB_01583014;
          goto LAB_01582fec;
        }
        puVar10 = (ulong *)v8::internal::RegExpUtils::RegExpExec
                                     (param_3,lVar11,puVar15,param_3 + 0xa0);
        if (puVar10 == (ulong *)0x0) goto LAB_01582fe8;
        if (((*puVar10 & 1) == 0) || ((int)*puVar10 != *(int *)(param_3 + 0xb0))) goto LAB_01582f88;
        puVar10 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray((Factory *)param_3,1);
        uVar23 = *puVar10;
        uVar17 = *puVar15;
        *(int *)(uVar23 + 7) = (int)uVar17;
        if ((uVar17 & 1) != 0) {
          uVar18 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar18 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar23,uVar23 + 7,uVar17);
            uVar18 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar23,uVar23 + 7,uVar17);
          }
        }
        puVar16 = (undefined8 *)
                  v8::internal::Factory::NewJSArrayWithElements
                            (param_3,puVar10,3,*(int *)(*puVar10 + 3) >> 1,0);
      }
      uVar9 = *puVar16;
    }
  }
LAB_01582fec:
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_01583014:
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar9;
}

