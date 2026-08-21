
undefined8 FUN_014c4f68(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  Isolate *pIVar8;
  Isolate *pIVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  pIVar1 = param_3 + 0xa0;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  pIVar9 = (Isolate *)(param_2 + -8);
  if (param_1 + -4 < 2) {
    pIVar9 = pIVar1;
  }
  v8::internal::Isolate::CountUsage(param_3,0x2b);
  uVar10 = *(ulong *)pIVar9;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xaa)) {
    uVar11 = 0x3f;
LAB_014c5008:
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar11,pIVar9,0,0)
    ;
    uVar11 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
  }
  else {
    pIVar8 = (Isolate *)(param_2 + -0x10);
    if (param_1 + -4 < 3) {
      pIVar8 = pIVar1;
    }
    uVar10 = *(ulong *)pIVar8;
    if ((uVar10 & 1) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x439;
    }
    lVar7 = v8::internal::Isolate::CaptureAndSetDetailedStackTrace(param_3,pIVar9);
    if ((lVar7 != 0) &&
       (lVar7 = v8::internal::Isolate::CaptureAndSetSimpleStackTrace(param_3,pIVar9,bVar5,pIVar8),
       lVar7 != 0)) {
      uVar10 = *(ulong *)(param_3 + 0xe38) & 0xffffffff00000000 |
               (ulong)*(uint *)(*(ulong *)(param_3 + 0xe38) + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar8 = *(Isolate **)pIVar2;
        if (pIVar8 == *(Isolate **)(param_3 + 0x95a8)) {
          pIVar8 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
        }
        *(Isolate **)pIVar2 = pIVar8 + 8;
        *(ulong *)pIVar8 = uVar10;
      }
      else {
        pIVar8 = (Isolate *)
                 v8::internal::CanonicalHandleScope::Lookup
                           (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      }
      uVar10 = v8::internal::JSObject::IsExtensible(pIVar9);
      if ((uVar10 & 1) == 0) {
        uVar11 = 0x30;
        pIVar9 = pIVar8;
        goto LAB_014c5008;
      }
      lVar7 = v8::internal::JSObject::SetAccessor(pIVar9,pIVar8,param_3 + 0xe38,2);
      if (lVar7 != 0) {
        uVar11 = *(undefined8 *)pIVar1;
        goto LAB_014c5028;
      }
    }
    uVar11 = *(undefined8 *)(param_3 + 0x180);
  }
LAB_014c5028:
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

