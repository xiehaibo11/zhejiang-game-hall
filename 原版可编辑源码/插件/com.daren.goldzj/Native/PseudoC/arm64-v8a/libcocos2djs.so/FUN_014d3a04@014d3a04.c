
ulong * FUN_014d3a04(Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  long local_48;
  
  plVar3 = (long *)v8::internal::ValidateSharedIntegerTypedArray(param_1,param_2,1);
  if (plVar3 == (long *)0x0) {
    return (ulong *)0x0;
  }
  auVar10 = v8::internal::ValidateAtomicAccess(param_1,plVar3,param_3);
  if ((auVar10._0_8_ & 0xff) == 0) {
LAB_014d3a98:
    puVar6 = (ulong *)0x0;
  }
  else {
    if ((*param_4 & 1) == 0) {
LAB_014d3a80:
      if (param_4 == (ulong *)0x0) goto LAB_014d3a98;
      uVar5 = *param_4;
      if ((uVar5 & 1) == 0) {
        dVar8 = (double)((int)uVar5 >> 1);
      }
      else {
        dVar8 = *(double *)(uVar5 + 3);
      }
      dVar9 = 0.0;
      if ((0.0 <= dVar8) && (dVar9 = dVar8, 4294967295.0 < dVar8)) {
        dVar9 = 4294967295.0;
      }
      iVar7 = (int)dVar9;
    }
    else {
      if ((int)*param_4 != *(int *)(param_1 + 0xa0)) {
        param_4 = (ulong *)v8::internal::Object::ConvertToInteger(param_1,param_4);
        goto LAB_014d3a80;
      }
      iVar7 = -1;
    }
    local_48 = *plVar3;
    uVar4 = v8::internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_48);
    local_48 = *plVar3;
    iVar2 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
    if (iVar2 == 10) {
      lVar1 = auVar10._8_8_ * 8;
    }
    else {
      lVar1 = auVar10._8_8_ * 4;
    }
    uVar5 = v8::internal::FutexEmulation::Wake(uVar4,*(long *)(*plVar3 + 0xf) + lVar1,iVar7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
  }
  return puVar6;
}

