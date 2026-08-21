
undefined8 FUN_014a7c58(undefined8 param_1,Isolate *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 local_d8;
  Isolate *pIStack_d0;
  LookupIterator aLStack_c8 [88];
  
  pIVar2 = param_3 + 0x95a0;
  uVar3 = *(undefined8 *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_d8 = param_1;
  pIStack_d0 = param_2;
  if ((*(int *)(param_3 + 0xb80c) == 0x20) &&
     (uVar9 = v8::internal::Debug::PerformSideEffectCheckForObject
                        (*(Debug **)(param_3 + 0xb6c8),param_2), (uVar9 & 1) == 0)) {
LAB_014a7e4c:
    pIVar10 = param_3 + 0x180;
  }
  else {
    uVar9 = *(ulong *)param_2;
    if (((uVar9 & 1) == 0) ||
       (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
      pIVar10 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
      if (pIVar10 != (Isolate *)0x0) goto LAB_014a7d0c;
      goto LAB_014a7e4c;
    }
    pIVar10 = param_2;
    if (param_2 == (Isolate *)0x0) goto LAB_014a7e4c;
LAB_014a7d0c:
    uVar9 = *(ulong *)pIVar10;
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x423) {
      uVar6 = *(uint *)(uVar9 + 0xb);
      if ((uVar6 & 1) == 0) {
        dVar18 = (double)((int)uVar6 >> 1);
      }
      else {
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar6;
LAB_014a7d64:
        dVar18 = *(double *)(uVar9 + 3);
      }
    }
    else {
      puVar11 = (ulong *)v8::internal::Object::GetLengthFromArrayLike(param_3,pIVar10);
      if (puVar11 == (ulong *)0x0) goto LAB_014a7e4c;
      uVar9 = *puVar11;
      if ((uVar9 & 1) != 0) goto LAB_014a7d64;
      dVar18 = (double)((int)uVar9 >> 1);
    }
    iVar7 = (int)param_1 + -4;
    pIVar1 = param_3 + 0xa0;
    pIVar12 = param_2 + -0x10;
    if (iVar7 < 3) {
      pIVar12 = pIVar1;
    }
    uVar9 = *(ulong *)pIVar12;
    if ((uVar9 & 1) != 0) {
      dVar16 = 0.0;
      if ((int)uVar9 != *(int *)((uVar9 & 0xffffffff00000000) + 0xa0)) {
        pIVar12 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3);
        goto LAB_014a7da4;
      }
      goto LAB_014a7dc0;
    }
LAB_014a7da4:
    if (pIVar12 == (Isolate *)0x0) goto LAB_014a7e4c;
    uVar9 = *(ulong *)pIVar12;
    if ((uVar9 & 1) == 0) {
      dVar16 = (double)((int)uVar9 >> 1);
      if (dVar16 < 0.0) goto LAB_014a7dd8;
LAB_014a7dc0:
      dVar17 = dVar18;
      if (dVar16 <= dVar18) {
        dVar17 = dVar16;
      }
    }
    else {
      dVar16 = *(double *)(uVar9 + 3);
      if (0.0 <= dVar16) goto LAB_014a7dc0;
LAB_014a7dd8:
      dVar17 = dVar18 + dVar16;
      if (dVar18 + dVar16 <= 0.0) {
        dVar17 = 0.0;
      }
    }
    pIVar12 = param_2 + -0x18;
    if (iVar7 < 4) {
      pIVar12 = pIVar1;
    }
    uVar9 = *(ulong *)pIVar12;
    if ((uVar9 & 1) == 0) {
LAB_014a7e18:
      if (pIVar12 == (Isolate *)0x0) goto LAB_014a7e4c;
      uVar9 = *(ulong *)pIVar12;
      if ((uVar9 & 1) == 0) {
        dVar16 = (double)((int)uVar9 >> 1);
      }
      else {
        dVar16 = *(double *)(uVar9 + 3);
      }
    }
    else {
      dVar16 = dVar18;
      if ((int)uVar9 != *(int *)((uVar9 & 0xffffffff00000000) + 0xa0)) {
        pIVar12 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3);
        goto LAB_014a7e18;
      }
    }
    if (0.0 <= dVar16) {
      if (dVar16 <= dVar18) {
        dVar18 = dVar16;
      }
    }
    else {
      dVar18 = dVar18 + dVar16;
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
    }
    if (dVar17 < dVar18) {
      pIVar12 = param_2 + -8;
      if (iVar7 < 2) {
        pIVar12 = pIVar1;
      }
      if (4294967295.0 < dVar18) {
joined_r0x014a7ee8:
        do {
          if (dVar18 <= dVar17) goto LAB_014a7fdc;
          uVar15 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                             ((Factory *)param_3,dVar17);
          uVar15 = v8::internal::Factory::NumberToString((Factory *)param_3,uVar15,1);
          v8::internal::LookupIterator::PropertyOrElement(aLStack_c8,param_3,pIVar10,uVar15,3);
          cVar8 = v8::internal::Object::SetProperty(aLStack_c8,pIVar12,0,1);
          if ((pIVar12 == (Isolate *)0x0) || (cVar8 == '\0')) {
            pIVar10 = param_3 + 0x180;
            goto LAB_014a7fdc;
          }
          dVar17 = dVar17 + 1.0;
        } while( true );
      }
      uVar9 = *(ulong *)pIVar10;
      if ((uVar9 & 1) == 0) goto joined_r0x014a7ee8;
      uVar14 = uVar9 & 0xffffffff00000000;
      if ((((*(ushort *)((uVar14 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xaa) ||
           (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x423)) ||
          ((*(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8) == 0x60)) ||
         ((*(uint *)((uVar14 | *(uint *)(uVar9 - 1)) + 0xb) >> 0x1b & 1) == 0))
      goto joined_r0x014a7ee8;
      uVar6 = *(uint *)((uVar14 | *(uint *)(uVar9 - 1)) + 0xf);
      if (uVar6 != *(uint *)(param_3 + 0xb0)) {
        uVar14 = uVar14 | uVar6;
        do {
          uVar9 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
          if ((*(ushort *)(uVar9 + 7) < 0x412) ||
             ((*(int *)(uVar14 + 7) != *(int *)(param_3 + 0x168) &&
              (*(int *)(uVar14 + 7) != *(int *)(param_3 + 1000))))) goto joined_r0x014a7ee8;
          uVar6 = *(uint *)(uVar9 + 0xf);
          uVar14 = uVar14 & 0xffffffff00000000 | (ulong)uVar6;
        } while (uVar6 != *(uint *)(param_3 + 0xb0));
      }
      uVar9 = v8::internal::Isolate::IsAnyInitialArrayPrototype(param_3,pIVar10);
      if ((uVar9 & 1) != 0) goto joined_r0x014a7ee8;
      FUN_014aae74(param_3,pIVar10,&local_d8,1,1);
      if (((int)param_1 == 5) &&
         ((*(byte *)((*(ulong *)pIVar10 & 0xffffffff00000000 | 10) +
                    (ulong)*(uint *)(*(ulong *)pIVar10 - 1)) & 0xf8) != 0x10)) {
        uVar15 = *(undefined8 *)pIVar2;
        lVar5 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        v8::internal::JSObject::TransitionElementsKind(pIVar10,2);
        if (param_3 != (Isolate *)0x0) {
          *(undefined8 *)pIVar2 = uVar15;
          *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
          if (*(long *)(param_3 + 0x95a8) != lVar5) {
            *(long *)(param_3 + 0x95a8) = lVar5;
            v8::internal::HandleScope::DeleteExtensions(param_3);
          }
        }
      }
      dVar16 = dVar17 + 4503599627370496.0;
      if (((ulong)dVar16 >> 0x20 != 0x43300000) || (dVar17 != (double)((ulong)dVar16 & 0xffffffff)))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","DoubleToUint32IfEqualToSelf(start_index, &start)");
      }
      dVar17 = dVar18 + 4503599627370496.0;
      if (((ulong)dVar17 >> 0x20 != 0x43300000) || (dVar18 != (double)((ulong)dVar17 & 0xffffffff)))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","DoubleToUint32IfEqualToSelf(end_index, &end)");
      }
      plVar13 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                          ((ulong)*(byte *)((*(ulong *)pIVar10 & 0xffffffff00000000 | 10) +
                                           (ulong)*(uint *)(*(ulong *)pIVar10 - 1)) & 0xf8));
      (**(code **)(*plVar13 + 0xc0))
                (plVar13,pIVar10,pIVar12,(ulong)dVar16 & 0xffffffff,(ulong)dVar17 & 0xffffffff);
LAB_014a7fdc:
      uVar15 = *(undefined8 *)pIVar10;
      if (param_3 == (Isolate *)0x0) {
        return uVar15;
      }
      goto LAB_014a7e54;
    }
  }
  uVar15 = *(undefined8 *)pIVar10;
LAB_014a7e54:
  *(undefined8 *)pIVar2 = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar15;
}

