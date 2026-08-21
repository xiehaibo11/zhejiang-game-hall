
undefined8
FUN_010a89a8(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
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
  Isolate *this;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined4 auStack_138 [3];
  undefined8 uStack_12c;
  Isolate *pIStack_120;
  ulong *puStack_118;
  undefined8 uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d4;
  Isolate *pIStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  FUN_010a9c84();
  pcStack_68 = FUN_010a89b4;
  pIVar2 = this + 0x95a0;
  uVar16 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    puStack_70 = &stack0xfffffffffffffff0;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puStack_70 = &stack0xfffffffffffffff0;
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar16;
  }
  else {
    puStack_70 = &stack0xfffffffffffffff0;
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar16);
  }
  uVar16 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar16;
    uVar16 = *param_4;
    iVar11 = (int)uVar16;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar16);
    uVar16 = *param_4;
    iVar11 = (int)uVar16;
  }
  if ((uVar16 & 1) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = iVar11 == *(int *)(this + 0xa0);
  }
  if (param_5 < param_6) {
    do {
      uVar16 = *puVar7;
      uVar12 = (ulong)((*(int *)(uVar16 + 3) >> 1) - 2);
      if (param_5 < uVar12) {
        uVar3 = *(uint *)(uVar16 + (long)((int)param_5 * 4 + 8) + 7);
        uVar14 = param_5;
        if (((uVar3 & 1) != 0) && (uVar13 = (uint)*(undefined8 *)(this + 0xa8), uVar3 == uVar13))
        goto LAB_010a8b40;
LAB_010a8c10:
        puVar8 = (ulong *)FUN_010a9710(this,uVar16,uVar14);
        uVar16 = *puVar8;
        if (((uVar16 & 1) == 0) ||
           (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x52)) {
          uStack_e0 = *param_4;
          uVar16 = v8::internal::Object::SameValueZero((Object *)&uStack_e0,*puVar8);
          if ((uVar16 & 1) != 0) {
            return 0x101;
          }
        }
        else {
          if (((*param_3 & 1) == 0) ||
             (puVar8 = param_3,
             *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
            puVar8 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (this,param_3,param_5);
          }
          auStack_138[0] = 1;
          uStack_12c = 0xc000000000;
          puStack_118 = (ulong *)0x0;
          uStack_110 = 0;
          uStack_100 = 0;
          uStack_e8 = 0xffffffffffffffff;
          pIStack_120 = this;
          puVar9 = puStack_118;
          puStack_108 = param_3;
          puStack_f8 = puVar8;
          uStack_f0 = param_5;
          if (((0xfffffffe < param_5) &&
              (*(short *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) !=
               0x41b)) &&
             (puVar9 = (ulong *)v8::internal::Factory::SizeToString((Factory *)this,param_5,true),
             (*(ushort *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) &
             0xffe0) == 0x20)) {
            puVar9 = (ulong *)v8::internal::StringTable::LookupString(this);
          }
          puStack_118 = puVar9;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)auStack_138);
          puVar10 = (undefined8 *)
                    v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)auStack_138);
          if (puVar10 == (undefined8 *)0x0) {
            return 0;
          }
          uStack_e0 = *param_4;
          uVar16 = v8::internal::Object::SameValueZero((Object *)&uStack_e0,*puVar10);
          if ((uVar16 & 1) != 0) {
            return 0x101;
          }
          uVar16 = *param_3;
          if (*(int *)(uVar16 - 1) != (int)*puVar6) {
            if ((*param_4 & 1) == 0) {
              bVar5 = false;
            }
            else {
              bVar5 = (int)*param_4 == *(int *)(this + 0xa0);
            }
            if (param_6 <= param_5 + 1) {
              return 1;
            }
            uVar12 = param_5 + 1;
            do {
              if (((uVar16 & 1) == 0) ||
                 (puVar6 = param_3,
                 *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar16 - 1)) < 0xa9)) {
                puVar6 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (this,param_3,uVar12);
              }
              uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
              uStack_d4 = 0xc000000000;
              puStack_c0 = (ulong *)0x0;
              uStack_b8 = 0;
              uStack_a8 = 0;
              uStack_90 = 0xffffffffffffffff;
              pIStack_c8 = this;
              puVar7 = puStack_c0;
              puStack_b0 = param_3;
              puStack_a0 = puVar6;
              uStack_98 = uVar12;
              if (((0xfffffffe < uVar12) &&
                  (*(short *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) !=
                   0x41b)) &&
                 (puVar7 = (ulong *)v8::internal::Factory::SizeToString((Factory *)this,uVar12,true)
                 , (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1))
                   & 0xffe0) == 0x20)) {
                puVar7 = (ulong *)v8::internal::StringTable::LookupString(this);
              }
              puStack_c0 = puVar7;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)&uStack_e0);
              if (uStack_e0._4_4_ == 4) {
                if (bVar5) {
                  return 0x101;
                }
              }
              else {
                puVar10 = (undefined8 *)
                          v8::internal::Object::GetProperty((LookupIterator *)&uStack_e0,false);
                if (puVar10 == (undefined8 *)0x0) {
                  return 0;
                }
                uStack_78 = *param_4;
                uVar16 = v8::internal::Object::SameValueZero((Object *)&uStack_78,*puVar10);
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
        uVar13 = (uint)*(undefined8 *)(this + 0xa8);
LAB_010a8b40:
        uVar15 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
        lVar1 = uVar15 + 7;
        uVar14 = (*(ulong *)(*(long *)(this + 0x490) + 7) ^
                 param_5 & 0xffffffff ^ 0xffffffffffffffff) +
                 (*(ulong *)(*(long *)(this + 0x490) + 7) ^ param_5 & 0xffffffff) * 0x40000;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar4 = (*(int *)(uVar15 + 0xf) >> 1) - 1;
        uVar14 = (ulong)(uVar4 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14) & 0x3fffffff);
        uVar3 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        if (uVar3 != *(uint *)(this + 0xa0)) {
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
          } while (uVar3 != *(uint *)(this + 0xa0));
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

