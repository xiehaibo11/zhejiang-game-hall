
ulong FUN_014c7378(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  void *__s;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  undefined4 local_180 [3];
  undefined8 local_174;
  Isolate *local_168;
  Isolate *local_160;
  undefined8 uStack_158;
  ulong *local_150;
  undefined8 uStack_148;
  ulong *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_124;
  undefined8 local_11c;
  long local_110;
  Isolate *local_108;
  undefined8 uStack_100;
  ulong *local_f8;
  undefined8 uStack_f0;
  ulong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  int local_cc;
  undefined8 local_c4;
  long local_b8;
  Isolate *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  pIVar1 = param_3 + 0x95a0;
  uVar2 = *(undefined8 *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     ((*(byte *)((uVar13 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar13 - 1)) >> 1 & 1) == 0))
  {
    puVar7 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x35,0,0,0);
    uVar13 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
    goto LAB_014c7400;
  }
  iVar19 = param_1;
  if (param_1 < 7) {
    iVar19 = 6;
  }
  uVar4 = iVar19 - 6;
  uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
  __s = operator_new__(uVar13,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    plVar8 = (long *)v8::internal::V8::GetCurrentPlatform();
    (**(code **)(*plVar8 + 0x18))();
    __s = operator_new__(uVar13,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (uVar4 != 0) {
    memset(__s,0,uVar13);
  }
  uVar5 = param_1 - 4;
  if ((int)uVar5 < 2) {
    pIVar11 = param_3 + 0xa0;
  }
  else {
    pIVar11 = (Isolate *)(param_2 + -1);
    if (uVar5 != 2) {
      uVar13 = (ulong)uVar5 - 2;
      if (uVar13 < 4) {
        uVar15 = 2;
      }
      else {
        iVar20 = 3;
        iVar19 = 2;
        uVar16 = uVar13 & 0xfffffffffffffffc;
        plVar8 = (long *)((long)__s + 0x10);
        uVar15 = uVar16 | 2;
        uVar17 = uVar16;
        do {
          uVar22 = iVar19 * 8;
          uVar23 = iVar20 * 8;
          iVar19 = iVar19 + 4;
          iVar20 = iVar20 + 4;
          uVar17 = uVar17 - 4;
          plVar8[-1] = (long)param_2 - (ulong)uVar23;
          plVar8[-2] = (long)param_2 - (ulong)uVar22;
          plVar8[1] = (long)param_2 - (ulong)(uVar23 + 0x10);
          *plVar8 = (long)param_2 - (ulong)(uVar22 + 0x10);
          plVar8 = plVar8 + 4;
        } while (uVar17 != 0);
        if (uVar13 == uVar16) goto LAB_014c7584;
      }
      lVar14 = uVar5 - uVar15;
      uVar15 = uVar15 << 3;
      do {
        lVar14 = lVar14 + -1;
        *(ulong *)((long)__s + (uVar15 - 0x10)) = (long)param_2 - (uVar15 & 0xfffffff8);
        uVar15 = uVar15 + 8;
      } while (lVar14 != 0);
    }
  }
LAB_014c7584:
  puVar9 = (ulong *)v8::internal::Factory::NewJSBoundFunction
                              (param_3,param_2,pIVar11,__s,(long)(int)uVar4);
  if (puVar9 == (ulong *)0x0) {
LAB_014c7a50:
    uVar13 = *(ulong *)(param_3 + 0x180);
  }
  else {
    uVar13 = *(ulong *)(param_3 + 0x7b8);
    local_b8 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
    if (*(short *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar13 - 1))
        == 0x40) {
      local_d0 = ~*(uint *)(uVar13 + 7) & 1;
    }
    else {
      local_d0 = 1;
    }
    pIVar11 = param_3 + 0x7b8;
    local_c4 = 0xc000000000;
    local_b0 = pIVar11;
    if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) & 0xffe0) ==
        0x20) {
      local_b0 = (Isolate *)v8::internal::StringTable::LookupString(local_b8,pIVar11);
    }
    uStack_a8 = 0;
    uStack_98 = 0;
    local_80 = 0xffffffffffffffff;
    uStack_88 = 0xffffffffffffffff;
    local_a0 = param_2;
    local_90 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d0);
    if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x439)
       || (local_cc != 5)) {
LAB_014c7688:
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(undefined8 **)pIVar1;
        if (puVar7 == *(undefined8 **)(param_3 + 0x95a8)) {
          puVar7 = (undefined8 *)v8::internal::HandleScope::Extend(param_3);
        }
        *(undefined8 **)pIVar1 = puVar7 + 1;
        *puVar7 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 v8::internal::CanonicalHandleScope::Lookup
                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),0);
      }
      uVar13 = v8::internal::JSReceiver::GetPropertyAttributes((LookupIterator *)&local_d0);
      if ((uVar13 & 0xff) != 0) {
        if (uVar13 >> 0x20 != 0x40) {
          puVar10 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)&local_d0,false);
          if (puVar10 == (ulong *)0x0) goto LAB_014c7a50;
          uVar13 = *puVar10;
          if ((uVar13 & 1) == 0) {
            dVar18 = (double)((int)uVar13 >> 1);
joined_r0x014c7734:
            if (((dVar18 != 0.0) && (ABS(dVar18) != INFINITY)) && (!NAN(ABS(dVar18)))) {
              dVar21 = (double)(long)dVar18;
              bVar6 = dVar18 < 0.0;
              dVar18 = (double)(long)dVar18;
              if (bVar6) {
                dVar18 = dVar21;
              }
            }
          }
          else {
            if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42
               ) goto LAB_014c7780;
            dVar18 = *(double *)(uVar13 + 3);
            if (!NAN(dVar18)) goto joined_r0x014c7734;
            dVar18 = 0.0;
          }
          dVar18 = dVar18 - (double)(int)uVar4;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          puVar7 = (undefined8 *)
                   v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                             ((Factory *)param_3,dVar18);
        }
LAB_014c7780:
        uVar13 = *(ulong *)pIVar11;
        local_110 = (ulong)*(uint *)((long)puVar9 + 4) << 0x20;
        local_128 = 3;
        if ((*(short *)(((ulong)*(uint *)((long)puVar9 + 4) << 0x20 | 7) +
                       (ulong)*(uint *)(uVar13 - 1)) == 0x40) &&
           (local_128 = 3, (*(byte *)(uVar13 + 7) & 1) != 0)) {
          local_128 = 0;
        }
        local_11c = 0xc000000000;
        if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) & 0xffe0)
            == 0x20) {
          pIVar11 = (Isolate *)v8::internal::StringTable::LookupString(local_110,pIVar11);
        }
        uStack_100 = 0;
        uStack_f0 = 0;
        local_d8 = 0xffffffffffffffff;
        uStack_e0 = 0xffffffffffffffff;
        local_108 = pIVar11;
        local_f8 = puVar9;
        local_e8 = puVar9;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_128);
        lVar14 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes
                           (&local_128,puVar7,local_11c._4_4_ >> 3 & 7,1);
        if (lVar14 != 0) goto LAB_014c7820;
      }
      goto LAB_014c7a50;
    }
    puVar10 = (ulong *)v8::internal::LookupIterator::GetAccessors();
    uVar13 = *puVar10;
    if (((uVar13 & 1) == 0) ||
       (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x51))
    goto LAB_014c7688;
LAB_014c7820:
    uVar13 = *(ulong *)(param_3 + 0x820);
    local_110 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
    local_128 = 3;
    if ((*(short *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar13 - 1)
                   ) == 0x40) && (local_128 = 3, (*(byte *)(uVar13 + 7) & 1) != 0)) {
      local_128 = 0;
    }
    local_11c = 0xc000000000;
    pIVar11 = param_3 + 0x820;
    pIVar12 = pIVar11;
    if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) & 0xffe0) ==
        0x20) {
      pIVar12 = (Isolate *)v8::internal::StringTable::LookupString(local_110,pIVar11);
    }
    uStack_100 = 0;
    uStack_f0 = 0;
    local_d8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    local_108 = pIVar12;
    local_f8 = param_2;
    local_e8 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_128);
    if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x439)
       || (local_124 != 5)) {
LAB_014c7914:
      puVar10 = (ulong *)v8::internal::Object::GetProperty((LookupIterator *)&local_128,false);
      if (puVar10 != (ulong *)0x0) {
        uVar13 = *puVar10;
        if (((uVar13 & 1) == 0) ||
           (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
          pIVar12 = param_3 + 0x558;
        }
        else {
          lVar14 = v8::internal::Name::ToFunctionName(param_3,puVar10);
          if ((lVar14 == 0) ||
             (pIVar12 = (Isolate *)
                        v8::internal::Factory::NewConsString
                                  ((Factory *)param_3,param_3 + 0x558,lVar14),
             pIVar12 == (Isolate *)0x0)) goto LAB_014c7a50;
        }
        if (((*puVar9 & 1) == 0) ||
           (local_140 = puVar9,
           *(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(*puVar9 - 1)) < 0xa9)) {
          local_140 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                         (param_3,puVar9,0xffffffffffffffff);
        }
        uVar13 = *(ulong *)pIVar11;
        local_180[0] = 3;
        if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x40) &&
           (local_180[0] = 3, (*(byte *)(uVar13 + 7) & 1) != 0)) {
          local_180[0] = 0;
        }
        local_174 = 0xc000000000;
        local_168 = param_3;
        if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) & 0xffe0)
            == 0x20) {
          pIVar11 = (Isolate *)v8::internal::StringTable::LookupString(param_3,pIVar11);
        }
        uStack_158 = 0;
        uStack_148 = 0;
        local_130 = 0xffffffffffffffff;
        uStack_138 = 0xffffffffffffffff;
        local_160 = pIVar11;
        local_150 = puVar9;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)local_180);
        lVar14 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes
                           (local_180,pIVar12,local_174._4_4_ >> 3 & 7,1);
        if (lVar14 != 0) goto LAB_014c7a44;
      }
      goto LAB_014c7a50;
    }
    puVar10 = (ulong *)v8::internal::LookupIterator::GetAccessors();
    uVar13 = *puVar10;
    if ((((uVar13 & 1) == 0) ||
        (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x51)) ||
       ((local_124 != 4 &&
        (uVar13 = v8::internal::LookupIterator::HolderIsReceiver((LookupIterator *)&local_128),
        (uVar13 & 1) == 0)))) goto LAB_014c7914;
LAB_014c7a44:
    uVar13 = *puVar9;
  }
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
LAB_014c7400:
  *(undefined8 *)pIVar1 = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

