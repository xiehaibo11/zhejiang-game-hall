
undefined8
FUN_010a5750(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  Isolate *pIVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
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
  ulong local_68;
  
  pIVar1 = param_2 + 0x95a0;
  uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar14);
  }
  uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar14;
    uVar14 = *param_4;
    iVar10 = (int)uVar14;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar14);
    uVar14 = *param_4;
    iVar10 = (int)uVar14;
  }
  if ((uVar14 & 1) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = iVar10 == *(int *)(param_2 + 0xa0);
  }
  if (param_5 < param_6) {
    iVar10 = (int)param_5 << 2;
    do {
      uVar14 = *puVar6;
      uVar12 = *param_3;
      uVar11 = (ulong)((*(int *)(uVar14 + 3) >> 1) - 2);
      if ((param_5 < uVar11) &&
         ((uVar3 = *(uint *)(uVar14 + (long)(iVar10 + 8) + 7), uVar13 = param_5, (uVar3 & 1) == 0 ||
          (uVar3 != *(uint *)(param_2 + 0xa8))))) {
LAB_010a5930:
        puVar7 = (ulong *)FUN_010a6554(param_2,uVar14,uVar13);
        uVar14 = *puVar7;
        if (((uVar14 & 1) == 0) ||
           (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x52)) {
          local_d0 = *param_4;
          uVar14 = v8::internal::Object::SameValueZero((Object *)&local_d0,*puVar7);
          if ((uVar14 & 1) != 0) {
            return 0x101;
          }
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
            return 0;
          }
          local_d0 = *param_4;
          uVar14 = v8::internal::Object::SameValueZero((Object *)&local_d0,*puVar9);
          if ((uVar14 & 1) != 0) {
            return 0x101;
          }
          uVar14 = *param_3;
          if (*(int *)(uVar14 - 1) != (int)*puVar5) {
            if ((*param_4 & 1) == 0) {
              bVar4 = false;
            }
            else {
              bVar4 = (int)*param_4 == *(int *)(param_2 + 0xa0);
            }
            if (param_6 <= param_5 + 1) {
              return 1;
            }
            uVar11 = param_5 + 1;
            do {
              if (((uVar14 & 1) == 0) ||
                 (puVar5 = param_3,
                 *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
                puVar5 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (param_2,param_3,uVar11);
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
                  (*(short *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) !=
                   0x41b)) &&
                 (puVar6 = (ulong *)v8::internal::Factory::SizeToString
                                              ((Factory *)param_2,uVar11,true),
                 (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) &
                 0xffe0) == 0x20)) {
                puVar6 = (ulong *)v8::internal::StringTable::LookupString(param_2);
              }
              local_b0 = puVar6;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
              if (local_d0._4_4_ == 4) {
                if (bVar4) {
                  return 0x101;
                }
              }
              else {
                puVar9 = (undefined8 *)
                         v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
                if (puVar9 == (undefined8 *)0x0) {
                  return 0;
                }
                local_68 = *param_4;
                uVar14 = v8::internal::Object::SameValueZero((Object *)&local_68,*puVar9);
                if ((uVar14 & 1) != 0) {
                  return 0x101;
                }
              }
              if (param_6 - 2 == param_5) {
                return 1;
              }
              uVar14 = *param_3;
              uVar11 = param_5 + 2;
              param_5 = param_5 + 1;
            } while( true );
          }
        }
      }
      else {
        uVar13 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
        piVar2 = (int *)(uVar12 + 0xb);
        if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x423) {
          piVar2 = (int *)(uVar13 + 3);
        }
        if ((param_5 < (uint)(*piVar2 >> 1)) &&
           (((((ulong)(param_2 + *(uint *)(uVar13 + (long)iVar10 + 7)) & 1) == 0 ||
             ((int)(param_2 + *(uint *)(uVar13 + (long)iVar10 + 7)) != *(int *)(param_2 + 0xa8))) &&
            (uVar13 = param_5 + uVar11, uVar13 != 0xffffffffffffffff)))) goto LAB_010a5930;
        if (bVar4) {
          return 0x101;
        }
      }
      param_5 = param_5 + 1;
      iVar10 = iVar10 + 4;
    } while (param_6 != param_5);
  }
  return 1;
}

