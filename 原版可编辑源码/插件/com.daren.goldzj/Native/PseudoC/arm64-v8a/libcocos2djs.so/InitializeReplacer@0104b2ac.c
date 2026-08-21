
/* v8::internal::JsonStringifier::InitializeReplacer(v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::JsonStringifier::InitializeReplacer(JsonStringifier *this,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  Isolate *pIVar16;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  ulong uStack_80;
  undefined8 local_78;
  
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) goto LAB_0104b2e0;
  uVar12 = uVar10 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x423) {
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0xa9) {
LAB_0104b2e0:
      uVar10 = *param_2;
      if (((uVar10 & 1) != 0) &&
         ((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 1 & 1) !=
          0)) {
        *(ulong **)(this + 0x40) = param_2;
      }
      return 1;
    }
    uVar4 = JSProxy::IsArray(param_2);
    if ((uVar4 & 0xff) == 0) {
      return 0;
    }
    if (uVar4 < 0x100) goto LAB_0104b2e0;
  }
  pIVar16 = *(Isolate **)this;
  pIVar1 = pIVar16 + 0x95a0;
  lVar14 = *(long *)pIVar1;
  lVar15 = *(long *)(pIVar16 + 0x95a8);
  *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
  lVar5 = Factory::NewOrderedHashSet(*(Factory **)this);
  puVar6 = (ulong *)Object::GetLengthFromArrayLike(*(undefined8 *)this,param_2);
  if (puVar6 == (ulong *)0x0) {
LAB_0104b638:
    if (pIVar16 == (Isolate *)0x0) {
      return 0;
    }
    bVar3 = true;
    goto LAB_0104b6d8;
  }
  uVar10 = *puVar6;
  if ((uVar10 & 1) == 0) {
    if ((int)uVar10 < 0) goto LAB_0104b3ec;
    dVar11 = (double)(uVar10 >> 1 & 0x7fffffff);
LAB_0104b36c:
    uVar10 = *(ulong *)this;
    if (SUB84(dVar11,0) != 0) goto LAB_0104b3f4;
  }
  else {
    if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x42) {
      dVar11 = *(double *)(uVar10 + 3) + 4503599627370496.0;
      if (((ulong)dVar11 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar10 + 3) == (double)((ulong)dVar11 & 0xffffffff))) goto LAB_0104b36c;
    }
LAB_0104b3ec:
    uVar10 = *(ulong *)this;
    dVar11 = 2.12199579047121e-314;
LAB_0104b3f4:
    uVar12 = 0;
    do {
      if (((*param_2 & 1) == 0) ||
         (puVar6 = param_2, *(ushort *)((uVar10 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
        puVar6 = (ulong *)LookupIterator::GetRootForNonJSReceiver(uVar10,param_2,uVar12);
      }
      local_c8 = 3;
      local_bc = 0xc000000000;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      local_b0 = uVar10;
      local_98 = param_2;
      local_88 = puVar6;
      uStack_80 = uVar12;
      LookupIterator::Start<true>((LookupIterator *)&local_c8);
      if (local_c4 == 4) {
        puVar6 = (ulong *)(local_b0 + 0xa0);
        uVar10 = *puVar6;
        if ((uVar10 & 1) != 0) goto LAB_0104b484;
LAB_0104b4e0:
        uVar7 = *(undefined8 *)this;
LAB_0104b4e4:
        puVar6 = (ulong *)Object::ConvertToString(uVar7,puVar6);
LAB_0104b4f0:
        if (puVar6 == (ulong *)0x0) goto LAB_0104b638;
LAB_0104b4f4:
        uVar7 = *(undefined8 *)this;
        if (0x1f < *(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)))
        {
          puVar6 = (ulong *)StringTable::LookupString(uVar7,puVar6);
          uVar7 = *(undefined8 *)this;
        }
        lVar5 = OrderedHashSet::Add(uVar7,lVar5,puVar6);
        if (lVar5 == 0) goto LAB_0104b638;
      }
      else {
        puVar6 = (ulong *)Object::GetProperty((LookupIterator *)&local_c8,false);
        if (puVar6 == (ulong *)0x0) goto LAB_0104b638;
        uVar10 = *puVar6;
        if ((uVar10 & 1) == 0) goto LAB_0104b4e0;
LAB_0104b484:
        uVar13 = uVar10 & 0xffffffff00000000 | 7;
        if ((*(short *)(uVar13 + *(uint *)(uVar10 - 1)) == 0x42) ||
           (*(ushort *)(uVar13 + *(uint *)(uVar10 - 1)) < 0x40)) {
          uVar7 = *(undefined8 *)this;
          if (0x3f < *(ushort *)(uVar13 + *(uint *)(uVar10 - 1))) goto LAB_0104b4e4;
          goto LAB_0104b4f0;
        }
        if (*(short *)(uVar13 + *(uint *)(uVar10 - 1)) == 0x411) {
          pIVar8 = *(Isolate **)this;
          uVar2 = *(uint *)(uVar10 + 0xb);
          uVar10 = uVar10 & 0xffffffff00000000 | (ulong)uVar2;
          if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(pIVar8 + 0x95a0);
            if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar8);
            }
            *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar10;
            if ((uVar2 & 1) != 0) goto LAB_0104b5cc;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar10);
            uVar10 = *puVar9;
            if ((uVar10 & 1) != 0) {
LAB_0104b5cc:
              uVar13 = uVar10 & 0xffffffff00000000 | 7;
              if ((*(short *)(uVar13 + *(uint *)(uVar10 - 1)) != 0x42) &&
                 (0x3f < *(ushort *)(uVar13 + *(uint *)(uVar10 - 1)))) goto LAB_0104b540;
            }
          }
          uVar10 = *puVar6;
          if (((uVar10 & 1) == 0) ||
             (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1))))
          {
            puVar6 = (ulong *)Object::ConvertToString(*(undefined8 *)this,puVar6);
          }
          if (puVar6 != (ulong *)0x0) goto LAB_0104b4f4;
          goto LAB_0104b638;
        }
      }
LAB_0104b540:
      uVar10 = *(ulong *)this;
      uVar12 = uVar12 + 1;
    } while (((ulong)dVar11 & 0xffffffff) != uVar12);
  }
  puVar6 = (ulong *)OrderedHashSet::ConvertToKeysArray(uVar10,lVar5,1);
  *(ulong **)(this + 0x38) = puVar6;
  uVar10 = *puVar6;
  *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
  *(long *)pIVar1 = lVar14;
  if (*(long *)(pIVar16 + 0x95a8) != lVar15) {
    *(long *)(pIVar16 + 0x95a8) = lVar15;
    HandleScope::DeleteExtensions(pIVar16);
  }
  if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(pIVar16 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar16);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar10);
  }
  lVar14 = *(long *)pIVar1;
  lVar15 = *(long *)(pIVar16 + 0x95a8);
  bVar3 = false;
  *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
  *(ulong **)(this + 0x38) = puVar6;
LAB_0104b6d8:
  *(long *)pIVar1 = lVar14;
  *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
  if (*(long *)(pIVar16 + 0x95a8) != lVar15) {
    *(long *)(pIVar16 + 0x95a8) = lVar15;
    HandleScope::DeleteExtensions(pIVar16);
  }
  if (!bVar3) {
    return 1;
  }
  return 0;
}

