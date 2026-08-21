
undefined8
FUN_010a5744(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
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
  Isolate *this;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
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
  
  FUN_010a6d7c();
  pcStack_68 = FUN_010a5750;
  pIVar1 = this + 0x95a0;
  uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puStack_70 = &stack0xfffffffffffffff0;
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puStack_70 = &stack0xfffffffffffffff0;
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
  }
  uVar14 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar14;
    uVar14 = *param_4;
    iVar10 = (int)uVar14;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
    uVar14 = *param_4;
    iVar10 = (int)uVar14;
  }
  if ((uVar14 & 1) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = iVar10 == *(int *)(this + 0xa0);
  }
  if (param_5 < param_6) {
    iVar10 = (int)param_5 << 2;
    do {
      uVar14 = *puVar6;
      uVar12 = *param_3;
      uVar11 = (ulong)((*(int *)(uVar14 + 3) >> 1) - 2);
      if ((param_5 < uVar11) &&
         ((uVar3 = *(uint *)(uVar14 + (long)(iVar10 + 8) + 7), uVar13 = param_5, (uVar3 & 1) == 0 ||
          (uVar3 != *(uint *)(this + 0xa8))))) {
LAB_010a5930:
        puVar7 = (ulong *)FUN_010a6554(this,uVar14,uVar13);
        uVar14 = *puVar7;
        if (((uVar14 & 1) == 0) ||
           (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x52)) {
          uStack_e0 = *param_4;
          uVar14 = v8::internal::Object::SameValueZero((Object *)&uStack_e0,*puVar7);
          if ((uVar14 & 1) != 0) {
            return 0x101;
          }
        }
        else {
          if (((*param_3 & 1) == 0) ||
             (puVar7 = param_3,
             *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
            puVar7 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                        (this,param_3,param_5);
          }
          auStack_138[0] = 1;
          uStack_12c = 0xc000000000;
          puStack_118 = (ulong *)0x0;
          uStack_110 = 0;
          uStack_100 = 0;
          uStack_e8 = 0xffffffffffffffff;
          pIStack_120 = this;
          puVar8 = puStack_118;
          puStack_108 = param_3;
          puStack_f8 = puVar7;
          uStack_f0 = param_5;
          if (((0xfffffffe < param_5) &&
              (*(short *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) !=
               0x41b)) &&
             (puVar8 = (ulong *)v8::internal::Factory::SizeToString((Factory *)this,param_5,true),
             (*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) &
             0xffe0) == 0x20)) {
            puVar8 = (ulong *)v8::internal::StringTable::LookupString(this);
          }
          puStack_118 = puVar8;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)auStack_138);
          puVar9 = (undefined8 *)
                   v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)auStack_138);
          if (puVar9 == (undefined8 *)0x0) {
            return 0;
          }
          uStack_e0 = *param_4;
          uVar14 = v8::internal::Object::SameValueZero((Object *)&uStack_e0,*puVar9);
          if ((uVar14 & 1) != 0) {
            return 0x101;
          }
          uVar14 = *param_3;
          if (*(int *)(uVar14 - 1) != (int)*puVar5) {
            if ((*param_4 & 1) == 0) {
              bVar4 = false;
            }
            else {
              bVar4 = (int)*param_4 == *(int *)(this + 0xa0);
            }
            if (param_6 <= param_5 + 1) {
              return 1;
            }
            uVar11 = param_5 + 1;
            do {
              if (((uVar14 & 1) == 0) ||
                 (puVar5 = param_3,
                 *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
                puVar5 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                            (this,param_3,uVar11);
              }
              uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
              uStack_d4 = 0xc000000000;
              puStack_c0 = (ulong *)0x0;
              uStack_b8 = 0;
              uStack_a8 = 0;
              uStack_90 = 0xffffffffffffffff;
              pIStack_c8 = this;
              puVar6 = puStack_c0;
              puStack_b0 = param_3;
              puStack_a0 = puVar5;
              uStack_98 = uVar11;
              if (((0xfffffffe < uVar11) &&
                  (*(short *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) !=
                   0x41b)) &&
                 (puVar6 = (ulong *)v8::internal::Factory::SizeToString((Factory *)this,uVar11,true)
                 , (*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1))
                   & 0xffe0) == 0x20)) {
                puVar6 = (ulong *)v8::internal::StringTable::LookupString(this);
              }
              puStack_c0 = puVar6;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)&uStack_e0);
              if (uStack_e0._4_4_ == 4) {
                if (bVar4) {
                  return 0x101;
                }
              }
              else {
                puVar9 = (undefined8 *)
                         v8::internal::Object::GetProperty((LookupIterator *)&uStack_e0,false);
                if (puVar9 == (undefined8 *)0x0) {
                  return 0;
                }
                uStack_78 = *param_4;
                uVar14 = v8::internal::Object::SameValueZero((Object *)&uStack_78,*puVar9);
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
           (((((ulong)(this + *(uint *)(uVar13 + (long)iVar10 + 7)) & 1) == 0 ||
             ((int)(this + *(uint *)(uVar13 + (long)iVar10 + 7)) != *(int *)(this + 0xa8))) &&
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

