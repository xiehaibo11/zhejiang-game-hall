
/* v8::internal::JsonParseInternalizer::InternalizeJsonProperty(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::String>) */

ulong * __thiscall
v8::internal::JsonParseInternalizer::InternalizeJsonProperty
          (JsonParseInternalizer *this,undefined8 param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  Isolate *pIVar13;
  int iVar14;
  Isolate *pIVar15;
  Isolate *pIVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  undefined8 local_e0;
  ulong *puStack_d8;
  
  pIVar13 = *(Isolate **)this;
  pIVar1 = pIVar13 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar13 + 0x95a8);
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
  LookupIterator::PropertyOrElement
            ((LookupIterator *)&local_e0,*(undefined8 *)this,param_2,param_3,3);
  puVar5 = (ulong *)Object::GetProperty((LookupIterator *)&local_e0,false);
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)0x0;
    goto joined_r0x010497d8;
  }
  uVar9 = *puVar5;
  if (((uVar9 & 1) == 0) ||
     (uVar12 = uVar9 & 0xffffffff00000000 | 7, *(ushort *)(uVar12 + *(uint *)(uVar9 - 1)) < 0xa9)) {
LAB_010499e0:
    local_e0 = param_3;
    puStack_d8 = puVar5;
    puVar5 = (ulong *)Execution::Call(*(undefined8 *)this,*(undefined8 *)(this + 8),param_2,2,
                                      &local_e0);
    if (puVar5 != (ulong *)0x0) {
      uVar9 = *puVar5;
      *(long *)pIVar1 = lVar2;
      *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
      if (*(long *)(pIVar13 + 0x95a8) != lVar3) {
        *(long *)(pIVar13 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar13);
      }
      if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(pIVar13 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar13);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar9);
      }
      lVar2 = *(long *)pIVar1;
      lVar3 = *(long *)(pIVar13 + 0x95a8);
      *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
      goto joined_r0x010497d8;
    }
  }
  else if (*(short *)(uVar12 + *(uint *)(uVar9 - 1)) == 0x423) {
LAB_010497a8:
    puVar6 = (ulong *)Object::GetLengthFromArrayLike(*(undefined8 *)this,puVar5);
    if (puVar6 != (ulong *)0x0) {
      uVar9 = *puVar6;
      if ((uVar9 & 1) == 0) {
        dVar19 = (double)((int)uVar9 >> 1);
      }
      else {
        dVar19 = *(double *)(uVar9 + 3);
      }
      if (0.0 < dVar19) {
        dVar18 = 0.0;
        do {
          pIVar15 = *(Isolate **)this;
          uVar10 = *(undefined8 *)(pIVar15 + 0x95a0);
          lVar17 = *(long *)(pIVar15 + 0x95a8);
          *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
          uVar8 = Factory::NewNumber<(v8::internal::AllocationType)0>(*(Factory **)this,dVar18);
          uVar8 = Factory::NumberToString(*(Factory **)this,uVar8,1);
          uVar9 = RecurseAndApply(this,puVar5,uVar8);
          if (pIVar15 != (Isolate *)0x0) {
            *(undefined8 *)(pIVar15 + 0x95a0) = uVar10;
            *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
            if (*(long *)(pIVar15 + 0x95a8) != lVar17) {
              *(long *)(pIVar15 + 0x95a8) = lVar17;
              HandleScope::DeleteExtensions(pIVar15);
            }
          }
          if ((uVar9 & 1) == 0) goto LAB_01049a50;
          dVar18 = dVar18 + 1.0;
        } while (dVar18 < dVar19);
      }
      goto LAB_010499e0;
    }
  }
  else {
    if (*(short *)(uVar12 + *(uint *)(uVar9 - 1)) == 0xa9) {
      uVar4 = JSProxy::IsArray(puVar5);
      if ((uVar4 & 0xff) == 0) goto LAB_01049a50;
      if (0xff < uVar4) goto LAB_010497a8;
    }
    puVar6 = (ulong *)KeyAccumulator::GetKeys(puVar5,0,0x12,0,0,0);
    if (puVar6 != (ulong *)0x0) {
      if (1 < *(int *)(*puVar6 + 3)) {
        iVar14 = 0;
        lVar17 = 0;
        do {
          pIVar16 = *(Isolate **)this;
          *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
          uVar10 = *(undefined8 *)(pIVar16 + 0x95a0);
          lVar11 = *(long *)(pIVar16 + 0x95a8);
          pIVar15 = *(Isolate **)this;
          uVar9 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + (long)iVar14 + 7);
          if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar15 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar15 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar15);
            }
            *(ulong **)(pIVar15 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar9;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar9);
          }
          uVar9 = RecurseAndApply(this,puVar5,puVar7);
          if (pIVar16 != (Isolate *)0x0) {
            *(undefined8 *)(pIVar16 + 0x95a0) = uVar10;
            *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
            if (*(long *)(pIVar16 + 0x95a8) != lVar11) {
              *(long *)(pIVar16 + 0x95a8) = lVar11;
              HandleScope::DeleteExtensions(pIVar16);
            }
          }
          if ((uVar9 & 1) == 0) goto LAB_01049a50;
          lVar17 = lVar17 + 1;
          iVar14 = iVar14 + 4;
        } while (lVar17 < *(int *)(*puVar6 + 3) >> 1);
      }
      goto LAB_010499e0;
    }
  }
LAB_01049a50:
  puVar5 = (ulong *)0x0;
joined_r0x010497d8:
  if (pIVar13 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
    if (*(long *)(pIVar13 + 0x95a8) != lVar3) {
      *(long *)(pIVar13 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar13);
    }
  }
  return puVar5;
}

