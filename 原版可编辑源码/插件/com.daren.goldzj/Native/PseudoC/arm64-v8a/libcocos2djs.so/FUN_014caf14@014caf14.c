
undefined8 FUN_014caf14(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  Isolate IVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *__s;
  ulong uVar11;
  double dVar12;
  double dVar13;
  char *local_60;
  size_t sStack_58;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  pIVar7 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar7 = param_3 + 0xa0;
  }
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x411)) {
LAB_014caf94:
    if ((uVar11 & 1) == 0) goto LAB_014caf98;
LAB_014cb094:
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x42) {
      dVar13 = *(double *)(uVar11 + 3);
      IVar5 = *pIVar7;
      goto joined_r0x014cb0b4;
    }
    sStack_58 = __strlen_chk("Number.prototype.toFixed",0x19);
    local_60 = "Number.prototype.toFixed";
    lVar8 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar8 == 0) goto LAB_014cb1b0;
    puVar9 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x5b,lVar8,param_3 + 0x888,0);
  }
  else {
    uVar4 = *(uint *)(uVar11 + 0xb);
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar4;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
      uVar11 = *puVar6;
      goto LAB_014caf94;
    }
    puVar6 = puVar2;
    if (puVar3 == puVar2) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar11;
    if ((uVar4 & 1) != 0) goto LAB_014cb094;
LAB_014caf98:
    dVar13 = (double)((int)uVar11 >> 1);
    IVar5 = *pIVar7;
joined_r0x014cb0b4:
    if (((byte)IVar5 & 1) != 0) {
      pIVar7 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3,pIVar7);
    }
    if (pIVar7 == (Isolate *)0x0) {
      uVar10 = *(undefined8 *)(param_3 + 0x180);
      goto LAB_014cb114;
    }
    uVar11 = *(ulong *)pIVar7;
    if ((uVar11 & 1) == 0) {
      dVar12 = (double)((int)uVar11 >> 1);
    }
    else {
      dVar12 = *(double *)(uVar11 + 3);
    }
    if ((0.0 <= dVar12) && (dVar12 <= 100.0)) {
      if (NAN(dVar13)) {
        uVar10 = *(undefined8 *)(param_3 + 0x828);
      }
      else if (ABS(dVar13) == INFINITY) {
        if (0.0 <= dVar13) {
          uVar10 = *(undefined8 *)(param_3 + 0x760);
        }
        else {
          uVar10 = *(undefined8 *)(param_3 + 0x808);
        }
      }
      else {
        __s = (char *)v8::internal::DoubleToFixedCString(dVar13,(int)dVar12);
        sStack_58 = strlen(__s);
        local_60 = __s;
        puVar9 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
        if (puVar9 == (undefined8 *)0x0) goto LAB_014cb1b0;
        if (__s != (char *)0x0) {
          operator_delete__(__s);
        }
        uVar10 = *puVar9;
      }
      goto LAB_014cb114;
    }
    sStack_58 = __strlen_chk("toFixed() digits",0x11);
    local_60 = "toFixed() digits";
    lVar8 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar8 == 0) {
LAB_014cb1b0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar9 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0xd5,lVar8,0,0);
  }
  uVar10 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
LAB_014cb114:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

