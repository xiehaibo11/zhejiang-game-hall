
/* v8::internal::Object::NoSideEffectsToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

Isolate * v8::internal::Object::NoSideEffectsToString(Isolate *param_1,Isolate *param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  char cVar11;
  ushort uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 local_d0;
  int local_c8;
  undefined4 local_c4;
  int iStack_c0;
  int local_bc;
  ulong local_b8;
  Isolate *local_b0;
  undefined8 uStack_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  Isolate *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_78,param_1);
  uVar13 = *(ulong *)param_2;
  if ((uVar13 & 1) == 0) {
LAB_01104264:
    param_2 = (Isolate *)ConvertToString(param_1,param_2);
  }
  else {
    uVar4 = uVar13 & 0xffffffff00000000;
    uVar16 = uVar4 | 7;
    if (((*(ushort *)(uVar16 + *(uint *)(uVar13 - 1)) < 0x40) ||
        (*(short *)(uVar16 + *(uint *)(uVar13 - 1)) == 0x42)) ||
       (*(short *)(uVar16 + *(uint *)(uVar13 - 1)) == 0x43)) {
      if (0x3f < *(ushort *)(uVar16 + *(uint *)(uVar13 - 1))) goto LAB_01104264;
    }
    else if (*(short *)(uVar16 + *(uint *)(uVar13 - 1)) == 0x41) {
      param_2 = (Isolate *)BigInt::ToString(param_1,param_2,10,1);
      if (param_2 != (Isolate *)0x0) goto LAB_01104278;
      local_d0 = "<a very large BigInt>";
      local_c8 = 0x15;
      local_c4 = 0;
LAB_011042f0:
      param_2 = (Isolate *)Factory::NewStringFromOneByte(param_1,&local_d0,0);
    }
    else {
      sVar1 = *(short *)(uVar16 + *(uint *)(uVar13 - 1));
      if (*(ushort *)(uVar16 + *(uint *)(uVar13 - 1)) < 0x438) {
        pIVar5 = param_1 + 0x95a0;
        if (sVar1 == 0x40) {
          if ((*(byte *)(uVar13 + 7) >> 4 & 1) != 0) {
            uVar4 = uVar4 | *(uint *)(uVar13 + 0xb);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              param_2 = *(Isolate **)pIVar5;
              if (param_2 == *(Isolate **)(param_1 + 0x95a8)) {
                param_2 = (Isolate *)HandleScope::Extend(param_1);
              }
              *(Isolate **)pIVar5 = param_2 + 8;
              *(ulong *)param_2 = uVar4;
            }
            else {
              param_2 = (Isolate *)
                        CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
            }
            goto LAB_01104278;
          }
          IncrementalStringBuilder::IncrementalStringBuilder
                    ((IncrementalStringBuilder *)&local_d0,param_1);
          lVar19 = (long)local_bc;
          local_bc = local_bc + 1;
          if (local_c8 == 0) {
            *(undefined1 *)(*(long *)local_b0 + lVar19 + 0xb) = 0x53;
            if (local_bc == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x79;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x6d;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x62;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x6f;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x6c;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x28;
          }
          else {
            *(undefined2 *)(*(long *)local_b0 + lVar19 * 2 + 0xb) = 0x53;
            if (local_bc == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x79;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x6d;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x62;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x6f;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x6c;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x28;
          }
          local_bc = local_bc + 1;
          if (local_bc == iStack_c0) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
          }
          uVar13 = *(ulong *)param_2 & 0xffffffff00000000;
          uVar4 = uVar13 | *(uint *)(*(ulong *)param_2 + 0xb);
          if (*(ushort *)((uVar13 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) {
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)pIVar5;
              if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar5 = puVar7 + 1;
              *puVar7 = uVar4;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
            }
            IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,puVar7);
          }
          lVar19 = (long)local_bc;
          local_bc = local_bc + 1;
          if (local_c8 != 0) {
            lVar19 = *(long *)local_b0 + lVar19 * 2;
            uVar15 = 0x29;
            goto LAB_01105238;
          }
          lVar19 = *(long *)local_b0 + lVar19;
          uVar14 = 0x29;
LAB_01105248:
          *(undefined1 *)(lVar19 + 0xb) = uVar14;
        }
        else {
          if (0xa8 < *(ushort *)(uVar16 + *(uint *)(uVar13 - 1))) {
            uVar13 = *(ulong *)(param_1 + 0xa68);
            local_b0 = param_1 + 0xa68;
            uVar18 = 2;
            if (*(short *)(uVar16 + *(uint *)(uVar13 - 1)) == 0x40) {
              uVar18 = (*(int *)(uVar13 + 7) << 1 ^ 0xffffffffU) & 2;
            }
            local_d0 = (char *)CONCAT44(local_d0._4_4_,uVar18);
            local_c4 = 0;
            iStack_c0 = 0xc0;
            local_b8 = uVar4;
            if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) &
                0xffe0) == 0x20) {
              local_b0 = (Isolate *)StringTable::LookupString();
            }
            uStack_a8 = 0;
            uStack_98 = 0;
            local_80 = 0xffffffffffffffff;
            uStack_88 = 0xffffffffffffffff;
            local_a0 = param_2;
            local_90 = param_2;
            LookupIterator::Start<false>((LookupIterator *)&local_d0);
            if (local_d0._4_4_ == 4) {
              puVar8 = (undefined8 *)(local_b8 + 0xa0);
              uVar13 = *(ulong *)param_2;
              if ((uVar13 & 1) == 0) goto LAB_01104714;
LAB_011046dc:
              if (((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) <
                    0xa9) ||
                  (uVar12 = JSReceiver::HasOwnProperty(param_2,param_1 + 0xbe8), uVar12 < 0x100)) ||
                 ((uVar12 & 0xff) == 0)) goto LAB_01104714;
            }
            else {
              puVar8 = (undefined8 *)JSReceiver::GetDataProperty((LookupIterator *)&local_d0);
              uVar13 = *(ulong *)param_2;
              if ((uVar13 & 1) != 0) goto LAB_011046dc;
LAB_01104714:
              uVar21 = *puVar8;
              uVar13 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
              uVar18 = *(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(*(ulong *)(param_1 + 0x2bc8
                                                                                   ) - 1)) + 0x13))
                                + 0x363);
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar7 = *(ulong **)pIVar5;
                if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar7 = (ulong *)HandleScope::Extend(param_1);
                }
                *(ulong **)pIVar5 = puVar7 + 1;
                *puVar7 = uVar13 | uVar18;
              }
              else {
                puVar6 = (undefined8 *)
                         CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13 | uVar18);
                uVar18 = (uint)*puVar6;
              }
              if ((uint)uVar21 != uVar18) {
                uVar21 = *puVar8;
                uVar13 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
                uVar18 = *(uint *)((uVar13 | *(uint *)((uVar13 | *(uint *)(*(ulong *)(param_1 +
                                                                                     0x2bc8) - 1)) +
                                                      0x13)) + 0x387);
                if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar7 = *(ulong **)pIVar5;
                  if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                    puVar7 = (ulong *)HandleScope::Extend(param_1);
                  }
                  *(ulong **)pIVar5 = puVar7 + 1;
                  *puVar7 = uVar13 | uVar18;
                }
                else {
                  puVar8 = (undefined8 *)
                           CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13 | uVar18);
                  uVar18 = (uint)*puVar8;
                }
                if ((uint)uVar21 == uVar18) {
                  uVar13 = *(ulong *)(param_1 + 0x5d0);
                  pIVar9 = param_1 + 0x5d0;
                  local_b8 = (ulong)*(uint *)(param_2 + 4) << 0x20;
                  uVar18 = 2;
                  if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) +
                                (ulong)*(uint *)(uVar13 - 1)) == 0x40) {
                    uVar18 = (*(int *)(uVar13 + 7) << 1 ^ 0xffffffffU) & 2;
                  }
                  local_d0._4_4_ = (int)((ulong)local_d0 >> 0x20);
                  local_d0 = (char *)CONCAT44(local_d0._4_4_,uVar18);
                  local_c4 = 0;
                  iStack_c0 = 0xc0;
                  if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1))
                      & 0xffe0) == 0x20) {
                    pIVar9 = (Isolate *)StringTable::LookupString();
                  }
                  uStack_a8 = 0;
                  uStack_98 = 0;
                  local_80 = 0xffffffffffffffff;
                  uStack_88 = 0xffffffffffffffff;
                  local_b0 = pIVar9;
                  local_a0 = param_2;
                  local_90 = param_2;
                  LookupIterator::Start<false>((LookupIterator *)&local_d0);
                  if (local_d0._4_4_ == 4) {
                    uVar13 = *(ulong *)(local_b8 + 0xa0);
                  }
                  else {
                    puVar7 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_d0);
                    uVar13 = *puVar7;
                  }
                  if (((uVar13 & 1) != 0) &&
                     (uVar4 = uVar13 & 0xffffffff00000000 | 7,
                     0x437 < *(ushort *)(uVar4 + *(uint *)(uVar13 - 1)))) {
                    if (*(short *)(uVar4 + *(uint *)(uVar13 - 1)) == 0x438) {
                      pIVar9 = (Isolate *)JSBoundFunction::GetName(param_1);
                      if (pIVar9 == (Isolate *)0x0) goto LAB_0110530c;
                    }
                    else if (*(short *)(uVar4 + *(uint *)(uVar13 - 1)) == 0x439) {
                      pIVar9 = (Isolate *)JSFunction::GetName(param_1);
                      uVar13 = *(ulong *)pIVar9;
                      if (((uVar13 & 1) == 0) ||
                         (0x3f < *(ushort *)
                                  ((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1))
                         )) {
                        pIVar9 = param_1 + 200;
                      }
                    }
                    else {
                      pIVar9 = (Isolate *)0x0;
                    }
                    if (*(int *)(*(long *)pIVar9 + 7) != 0) {
                      IncrementalStringBuilder::IncrementalStringBuilder
                                ((IncrementalStringBuilder *)&local_d0,param_1);
                      lVar19 = (long)local_bc;
                      local_bc = local_bc + 1;
                      if (local_c8 == 0) {
                        *(undefined1 *)(*(long *)local_b0 + lVar19 + 0xb) = 0x23;
                        if (local_bc == iStack_c0) {
                          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
                        }
                        *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x3c;
                      }
                      else {
                        *(undefined2 *)(*(long *)local_b0 + lVar19 * 2 + 0xb) = 0x23;
                        if (local_bc == iStack_c0) {
                          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
                        }
                        *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x3c;
                      }
                      local_bc = local_bc + 1;
                      if (local_bc == iStack_c0) {
                        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
                      }
                      IncrementalStringBuilder::AppendString
                                ((IncrementalStringBuilder *)&local_d0,pIVar9);
                      lVar19 = (long)local_bc;
                      local_bc = local_bc + 1;
                      if (local_c8 == 0) {
                        lVar19 = *(long *)local_b0 + lVar19;
                        uVar14 = 0x3e;
                        goto LAB_01105248;
                      }
                      lVar19 = *(long *)local_b0 + lVar19 * 2;
                      uVar15 = 0x3e;
                      goto LAB_01105238;
                    }
                  }
                }
                goto LAB_01104e6c;
              }
            }
            uVar13 = *(ulong *)(param_1 + 0x820);
            pIVar5 = param_1 + 0x820;
            local_b8 = (ulong)*(uint *)(param_2 + 4) << 0x20;
            uVar18 = 2;
            if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) +
                          (ulong)*(uint *)(uVar13 - 1)) == 0x40) {
              uVar18 = (*(int *)(uVar13 + 7) << 1 ^ 0xffffffffU) & 2;
            }
            local_c4 = 0;
            iStack_c0 = 0xc0;
            local_d0._0_4_ = uVar18;
            if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) &
                0xffe0) == 0x20) {
              pIVar5 = (Isolate *)StringTable::LookupString();
            }
            uStack_a8 = 0;
            uStack_98 = 0;
            local_80 = 0xffffffffffffffff;
            uStack_88 = 0xffffffffffffffff;
            local_b0 = pIVar5;
            local_a0 = param_2;
            local_90 = param_2;
            LookupIterator::Start<false>((LookupIterator *)&local_d0);
            if (local_d0._4_4_ == 4) {
              pIVar5 = (Isolate *)(local_b8 + 0xa0);
              uVar13 = *(ulong *)pIVar5;
              if ((uVar13 & 1) == 0) goto LAB_01104a50;
LAB_01104a38:
              if (0x3f < *(ushort *)
                          ((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))
              goto LAB_01104a50;
            }
            else {
              pIVar5 = (Isolate *)JSReceiver::GetDataProperty((LookupIterator *)&local_d0);
              uVar13 = *(ulong *)pIVar5;
              if ((uVar13 & 1) != 0) goto LAB_01104a38;
LAB_01104a50:
              pIVar5 = param_1 + 200;
            }
            uVar13 = *(ulong *)(param_1 + 0x7f8);
            pIVar9 = param_1 + 0x7f8;
            local_b8 = (ulong)*(uint *)(param_2 + 4) << 0x20;
            uVar18 = 2;
            if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) +
                          (ulong)*(uint *)(uVar13 - 1)) == 0x40) {
              uVar18 = (*(int *)(uVar13 + 7) << 1 ^ 0xffffffffU) & 2;
            }
            local_d0 = (char *)CONCAT44(local_d0._4_4_,uVar18);
            local_c4 = 0;
            iStack_c0 = 0xc0;
            if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) &
                0xffe0) == 0x20) {
              pIVar9 = (Isolate *)StringTable::LookupString();
            }
            uStack_a8 = 0;
            uStack_98 = 0;
            local_80 = 0xffffffffffffffff;
            uStack_88 = 0xffffffffffffffff;
            local_b0 = pIVar9;
            local_a0 = param_2;
            local_90 = param_2;
            LookupIterator::Start<false>((LookupIterator *)&local_d0);
            if (local_d0._4_4_ == 4) {
              pIVar9 = (Isolate *)(local_b8 + 0xa0);
              uVar13 = *(ulong *)pIVar9;
              if ((uVar13 & 1) == 0) goto LAB_01104b20;
LAB_01104b08:
              if (0x3f < *(ushort *)
                          ((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))
              goto LAB_01104b20;
            }
            else {
              pIVar9 = (Isolate *)JSReceiver::GetDataProperty((LookupIterator *)&local_d0);
              uVar13 = *(ulong *)pIVar9;
              if ((uVar13 & 1) != 0) goto LAB_01104b08;
LAB_01104b20:
              pIVar9 = param_1 + 200;
            }
            param_2 = pIVar9;
            if ((*(int *)(*(long *)pIVar5 + 7) != 0) &&
               (param_2 = pIVar5, *(int *)(*(long *)pIVar9 + 7) != 0)) {
              IncrementalStringBuilder::IncrementalStringBuilder
                        ((IncrementalStringBuilder *)&local_d0,param_1);
              IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,pIVar5);
              lVar19 = (long)local_bc;
              local_bc = local_bc + 1;
              if (local_c8 == 0) {
                *(undefined1 *)(*(long *)local_b0 + lVar19 + 0xb) = 0x3a;
                if (local_bc == iStack_c0) {
                  IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
                }
                *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x20;
              }
              else {
                *(undefined2 *)(*(long *)local_b0 + lVar19 * 2 + 0xb) = 0x3a;
                if (local_bc == iStack_c0) {
                  IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
                }
                *(undefined2 *)(*(long *)local_b0 + (long)local_bc * 2 + 0xb) = 0x20;
              }
              local_bc = local_bc + 1;
              if (local_bc == iStack_c0) {
                IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
              }
              IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,pIVar9);
              param_2 = (Isolate *)
                        IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_d0);
              if (param_2 != (Isolate *)0x0) goto LAB_01104278;
              goto LAB_0110530c;
            }
            goto LAB_01104278;
          }
LAB_01104e6c:
          uVar13 = *(ulong *)param_2;
          if (((uVar13 & 1) == 0) ||
             (*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9))
          {
            if (*(char *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 4) == '\0')
            {
              uVar21 = __strlen_chk("[object Unknown]",0x11);
              local_d0 = "[object Unknown]";
              local_c8 = (int)uVar21;
              local_c4 = (undefined4)((ulong)uVar21 >> 0x20);
              goto LAB_011042f0;
            }
            param_2 = (Isolate *)ToObjectImpl(param_1,param_2,0);
            if (param_2 == (Isolate *)0x0) goto LAB_0110530c;
            uVar13 = *(ulong *)param_2;
          }
          local_d0 = (char *)uVar13;
          uVar13 = JSReceiver::class_name((JSReceiver *)&local_d0);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar5;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar5 = puVar7 + 1;
            *puVar7 = uVar13;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
          }
          uVar13 = *(ulong *)(param_1 + 0xc78);
          pIVar5 = param_1 + 0xc78;
          local_b8 = (ulong)*(uint *)(param_2 + 4) << 0x20;
          uVar18 = 2;
          if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar13 - 1))
              == 0x40) {
            uVar18 = (*(int *)(uVar13 + 7) << 1 ^ 0xffffffffU) & 2;
          }
          local_d0 = (char *)CONCAT44(local_d0._4_4_,uVar18);
          local_c4 = 0;
          iStack_c0 = 0xc0;
          if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) &
              0xffe0) == 0x20) {
            pIVar5 = (Isolate *)StringTable::LookupString();
          }
          uStack_a8 = 0;
          uStack_98 = 0;
          local_80 = 0xffffffffffffffff;
          uStack_88 = 0xffffffffffffffff;
          local_b0 = pIVar5;
          local_a0 = param_2;
          local_90 = param_2;
          LookupIterator::Start<false>((LookupIterator *)&local_d0);
          if (local_d0._4_4_ == 4) {
            puVar10 = (ulong *)(local_b8 + 0xa0);
            uVar13 = *puVar10;
          }
          else {
            puVar10 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_d0);
            uVar13 = *puVar10;
          }
          puVar20 = puVar7;
          if (((uVar13 & 1) != 0) &&
             (puVar20 = puVar10,
             0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1))))
          {
            puVar20 = puVar7;
          }
          IncrementalStringBuilder::IncrementalStringBuilder
                    ((IncrementalStringBuilder *)&local_d0,param_1);
          if (local_c8 == 0) {
            lVar19 = (long)local_bc;
            local_bc = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + lVar19 + 0xb) = 0x5b;
            if (local_bc == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x6f;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x62;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x6a;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x65;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 99;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x74;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            iVar2 = local_bc + 1;
            *(undefined1 *)(*(long *)local_b0 + (long)local_bc + 0xb) = 0x20;
            local_bc = iVar2;
            if (iVar2 == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
          }
          else {
            lVar19 = 0;
            uVar12 = 0x5b;
            do {
              lVar17 = (long)local_bc;
              local_bc = local_bc + 1;
              *(ushort *)(*(long *)local_b0 + lVar17 * 2 + 0xb) = uVar12;
              if (local_bc == iStack_c0) {
                IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
              }
              uVar12 = (ushort)(byte)"[object "[lVar19 + 1];
              lVar19 = lVar19 + 1;
            } while (lVar19 != 8);
          }
          IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,puVar20);
          lVar19 = (long)local_bc;
          local_bc = local_bc + 1;
          if (local_c8 == 0) {
            lVar19 = *(long *)local_b0 + lVar19;
            uVar14 = 0x5d;
            goto LAB_01105248;
          }
          lVar19 = *(long *)local_b0 + lVar19 * 2;
          uVar15 = 0x5d;
LAB_01105238:
          *(undefined2 *)(lVar19 + 0xb) = uVar15;
        }
        if (local_bc == iStack_c0) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
        }
      }
      else {
        if (sVar1 == 0x438) {
          param_2 = (Isolate *)JSBoundFunction::ToString();
        }
        else {
          param_2 = (Isolate *)JSFunction::ToString(param_2);
        }
        if (*(int *)(*(long *)param_2 + 7) < 0x81) goto LAB_01104278;
        IncrementalStringBuilder::IncrementalStringBuilder
                  ((IncrementalStringBuilder *)&local_d0,param_1);
        pIVar5 = param_2;
        if (*(int *)(*(long *)param_2 + 7) != 0x6f) {
          pIVar5 = (Isolate *)Factory::NewProperSubString((Factory *)param_1,param_2,0,0x6f);
        }
        IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,pIVar5);
        if (local_c8 == 0) {
          cVar11 = '.';
          lVar19 = 1;
          do {
            lVar17 = (long)local_bc;
            local_bc = local_bc + 1;
            *(char *)(*(long *)local_b0 + lVar17 + 0xb) = cVar11;
            if (local_bc == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            cVar11 = "...<omitted>..."[lVar19];
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x10);
        }
        else {
          uVar12 = 0x2e;
          lVar19 = 1;
          do {
            lVar17 = (long)local_bc;
            local_bc = local_bc + 1;
            *(ushort *)(*(long *)local_b0 + lVar17 * 2 + 0xb) = uVar12;
            if (local_bc == iStack_c0) {
              IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_d0);
            }
            uVar12 = (ushort)(byte)"...<omitted>..."[lVar19];
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x10);
        }
        iVar2 = *(int *)(*(long *)param_2 + 7) + -2;
        if (iVar2 != 0) {
          param_2 = (Isolate *)Factory::NewProperSubString((Factory *)param_1,param_2,iVar2);
        }
        IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_d0,param_2);
      }
      param_2 = (Isolate *)IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_d0);
    }
  }
  if (param_2 == (Isolate *)0x0) {
LAB_0110530c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
LAB_01104278:
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

