
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::JSReceiver::SetOrCopyDataProperties(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::ScopedVector<v8::internal::Handle<v8::internal::Object> > const*, bool) */

undefined8
v8::internal::JSReceiver::SetOrCopyDataProperties
          (Isolate *param_1,ulong *param_2,ulong *param_3,long *param_4,uint param_5)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ushort uVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  Isolate *pIVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  Isolate *pIVar25;
  int iVar26;
  ulong uVar27;
  uint local_154;
  undefined8 *local_150;
  ulong *local_130;
  PropertyDescriptor local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c4;
  Isolate *local_b8;
  ulong *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_64 [4];
  
  uVar18 = *param_3;
  if ((uVar18 & 1) == 0) {
    return 0x101;
  }
  uVar16 = uVar18 & 0xffffffff00000000;
  puVar17 = (uint *)(uVar18 - 1);
  if (*(ushort *)((uVar16 | 7) + (ulong)*(uint *)(uVar18 - 1)) < 0xa9) {
    if (0x3f < *(ushort *)((uVar16 | 7) + (ulong)*puVar17)) {
      return 0x101;
    }
    local_154 = (uint)(*(int *)(uVar18 + 7) == 0);
LAB_010c9d38:
    if ((local_154 & 0xff) != 0) {
      return 0x101;
    }
  }
  else {
    pIVar25 = (Isolate *)(*param_2 & 0xffffffff00000000);
    if ((*(uint *)(((ulong)pIVar25 | (ulong)*(uint *)(*param_2 - 1)) + 0xb) >> 0x18 & 1) != 0) {
      JSObject::MigrateInstance(pIVar25,param_2);
      uVar16 = *param_3 & 0xffffffff00000000;
      puVar17 = (uint *)(*param_3 - 1);
    }
    pIVar1 = pIVar25 + 0x95b8;
    uVar16 = uVar16 | *puVar17;
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      local_130 = *(ulong **)(pIVar25 + 0x95a0);
      if (local_130 == *(ulong **)(pIVar25 + 0x95a8)) {
        local_130 = (ulong *)HandleScope::Extend(pIVar25);
      }
      *(ulong **)(pIVar25 + 0x95a0) = local_130 + 1;
      *local_130 = uVar16;
    }
    else {
      local_130 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar16);
      uVar16 = *local_130;
    }
    if (((0xa9 < *(ushort *)(uVar16 + 7)) &&
        (local_d0 = uVar16, uVar18 = Map::OnlyHasSimpleProperties((Map *)&local_d0),
        (uVar18 & 1) != 0)) && (*(int *)(*param_3 + 7) == *(int *)(pIVar25 + 0x168))) {
      uVar18 = *local_130 & 0xffffffff00000000 | (ulong)*(uint *)(*local_130 + 0x17);
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar25 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar25 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar25);
        }
        *(ulong **)(pIVar25 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar18;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar18);
      }
      uVar18 = (ulong)(*(uint *)(*local_130 + 0xb) >> 10) & 0x3ff;
      if ((int)uVar18 == 0) {
        return 0x101;
      }
      pIVar2 = pIVar25 + 0x95a0;
      pIVar3 = pIVar25 + 0x95b0;
      local_150 = &local_88;
      uVar16 = 0;
      bVar7 = true;
      pIVar4 = pIVar25 + 0x95a8;
      do {
        puVar21 = *(ulong **)pIVar2;
        puVar20 = *(ulong **)pIVar4;
        *(int *)pIVar3 = *(int *)pIVar3 + 1;
        uVar23 = uVar16 * 0xc00000000 + 0x1000000000 >> 0x20;
        uVar27 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + *puVar9 + -1);
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puVar11 = puVar21;
          if (puVar20 == puVar21) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar25);
          }
          *(ulong **)pIVar2 = puVar11 + 1;
          *puVar11 = uVar27;
          if (bVar7) goto LAB_010ca110;
LAB_010ca19c:
          local_b8 = (Isolate *)((ulong)*(uint *)((long)param_3 + 4) << 0x20);
          local_d0 = local_d0 & 0xffffffff00000000;
          local_c4 = 0xc000000000;
          puVar12 = puVar11;
          if ((*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1)) &
              0xffe0) == 0x20) {
            puVar12 = (ulong *)StringTable::LookupString(local_b8,puVar11);
          }
          uStack_a8 = 0;
          uStack_98 = 0;
          local_88 = 0xffffffffffffffff;
          uStack_80 = 0xffffffffffffffff;
          local_b0 = puVar12;
          local_a0 = param_3;
          local_90 = param_3;
          LookupIterator::Start<false>((LookupIterator *)&local_d0);
          if ((local_d0._4_4_ == 4) || ((local_c4._4_1_ >> 4 & 1) != 0)) {
            iVar26 = 3;
LAB_010ca244:
            bVar7 = false;
            goto LAB_010ca264;
          }
          pIVar13 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d0,false);
          if (pIVar13 == (Isolate *)0x0) {
            iVar26 = 1;
            local_150 = (undefined8 *)0x0;
            local_154 = 0;
            goto LAB_010ca244;
          }
          bVar7 = false;
          if ((param_5 & 1) != 0) goto LAB_010ca4d4;
LAB_010ca3b4:
          if ((param_4 != (long *)0x0) && (0 < (int)param_4[1])) {
            lVar22 = 0;
            do {
              local_d0 = *puVar11;
              uVar23 = Object::SameValue((Object *)&local_d0,
                                         **(undefined8 **)(*param_4 + lVar22 * 8));
              if ((uVar23 & 1) != 0) {
                iVar26 = 3;
                iVar19 = 3;
                goto joined_r0x010ca598;
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)param_4[1]);
          }
          LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_d0,pIVar25,param_2,puVar11,local_f8,1);
          if (local_f8[0] != (PropertyDescriptor)0x1) goto LAB_010ca630;
          uVar8 = JSObject::CreateDataProperty(&local_d0,pIVar13,1);
          if ((uVar8 & 0xff) == 0) {
            v8::V8::FromJustIsNothing();
          }
          if (uVar8 < 0x100) goto LAB_010ca644;
          iVar26 = 0;
          iVar19 = 0;
joined_r0x010ca598:
          if (pIVar25 != (Isolate *)0x0) goto LAB_010ca264;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar27);
          if (!bVar7) goto LAB_010ca19c;
LAB_010ca110:
          uVar27 = *puVar9;
          uVar5 = *(uint *)(uVar27 + (uVar23 | 3));
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 1 & 1) == 0) {
              if ((uVar5 >> 2 & 1) == 0) {
                uVar6 = (uint)((int)uVar5 >> 1) >> 6 & 7;
                uVar23 = *local_130;
                uVar5 = (uint)((int)uVar5 >> 1) >> 0x13 & 0x3ff;
                iVar26 = (uint)*(byte *)(uVar23 + 3) - (uint)*(byte *)(uVar23 + 4);
                if ((int)uVar5 < iVar26) {
                  uVar27 = (ulong)*(byte *)(uVar23 + 4) << 0x1c;
                  iVar19 = (uVar5 + *(byte *)(uVar23 + 4)) * 4;
                }
                else {
                  iVar19 = (uVar5 - iVar26) * 4 + 8;
                  uVar27 = 0x20000000;
                }
                local_d0 = CONCAT71(local_d0._1_7_,(char)uVar6);
                if (4 < uVar6) {
                  uVar14 = Representation::Mnemonic((Representation *)&local_d0);
                  PrintF("%s\n",uVar14);
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                }
                pIVar13 = (Isolate *)
                          JSObject::FastPropertyAt
                                    (param_3,(ulong)uVar6,
                                     (ulong)((int)uVar5 < iVar26) << 0xd | (long)iVar26 << 0x10 |
                                     (long)iVar19 | uVar27 |
                                     *(ulong *)(&DAT_019d75d8 + (ulong)uVar6 * 8));
              }
              else {
                uVar23 = uVar27 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + uVar27 + 7);
                if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
                  pIVar13 = *(Isolate **)pIVar2;
                  if (pIVar13 == *(Isolate **)pIVar4) {
                    pIVar13 = (Isolate *)HandleScope::Extend(pIVar25);
                  }
                  *(Isolate **)pIVar2 = pIVar13 + 8;
                  *(ulong *)pIVar13 = uVar23;
                }
                else {
                  pIVar13 = (Isolate *)
                            CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar23);
                }
              }
              bVar7 = true;
            }
            else {
              if (*(short *)(((ulong)pIVar25 | 7) + (ulong)*(uint *)(*puVar11 - 1)) == 0x40) {
                uVar15 = 3;
                if ((*(byte *)(*puVar11 + 7) & 1) != 0) {
                  uVar15 = 0;
                }
              }
              else {
                uVar15 = 3;
              }
              local_d0 = CONCAT44(local_d0._4_4_,uVar15);
              local_c4 = 0xc000000000;
              puVar12 = puVar11;
              local_b8 = pIVar25;
              if ((*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1))
                  & 0xffe0) == 0x20) {
                puVar12 = (ulong *)StringTable::LookupString(pIVar25,puVar11);
              }
              uStack_a8 = 0;
              uStack_98 = 0;
              local_88 = 0xffffffffffffffff;
              uStack_80 = 0xffffffffffffffff;
              local_b0 = puVar12;
              local_a0 = param_3;
              local_90 = param_3;
              LookupIterator::Start<false>((LookupIterator *)&local_d0);
              if (local_d0._4_4_ == 4) {
                pIVar13 = local_b8 + 0xa0;
              }
              else {
                pIVar13 = (Isolate *)Object::GetProperty((LookupIterator *)&local_d0,false);
                if (pIVar13 == (Isolate *)0x0) {
                  local_154 = 0;
                  local_150 = (undefined8 *)0x0;
                  bVar7 = true;
                  iVar26 = 1;
                  goto LAB_010ca264;
                }
              }
              uVar23 = *local_130;
              bVar7 = *(int *)(*param_3 - 1) == (int)uVar23;
              *puVar9 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 0x17);
            }
            if ((param_5 & 1) == 0) goto LAB_010ca3b4;
LAB_010ca4d4:
            LookupIterator::PropertyOrElement
                      ((LookupIterator *)&local_d0,pIVar25,param_2,puVar11,local_f8,3);
            if (local_f8[0] != (PropertyDescriptor)0x1) goto LAB_010ca630;
            local_150 = (undefined8 *)Object::SetProperty(&local_d0,pIVar13,1,1);
            local_154 = (uint)local_150 >> 8 & 0xff;
            if ((((ulong)local_150 & 0xff) == 0) || (!bVar7)) {
              if (((ulong)local_150 & 0xff) == 0) {
                local_150 = (undefined8 *)0x0;
                iVar26 = 1;
              }
              else {
                iVar26 = 0;
              }
            }
            else {
              uVar23 = *local_130;
              bVar7 = *(int *)(*param_3 - 1) == (int)uVar23;
              *puVar9 = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 0x17);
              iVar26 = 0;
            }
          }
          else {
            bVar7 = true;
            iVar26 = 3;
          }
LAB_010ca264:
          iVar19 = iVar26;
          *(ulong **)pIVar2 = puVar21;
          *(int *)pIVar3 = *(int *)pIVar3 + -1;
          if (*(ulong **)pIVar4 != puVar20) {
            *(ulong **)pIVar4 = puVar20;
            HandleScope::DeleteExtensions(pIVar25);
          }
        }
        if ((iVar19 != 3) && (iVar19 != 0)) {
          if (((ulong)local_150 & 0xff) == 0) {
            return 0;
          }
          goto LAB_010c9d38;
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar18) {
          return 0x101;
        }
      } while( true );
    }
  }
  uVar18 = *param_3;
  if (((uVar18 & 1) == 0) ||
     (*(ushort *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) < 0xa9)) {
    param_3 = (ulong *)Object::ToObjectImpl(param_1,param_3,0);
  }
  if (param_3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  puVar9 = (ulong *)KeyAccumulator::GetKeys(param_3,0,0,1,0,0);
  if (puVar9 == (ulong *)0x0) {
    return 0;
  }
  uVar18 = *puVar9;
  if (1 < *(int *)(uVar18 + 3)) {
    lVar22 = 0;
    do {
      uVar18 = uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + (long)((int)lVar22 << 2) + 7)
      ;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar20 = *(ulong **)(param_1 + 0x95a0);
        if (puVar20 == *(ulong **)(param_1 + 0x95a8)) {
          puVar20 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar20 + 1;
        *puVar20 = uVar18;
      }
      else {
        puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      }
      local_f8[0] = (PropertyDescriptor)0x0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      local_64[0] = '\0';
      LookupIterator::PropertyOrElement
                ((LookupIterator *)&local_d0,param_1,param_3,puVar20,local_64,1);
      uVar8 = GetOwnPropertyDescriptor((LookupIterator *)&local_d0,local_f8);
      if ((uVar8 & 0xff) == 0) {
        return 0;
      }
      if ((0xff < uVar8) && (((byte)local_f8[0] & 1) != 0)) {
        lVar10 = Runtime::GetObjectProperty(param_1,param_3,puVar20,0);
        if (lVar10 == 0) {
          return 0;
        }
        if ((param_5 & 1) == 0) {
          if ((param_4 != (long *)0x0) && (0 < (int)param_4[1])) {
            lVar24 = 0;
            do {
              local_d0 = *puVar20;
              uVar18 = Object::SameValue((Object *)&local_d0,
                                         **(undefined8 **)(*param_4 + lVar24 * 8));
              if ((uVar18 & 1) != 0) goto LAB_010c9e7c;
              lVar24 = lVar24 + 1;
            } while (lVar24 < (int)param_4[1]);
          }
          LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_d0,param_1,param_2,puVar20,local_64,1);
          if (local_64[0] != '\x01') {
LAB_010ca630:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","success");
          }
          uVar8 = JSObject::CreateDataProperty(&local_d0,lVar10,1);
          if ((uVar8 & 0xff) == 0) {
            v8::V8::FromJustIsNothing();
          }
          if (uVar8 < 0x100) {
LAB_010ca644:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "JSObject::CreateDataProperty(&it, prop_value, Just(kThrowOnError)) .FromJust()"
                    );
          }
        }
        else {
          lVar10 = Runtime::SetObjectProperty(param_1,param_2,puVar20,lVar10,0,1);
          if (lVar10 == 0) {
            return 0;
          }
        }
      }
LAB_010c9e7c:
      uVar18 = *puVar9;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(uVar18 + 3) >> 1);
  }
  return 0x101;
}

