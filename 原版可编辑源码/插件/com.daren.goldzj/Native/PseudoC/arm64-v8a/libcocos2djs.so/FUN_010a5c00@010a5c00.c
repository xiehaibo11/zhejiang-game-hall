
undefined1  [16]
FUN_010a5c00(undefined8 param_1,Isolate *param_2,ulong *param_3,undefined8 *param_4,ulong param_5,
            ulong param_6)

{
  Isolate *pIVar1;
  int *piVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 auVar15 [16];
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
  
  pIVar1 = param_2 + 0x95a0;
  uVar12 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_2 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar12;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
  }
  uVar12 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar12;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar12);
  }
  uVar13 = 1;
  if (param_5 < param_6) {
    iVar14 = (int)param_5 << 2;
    do {
      uVar12 = *puVar5;
      uVar10 = *param_3;
      uVar9 = (ulong)((*(int *)(uVar12 + 3) >> 1) - 2);
      if ((param_5 < uVar9) &&
         ((uVar3 = *(uint *)(uVar12 + (long)(iVar14 + 8) + 7), uVar11 = param_5, (uVar3 & 1) == 0 ||
          (uVar3 != *(uint *)(param_2 + 0xa8))))) {
LAB_010a5dd4:
        puVar6 = (ulong *)FUN_010a6554(param_2,uVar12,uVar11);
        uVar12 = *puVar6;
        if (((uVar12 & 1) == 0) ||
           (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x52)) {
          local_d0 = *param_4;
          uVar12 = v8::internal::Object::StrictEquals((Object *)&local_d0,*puVar6);
          if ((uVar12 & 1) != 0) goto LAB_010a603c;
        }
        else {
          if (((*param_3 & 1) == 0) ||
             (puVar6 = param_3,
             *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
            puVar6 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (param_2,param_3,param_5);
          }
          local_128[0] = 1;
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
             (puVar7 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,param_5,true)
             , (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
               0xffe0) == 0x20)) {
            puVar7 = (ulong *)v8::internal::StringTable::LookupString(param_2);
          }
          local_108 = puVar7;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)local_128);
          puVar8 = (undefined8 *)
                   v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)local_128);
          if (puVar8 == (undefined8 *)0x0) {
            uVar13 = 0;
            goto LAB_010a603c;
          }
          local_d0 = *param_4;
          uVar12 = v8::internal::Object::StrictEquals((Object *)&local_d0,*puVar8);
          if ((uVar12 & 1) != 0) goto LAB_010a603c;
          uVar12 = *param_3;
          if (*(int *)(uVar12 - 1) != (int)*puVar4) {
            if (param_5 + 1 < param_6) {
              uVar13 = 1;
              uVar9 = param_5 + 1;
              goto joined_r0x010a5f20;
            }
            break;
          }
        }
      }
      else {
        uVar11 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb);
        piVar2 = (int *)(uVar10 + 0xb);
        if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x423) {
          piVar2 = (int *)(uVar11 + 3);
        }
        if ((param_5 < (uint)(*piVar2 >> 1)) &&
           (((((ulong)(param_2 + *(uint *)(uVar11 + (long)iVar14 + 7)) & 1) == 0 ||
             ((int)(param_2 + *(uint *)(uVar11 + (long)iVar14 + 7)) != *(int *)(param_2 + 0xa8))) &&
            (uVar11 = param_5 + uVar9, uVar11 != 0xffffffffffffffff)))) goto LAB_010a5dd4;
      }
      param_5 = param_5 + 1;
      iVar14 = iVar14 + 4;
    } while (param_6 != param_5);
  }
LAB_010a6038:
  uVar13 = 1;
  param_5 = 0xffffffffffffffff;
LAB_010a603c:
  auVar15._8_8_ = param_5;
  auVar15._0_8_ = uVar13;
  return auVar15;
joined_r0x010a5f20:
  if (((uVar12 & 1) == 0) ||
     (puVar4 = param_3, *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0xa9)) {
    puVar4 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_2,param_3,uVar9);
  }
  local_d0 = CONCAT44(local_d0._4_4_,3);
  local_c4 = 0xc000000000;
  local_b0 = (ulong *)0x0;
  uStack_a8 = 0;
  uStack_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_b8 = param_2;
  puVar5 = local_b0;
  local_a0 = param_3;
  local_90 = puVar4;
  uStack_88 = uVar9;
  if (((0xfffffffe < uVar9) &&
      (*(short *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) != 0x41b)) &&
     (puVar5 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar9,true),
     (*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
     0x20)) {
    puVar5 = (ulong *)v8::internal::StringTable::LookupString(param_2);
  }
  local_b0 = puVar5;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
  if (local_d0._4_4_ != 4) {
    puVar8 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
    if (puVar8 == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      local_68 = *param_4;
      uVar12 = v8::internal::Object::StrictEquals((Object *)&local_68,*puVar8);
      if ((uVar12 & 1) == 0) goto LAB_010a6010;
    }
    param_5 = param_5 + 1;
    goto LAB_010a603c;
  }
LAB_010a6010:
  if (param_6 - 2 == param_5) goto LAB_010a6038;
  uVar12 = *param_3;
  uVar9 = param_5 + 2;
  param_5 = param_5 + 1;
  goto joined_r0x010a5f20;
}

