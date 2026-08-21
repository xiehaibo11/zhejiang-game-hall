
ulong FUN_014a94dc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  long lVar13;
  bool bVar14;
  ushort uVar15;
  int iVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  int *piVar19;
  long *plVar20;
  ulong *puVar21;
  ulong *puVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong uVar28;
  Isolate *pIVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  undefined8 uVar38;
  uint uVar39;
  Factory *pFVar40;
  long lVar41;
  uint uVar42;
  byte bVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  double dVar48;
  double dVar49;
  undefined8 local_118;
  ulong *local_110;
  Isolate *local_108;
  ulong *local_100;
  uint local_f8;
  uint local_f4;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulong *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  ulong uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar13 = tpidr_el0;
  local_80 = *(long *)(lVar13 + 0x28);
  pIVar2 = param_3 + 0x95a0;
  lVar4 = *(long *)pIVar2;
  lVar6 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar27 = *param_2;
  local_118 = param_1;
  local_110 = param_2;
  if (((uVar27 & 1) == 0) ||
     (puVar17 = param_2,
     *(ushort *)((uVar27 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar27 - 1)) < 0xa9)) {
    puVar17 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,"Array.prototype.concat");
  }
  if (puVar17 == (ulong *)0x0) {
LAB_014a9e10:
    uVar27 = *(ulong *)(param_3 + 0x180);
  }
  else {
    *param_2 = *puVar17;
    uVar27 = *puVar17;
    if (((uVar27 & 1) == 0) ||
       (*(short *)((uVar27 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar27 - 1)) != 0x423)) {
LAB_014a9648:
      piVar19 = (int *)v8::internal::Object::ArraySpeciesConstructor(param_3,puVar17);
      if (piVar19 == (int *)0x0) goto LAB_014a9e10;
      uVar38 = *(undefined8 *)piVar19;
      uVar27 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar39 = *(uint *)((uVar27 | *(uint *)((uVar27 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1))
                                            + 0x13)) + 0x2f);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar17 = *(ulong **)pIVar2;
        if (puVar17 == *(ulong **)(param_3 + 0x95a8)) {
          puVar17 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar17 + 1;
        *puVar17 = uVar27 | uVar39;
      }
      else {
        puVar18 = (undefined8 *)
                  v8::internal::CanonicalHandleScope::Lookup
                            (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar27 | uVar39);
        uVar39 = (uint)*puVar18;
      }
      if ((uint)uVar38 == uVar39) {
        puVar21 = (ulong *)FUN_014ab580(param_3,&local_118);
        if (puVar21 != (ulong *)0x0) goto LAB_014a962c;
        if (((*(ulong *)(param_3 + 0x2bd8) & 1) == 0) ||
           ((int)*(ulong *)(param_3 + 0x2bd8) != *(int *)(param_3 + 0xa8))) goto LAB_014a9e10;
      }
      iVar8 = *piVar19;
      iVar10 = *(int *)(*(long *)(param_3 + 0x2bc8) + 0x2f);
      uVar39 = (int)local_118 - 4;
      if ((int)uVar39 < 1) {
        uVar42 = 0;
        uVar46 = 0;
        bVar43 = 0;
      }
      else {
        lVar41 = 0;
        bVar43 = 0;
        uVar46 = 0;
        uVar42 = 0;
        lVar47 = 0;
        do {
          while( true ) {
            iVar25 = *(int *)(param_3 + 0x95b0);
            lVar5 = *(long *)pIVar2;
            lVar7 = *(long *)(param_3 + 0x95a8);
            lVar41 = lVar41 + 0x400;
            iVar36 = (int)lVar47;
            *(int *)(param_3 + 0x95b0) = iVar25 + 1;
            if (((int)uVar39 <= iVar36) || (lVar30 = (long)iVar36, lVar41 <= lVar30)) break;
            do {
              puVar17 = (ulong *)((long)local_110 - (long)((int)lVar30 << 3));
              uVar27 = *puVar17;
              bVar23 = bVar43;
              if ((uVar27 & 1) == 0) {
LAB_014a9828:
                bVar43 = bVar23;
                uVar24 = 1;
                uVar45 = 1;
                goto switchD_014a9900_caseD_11;
              }
              uVar31 = uVar27 & 0xffffffff00000000;
              if (*(short *)((uVar31 | 7) + (ulong)*(uint *)(uVar27 - 1)) != 0x423) {
                bVar23 = 4;
                if (*(short *)((uVar31 | 7) + (ulong)*(uint *)(uVar27 - 1)) != 0x42) {
                  bVar23 = 2;
                }
                uVar27 = v8::internal::IsMoreGeneralElementsKindTransition(bVar43,bVar23);
                if ((uVar27 & 1) == 0) {
                  bVar23 = bVar43;
                }
                goto LAB_014a9828;
              }
              uVar24 = *(uint *)(uVar27 + 0xb);
              uVar28 = (ulong)uVar24;
              if ((uVar24 & 1) == 0) {
                uVar45 = (uint)(double)((int)uVar24 >> 1);
                if (uVar45 != 0) goto LAB_014a97c4;
LAB_014a9868:
                if ((uVar24 & 1) == 0) goto LAB_014a986c;
LAB_014a98c0:
                dVar48 = *(double *)((uVar31 | uVar28) + 3);
              }
              else {
                uVar45 = (uint)*(double *)((uVar31 | uVar28) + 3);
                if (uVar45 == 0) goto LAB_014a9868;
LAB_014a97c4:
                bVar23 = *(byte *)((uVar31 | 10) + (ulong)*(uint *)(uVar27 - 1)) >> 3;
                if (bVar23 == 1) {
                  bVar23 = 0;
                }
                else if (bVar23 == 3) {
                  bVar23 = 2;
                }
                else if (bVar23 == 5) {
                  bVar23 = 4;
                }
                bVar3 = 2;
                if (5 < (byte)(bVar23 - 6)) {
                  bVar3 = bVar23;
                }
                uVar31 = v8::internal::IsMoreGeneralElementsKindTransition(bVar43,bVar3);
                uVar27 = *puVar17;
                if ((uVar31 & 1) == 0) {
                  bVar3 = bVar43;
                }
                uVar24 = *(uint *)(uVar27 + 0xb);
                uVar28 = (ulong)uVar24;
                uVar31 = uVar27 & 0xffffffff00000000;
                bVar43 = bVar3;
                if ((uVar24 & 1) != 0) goto LAB_014a98c0;
LAB_014a986c:
                dVar48 = (double)((int)uVar24 >> 1);
              }
              bVar23 = *(byte *)((uVar31 | 10) + (ulong)*(uint *)(uVar27 - 1)) >> 3;
              if (0x1c < bVar23) goto switchD_014a9900_caseD_1c;
              uVar34 = (uint)dVar48;
              uVar24 = uVar34;
              switch(bVar23) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xb:
                if (0 < (int)uVar34) {
                  lVar47 = 0;
                  uVar24 = 0;
                  puVar1 = (uint *)((uVar31 | *(uint *)(uVar27 + 7)) + 7);
                  uVar35 = *puVar1;
                  if ((uVar35 & 1) == 0) goto LAB_014a9954;
                  do {
                    uVar35 = (uint)(uVar35 != *(uint *)(param_3 + 0xa8));
                    while( true ) {
                      lVar47 = lVar47 + 4;
                      uVar24 = uVar24 + uVar35;
                      if ((ulong)uVar34 * 4 - lVar47 == 0) goto switchD_014a9900_caseD_11;
                      uVar35 = *(uint *)((long)puVar1 + (long)(int)lVar47);
                      if ((uVar35 & 1) != 0) break;
LAB_014a9954:
                      uVar35 = 1;
                    }
                  } while( true );
                }
              case 0x1c:
switchD_014a9900_caseD_1c:
                uVar24 = 0;
                break;
              case 4:
              case 5:
                uVar27 = uVar31 | *(uint *)(uVar27 + 7);
                uVar24 = 0;
                if ((0 < (int)uVar34) &&
                   (0xe < (ushort)(*(short *)((uVar31 | 7) + (ulong)*(uint *)(uVar27 - 1)) - 0x76U))
                   ) {
                  uVar31 = (ulong)uVar34;
                  if (uVar34 < 2) {
                    uVar33 = 0;
                    uVar24 = 0;
                  }
                  else {
                    uVar33 = uVar31 & 0xfffffffe;
                    uVar28 = 0;
                    iVar25 = 0;
                    iVar36 = 0;
                    uVar44 = uVar33;
                    do {
                      uVar37 = uVar28 & 0xfffffff0;
                      uVar28 = uVar28 + 0x10;
                      if (*(long *)((uVar37 | 7) + uVar27) != -0x8000000080001) {
                        iVar25 = iVar25 + 1;
                      }
                      if (*(long *)((uVar37 | 0xf) + uVar27) != -0x8000000080001) {
                        iVar36 = iVar36 + 1;
                      }
                      uVar44 = uVar44 - 2;
                    } while (uVar44 != 0);
                    uVar24 = iVar36 + iVar25;
                    if (uVar33 == uVar31) break;
                  }
                  lVar47 = uVar31 - uVar33;
                  uVar33 = uVar33 << 3;
                  do {
                    uVar31 = uVar33 & 0xfffffff8;
                    uVar33 = uVar33 + 8;
                    if (*(long *)((uVar31 | 7) + uVar27) != -0x8000000080001) {
                      uVar24 = uVar24 + 1;
                    }
                    lVar47 = lVar47 + -1;
                  } while (lVar47 != 0);
                }
                break;
              case 0xc:
                uVar31 = uVar31 | *(uint *)(uVar27 + 7);
                uVar34 = *(uint *)(uVar31 + 0xf);
                uVar24 = 0;
                if ((int)uVar34 >> 1 != 0) {
                  uVar24 = 0;
                  lVar32 = (long)((ulong)uVar34 << 0x20) >> 0x21;
                  lVar47 = 0x1000000000;
                  do {
                    iVar25 = *(int *)(uVar31 + 7 + (lVar47 >> 0x20));
                    if ((iVar25 != *(int *)(param_3 + 0xa8)) && (iVar25 != *(int *)(param_3 + 0xa0))
                       ) {
                      uVar24 = uVar24 + 1;
                    }
                    lVar32 = lVar32 + -1;
                    lVar47 = lVar47 + 0xc00000000;
                  } while (lVar32 != 0);
                }
                break;
              case 0xd:
              case 0xe:
              case 0xf:
              case 0x10:
                goto switchD_014a9900_caseD_d;
              }
switchD_014a9900_caseD_11:
              bVar14 = CARRY4(uVar46,uVar45);
              uVar46 = uVar46 + uVar45;
              lVar47 = lVar30 + 1;
              if (bVar14) {
                uVar46 = 0xffffffff;
              }
              bVar14 = CARRY4(uVar42,uVar24);
              uVar42 = uVar42 + uVar24;
              if (bVar14) {
                uVar42 = 0xffffffff;
              }
            } while ((lVar47 < (long)(ulong)uVar39) && (lVar30 = lVar47, lVar47 < lVar41));
            *(long *)pIVar2 = lVar5;
            *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
            if (*(long *)(param_3 + 0x95a8) != lVar7) {
              *(long *)(param_3 + 0x95a8) = lVar7;
              v8::internal::HandleScope::DeleteExtensions(param_3);
            }
            if ((int)uVar39 <= (int)lVar47) goto LAB_014a9ad8;
          }
          *(int *)(param_3 + 0x95b0) = iVar25;
        } while (iVar36 < (int)uVar39);
      }
LAB_014a9ad8:
      if ((uVar42 * 2 < uVar46) || (iVar10 != iVar8)) {
LAB_014a9d10:
        if (iVar10 == iVar8) {
          puVar17 = (ulong *)v8::internal::
                             HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
                             ::New(param_3,uVar42,0,0);
        }
        else {
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            local_d8 = *(Isolate **)pIVar2;
            if (local_d8 == *(Isolate **)(param_3 + 0x95a8)) {
              local_d8 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
            }
            *(Isolate **)pIVar2 = local_d8 + 8;
            *(undefined8 *)local_d8 = 0;
          }
          else {
            local_d8 = (Isolate *)
                       v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),0);
          }
          puVar17 = (ulong *)v8::internal::Execution::New(param_3,piVar19,piVar19,1,&local_d8);
          if (puVar17 == (ulong *)0x0) goto LAB_014a9e10;
        }
        uVar46 = 0;
LAB_014a9da4:
        local_108 = param_3;
        local_100 = (ulong *)v8::internal::GlobalHandles::Create
                                       (*(GlobalHandles **)(param_3 + 0x95e0),*puVar17);
        local_f8 = 0;
        uVar27 = *puVar17;
        uVar31 = uVar27 & 0xffffffff00000000 | 7;
        if ((*(ushort *)(uVar31 + *(uint *)(uVar27 - 1)) - 0x76 < 0xf) ||
           (0x411 < *(ushort *)((uVar27 & 0xffffffff00000000 | (ulong)*(uint *)(uVar27 - 1)) + 7)))
        {
          local_f4 = 8;
        }
        else {
          local_f4 = 0;
        }
        local_f4 = uVar46 | (uint)(*(ushort *)(uVar31 + *(uint *)(uVar27 - 1)) - 0x76 < 0xf) << 2 |
                   local_f4;
        if (0 < (int)uVar39) {
          uVar27 = 0;
LAB_014a9ee0:
          lVar41 = *(long *)pIVar2;
          lVar47 = *(long *)(param_3 + 0x95a8);
          puVar17 = (ulong *)((long)local_110 - (ulong)(uint)((int)uVar27 << 3));
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
          pIVar29 = (Isolate *)*puVar17;
          if ((((ulong)pIVar29 & 1) == 0) ||
             (*(ushort *)
               (((ulong)pIVar29 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pIVar29 + -1)) < 0xa9))
          {
LAB_014a9f4c:
            uVar15 = 1;
          }
          else if ((*(int *)(*(long *)(param_3 + 0xeb0) + 0xb) == 2) &&
                  (local_d8 = pIVar29,
                  uVar31 = v8::internal::JSReceiver::HasProxyInPrototype
                                     ((JSReceiver *)&local_d8,param_3), (uVar31 & 1) == 0)) {
LAB_014aa060:
            uVar31 = *puVar17;
            if ((uVar31 & 1) == 0) goto LAB_014a9f4c;
            uVar28 = uVar31 & 0xffffffff00000000 | 7;
            if (*(short *)(uVar28 + *(uint *)(uVar31 - 1)) == 0x423) {
              uVar15 = 0x101;
            }
            else {
              if (*(short *)(uVar28 + *(uint *)(uVar31 - 1)) != 0xa9) goto LAB_014a9f4c;
              uVar15 = v8::internal::JSProxy::IsArray(puVar17);
            }
          }
          else {
            puVar18 = (undefined8 *)
                      v8::internal::Runtime::GetObjectProperty(param_3,puVar17,param_3 + 0xc70,0);
            if (puVar18 == (undefined8 *)0x0) {
              uVar15 = 0;
            }
            else {
              pIVar29 = (Isolate *)*puVar18;
              if ((((ulong)pIVar29 & 1) != 0) && ((int)pIVar29 == *(int *)(param_3 + 0xa0)))
              goto LAB_014aa060;
              local_d8 = pIVar29;
              uVar31 = v8::internal::Object::BooleanValue((Object *)&local_d8,param_3);
              uVar15 = 0x101;
              if ((uVar31 & 1) == 0) {
                uVar15 = 1;
              }
            }
          }
          *(long *)pIVar2 = lVar41;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar47) {
            *(long *)(param_3 + 0x95a8) = lVar47;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
          if ((uVar15 & 0xff) == 0) {
LAB_014aabd8:
            uVar27 = *(ulong *)(param_3 + 0x180);
            goto LAB_014aae50;
          }
          if (uVar15 < 0x100) {
            uVar31 = FUN_014ab840(&local_108,0,puVar17);
            if ((uVar31 & 1) == 0) goto LAB_014aabd8;
            bVar14 = 0xfffffffe < local_f8;
            local_f8 = local_f8 + 1;
            goto LAB_014a9fd8;
          }
          uVar31 = *puVar17;
          uVar28 = uVar31 & 0xffffffff00000000;
          if (*(short *)((uVar28 | 7) + (ulong)*(uint *)(uVar31 - 1)) != 0x423) {
            puVar21 = (ulong *)v8::internal::Object::GetLengthFromArrayLike(param_3,puVar17);
            if (puVar21 != (ulong *)0x0) {
              uVar31 = *puVar21;
              dVar48 = (double)NEON_ucvtf((ulong)local_f8);
              if ((uVar31 & 1) == 0) {
                dVar49 = (double)((int)uVar31 >> 1);
              }
              else {
                dVar49 = *(double *)(uVar31 + 3);
              }
              if (9007199254740991.0 < dVar49 + dVar48) {
                puVar18 = (undefined8 *)
                          v8::internal::Factory::NewTypeError((Factory *)param_3,0xbe,0,0,0);
                v8::internal::Isolate::Throw(param_3,*puVar18,0);
              }
              else {
                if ((uVar31 & 1) == 0) {
                  if ((int)uVar31 < 0) goto LAB_014a9eb8;
                  dVar48 = (double)(uVar31 >> 1 & 0x7fffffff);
                }
                else {
                  if (*(short *)((uVar31 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar31 - 1))
                      == 0x42) {
                    dVar48 = *(double *)(uVar31 + 3) + 4503599627370496.0;
                    if (((ulong)dVar48 >> 0x20 == 0x43300000) &&
                       (*(double *)(uVar31 + 3) == (double)((ulong)dVar48 & 0xffffffff)))
                    goto LAB_014a9ebc;
                  }
LAB_014a9eb8:
                  dVar48 = 0.0;
                }
LAB_014a9ebc:
                uVar31 = FUN_014aba0c(param_3,puVar17,dVar48,&local_108);
                if ((uVar31 & 1) != 0) goto LAB_014a9ed0;
              }
            }
            goto LAB_014aae4c;
          }
          uVar46 = *(uint *)(uVar31 + 0xb);
          if ((uVar46 & 1) == 0) {
            dVar48 = (double)((int)uVar46 >> 1);
          }
          else {
            dVar48 = *(double *)((uVar28 | uVar46) + 3);
          }
          local_d0 = (undefined4)uVar31;
          uStack_cc = (uint)(uVar31 >> 0x20);
          local_c8 = 0;
          uStack_c4 = 0;
          local_c0 = (Isolate *)((ulong)local_c0 & 0xffffff0000000000);
          local_b8 = (ulong *)((ulong)local_b8 & 0xffffffff00000000);
          uVar46 = (uint)dVar48;
          uVar33 = (ulong)uVar46;
          sVar12 = *(short *)((uVar28 | 7) + (ulong)*(uint *)(uVar31 - 1));
          local_d8 = param_3;
          while( true ) {
            if (((sVar12 == 0xa9) || (*(ushort *)((uVar28 | *(uint *)(uVar31 - 1)) + 7) < 0x412)) ||
               (uVar31 = (**(code **)(**(long **)(v8::internal::ElementsAccessor::
                                                  elements_accessors_ +
                                                 ((ulong)*(byte *)((uVar28 | 10) +
                                                                  (ulong)*(uint *)(uVar31 - 1)) &
                                                 0xf8)) + 0x30))(), (uVar31 & 1) != 0))
            goto LAB_014aa1e4;
            v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_d8);
            if (local_c0._4_1_ != '\0') break;
            uVar31 = CONCAT44(uStack_cc,local_d0);
            uVar28 = (ulong)uStack_cc << 0x20;
            sVar12 = *(short *)((uVar28 | 7) + (ulong)*(uint *)(uVar31 - 1));
          }
          if (((byte)local_f4 >> 3 & 1) != 0) {
            uVar28 = *puVar17;
            uVar31 = uVar28 & 0xffffffff00000000;
            switch(*(byte *)((uVar31 | 10) + (ulong)*(uint *)(uVar28 - 1)) >> 3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
              uVar31 = uVar31 | *(uint *)(uVar28 + 7);
              if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar21 = *(ulong **)pIVar2;
                if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
                  puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                }
                *(ulong **)pIVar2 = puVar21 + 1;
                *puVar21 = uVar31;
              }
              else {
                puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar31);
              }
              lVar41 = 0;
              uVar31 = 0;
              if ((int)uVar46 < 1) goto switchD_014aa250_default;
              goto LAB_014aa2d4;
            case 4:
            case 5:
              if ((uVar46 == 0) ||
                 (uVar28 = uVar31 | *(uint *)(uVar28 + 7),
                 *(ushort *)((uVar31 | 7) + (ulong)*(uint *)(uVar28 - 1)) - 0x76 < 0xf))
              goto switchD_014aa250_default;
              if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar21 = *(ulong **)pIVar2;
                if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
                  puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                }
                *(ulong **)pIVar2 = puVar21 + 1;
                *puVar21 = uVar28;
              }
              else {
                puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar28);
              }
              lVar41 = 0;
              uVar31 = 0;
              if ((int)uVar46 < 1) goto switchD_014aa250_default;
              goto LAB_014aa96c;
            case 0xc:
              uVar31 = uVar31 | *(uint *)(uVar28 + 7);
              if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar21 = *(ulong **)pIVar2;
                if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
                  puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
                }
                *(ulong **)pIVar2 = puVar21 + 1;
                *puVar21 = uVar31;
              }
              else {
                puVar21 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar31);
              }
              local_e8 = (uint *)0x0;
              local_e0 = (uint *)0x0;
              local_f0 = (uint *)0x0;
              uVar24 = *(int *)(*puVar21 + 0xf) >> 1;
              uVar42 = uVar24 + 1;
              if ((int)uVar24 < 0) {
                uVar24 = uVar24 + 1;
              }
              if (2 < uVar42) {
                if (*(int *)(*puVar21 + 0xf) < -2) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar41 = (long)((ulong)uVar24 << 0x20) >> 0x21;
                local_e8 = operator_new(lVar41 * 4);
                local_e0 = local_e8 + lVar41;
              }
              local_f0 = local_e8;
              FUN_014abc20(param_3,puVar17,uVar33,&local_f0);
              std::__ndk1::__sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
                        (local_f0,local_e8,(__less *)&local_d8);
              uVar31 = 0;
              uVar28 = 0;
              uVar33 = (long)local_e8 - (long)local_f0 >> 2;
              if (uVar33 == 0) goto LAB_014aa8e4;
              goto LAB_014aa780;
            case 0xd:
            case 0xe:
              uVar31 = 0;
              uVar42 = 0;
              if (uVar46 == 0) goto switchD_014aa250_default;
              goto LAB_014aa590;
            case 0xf:
            case 0x10:
              goto switchD_014a9900_caseD_d;
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              break;
            default:
              goto switchD_014aa250_default;
            }
          }
LAB_014aa1e4:
          uVar31 = FUN_014aba0c(param_3,puVar17,uVar33,&local_108);
          if ((uVar31 & 1) == 0) goto LAB_014aae4c;
          goto LAB_014a9ed0;
        }
LAB_014aabf4:
        uVar39 = local_f4;
        puVar17 = local_100;
        pIVar29 = local_108;
        if ((local_f4 >> 1 & 1) == 0) {
          if (iVar10 == iVar8) {
            puVar17 = (ulong *)v8::internal::Factory::NewJSArray((Factory *)local_108,3,0,0,1,0);
            dVar48 = (double)NEON_ucvtf((ulong)local_f8);
            puVar21 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                         ((Factory *)pIVar29,dVar48);
            uVar26 = 0xc;
            if ((uVar39 & 1) != 0) {
              uVar26 = 3;
            }
            puVar22 = (ulong *)v8::internal::JSObject::GetElementsTransitionMap(puVar17,uVar26);
            uVar31 = *puVar17;
            uVar27 = *puVar21;
            *(int *)(uVar31 + 0xb) = (int)uVar27;
            if ((uVar27 & 1) != 0) {
              uVar28 = *(ulong *)((uVar27 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar28 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar31,uVar31 + 0xb,uVar27);
                uVar28 = *(ulong *)(uVar27 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar28 & 0x18) != 0) &&
                 ((*(byte *)((uVar31 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar31,uVar31 + 0xb,uVar27);
              }
            }
            uVar31 = *puVar17;
            uVar27 = *local_100;
            *(int *)(uVar31 + 7) = (int)uVar27;
            if ((uVar27 & 1) != 0) {
              uVar28 = *(ulong *)((uVar27 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar28 >> 0x12 & 1) != 0) {
                v8::internal::Heap_MarkingBarrierSlow(uVar31,uVar31 + 7,uVar27);
                uVar28 = *(ulong *)(uVar27 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar28 & 0x18) != 0) &&
                 ((*(byte *)((uVar31 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                v8::internal::Heap_GenerationalBarrierSlow(uVar31,uVar31 + 7,uVar27);
              }
            }
            uVar27 = *puVar22;
            uVar31 = *puVar17;
            if ((int)uVar27 == 0) {
              *(undefined4 *)(uVar31 - 1) = 0;
            }
            else {
              v8::internal::Heap::VerifyObjectLayoutChange
                        ((Heap *)(uVar31 & 0xffffffff00000000 | 0x8850),uVar31,uVar27);
              *(int *)(uVar31 - 1) = (int)uVar27;
              if (((uVar27 & 1) != 0) &&
                 ((*(byte *)((uVar27 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                v8::internal::Heap_MarkingBarrierSlow(uVar31,0,uVar27);
              }
            }
            uVar27 = *puVar17;
          }
          else {
            dVar48 = (double)NEON_ucvtf((ulong)local_f8);
            uVar38 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                               ((Factory *)local_108,dVar48);
            lVar41 = v8::internal::Object::SetProperty
                               (pIVar29,puVar17,(Factory *)(pIVar29 + 0x7b8),uVar38,0,1);
            if ((puVar17 == (ulong *)0x0) || (lVar41 == 0)) {
LAB_014aae4c:
              uVar27 = *(ulong *)(param_3 + 0x180);
            }
            else {
              uVar27 = *puVar17;
            }
          }
        }
        else {
          puVar18 = (undefined8 *)
                    v8::internal::Factory::NewRangeError((Factory *)param_3,0xbe,0,0,0);
          uVar27 = v8::internal::Isolate::Throw(param_3,*puVar18,0);
        }
LAB_014aae50:
        v8::internal::GlobalHandles::Destroy(local_100);
      }
      else {
        if ((bVar43 != 4) || (*(int *)(*(long *)(param_3 + 0xeb0) + 0xb) != 2)) {
          if (*(int *)(*(long *)(param_3 + 0xeb0) + 0xb) != 2) goto LAB_014a9d10;
LAB_014a9cf4:
          puVar17 = (ulong *)v8::internal::Factory::NewFixedArrayWithHoles
                                       ((Factory *)param_3,uVar46,0);
          uVar46 = 1;
          goto LAB_014a9da4;
        }
        plVar20 = (long *)v8::internal::Factory::NewFixedDoubleArray((Factory *)param_3,uVar46);
        if ((uVar46 == 0) || ((int)uVar39 < 1)) {
          iVar25 = 0;
        }
        else {
          uVar27 = 0;
          iVar25 = 0;
          do {
            uVar31 = *(ulong *)((long)local_110 - (ulong)(uint)((int)uVar27 << 3));
            if ((uVar31 & 1) == 0) {
              *(double *)(*plVar20 + ((long)(iVar25 << 3) | 7U)) = (double)((int)uVar31 >> 1);
LAB_014a9b7c:
              iVar25 = iVar25 + 1;
            }
            else {
              uVar28 = uVar31 & 0xffffffff00000000;
              if (*(short *)((uVar28 | 7) + (ulong)*(uint *)(uVar31 - 1)) == 0x42) {
                uVar28 = (long)(iVar25 << 3) | 7;
                if (NAN(*(double *)(uVar31 + 3))) {
                  *(undefined8 *)(uVar28 + *plVar20) = 0x7ff8000000000000;
                }
                else {
                  *(double *)(uVar28 + *plVar20) = *(double *)(uVar31 + 3);
                }
                goto LAB_014a9b7c;
              }
              uVar42 = *(uint *)(uVar31 + 0xb);
              if ((uVar42 & 1) == 0) {
                dVar48 = (double)((int)uVar42 >> 1);
              }
              else {
                dVar48 = *(double *)((uVar28 | uVar42) + 3);
              }
              bVar43 = *(byte *)((uVar28 | 10) + (ulong)*(uint *)(uVar31 - 1)) >> 3;
              if (0x1c < bVar43) goto switchD_014a9900_caseD_d;
              uVar42 = 1 << (ulong)bVar43;
              if ((uVar42 & 0x10001fcc) == 0) {
                iVar36 = (int)dVar48;
                if ((uVar42 & 3) == 0) {
                  if ((uVar42 & 0x30) == 0) {
switchD_014a9900_caseD_d:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  if (iVar36 != 0) {
                    iVar9 = iVar25 * 8;
                    uVar28 = uVar28 | *(uint *)(uVar31 + 7);
                    iVar16 = 7;
                    do {
                      if (*(long *)(uVar28 + (long)iVar16) == -0x8000000080001) goto LAB_014a9cf4;
                      dVar48 = *(double *)((long)iVar16 + uVar28);
                      lVar41 = (long)(iVar9 + iVar16);
                      if (NAN(dVar48)) {
                        *(undefined8 *)(lVar41 + *plVar20) = 0x7ff8000000000000;
                      }
                      else {
                        *(double *)(lVar41 + *plVar20) = dVar48;
                      }
                      iVar25 = iVar25 + 1;
                      iVar36 = iVar36 + -1;
                      iVar16 = iVar16 + 8;
                    } while (iVar36 != 0);
                  }
                }
                else if (iVar36 != 0) {
                  uVar24 = *(uint *)(uVar31 + 7);
                  iVar9 = *(int *)(param_3 + 0xa8);
                  iVar16 = 0;
                  uVar42 = iVar25 << 3 | 7;
                  do {
                    iVar11 = *(int *)((uVar28 | uVar24) + 7 + (long)iVar16);
                    if (iVar11 == iVar9) goto LAB_014a9cf4;
                    iVar25 = iVar25 + 1;
                    iVar36 = iVar36 + -1;
                    *(double *)(*plVar20 + (long)(int)uVar42) = (double)(iVar11 >> 1);
                    uVar42 = uVar42 + 8;
                    iVar16 = iVar16 + 4;
                  } while (iVar36 != 0);
                }
              }
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar39);
        }
        puVar17 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_3,plVar20,4,iVar25,0)
        ;
        uVar27 = *puVar17;
      }
      if (param_3 == (Isolate *)0x0) goto LAB_014a9e3c;
    }
    else {
      uVar39 = *(uint *)((uVar27 & 0xffffffff00000000 | (ulong)*(uint *)(uVar27 - 1)) + 0xf);
      uVar27 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar46 = *(uint *)((uVar27 | *(uint *)((uVar27 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1))
                                            + 0x13)) + 0xe7);
      uVar27 = uVar27 | uVar46;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar21 = *(ulong **)pIVar2;
        if (puVar21 == *(ulong **)(param_3 + 0x95a8)) {
          puVar21 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar21 + 1;
        *puVar21 = uVar27;
        if (uVar39 == uVar46) goto LAB_014a960c;
        goto LAB_014a9648;
      }
      puVar18 = (undefined8 *)
                v8::internal::CanonicalHandleScope::Lookup
                          (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar27);
      if (uVar39 != (uint)*puVar18) goto LAB_014a9648;
LAB_014a960c:
      if (*(int *)(*(long *)(param_3 + 0xeb8) + 0xb) != 2) goto LAB_014a9648;
      puVar21 = (ulong *)FUN_014ab580(param_3,&local_118);
      if (puVar21 == (ulong *)0x0) {
        if (((*(ulong *)(param_3 + 0x2bd8) & 1) == 0) ||
           ((int)*(ulong *)(param_3 + 0x2bd8) != *(int *)(param_3 + 0xa8))) goto LAB_014a9e10;
        goto LAB_014a9648;
      }
LAB_014a962c:
      uVar27 = *puVar21;
    }
  }
  *(long *)pIVar2 = lVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar6) {
    *(long *)(param_3 + 0x95a8) = lVar6;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_014a9e3c:
  if (*(long *)(lVar13 + 0x28) == local_80) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while ((uint)uVar31 < uVar46) {
LAB_014aa590:
    lVar41 = *(long *)pIVar2;
    lVar47 = *(long *)(param_3 + 0x95a8);
    uVar42 = uVar42 + 0x400;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if ((uint)uVar31 < uVar42) {
      uVar31 = uVar31 & 0xffffffff;
      do {
        local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
        uStack_cc = 0;
        local_c8 = 0xc0;
        local_b8 = (ulong *)0x0;
        uStack_b0 = 0;
        uStack_a0 = 0;
        local_88 = 0xffffffffffffffff;
        local_c0 = param_3;
        local_a8 = puVar17;
        local_98 = puVar17;
        uStack_90 = uVar31;
        v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
        if (local_d8._4_4_ != 4) {
          pIVar29 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_d8,false);
          if (pIVar29 != (Isolate *)0x0) goto LAB_014aa614;
LAB_014aa640:
          bVar14 = true;
          goto LAB_014aa644;
        }
        pIVar29 = local_c0 + 0xa0;
LAB_014aa614:
        uVar28 = FUN_014ab840(&local_108,uVar31 & 0xffffffff,pIVar29);
        if ((uVar28 & 1) == 0) goto LAB_014aa640;
        uVar31 = uVar31 + 1;
      } while ((uVar31 < uVar33) && (uVar31 < uVar42));
    }
    bVar14 = false;
LAB_014aa644:
    *(long *)pIVar2 = lVar41;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar47) {
      *(long *)(param_3 + 0x95a8) = lVar47;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if (bVar14) goto LAB_014aae4c;
  }
  goto switchD_014aa250_default;
  while (uVar28 < uVar33) {
LAB_014aa780:
    lVar41 = *(long *)pIVar2;
    lVar47 = *(long *)(param_3 + 0x95a8);
    uVar31 = uVar31 + 0x400;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if (uVar28 < uVar31) {
      uVar42 = local_f0[uVar28];
      do {
        local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
        uVar44 = (ulong)uVar42;
        uStack_cc = 0;
        local_c8 = 0xc0;
        local_b8 = (ulong *)0x0;
        uStack_b0 = 0;
        uStack_a0 = 0;
        local_88 = 0xffffffffffffffff;
        local_c0 = param_3;
        puVar21 = local_b8;
        local_a8 = puVar17;
        local_98 = puVar17;
        uStack_90 = uVar44;
        if (((uVar42 == 0xffffffff) &&
            (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) !=
             0x41b)) &&
           (puVar21 = (ulong *)v8::internal::Factory::SizeToString
                                         ((Factory *)param_3,0xffffffff,true),
           (*(ushort *)((*puVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar21 - 1)) &
           0xffe0) == 0x20)) {
          puVar21 = (ulong *)v8::internal::StringTable::LookupString(param_3);
        }
        local_b8 = puVar21;
        v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
        if (local_d8._4_4_ != 4) {
          pIVar29 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_d8,false);
          if (pIVar29 != (Isolate *)0x0) goto LAB_014aa870;
LAB_014aa8dc:
          bVar14 = true;
          goto LAB_014aa8b0;
        }
        pIVar29 = local_c0 + 0xa0;
LAB_014aa870:
        uVar44 = FUN_014ab840(&local_108,uVar44,pIVar29);
        if ((uVar44 & 1) == 0) goto LAB_014aa8dc;
        do {
          uVar28 = uVar28 + 1;
          if (uVar33 <= uVar28) goto LAB_014aa8ac;
        } while (local_f0[uVar28] == uVar42);
        uVar42 = local_f0[uVar28];
      } while (uVar28 < uVar31);
    }
LAB_014aa8ac:
    bVar14 = false;
LAB_014aa8b0:
    *(long *)pIVar2 = lVar41;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar47) {
      *(long *)(param_3 + 0x95a8) = lVar47;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if (bVar14) {
      bVar14 = false;
      goto joined_r0x014aa910;
    }
  }
LAB_014aa8e4:
  bVar14 = true;
joined_r0x014aa910:
  if (local_f0 != (uint *)0x0) {
    local_e8 = local_f0;
    operator_delete(local_f0);
  }
  if (!bVar14) goto LAB_014aae4c;
switchD_014aa250_default:
  bVar14 = CARRY4(local_f8,uVar46);
  local_f8 = local_f8 + uVar46;
LAB_014a9fd8:
  if (bVar14) {
    local_f8 = 0xffffffff;
  }
  if ((((byte)local_f4 & 1) != 0) && ((uint)(*(int *)(*local_100 + 3) >> 1) < local_f8)) {
    FUN_014acb2c(&local_108);
  }
LAB_014a9ed0:
  uVar27 = uVar27 + 1;
  if (uVar27 == uVar39) goto LAB_014aabf4;
  goto LAB_014a9ee0;
  while (uVar31 = uVar28, (int)uVar28 < (int)uVar46) {
LAB_014aa96c:
    lVar47 = *(long *)pIVar2;
    lVar5 = *(long *)(param_3 + 0x95a8);
    lVar41 = lVar41 + 0x400;
    uVar28 = (ulong)(int)uVar31;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if ((long)uVar28 < lVar41) {
      uVar42 = (int)uVar31 << 3 | 7;
      do {
        if (*(long *)(*puVar21 + (long)(int)uVar42) == -0x8000000080001) {
          uVar31 = uVar28 & 0xffffffff;
          local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
          pFVar40 = (Factory *)((ulong)*(uint *)((long)puVar17 + 4) << 0x20);
          uStack_cc = 0;
          local_c8 = 0xc0;
          local_b8 = (ulong *)0x0;
          uStack_b0 = 0;
          uStack_a0 = 0;
          local_88 = 0xffffffffffffffff;
          local_c0 = (Isolate *)pFVar40;
          puVar22 = local_b8;
          local_a8 = puVar17;
          local_98 = puVar17;
          uStack_90 = uVar31;
          if (((uVar28 == 0xffffffffffffffff) &&
              (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) !=
               0x41b)) &&
             (puVar22 = (ulong *)v8::internal::Factory::SizeToString(pFVar40,0xffffffff,true),
             (*(ushort *)((*puVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar22 - 1)) &
             0xffe0) == 0x20)) {
            puVar22 = (ulong *)v8::internal::StringTable::LookupString(pFVar40);
          }
          local_b8 = puVar22;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
          uVar15 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_d8);
          if ((uVar15 & 0xff) == 0) goto LAB_014aab7c;
          if (0xff < uVar15) {
            local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
            uStack_cc = 0;
            local_c8 = 0xc0;
            local_b8 = (ulong *)0x0;
            uStack_b0 = 0;
            uStack_a0 = 0;
            local_88 = 0xffffffffffffffff;
            local_c0 = param_3;
            puVar22 = local_b8;
            local_a8 = puVar17;
            local_98 = puVar17;
            uStack_90 = uVar31;
            if (((uVar28 == 0xffffffffffffffff) &&
                (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) !=
                 0x41b)) &&
               (puVar22 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_3,0xffffffff,true),
               (*(ushort *)((*puVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar22 - 1)) &
               0xffe0) == 0x20)) {
              puVar22 = (ulong *)v8::internal::StringTable::LookupString(param_3);
            }
            local_b8 = puVar22;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
            if (local_d8._4_4_ == 4) {
              pIVar29 = local_c0 + 0xa0;
            }
            else {
              pIVar29 = (Isolate *)
                        v8::internal::Object::GetProperty((LookupIterator *)&local_d8,false);
              if (pIVar29 == (Isolate *)0x0) goto LAB_014aab7c;
            }
            goto LAB_014aab3c;
          }
        }
        else {
          pIVar29 = (Isolate *)
                    v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                              ((Factory *)param_3,*(double *)((long)(int)uVar42 + *puVar21));
LAB_014aab3c:
          uVar31 = FUN_014ab840(&local_108,uVar28 & 0xffffffff,pIVar29);
          if ((uVar31 & 1) == 0) {
LAB_014aab7c:
            bVar14 = true;
            goto LAB_014aab9c;
          }
        }
        uVar28 = uVar28 + 1;
      } while (((long)uVar28 < (long)(int)uVar46) && (uVar42 = uVar42 + 8, (long)uVar28 < lVar41));
      bVar14 = false;
    }
    else {
      bVar14 = false;
      uVar28 = uVar31;
    }
LAB_014aab9c:
    *(long *)pIVar2 = lVar47;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar5) {
      *(long *)(param_3 + 0x95a8) = lVar5;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if (bVar14) goto LAB_014aae4c;
  }
  goto switchD_014aa250_default;
LAB_014aa2d4:
  do {
    iVar25 = *(int *)(param_3 + 0x95b0);
    lVar47 = *(long *)pIVar2;
    lVar5 = *(long *)(param_3 + 0x95a8);
    lVar41 = lVar41 + 0x400;
    uVar28 = (ulong)(int)uVar31;
    *(int *)(param_3 + 0x95b0) = iVar25 + 1;
    if ((long)uVar28 < lVar41) {
      iVar25 = (int)uVar31 << 2;
      do {
        uVar42 = *(uint *)(*puVar21 + (long)iVar25 + 7);
        uVar31 = *puVar21 & 0xffffffff00000000 | (ulong)uVar42;
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar29 = *(Isolate **)pIVar2;
          if (pIVar29 == *(Isolate **)(param_3 + 0x95a8)) {
            pIVar29 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
          }
          *(Isolate **)pIVar2 = pIVar29 + 8;
          *(ulong *)pIVar29 = uVar31;
          if ((uVar42 & 1) != 0) goto LAB_014aa360;
LAB_014aa4f8:
          uVar31 = FUN_014ab840(&local_108,uVar28 & 0xffffffff,pIVar29);
          if ((uVar31 & 1) == 0) {
LAB_014aa528:
            bVar14 = true;
            goto LAB_014aa52c;
          }
        }
        else {
          pIVar29 = (Isolate *)
                    v8::internal::CanonicalHandleScope::Lookup
                              (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar31);
          uVar31 = *(ulong *)pIVar29;
          if ((uVar31 & 1) == 0) goto LAB_014aa4f8;
LAB_014aa360:
          if ((int)uVar31 != *(int *)(param_3 + 0xa8)) goto LAB_014aa4f8;
          uVar31 = uVar28 & 0xffffffff;
          local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
          pFVar40 = (Factory *)((ulong)*(uint *)((long)puVar17 + 4) << 0x20);
          uStack_cc = 0;
          local_c8 = 0xc0;
          local_b8 = (ulong *)0x0;
          uStack_b0 = 0;
          uStack_a0 = 0;
          local_88 = 0xffffffffffffffff;
          local_c0 = (Isolate *)pFVar40;
          puVar22 = local_b8;
          local_a8 = puVar17;
          local_98 = puVar17;
          uStack_90 = uVar31;
          if (((uVar28 == 0xffffffffffffffff) &&
              (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) !=
               0x41b)) &&
             (puVar22 = (ulong *)v8::internal::Factory::SizeToString(pFVar40,0xffffffff,true),
             (*(ushort *)((*puVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar22 - 1)) &
             0xffe0) == 0x20)) {
            puVar22 = (ulong *)v8::internal::StringTable::LookupString(pFVar40);
          }
          local_b8 = puVar22;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
          uVar15 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_d8);
          if ((uVar15 & 0xff) == 0) goto LAB_014aa528;
          if (0xff < uVar15) {
            local_d8 = (Isolate *)CONCAT44(local_d8._4_4_,3);
            uStack_cc = 0;
            local_c8 = 0xc0;
            local_b8 = (ulong *)0x0;
            uStack_b0 = 0;
            uStack_a0 = 0;
            local_88 = 0xffffffffffffffff;
            local_c0 = param_3;
            puVar22 = local_b8;
            local_a8 = puVar17;
            local_98 = puVar17;
            uStack_90 = uVar31;
            if (((uVar28 == 0xffffffffffffffff) &&
                (*(short *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) !=
                 0x41b)) &&
               (puVar22 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_3,0xffffffff,true),
               (*(ushort *)((*puVar22 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar22 - 1)) &
               0xffe0) == 0x20)) {
              puVar22 = (ulong *)v8::internal::StringTable::LookupString(param_3);
            }
            local_b8 = puVar22;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d8);
            if (local_d8._4_4_ == 4) {
              pIVar29 = local_c0 + 0xa0;
            }
            else {
              pIVar29 = (Isolate *)
                        v8::internal::Object::GetProperty((LookupIterator *)&local_d8,false);
              if (pIVar29 == (Isolate *)0x0) goto LAB_014aa528;
            }
            goto LAB_014aa4f8;
          }
        }
        uVar28 = uVar28 + 1;
      } while (((long)uVar28 < (long)(int)uVar46) && (iVar25 = iVar25 + 4, (long)uVar28 < lVar41));
      bVar14 = false;
LAB_014aa52c:
      *(long *)pIVar2 = lVar47;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar5) {
        *(long *)(param_3 + 0x95a8) = lVar5;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      uVar31 = uVar28;
      if (bVar14) goto LAB_014aae4c;
    }
    else {
      *(int *)(param_3 + 0x95b0) = iVar25;
    }
  } while ((int)uVar31 < (int)uVar46);
  goto switchD_014aa250_default;
}

