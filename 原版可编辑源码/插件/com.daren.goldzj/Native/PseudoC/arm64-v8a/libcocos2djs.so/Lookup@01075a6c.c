
/* v8::internal::Context::Lookup(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::String>, v8::internal::ContextLookupFlags, int*,
   v8::internal::PropertyAttributes*, v8::internal::InitializationFlag*,
   v8::internal::VariableMode*, bool*) */

Isolate * v8::internal::Context::Lookup
                    (Isolate *param_1,Isolate *param_2,uint param_3,int *param_4,uint *param_5,
                    undefined1 *param_6,LookupIterator *param_7,undefined1 *param_8)

{
  int *piVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Isolate *pIVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  ulong *puVar13;
  uint uVar14;
  undefined4 uVar15;
  Isolate *pIVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  Isolate *pIVar21;
  undefined1 auStack_138 [4];
  undefined1 local_134 [4];
  LookupIterator local_130 [4];
  undefined1 auStack_12c [4];
  uint local_128 [3];
  undefined8 local_11c;
  Isolate *local_110;
  Isolate *local_108;
  undefined8 uStack_100;
  Isolate *local_f8;
  undefined8 uStack_f0;
  Isolate *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  LookupIterator local_c8;
  undefined1 local_c7;
  undefined1 auStack_c6 [2];
  undefined8 local_c4;
  Isolate *local_b8;
  Isolate *local_b0;
  undefined8 uStack_a8;
  Isolate *local_a0;
  undefined8 uStack_98;
  Isolate *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_68 [4];
  undefined1 local_64 [4];
  
  uVar14 = *(uint *)(param_1 + 4);
  *param_4 = -1;
  *param_5 = 0x40;
  *param_6 = 1;
  pIVar21 = (Isolate *)((ulong)uVar14 << 0x20);
  *param_7 = (LookupIterator)0x2;
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  pIVar16 = pIVar21 + 0x95b8;
  pIVar2 = pIVar21 + 0x95a0;
  pIVar3 = pIVar21 + 0x95a8;
  do {
    uVar17 = *(ulong *)param_1;
    uVar18 = uVar17 & 0xffffffff00000000;
    if ((((*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x8f) ||
         (*(short *)((uVar18 | *(uint *)(uVar17 - 1)) + 7) == 0x91)) ||
        (*(short *)((uVar18 | *(uint *)(uVar17 - 1)) + 7) == 0x8d)) ||
       (*(short *)((uVar18 | *(uint *)(uVar17 - 1)) + 7) == 0x89)) {
      local_d0 = uVar18 | *(uint *)(uVar17 + 7);
      uVar8 = ScopeInfo::HasContextExtensionSlot((ScopeInfo *)&local_d0);
      if (((uVar8 & 1) != 0) && (*(int *)(uVar17 + 0xf) != *(int *)(uVar18 + 0xa0))) {
        uVar18 = *(ulong *)param_1;
        uVar17 = uVar18 & 0xffffffff00000000;
        iVar7 = *(int *)(uVar18 + 0xf);
        iVar6 = iVar7;
        if ((*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) != 0x91) &&
           (iVar6 = 0, iVar7 != *(int *)(uVar17 + 0xa0))) {
          iVar6 = iVar7;
        }
        if (iVar6 != 0) {
          uVar20 = uVar17 | *(uint *)(uVar18 + 0xf);
          uVar8 = uVar20;
          if ((*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) != 0x91) &&
             (uVar8 = 0, *(uint *)(uVar18 + 0xf) != *(uint *)(uVar17 + 0xa0))) {
            uVar8 = uVar20;
          }
          if (*(CanonicalHandleScope **)pIVar16 == (CanonicalHandleScope *)0x0) {
            pIVar9 = *(Isolate **)pIVar2;
            if (pIVar9 == *(Isolate **)pIVar3) {
              pIVar9 = (Isolate *)HandleScope::Extend(pIVar21);
            }
            *(Isolate **)pIVar2 = pIVar9 + 8;
            *(ulong *)pIVar9 = uVar8;
          }
          else {
            pIVar9 = (Isolate *)
                     CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar16,uVar8);
          }
          uVar17 = *(ulong *)param_1;
          uVar18 = uVar17 & 0xffffffff00000000;
          if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x8f) {
            uVar8 = *(ulong *)param_2;
            uVar17 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(
                                                  (uVar18 | *(uint *)(uVar17 - 1)) + 0x13)) + 0xf))
                                                  + 0xb)) + 0x273);
            if (1 < *(int *)(uVar17 + 7)) {
              lVar19 = 0;
              piVar1 = (int *)(uVar17 + 7);
              iVar7 = 4;
              do {
                iVar6 = ScopeInfo::ContextSlotIndex
                                  (uVar18 | *(uint *)((uVar18 | *(uint *)((long)piVar1 + (long)iVar7
                                                                         )) + 7),uVar8,&local_c8,
                                   &local_c7,auStack_c6,local_128);
                if (-1 < iVar6) {
                  local_d0 = CONCAT44(iVar6,(int)lVar19);
                  uVar18 = uVar18 | *(uint *)((long)iVar7 + (long)piVar1);
                  *param_4 = iVar6;
                  *param_7 = local_c8;
                  *param_6 = local_c7;
                  *param_5 = (uint)(local_c8 == (LookupIterator)0x1 || (byte)local_c8 - 7 < 4);
                  if (*(CanonicalHandleScope **)pIVar16 == (CanonicalHandleScope *)0x0) {
                    pIVar16 = *(Isolate **)pIVar2;
                    if (pIVar16 == *(Isolate **)pIVar3) {
                      pIVar16 = (Isolate *)HandleScope::Extend(pIVar21);
                    }
                    *(Isolate **)pIVar2 = pIVar16 + 8;
                    *(ulong *)pIVar16 = uVar18;
                    return pIVar16;
                  }
                  pIVar21 = (Isolate *)
                            CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar16,uVar18);
                  return pIVar21;
                }
                lVar19 = lVar19 + 1;
                iVar7 = iVar7 + 4;
              } while (lVar19 < *piVar1 >> 1);
            }
          }
          uVar17 = *(ulong *)pIVar9 & 0xffffffff00000000;
          if (((param_3 >> 1 & 1) == 0) ||
             (*(short *)((uVar17 | 7) + (ulong)*(uint *)(*(ulong *)pIVar9 - 1)) == 0x427)) {
            LookupIterator::PropertyOrElement
                      ((LookupIterator *)&local_d0,uVar17,pIVar9,param_2,pIVar9,1);
            uVar17 = JSReceiver::GetPropertyAttributes((LookupIterator *)&local_d0);
            uVar14 = (uint)(uVar17 >> 0x20);
            if ((uVar17 & 0xff) == 0) {
              return (Isolate *)0x0;
            }
          }
          else {
            uVar17 = ScopeInfo::VariableIsSynthetic(*(ulong *)param_2);
            if ((uVar17 & 1) != 0) {
              *param_5 = 0x40;
              goto LAB_01075d80;
            }
            local_110 = (Isolate *)((ulong)*(uint *)(pIVar9 + 4) << 0x20);
            if (*(short *)(((ulong)*(uint *)(pIVar9 + 4) << 0x20 | 7) +
                          (ulong)*(uint *)(*(ulong *)param_2 - 1)) == 0x40) {
              local_128[0] = 3;
              if ((*(byte *)(*(ulong *)param_2 + 7) & 1) != 0) {
                local_128[0] = 0;
              }
            }
            else {
              local_128[0] = 3;
            }
            local_11c = 0xc000000000;
            pIVar12 = param_2;
            if ((*(ushort *)
                  ((*(ulong *)param_2 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)(*(ulong *)param_2 - 1)) & 0xffe0) == 0x20) {
              pIVar12 = (Isolate *)StringTable::LookupString(local_110,param_2);
            }
            uStack_100 = 0;
            uStack_f0 = 0;
            local_e0 = 0xffffffffffffffff;
            uStack_d8 = 0xffffffffffffffff;
            local_108 = pIVar12;
            local_f8 = pIVar9;
            local_e8 = pIVar9;
            LookupIterator::Start<false>((LookupIterator *)local_128);
            pIVar12 = local_110;
            sVar4 = *(short *)((*(ulong *)param_1 & 0xffffffff00000000 |
                               (ulong)*(uint *)(*(ulong *)param_1 - 1)) + 7);
            uVar5 = JSReceiver::HasProperty((LookupIterator *)local_128);
            pIVar11 = local_f8;
            if (((0xff < uVar5) && (sVar4 == 0x91)) && ((uVar5 & 0xff) != 0)) {
              uVar17 = *(ulong *)(pIVar12 + 0xc60);
              pIVar10 = pIVar12 + 0xc60;
              if (*(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x40) {
                uVar15 = 3;
                if ((*(byte *)(uVar17 + 7) & 1) != 0) {
                  uVar15 = 0;
                }
              }
              else {
                uVar15 = 3;
              }
              local_d0 = CONCAT44(local_d0._4_4_,uVar15);
              local_c4 = 0xc000000000;
              local_b8 = pIVar12;
              if ((*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) &
                  0xffe0) == 0x20) {
                pIVar10 = (Isolate *)StringTable::LookupString();
              }
              uStack_a8 = 0;
              local_a0 = pIVar11;
              uStack_98 = 0;
              local_90 = pIVar11;
              local_88 = 0xffffffffffffffff;
              uStack_80 = 0xffffffffffffffff;
              local_b0 = pIVar10;
              LookupIterator::Start<false>((LookupIterator *)&local_d0);
              if (local_d0._4_4_ == 4) {
                pIVar11 = local_b8 + 0xa0;
                uVar17 = *(ulong *)pIVar11;
                pIVar10 = local_108;
joined_r0x01076154:
                local_108 = pIVar10;
                if (((uVar17 & 1) == 0) ||
                   (*(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1)) <
                    0xa9)) {
                  uVar5 = 0x101;
                }
                else {
                  if (*(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(*(ulong *)pIVar10 - 1)) ==
                      0x40) {
                    uVar15 = 3;
                    if ((*(byte *)(*(ulong *)pIVar10 + 7) & 1) != 0) {
                      uVar15 = 0;
                    }
                  }
                  else {
                    uVar15 = 3;
                  }
                  local_d0._4_4_ = (int)(local_d0 >> 0x20);
                  local_d0 = CONCAT44(local_d0._4_4_,uVar15);
                  local_c4 = 0xc000000000;
                  local_b8 = pIVar12;
                  if ((*(ushort *)
                        ((*(ulong *)pIVar10 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)(*(ulong *)pIVar10 - 1)) & 0xffe0) == 0x20) {
                    pIVar10 = (Isolate *)StringTable::LookupString(pIVar12);
                  }
                  uStack_a8 = 0;
                  uStack_98 = 0;
                  local_88 = 0xffffffffffffffff;
                  uStack_80 = 0xffffffffffffffff;
                  local_b0 = pIVar10;
                  local_a0 = pIVar11;
                  local_90 = pIVar11;
                  LookupIterator::Start<false>((LookupIterator *)&local_d0);
                  if (local_d0._4_4_ == 4) {
                    pIVar11 = local_b8 + 0xa0;
                  }
                  else {
                    pIVar11 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d0,false);
                    if (pIVar11 == (Isolate *)0x0) goto LAB_01076250;
                  }
                  local_d0 = *(ulong *)pIVar11;
                  uVar17 = Object::BooleanValue((Object *)&local_d0,pIVar12);
                  uVar5 = 0x101;
                  if ((uVar17 & 1) != 0) {
                    uVar5 = 1;
                  }
                }
              }
              else {
                pIVar11 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d0,false);
                if (pIVar11 != (Isolate *)0x0) {
                  uVar17 = *(ulong *)pIVar11;
                  pIVar10 = local_108;
                  goto joined_r0x01076154;
                }
LAB_01076250:
                uVar5 = 0;
              }
            }
            uVar14 = 0;
            if (uVar5 < 0x100 && (uVar5 & 0xff) != 0) {
              uVar14 = 0x40;
            }
            if ((uVar5 & 0xff) == 0) {
              return (Isolate *)0x0;
            }
          }
          *param_5 = uVar14;
          if (uVar14 != 0x40) {
            return pIVar9;
          }
        }
      }
    }
LAB_01075d80:
    uVar18 = *(ulong *)param_1;
    uVar17 = uVar18 & 0xffffffff00000000;
    if (((*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x8d) ||
        (*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x89)) ||
       ((*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x90 ||
        (((*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x8c ||
          (*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x8e)) ||
         (*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x8a)))))) {
      local_d0 = uVar17 | *(uint *)(uVar18 + 7);
      iVar7 = ScopeInfo::ContextSlotIndex
                        (local_d0,*(ulong *)param_2,local_128,local_64,auStack_68,auStack_12c);
      if (iVar7 < 0) {
        if ((((param_3 & 1) != 0) &&
            (*(short *)((*(ulong *)param_1 & 0xffffffff00000000 |
                        (ulong)*(uint *)(*(ulong *)param_1 - 1)) + 7) == 0x8d)) &&
           (iVar7 = ScopeInfo::FunctionContextSlotIndex((ScopeInfo *)&local_d0,*(ulong *)param_2),
           -1 < iVar7)) {
          *param_4 = iVar7;
          *param_5 = 1;
          *param_6 = 1;
          *param_7 = (LookupIterator)0x1;
          if (param_8 == (undefined1 *)0x0) {
            return param_1;
          }
          uVar17 = ScopeInfo::language_mode((ScopeInfo *)&local_d0);
          if ((uVar17 & 1) == 0) {
            *param_8 = 1;
            return param_1;
          }
          return param_1;
        }
        if ((*(short *)((*(ulong *)param_1 & 0xffffffff00000000 |
                        (ulong)*(uint *)(*(ulong *)param_1 - 1)) + 7) == 0x8e) &&
           (iVar7 = ScopeInfo::ModuleIndex
                              ((ScopeInfo *)&local_d0,*(ulong *)param_2,local_130,local_134,
                               auStack_138), iVar7 != 0)) {
          *param_4 = iVar7;
          *param_7 = local_130[0];
          *param_6 = local_134[0];
          iVar7 = SourceTextModuleDescriptor::GetCellIndexKind(iVar7);
          if (iVar7 == 1) {
            uVar14 = (uint)((byte)local_130[0] == 1 || (byte)local_130[0] - 7 < 4);
          }
          else {
            uVar14 = 1;
          }
          *param_5 = uVar14;
          uVar18 = *(ulong *)param_1;
          uVar14 = *(uint *)(uVar18 - 1);
          uVar17 = uVar18 & 0xffffffff00000000;
          while (*(short *)((uVar17 | uVar14) + 7) != 0x8e) {
            uVar18 = uVar17 | *(uint *)(uVar18 + 0xb);
            uVar14 = *(uint *)(uVar18 - 1);
          }
          uVar17 = uVar17 | *(uint *)(uVar18 + 0xf);
          if (*(CanonicalHandleScope **)pIVar16 != (CanonicalHandleScope *)0x0) {
            pIVar21 = (Isolate *)
                      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar16,uVar17);
            return pIVar21;
          }
          pIVar16 = *(Isolate **)pIVar2;
          if (pIVar16 == *(Isolate **)pIVar3) {
            pIVar16 = (Isolate *)HandleScope::Extend(pIVar21);
          }
          *(Isolate **)pIVar2 = pIVar16 + 8;
          *(ulong *)pIVar16 = uVar17;
          return pIVar16;
        }
        goto LAB_01075ed0;
      }
      uVar17 = ScopeInfo::IsReplModeScope((ScopeInfo *)&local_d0);
      if ((uVar17 & 1) == 0) {
LAB_01076434:
        *param_4 = iVar7;
        *param_7 = local_128[0]._0_1_;
        *param_6 = local_64[0];
        *param_5 = (uint)(local_128[0]._0_1_ == (LookupIterator)0x1 || (local_128[0] & 0xff) - 7 < 4
                         );
        return param_1;
      }
      uVar17 = *(ulong *)param_1;
      uVar14 = *(uint *)(uVar17 + (long)(iVar7 << 2) + 7);
      if (((uVar14 & 1) == 0) || (uVar14 != *(uint *)(pIVar21 + 0xa8))) goto LAB_01076434;
      uVar14 = *(uint *)(uVar17 + 0xb);
      uVar17 = uVar17 & 0xffffffff00000000;
    }
    else {
      if (*(short *)((uVar17 | *(uint *)(uVar18 - 1)) + 7) == 0x8b) {
        if (((*(uint *)(uVar18 + 0xf) & 1) != 0) &&
           (uVar8 = uVar17 | *(uint *)(uVar18 + 0xf),
           0xa8 < *(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
          if (*(CanonicalHandleScope **)pIVar16 == (CanonicalHandleScope *)0x0) {
            pIVar9 = *(Isolate **)pIVar2;
            if (pIVar9 == *(Isolate **)pIVar3) {
              pIVar9 = (Isolate *)HandleScope::Extend(pIVar21);
            }
            *(Isolate **)pIVar2 = pIVar9 + 8;
            *(ulong *)pIVar9 = uVar8;
          }
          else {
            pIVar9 = (Isolate *)
                     CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar16,uVar8);
            uVar8 = *(ulong *)pIVar9;
          }
          local_b8 = (Isolate *)(uVar8 & 0xffffffff00000000);
          if (*(short *)(((ulong)local_b8 | 7) + (ulong)*(uint *)(*(ulong *)param_2 - 1)) == 0x40) {
            uVar15 = 3;
            if ((*(byte *)(*(ulong *)param_2 + 7) & 1) != 0) {
              uVar15 = 0;
            }
          }
          else {
            uVar15 = 3;
          }
          local_d0 = CONCAT44(local_d0._4_4_,uVar15);
          local_c4 = 0xc000000000;
          pIVar12 = param_2;
          if ((*(ushort *)
                ((*(ulong *)param_2 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)(*(ulong *)param_2 - 1)) & 0xffe0) == 0x20) {
            pIVar12 = (Isolate *)StringTable::LookupString(local_b8,param_2);
          }
          uStack_a8 = 0;
          uStack_98 = 0;
          local_88 = 0xffffffffffffffff;
          uStack_80 = 0xffffffffffffffff;
          local_b0 = pIVar12;
          local_a0 = pIVar9;
          local_90 = pIVar9;
          LookupIterator::Start<false>((LookupIterator *)&local_d0);
          uVar5 = JSReceiver::HasProperty((LookupIterator *)&local_d0);
          if ((0xff < uVar5) && ((uVar5 & 0xff) != 0)) {
            *param_5 = 0;
            return pIVar9;
          }
          uVar18 = *(ulong *)param_1;
          uVar17 = uVar18 & 0xffffffff00000000;
        }
        if ((((*(uint *)(uVar18 + 0x17) & 1) != 0) &&
            (uVar18 = uVar17 | *(uint *)(uVar18 + 0x17),
            *(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar18 - 1)) - 0x77 < 10)) &&
           (local_d0 = uVar18, uVar17 = StringSet::Has((StringSet *)&local_d0,pIVar21,param_2),
           (uVar17 & 1) != 0)) {
          return (Isolate *)0x0;
        }
        uVar14 = *(uint *)(*(ulong *)param_1 + 0x13);
        if (((uVar14 & 1) != 0) &&
           (uVar17 = *(ulong *)param_1 & 0xffffffff00000000, uVar18 = uVar17 | uVar14,
           *(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar18 - 1)) - 0x88 < 10)) {
          if (*(CanonicalHandleScope **)pIVar16 == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)pIVar2;
            if (puVar13 == *(ulong **)pIVar3) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar21);
            }
            *(ulong **)pIVar2 = puVar13 + 1;
            *puVar13 = uVar18;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)pIVar16,uVar18);
          }
          pIVar9 = (Isolate *)Lookup(puVar13,param_2,0,param_4,param_5,param_6,param_7,0);
          if (pIVar9 != (Isolate *)0x0) {
            return pIVar9;
          }
        }
      }
LAB_01075ed0:
      uVar18 = *(ulong *)param_1;
      uVar17 = uVar18 & 0xffffffff00000000;
      if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x8f) {
        return (Isolate *)0x0;
      }
      uVar14 = *(uint *)(uVar18 + 0xb);
    }
    if (*(CanonicalHandleScope **)pIVar16 == (CanonicalHandleScope *)0x0) {
      param_1 = *(Isolate **)pIVar2;
      if (param_1 == *(Isolate **)pIVar3) {
        param_1 = (Isolate *)HandleScope::Extend(pIVar21);
      }
      *(Isolate **)pIVar2 = param_1 + 8;
      *(ulong *)param_1 = uVar17 | uVar14;
    }
    else {
      param_1 = (Isolate *)
                CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar16,uVar17 | uVar14);
    }
    if ((param_3 & 1) == 0) {
      return (Isolate *)0x0;
    }
  } while( true );
}

