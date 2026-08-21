
undefined8
FUN_010a89b4(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
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
  
  pIVar2 = param_2 + 0x95a0;
  uVar16 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar16);
  }
  uVar16 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar16;
    uVar16 = *param_4;
    iVar11 = (int)uVar16;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar16);
    uVar16 = *param_4;
    iVar11 = (int)uVar16;
  }
  if ((uVar16 & 1) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = iVar11 == *(int *)(param_2 + 0xa0);
  }
  if (param_5 < param_6) {
    do {
      uVar16 = *puVar7;
      uVar12 = (ulong)((*(int *)(uVar16 + 3) >> 1) - 2);
      if (param_5 < uVar12) {
        uVar3 = *(uint *)(uVar16 + (long)((int)param_5 * 4 + 8) + 7);
        uVar14 = param_5;
        if (((uVar3 & 1) != 0) && (uVar13 = (uint)*(undefined8 *)(param_2 + 0xa8), uVar3 == uVar13))
        goto LAB_010a8b40;
LAB_010a8c10:
        puVar8 = (ulong *)FUN_010a9710(param_2,uVar16,uVar14);
        uVar16 = *puVar8;
        if (((uVar16 & 1) == 0) ||
           (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x52)) {
          local_d0 = *param_4;
          uVar16 = v8::internal::Object::SameValueZero((Object *)&local_d0,*puVar8);
          if ((uVar16 & 1) != 0) {
            return 0x101;
          }
        }
        else {
          if (((*param_3 & 1) == 0) ||
             (puVar8 = param_3,
             *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
            puVar8 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (param_2,param_3,param_5);
          }
          local_128[0] = 1;
          local_11c = 0xc000000000;
          local_108 = (ulong *)0x0;
          uStack_100 = 0;
          uStack_f0 = 0;
          local_d8 = 0xffffffffffffffff;
          local_110 = param_2;
          puVar9 = local_108;
          local_f8 = param_3;
          local_e8 = puVar8;
          uStack_e0 = param_5;
          if (((0xfffffffe < param_5) &&
              (*(short *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) !=
               0x41b)) &&
             (puVar9 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_2,param_5,true)
             , (*(ushort *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) &
               0xffe0) == 0x20)) {
            puVar9 = (ulong *)v8::internal::StringTable::LookupString(param_2);
          }
          local_108 = puVar9;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)local_128);
          puVar10 = (undefined8 *)
                    v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)local_128);
          if (puVar10 == (undefined8 *)0x0) {
            return 0;
          }
          local_d0 = *param_4;
          uVar16 = v8::internal::Object::SameValueZero((Object *)&local_d0,*puVar10);
          if ((uVar16 & 1) != 0) {
            return 0x101;
          }
          uVar16 = *param_3;
          if (*(int *)(uVar16 - 1) != (int)*puVar6) {
            if ((*param_4 & 1) == 0) {
              bVar5 = false;
            }
            else {
              bVar5 = (int)*param_4 == *(int *)(param_2 + 0xa0);
            }
            if (param_6 <= param_5 + 1) {
              return 1;
            }
            uVar12 = param_5 + 1;
            do {
              if (((uVar16 & 1) == 0) ||
                 (puVar6 = param_3,
                 *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0xa9)) {
                puVar6 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (param_2,param_3,uVar12);
              }
              local_d0 = CONCAT44(local_d0._4_4_,3);
              local_c4 = 0xc000000000;
              local_b0 = (ulong *)0x0;
              uStack_a8 = 0;
              uStack_98 = 0;
              local_80 = 0xffffffffffffffff;
              local_b8 = param_2;
              puVar7 = local_b0;
              local_a0 = param_3;
              local_90 = puVar6;
              uStack_88 = uVar12;
              if (((0xfffffffe < uVar12) &&
                  (*(short *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) !=
                   0x41b)) &&
                 (puVar7 = (ulong *)v8::internal::Factory::SizeToString
                                              ((Factory *)param_2,uVar12,true),
                 (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
                 0xffe0) == 0x20)) {
                puVar7 = (ulong *)v8::internal::StringTable::LookupString(param_2);
              }
              local_b0 = puVar7;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_d0);
              if (local_d0._4_4_ == 4) {
                if (bVar5) {
                  return 0x101;
                }
              }
              else {
                puVar10 = (undefined8 *)
                          v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
                if (puVar10 == (undefined8 *)0x0) {
                  return 0;
                }
                local_68 = *param_4;
                uVar16 = v8::internal::Object::SameValueZero((Object *)&local_68,*puVar10);
                if ((uVar16 & 1) != 0) {
                  return 0x101;
                }
              }
              if (param_6 - 2 == param_5) {
                return 1;
              }
              uVar16 = *param_3;
              uVar12 = param_5 + 2;
              param_5 = param_5 + 1;
            } while( true );
          }
        }
      }
      else {
        uVar13 = (uint)*(undefined8 *)(param_2 + 0xa8);
LAB_010a8b40:
        uVar15 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
        lVar1 = uVar15 + 7;
        uVar14 = (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^
                 param_5 & 0xffffffff ^ 0xffffffffffffffff) +
                 (*(ulong *)(*(long *)(param_2 + 0x490) + 7) ^ param_5 & 0xffffffff) * 0x40000;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar4 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
        uVar14 = (ulong)(uVar4 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14) & 0x3fffffff);
        uVar3 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        if (uVar3 != *(uint *)(param_2 + 0xa0)) {
          iVar11 = 1;
          do {
            if (uVar3 != uVar13) {
              if ((uVar3 & 1) == 0) {
                dVar17 = (double)((int)uVar3 >> 1);
              }
              else {
                dVar17 = *(double *)((uVar16 & 0xffffffff00000000 | (ulong)uVar3) + 3);
              }
              if ((int)param_5 == (int)dVar17) {
                uVar14 = uVar14 + uVar12;
                goto LAB_010a8c10;
              }
            }
            uVar14 = (ulong)((int)uVar14 + iVar11 & uVar4);
            uVar3 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
            iVar11 = iVar11 + 1;
          } while (uVar3 != *(uint *)(param_2 + 0xa0));
        }
        if (bVar5) {
          return 0x101;
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 != param_6);
  }
  return 1;
}

