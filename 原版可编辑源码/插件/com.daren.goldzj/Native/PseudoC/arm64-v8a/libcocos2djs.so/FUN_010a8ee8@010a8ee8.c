
undefined1  [16]
FUN_010a8ee8(undefined8 param_1,Isolate *param_2,ulong *param_3,undefined8 *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 local_130;
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
  uVar15 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
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
  uVar15 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar15;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar15);
  }
  if (param_5 < param_6) {
    do {
      local_130 = 1;
      uVar15 = *puVar6;
      uVar10 = (ulong)((*(int *)(uVar15 + 3) >> 1) - 2);
      if (param_5 < uVar10) {
        uVar3 = *(uint *)(uVar15 + (long)((int)param_5 * 4 + 8) + 7);
        uVar12 = param_5;
        if (((uVar3 & 1) != 0) && (uVar11 = (uint)*(undefined8 *)(param_2 + 0xa8), uVar3 == uVar11))
        goto LAB_010a9068;
LAB_010a9138:
        puVar7 = (ulong *)FUN_010a9710(param_2,uVar15,uVar12);
        uVar15 = *puVar7;
        if (((uVar15 & 1) == 0) ||
           (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x52)) {
          local_d0 = *param_4;
          uVar15 = v8::internal::Object::StrictEquals((Object *)&local_d0,*puVar7);
          if ((uVar15 & 1) != 0) goto LAB_010a93b0;
        }
        else {
          if (((*param_3 & 1) == 0) ||
             (puVar7 = param_3,
             *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
            puVar7 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (param_2,param_3,param_5);
          }
          local_128[0] = 1;
          local_11c = 0xc000000000;
          local_108 = (ulong *)0x0;
          uStack_100 = 0;
          uStack_f0 = 0;
          local_d8 = 0xffffffffffffffff;
          local_110 = param_2;
          puVar8 = local_108;
          local_f8 = param_3;
          local_e8 = puVar7;
          uStack_e0 = param_5;
          if (((0xfffffffe < param_5) &&
              (*(short *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) !=
               0x41b)) &&
             (puVar8 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,param_5,true)
             , (*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) &
               0xffe0) == 0x20)) {
            puVar8 = (ulong *)v8::internal::StringTable::LookupString(param_2);
          }
          local_108 = puVar8;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)local_128);
          puVar9 = (undefined8 *)
                   v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)local_128);
          if (puVar9 == (undefined8 *)0x0) {
            local_130 = 0;
            goto LAB_010a93b0;
          }
          local_d0 = *param_4;
          uVar15 = v8::internal::Object::StrictEquals((Object *)&local_d0,*puVar9);
          if ((uVar15 & 1) != 0) goto LAB_010a93b0;
          uVar15 = *param_3;
          if (*(int *)(uVar15 - 1) != (int)*puVar5) {
            if (param_5 + 1 < param_6) {
              uVar10 = param_5 + 1;
              goto joined_r0x010a9294;
            }
            break;
          }
        }
      }
      else {
        uVar11 = (uint)*(undefined8 *)(param_2 + 0xa8);
LAB_010a9068:
        uVar13 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0xb);
        lVar1 = uVar13 + 7;
        uVar12 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^
                 param_5 & 0xffffffff ^ 0xffffffffffffffff) +
                 (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ param_5 & 0xffffffff) * 0x40000;
        uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
        uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
        uVar4 = (*(int *)(uVar13 + 0xf) >> 1) - 1;
        uVar12 = (ulong)(uVar4 & ((uint)(uVar12 >> 0x16) ^ (uint)uVar12) & 0x3fffffff);
        uVar3 = *(uint *)(((long)(uVar12 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        if (uVar3 != *(uint *)(param_2 + 0xa0)) {
          iVar14 = 1;
          do {
            if (uVar3 != uVar11) {
              if ((uVar3 & 1) == 0) {
                dVar16 = (double)((int)uVar3 >> 1);
              }
              else {
                dVar16 = *(double *)((uVar15 & 0xffffffff00000000 | (ulong)uVar3) + 3);
              }
              if ((int)param_5 == (int)dVar16) {
                uVar12 = uVar12 + uVar10;
                goto LAB_010a9138;
              }
            }
            uVar12 = (ulong)((int)uVar12 + iVar14 & uVar4);
            uVar3 = *(uint *)(((long)(uVar12 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
            iVar14 = iVar14 + 1;
          } while (uVar3 != *(uint *)(param_2 + 0xa0));
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 != param_6);
  }
LAB_010a93ac:
  local_130 = 1;
  param_5 = 0xffffffffffffffff;
LAB_010a93b0:
  auVar17._8_8_ = param_5;
  auVar17._0_8_ = local_130;
  return auVar17;
joined_r0x010a9294:
  if (((uVar15 & 1) == 0) ||
     (puVar5 = param_3, *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar15 - 1)) < 0xa9)) {
    puVar5 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_2,param_3,uVar10);
  }
  local_130 = 1;
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
  uStack_88 = uVar10;
  if (((0xfffffffe < uVar10) &&
      (*(short *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) != 0x41b)) &&
     (puVar6 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar10,true),
     (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) & 0xffe0) ==
     0x20)) {
    puVar6 = (ulong *)v8::internal::StringTable::LookupString(param_2);
  }
  local_b0 = puVar6;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
  if (local_d0._4_4_ != 4) {
    puVar9 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
    if (puVar9 == (undefined8 *)0x0) {
      local_130 = 0;
    }
    else {
      local_68 = *param_4;
      uVar15 = v8::internal::Object::StrictEquals((Object *)&local_68,*puVar9);
      if ((uVar15 & 1) == 0) goto LAB_010a9380;
    }
    param_5 = param_5 + 1;
    goto LAB_010a93b0;
  }
LAB_010a9380:
  if (param_6 - 2 == param_5) goto LAB_010a93ac;
  uVar15 = *param_3;
  uVar10 = param_5 + 2;
  param_5 = param_5 + 1;
  goto joined_r0x010a9294;
}

