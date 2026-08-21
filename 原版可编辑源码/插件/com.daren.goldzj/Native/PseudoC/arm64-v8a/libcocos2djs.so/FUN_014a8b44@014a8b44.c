
undefined8 FUN_014a8b44(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  Factory *pFVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  Factory *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong *puStack_98;
  undefined8 local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)) {
    param_2 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
  }
  if (param_2 == (ulong *)0x0) {
LAB_014a8c7c:
    uVar7 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014a8fc0;
  }
  uVar13 = *param_2;
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x423) {
    uVar3 = *(uint *)(uVar13 + 0xb);
    if ((uVar3 & 1) == 0) {
      dVar17 = (double)((int)uVar3 >> 1);
    }
    else {
      uVar13 = uVar13 & 0xffffffff00000000 | (ulong)uVar3;
LAB_014a8c18:
      dVar17 = *(double *)(uVar13 + 3);
    }
  }
  else {
    puVar6 = (ulong *)v8::internal::Object::GetLengthFromArrayLike(param_3,param_2);
    if (puVar6 == (ulong *)0x0) goto LAB_014a8c7c;
    uVar13 = *puVar6;
    if ((uVar13 & 1) != 0) goto LAB_014a8c18;
    dVar17 = (double)((int)uVar13 >> 1);
  }
  uVar13 = *param_2;
  if (dVar17 == 0.0) {
    if ((*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x423) &&
       (uVar13 = v8::internal::JSArray::HasReadOnlyLength(param_2), (uVar13 & 1) == 0)) {
      v8::internal::JSArray::SetLength(param_2,(int)dVar17);
    }
    else {
      uVar7 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar17);
      lVar8 = v8::internal::Object::SetProperty(param_3,param_2,param_3 + 0x7b8,uVar7,0,1);
      if (lVar8 == 0) goto LAB_014a8c7c;
    }
    uVar7 = *(undefined8 *)(param_3 + 0xa0);
    goto LAB_014a8fc0;
  }
  if ((uVar13 & 1) == 0) {
LAB_014a8d84:
    puStack_88 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(param_3,param_2,0);
LAB_014a8d94:
    local_90 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_c8 = 3;
    local_bc = 0xc000000000;
    uStack_78 = 0xffffffffffffffff;
    local_80 = 0;
    local_b0 = param_3;
    puStack_98 = param_2;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_c8);
    if (local_c4 == 4) {
      pFVar9 = local_b0 + 0xa0;
LAB_014a8df4:
      if (1.0 < dVar17) {
        dVar18 = 1.0;
        do {
          uVar7 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar18);
          uVar7 = v8::internal::Factory::NumberToString(param_3,uVar7,1);
          uVar10 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                             (param_3,dVar18 + -1.0);
          uVar10 = v8::internal::Factory::NumberToString(param_3,uVar10,1);
          v8::internal::LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_c8,(ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2
                     ,uVar7,param_2,3);
          uVar5 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_c8);
          if ((uVar5 & 0xff) == 0) goto LAB_014a8fb4;
          if (uVar5 < 0x100) {
            cVar4 = v8::internal::JSReceiver::DeletePropertyOrElement(param_2,uVar10,1);
          }
          else {
            v8::internal::LookupIterator::PropertyOrElement
                      ((LookupIterator *)&local_c8,param_3,param_2,uVar7,3);
            lVar8 = v8::internal::Object::GetProperty((LookupIterator *)&local_c8,false);
            if (lVar8 == 0) goto LAB_014a8fb4;
            v8::internal::LookupIterator::PropertyOrElement
                      ((LookupIterator *)&local_c8,param_3,param_2,uVar10,3);
            cVar4 = v8::internal::Object::SetProperty(&local_c8,lVar8,0,1);
          }
          if (cVar4 == '\0') goto LAB_014a8fb4;
          dVar18 = dVar18 + 1.0;
        } while (dVar18 < dVar17);
      }
      dVar17 = dVar17 + -1.0;
      uVar7 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar17);
      uVar7 = v8::internal::Factory::NumberToString(param_3,uVar7,1);
      cVar4 = v8::internal::JSReceiver::DeletePropertyOrElement(param_2,uVar7,1);
      if (cVar4 == '\0') goto LAB_014a8fb4;
      if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x423
          ) && (uVar13 = v8::internal::JSArray::HasReadOnlyLength(param_2), (uVar13 & 1) == 0)) {
        v8::internal::JSArray::SetLength(param_2,(int)dVar17);
      }
      else {
        uVar7 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar17);
        param_2 = (ulong *)v8::internal::Object::SetProperty
                                     (param_3,param_2,param_3 + 0x7b8,uVar7,0,1);
      }
      if (param_2 == (ulong *)0x0) goto LAB_014a8fb4;
    }
    else {
      pFVar9 = (Factory *)v8::internal::Object::GetProperty((LookupIterator *)&local_c8,false);
      if (pFVar9 != (Factory *)0x0) goto LAB_014a8df4;
LAB_014a8fb4:
      pFVar9 = param_3 + 0x180;
    }
    uVar7 = *(undefined8 *)pFVar9;
  }
  else {
    uVar15 = uVar13 & 0xffffffff00000000;
    if (((*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) ||
        ((*(byte *)((uVar15 | 10) + (ulong)*(uint *)(uVar13 - 1)) & 0xf8) == 0x60)) ||
       ((*(uint *)((uVar15 | *(uint *)(uVar13 - 1)) + 0xb) >> 0x1b & 1) == 0)) {
LAB_014a8d6c:
      puStack_88 = param_2;
      if (*(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)
      goto LAB_014a8d84;
      goto LAB_014a8d94;
    }
    uVar3 = *(uint *)((uVar15 | *(uint *)(uVar13 - 1)) + 0xf);
    if (uVar3 != *(uint *)(param_3 + 0xb0)) {
      uVar14 = uVar13 & 1;
      uVar15 = uVar15 | uVar3;
      do {
        uVar16 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 - 1);
        if ((*(ushort *)(uVar16 + 7) < 0x412) ||
           ((*(int *)(uVar15 + 7) != *(int *)(param_3 + 0x168) &&
            (*(int *)(uVar15 + 7) != *(int *)(param_3 + 1000))))) goto LAB_014a8d68;
        uVar3 = *(uint *)(uVar16 + 0xf);
        uVar15 = uVar15 & 0xffffffff00000000 | (ulong)uVar3;
      } while (uVar3 != *(uint *)(param_3 + 0xb0));
    }
    uVar15 = v8::internal::JSArray::HasReadOnlyLength(param_2);
    uVar13 = *param_2;
    if ((uVar15 & 1) != 0) {
      uVar14 = uVar13 & 1;
LAB_014a8d68:
      if (uVar14 == 0) goto LAB_014a8d84;
      goto LAB_014a8d6c;
    }
    plVar11 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                        ((ulong)*(byte *)((uVar13 & 0xffffffff00000000 | 10) +
                                         (ulong)*(uint *)(uVar13 - 1)) & 0xf8));
    puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0xa8))(plVar11,param_2);
    uVar7 = *puVar12;
  }
  if (param_3 == (Factory *)0x0) {
    return uVar7;
  }
LAB_014a8fc0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar7;
}

