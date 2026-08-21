
undefined1  [16]
FUN_010a3258(undefined8 param_1,Isolate *param_2,ulong *param_3,undefined8 *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 local_128 [3];
  undefined8 local_11c;
  Isolate *local_110;
  ulong *local_108;
  undefined8 uStack_100;
  ulong *local_f8;
  undefined8 uStack_f0;
  ulong *local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c4;
  Isolate *local_b8;
  ulong *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  
  pIVar2 = param_2 + 0x95a0;
  uVar15 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar15;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar15);
  }
  if (param_5 < param_6) {
    uVar15 = (ulong)param_2 | 7;
LAB_010a3364:
    uVar16 = 1;
    uVar11 = *puVar5;
    uVar9 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ param_5 & 0xffffffff ^ 0xffffffffffffffff)
            + (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ param_5 & 0xffffffff) * 0x40000;
    uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
    uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
    uVar4 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
    uVar9 = (ulong)(uVar4 & ((uint)(uVar9 >> 0x16) ^ (uint)uVar9) & 0x3fffffff);
    lVar1 = uVar11 + 7;
    uVar3 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
    if (uVar3 != *(uint *)(param_2 + 0xa0)) {
      iVar12 = 1;
      do {
        if (uVar3 != (uint)*(undefined8 *)(param_2 + 0xa8)) {
          if ((uVar3 & 1) == 0) {
            dVar17 = (double)((int)uVar3 >> 1);
          }
          else {
            dVar17 = *(double *)((uVar11 & 0xffffffff00000000 | (ulong)uVar3) + 3);
          }
          if ((int)dVar17 == (int)param_5) {
            lVar10 = (ulong)(uint)((int)uVar9 * 3) << 0x22;
            if ((*(uint *)((lVar10 + 0x1800000000 >> 0x20) + lVar1) >> 1 & 1) != 0) {
              if (((*param_3 & 1) == 0) ||
                 (puVar6 = param_3, *(ushort *)(uVar15 + *(uint *)(*param_3 - 1)) < 0xa9)) {
                puVar6 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (param_2,param_3,param_5);
              }
              local_128[0] = 0;
              local_11c = 0xc000000000;
              local_108 = (ulong *)0x0;
              uStack_100 = 0;
              uStack_f0 = 0;
              local_d8 = 0xffffffffffffffff;
              local_110 = param_2;
              puVar7 = local_108;
              local_f8 = param_3;
              local_e8 = puVar6;
              uStack_e0 = param_5;
              if (((0xfffffffe < param_5) &&
                  (*(short *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) !=
                   0x41b)) &&
                 (puVar7 = (ulong *)v8::internal::Factory::SizeToString
                                              ((Factory *)param_2,param_5,true),
                 (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
                 0xffe0) == 0x20)) {
                puVar7 = (ulong *)v8::internal::StringTable::LookupString(param_2);
              }
              local_108 = puVar7;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)local_128);
              puVar8 = (undefined8 *)
                       v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)local_128);
              if (puVar8 == (undefined8 *)0x0) {
                uVar16 = 0;
                goto LAB_010a38a0;
              }
              local_d0 = *param_4;
              uVar9 = v8::internal::Object::StrictEquals((Object *)&local_d0,*puVar8);
              if ((uVar9 & 1) != 0) goto LAB_010a38a0;
              uVar9 = *param_3;
              uVar11 = uVar9 & 0xffffffff00000000;
              uVar3 = *(uint *)((uVar11 | *(uint *)(uVar9 - 1)) + 0xf);
              if (uVar3 == *(uint *)(param_2 + 0xb0)) goto LAB_010a35a8;
              uVar14 = uVar11 | uVar3;
              goto LAB_010a3578;
            }
            local_d0 = *param_4;
            uVar9 = v8::internal::Object::StrictEquals
                              ((Object *)&local_d0,
                               uVar11 & 0xffffffff00000000 |
                               (ulong)*(uint *)((lVar10 + 0x1400000000 >> 0x20) + lVar1));
            if ((uVar9 & 1) != 0) goto LAB_010a38a0;
            break;
          }
        }
        uVar9 = (ulong)((int)uVar9 + iVar12 & uVar4);
        uVar3 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        iVar12 = iVar12 + 1;
      } while (uVar3 != *(uint *)(param_2 + 0xa0));
    }
    goto LAB_010a3358;
  }
LAB_010a389c:
  uVar16 = 1;
  param_5 = 0xffffffffffffffff;
LAB_010a38a0:
  auVar18._8_8_ = param_5;
  auVar18._0_8_ = uVar16;
  return auVar18;
  while (uVar3 = *(uint *)(uVar13 + 0xf), uVar14 = uVar14 & 0xffffffff00000000 | (ulong)uVar3,
        uVar3 != *(uint *)(param_2 + 0xb0)) {
LAB_010a3578:
    uVar13 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
    if ((*(ushort *)(uVar13 + 7) < 0x412) ||
       ((*(int *)(uVar14 + 7) != *(int *)(param_2 + 0x168) &&
        (*(int *)(uVar14 + 7) != *(int *)(param_2 + 1000))))) {
      if (param_6 <= param_5 + 1) goto LAB_010a389c;
      uVar11 = param_5 + 1;
      goto joined_r0x010a3654;
    }
  }
LAB_010a35a8:
  if (*(uint *)(uVar9 + 7) != (uint)*puVar5) {
    if ((*(byte *)((uVar11 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8) != 0x60) {
      if (param_5 + 1 < param_6) {
        uVar11 = param_5 + 1;
        goto joined_r0x010a3790;
      }
      goto LAB_010a389c;
    }
    uVar11 = uVar11 | *(uint *)(uVar9 + 7);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar2;
      if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar2 = puVar5 + 1;
      *puVar5 = uVar11;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar11);
    }
  }
LAB_010a3358:
  param_5 = param_5 + 1;
  if (param_5 == param_6) goto LAB_010a389c;
  goto LAB_010a3364;
joined_r0x010a3654:
  if (((uVar9 & 1) == 0) || (puVar5 = param_3, *(ushort *)(uVar15 + *(uint *)(uVar9 - 1)) < 0xa9)) {
    puVar5 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_2,param_3,uVar11);
  }
  local_d0 = CONCAT44(local_d0._4_4_,3);
  local_c4 = 0xc000000000;
  local_b0 = (ulong *)0x0;
  uStack_a8 = 0;
  uStack_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_b8 = param_2;
  puVar6 = local_b0;
  local_a0 = param_3;
  local_90 = puVar5;
  uStack_88 = uVar11;
  if (((0xfffffffe < uVar11) &&
      (*(short *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) != 0x41b)) &&
     (puVar6 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar11,true),
     (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) & 0xffe0) ==
     0x20)) {
    puVar6 = (ulong *)v8::internal::StringTable::LookupString(param_2);
  }
  local_b0 = puVar6;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
  if (local_d0._4_4_ != 4) {
    puVar8 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
    if (puVar8 == (undefined8 *)0x0) goto LAB_010a38d8;
    local_68 = *param_4;
    uVar9 = v8::internal::Object::StrictEquals((Object *)&local_68,*puVar8);
    if ((uVar9 & 1) != 0) goto LAB_010a38e4;
  }
  if (param_6 - 2 == param_5) goto LAB_010a38cc;
  uVar9 = *param_3;
  uVar11 = param_5 + 2;
  param_5 = param_5 + 1;
  goto joined_r0x010a3654;
joined_r0x010a3790:
  if (((uVar9 & 1) == 0) || (puVar5 = param_3, *(ushort *)(uVar15 + *(uint *)(uVar9 - 1)) < 0xa9)) {
    puVar5 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_2,param_3,uVar11);
  }
  local_d0 = CONCAT44(local_d0._4_4_,3);
  local_c4 = 0xc000000000;
  local_b0 = (ulong *)0x0;
  uStack_a8 = 0;
  uStack_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_b8 = param_2;
  puVar6 = local_b0;
  local_a0 = param_3;
  local_90 = puVar5;
  uStack_88 = uVar11;
  if (((0xfffffffe < uVar11) &&
      (*(short *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) != 0x41b)) &&
     (puVar6 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar11,true),
     (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) & 0xffe0) ==
     0x20)) {
    puVar6 = (ulong *)v8::internal::StringTable::LookupString(param_2);
  }
  local_b0 = puVar6;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
  if (local_d0._4_4_ != 4) {
    puVar8 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
    if (puVar8 == (undefined8 *)0x0) goto LAB_010a38d8;
    local_68 = *param_4;
    uVar9 = v8::internal::Object::StrictEquals((Object *)&local_68,*puVar8);
    if ((uVar9 & 1) != 0) goto LAB_010a38e4;
  }
  if (param_6 - 2 == param_5) goto LAB_010a38cc;
  uVar9 = *param_3;
  uVar11 = param_5 + 2;
  param_5 = param_5 + 1;
  goto joined_r0x010a3790;
LAB_010a38d8:
  uVar16 = 0;
  param_5 = param_5 + 1;
  goto LAB_010a38a0;
LAB_010a38e4:
  uVar16 = 1;
  param_5 = param_5 + 1;
  goto LAB_010a38a0;
LAB_010a38cc:
  param_5 = 0xffffffffffffffff;
  uVar16 = 1;
  goto LAB_010a38a0;
}

