
ulong FUN_010a2a6c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5
                  ,ulong param_6)

{
  long lVar1;
  Isolate *pIVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  Isolate *this;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  double dVar25;
  double dVar26;
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
  
  FUN_010a41d4();
  pcStack_68 = FUN_010a2a78;
  if (((*param_4 & 1) == 0) || ((int)*param_4 != *(int *)(this + 0xa0))) {
    uVar16 = *param_3 & 0xffffffff00000000;
    uVar14 = uVar16 | *(uint *)(*param_3 + 7);
    uVar8 = *(uint *)(uVar14 + 0xf);
    uVar5 = (int)uVar8 >> 1;
    uVar23 = (ulong)uVar5;
    if (uVar5 != 0) {
      uVar5 = *(uint *)(this + 0xa0);
      uVar4 = *(uint *)(this + 0xa8);
      uVar23 = 0;
      lVar24 = (long)((ulong)uVar8 << 0x20) >> 0x21;
      lVar1 = uVar14 + 7;
      lVar15 = 0x1400000000;
      lVar22 = 0x1800000000;
      lVar21 = 0x1000000000;
      puStack_70 = &stack0xfffffffffffffff0;
      do {
        uVar8 = *(uint *)((lVar21 >> 0x20) + lVar1);
        if ((uVar8 != uVar4) && (uVar8 != uVar5)) {
          if ((uVar8 & 1) == 0) {
            if (-1 < (int)uVar8) {
              dVar26 = (double)(ulong)(uVar8 >> 1);
LAB_010a2b94:
              if ((param_5 <= ((ulong)dVar26 & 0xffffffff)) &&
                 (((ulong)dVar26 & 0xffffffff) < param_6)) {
                if ((*(uint *)((lVar22 >> 0x20) + lVar1) >> 1 & 1) != 0) {
                  bVar7 = false;
                  goto LAB_010a2ac8;
                }
                if ((int)uVar23 == 0) {
                  uStack_e0 = *param_4;
                  uVar8 = v8::internal::Object::SameValueZero
                                    ((Object *)&uStack_e0,
                                     uVar16 | *(uint *)((lVar15 >> 0x20) + lVar1));
                  uVar23 = (ulong)(uVar8 & 1);
                }
              }
            }
          }
          else if (*(short *)((uVar16 | 7) + (ulong)*(uint *)((uVar16 | uVar8) - 1)) == 0x42) {
            dVar25 = *(double *)((uVar16 | uVar8) + 3);
            dVar26 = dVar25 + 4503599627370496.0;
            if ((((ulong)dVar26 >> 0x20 == 0x43300000) && (SUB84(dVar26,0) != -1)) &&
               (dVar25 == (double)((ulong)dVar26 & 0xffffffff))) goto LAB_010a2b94;
          }
        }
        lVar24 = lVar24 + -1;
        lVar15 = lVar15 + 0xc00000000;
        lVar22 = lVar22 + 0xc00000000;
        lVar21 = lVar21 + 0xc00000000;
      } while (lVar24 != 0);
    }
    uVar23 = (uVar23 & 0xff) << 8 | 1;
  }
  else {
    bVar7 = true;
    puStack_70 = &stack0xfffffffffffffff0;
LAB_010a2ac8:
    pIVar2 = this + 0x95a0;
    uVar23 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar23;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar23);
    }
    if (param_5 < param_6) {
      uVar23 = 0x101;
LAB_010a2cb4:
      uVar16 = *puVar9;
      uVar14 = (*(ulong *)(*(long *)(this + 0x490) + 7) ^ param_5 & 0xffffffff ^ 0xffffffffffffffff)
               + (*(ulong *)(*(long *)(this + 0x490) + 7) ^ param_5 & 0xffffffff) * 0x40000;
      uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
      uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
      uVar8 = (*(int *)(uVar16 + 0xf) >> 1) - 1;
      uVar14 = (ulong)(uVar8 & ((uint)(uVar14 >> 0x16) ^ (uint)uVar14) & 0x3fffffff);
      lVar1 = uVar16 + 7;
      uVar5 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      if (uVar5 != *(uint *)(this + 0xa0)) {
        iVar18 = 1;
        do {
          if (uVar5 != (uint)*(undefined8 *)(this + 0xa8)) {
            if ((uVar5 & 1) == 0) {
              dVar26 = (double)((int)uVar5 >> 1);
            }
            else {
              dVar26 = *(double *)((uVar16 & 0xffffffff00000000 | (ulong)uVar5) + 3);
            }
            if ((int)dVar26 == (int)param_5) {
              lVar15 = (ulong)(uint)((int)uVar14 * 3) << 0x22;
              if ((*(uint *)((lVar15 + 0x1800000000 >> 0x20) + lVar1) >> 1 & 1) == 0) {
                uStack_e0 = *param_4;
                uVar14 = v8::internal::Object::SameValueZero
                                   ((Object *)&uStack_e0,
                                    uVar16 & 0xffffffff00000000 |
                                    (ulong)*(uint *)((lVar15 + 0x1400000000 >> 0x20) + lVar1));
                if ((uVar14 & 1) != 0) goto LAB_010a31d0;
                goto LAB_010a2d84;
              }
              if (((*param_3 & 1) == 0) ||
                 (puVar10 = param_3,
                 *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9)) {
                puVar10 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                             (this,param_3,param_5);
              }
              auStack_138[0] = 0;
              uStack_12c = 0xc000000000;
              puStack_118 = (ulong *)0x0;
              uStack_110 = 0;
              uStack_100 = 0;
              uStack_e8 = 0xffffffffffffffff;
              pIStack_120 = this;
              puVar11 = puStack_118;
              puStack_108 = param_3;
              puStack_f8 = puVar10;
              uStack_f0 = param_5;
              if (((0xfffffffe < param_5) &&
                  (*(short *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1))
                   != 0x41b)) &&
                 (puVar11 = (ulong *)v8::internal::Factory::SizeToString
                                               ((Factory *)this,param_5,true),
                 (*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1))
                 & 0xffe0) == 0x20)) {
                puVar11 = (ulong *)v8::internal::StringTable::LookupString(this);
              }
              puStack_118 = puVar11;
              v8::internal::LookupIterator::Start<true>((LookupIterator *)auStack_138);
              puVar12 = (undefined8 *)
                        v8::internal::Object::GetPropertyWithAccessor((LookupIterator *)auStack_138)
              ;
              if (puVar12 == (undefined8 *)0x0) goto LAB_010a31f8;
              uStack_e0 = *param_4;
              uVar14 = v8::internal::Object::SameValueZero((Object *)&uStack_e0,*puVar12);
              if ((uVar14 & 1) != 0) goto LAB_010a31d0;
              uVar14 = *param_3;
              uVar16 = uVar14 & 0xffffffff00000000;
              uVar5 = *(uint *)((uVar16 | *(uint *)(uVar14 - 1)) + 0xf);
              if (uVar5 == *(uint *)(this + 0xb0)) goto LAB_010a2f3c;
              uVar20 = uVar16 | uVar5;
              goto LAB_010a2f0c;
            }
          }
          uVar14 = (ulong)((int)uVar14 + iVar18 & uVar8);
          uVar5 = *(uint *)(((long)(uVar14 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
          iVar18 = iVar18 + 1;
        } while (uVar5 != *(uint *)(this + 0xa0));
      }
      if (!bVar7) goto LAB_010a2d84;
      goto LAB_010a31d0;
    }
LAB_010a31cc:
    uVar23 = 1;
  }
LAB_010a31d0:
  return uVar23 & 0xffff;
  while (uVar5 = *(uint *)(uVar19 + 0xf), uVar20 = uVar20 & 0xffffffff00000000 | (ulong)uVar5,
        uVar5 != *(uint *)(this + 0xb0)) {
LAB_010a2f0c:
    uVar19 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 - 1);
    if ((*(ushort *)(uVar19 + 7) < 0x412) ||
       ((*(int *)(uVar20 + 7) != *(int *)(this + 0x168) &&
        (*(int *)(uVar20 + 7) != *(int *)(this + 1000))))) {
      if ((*param_4 & 1) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = (int)*param_4 == *(int *)(this + 0xa0);
      }
      if (param_6 <= param_5 + 1) goto LAB_010a31cc;
      uVar23 = 0x101;
      goto LAB_010a30b0;
    }
  }
LAB_010a2f3c:
  uVar5 = *(uint *)(uVar14 + 7);
  if (uVar5 != (uint)*puVar9) {
    bVar6 = *(byte *)((uVar16 | *(uint *)(uVar14 - 1)) + 10);
    if (((bVar6 < 0x30) || (bVar3 = bVar6 & 0xf8, bVar3 == 0x78)) || ((byte)((bVar6 >> 3) - 6) < 6))
    {
      puVar17 = (uint *)(uVar16 + 0x168);
    }
    else if (bVar3 == 0x68) {
      puVar17 = (uint *)(uVar16 + 0x3e0);
    }
    else if ((byte)((bVar6 >> 3) - 0x11) < 0xb) {
      puVar17 = (uint *)(uVar16 + 0x3c0);
    }
    else {
      if (bVar3 != 0x60) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      puVar17 = (uint *)(uVar16 + 1000);
    }
    if (uVar5 == *puVar17) {
      uVar23 = (ulong)bVar7 << 8 | 1;
      goto LAB_010a31d0;
    }
    if ((*(byte *)((uVar16 | 10) + (ulong)*(uint *)(uVar14 - 1)) & 0xf8) != 0x60) {
      plVar13 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                          ((ulong)*(byte *)((uVar16 | 10) + (ulong)*(uint *)(uVar14 - 1)) & 0xf8));
      uVar23 = (**(code **)(*plVar13 + 200))(plVar13,this,param_3,param_4,param_5 + 1);
      goto LAB_010a31d0;
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar16 | uVar5;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar16 | uVar5);
    }
  }
LAB_010a2d84:
  param_5 = param_5 + 1;
  if (param_5 == param_6) goto LAB_010a31cc;
  goto LAB_010a2cb4;
LAB_010a30b0:
  uVar16 = param_5 + 1;
  if (((uVar14 & 1) == 0) ||
     (puVar9 = param_3, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)) {
    puVar9 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(this,param_3,uVar16);
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
  uStack_d4 = 0xc000000000;
  puStack_c0 = (ulong *)0x0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_90 = 0xffffffffffffffff;
  pIStack_c8 = this;
  puVar10 = puStack_c0;
  puStack_b0 = param_3;
  puStack_a0 = puVar9;
  uStack_98 = uVar16;
  if (((0xfffffffe < uVar16) &&
      (*(short *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) != 0x41b)) &&
     (puVar10 = (ulong *)v8::internal::Factory::SizeToString((Factory *)this,uVar16,true),
     (*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) & 0xffe0) ==
     0x20)) {
    puVar10 = (ulong *)v8::internal::StringTable::LookupString(this);
  }
  puStack_c0 = puVar10;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&uStack_e0);
  if (uStack_e0._4_4_ == 4) {
    if (bVar7) goto LAB_010a31d0;
  }
  else {
    puVar12 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&uStack_e0,false);
    if (puVar12 == (undefined8 *)0x0) goto LAB_010a31f8;
    uStack_78 = *param_4;
    uVar14 = v8::internal::Object::SameValueZero((Object *)&uStack_78,*puVar12);
    if ((uVar14 & 1) != 0) goto LAB_010a31d0;
  }
  if (param_6 - 2 == param_5) goto LAB_010a31cc;
  uVar14 = *param_3;
  param_5 = param_5 + 1;
  goto LAB_010a30b0;
LAB_010a31f8:
  uVar23 = 0;
  goto LAB_010a31d0;
}

