
undefined8 FUN_014cb6f4(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  char *__s;
  undefined8 *puVar4;
  long lVar5;
  Isolate *pIVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  char *local_60;
  size_t sStack_58;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  pIVar6 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar6 = param_3 + 0xa0;
  }
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x411)) {
LAB_014cb77c:
    uVar8 = *param_2;
    if ((uVar8 & 1) == 0) goto LAB_014cb784;
LAB_014cb878:
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x42) {
      dVar11 = *(double *)(uVar8 + 3);
      uVar8 = *(ulong *)pIVar6;
      iVar7 = (int)uVar8;
      goto joined_r0x014cb898;
    }
    sStack_58 = __strlen_chk("Number.prototype.toPrecision",0x1d);
    local_60 = "Number.prototype.toPrecision";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar5 == 0) goto LAB_014cb9a0;
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x5b,lVar5,param_3 + 0x888,0);
  }
  else {
    uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      param_2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      goto LAB_014cb77c;
    }
    param_2 = puVar2;
    if (puVar3 == puVar2) {
      param_2 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = param_2 + 1;
    *param_2 = uVar8;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) goto LAB_014cb878;
LAB_014cb784:
    dVar11 = (double)((int)uVar8 >> 1);
    uVar8 = *(ulong *)pIVar6;
    iVar7 = (int)uVar8;
joined_r0x014cb898:
    if ((uVar8 & 1) != 0) {
      if (iVar7 == *(int *)(param_3 + 0xa0)) {
        puVar4 = (undefined8 *)v8::internal::Factory::NumberToString((Factory *)param_3,param_2,1);
        uVar9 = *puVar4;
        goto LAB_014cb94c;
      }
      pIVar6 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3,pIVar6);
    }
    if (pIVar6 == (Isolate *)0x0) {
      uVar9 = *(undefined8 *)(param_3 + 0x180);
      goto LAB_014cb94c;
    }
    uVar8 = *(ulong *)pIVar6;
    if ((uVar8 & 1) == 0) {
      dVar10 = (double)((int)uVar8 >> 1);
    }
    else {
      dVar10 = *(double *)(uVar8 + 3);
    }
    if (NAN(dVar11)) {
      uVar9 = *(undefined8 *)(param_3 + 0x828);
      goto LAB_014cb94c;
    }
    if (ABS(dVar11) == INFINITY) {
      if (0.0 <= dVar11) {
        uVar9 = *(undefined8 *)(param_3 + 0x760);
      }
      else {
        uVar9 = *(undefined8 *)(param_3 + 0x808);
      }
      goto LAB_014cb94c;
    }
    if ((1.0 <= dVar10) && (dVar10 <= 100.0)) {
      __s = (char *)v8::internal::DoubleToPrecisionCString(dVar11,(int)dVar10);
      sStack_58 = strlen(__s);
      local_60 = __s;
      puVar4 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
      if (puVar4 == (undefined8 *)0x0) {
LAB_014cb9a0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      if (__s != (char *)0x0) {
        operator_delete__(__s);
      }
      uVar9 = *puVar4;
      goto LAB_014cb94c;
    }
    puVar4 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0xda,0,0,0);
  }
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
LAB_014cb94c:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

