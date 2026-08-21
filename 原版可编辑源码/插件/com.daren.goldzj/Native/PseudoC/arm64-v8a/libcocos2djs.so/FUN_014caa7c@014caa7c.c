
undefined8 FUN_014caa7c(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  long lVar9;
  char *__s;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  char *local_60;
  size_t sStack_58;
  
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  pIVar2 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar2 = param_3 + 0xa0;
  }
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x411)) {
LAB_014cab00:
    if ((uVar12 & 1) == 0) goto LAB_014cab04;
LAB_014cab34:
    if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x42) {
      dVar14 = *(double *)(uVar12 + 3);
      goto LAB_014cab50;
    }
    sStack_58 = __strlen_chk("Number.prototype.toExponential",0x1f);
    local_60 = "Number.prototype.toExponential";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar9 == 0) goto LAB_014cad34;
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x5b,lVar9,param_3 + 0x888,0);
  }
  else {
    uVar5 = *(uint *)(uVar12 + 0xb);
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar5;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      uVar12 = *puVar7;
      goto LAB_014cab00;
    }
    puVar7 = puVar3;
    if (puVar4 == puVar3) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar12;
    if ((uVar5 & 1) != 0) goto LAB_014cab34;
LAB_014cab04:
    dVar14 = (double)((int)uVar12 >> 1);
LAB_014cab50:
    pIVar8 = pIVar2;
    if (((byte)*pIVar2 & 1) != 0) {
      pIVar8 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3,pIVar2);
    }
    if (pIVar8 == (Isolate *)0x0) {
      uVar11 = *(undefined8 *)(param_3 + 0x180);
      goto LAB_014cace0;
    }
    uVar12 = *(ulong *)pIVar8;
    if ((uVar12 & 1) == 0) {
      dVar13 = (double)((int)uVar12 >> 1);
    }
    else {
      dVar13 = *(double *)(uVar12 + 3);
    }
    if (NAN(dVar14)) {
      uVar11 = *(undefined8 *)(param_3 + 0x828);
      goto LAB_014cace0;
    }
    if (ABS(dVar14) == INFINITY) {
      if (0.0 <= dVar14) {
        uVar11 = *(undefined8 *)(param_3 + 0x760);
      }
      else {
        uVar11 = *(undefined8 *)(param_3 + 0x808);
      }
      goto LAB_014cace0;
    }
    if ((0.0 <= dVar13) && (dVar13 <= 100.0)) {
      if ((*(ulong *)pIVar2 & 1) == 0) {
        iVar6 = (int)dVar13;
      }
      else {
        iVar6 = (int)dVar13;
        if ((int)*(ulong *)pIVar2 == *(int *)(param_3 + 0xa0)) {
          iVar6 = -1;
        }
      }
      __s = (char *)v8::internal::DoubleToExponentialCString(dVar14,iVar6);
      sStack_58 = strlen(__s);
      local_60 = __s;
      puVar10 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
      if (puVar10 == (undefined8 *)0x0) goto LAB_014cad34;
      if (__s != (char *)0x0) {
        operator_delete__(__s);
      }
      uVar11 = *puVar10;
      goto LAB_014cace0;
    }
    sStack_58 = __strlen_chk("toExponential()",0x10);
    local_60 = "toExponential()";
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar9 == 0) {
LAB_014cad34:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar10 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0xd5,lVar9,0,0);
  }
  uVar11 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
LAB_014cace0:
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

