
undefined8 FUN_014c6234(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  Isolate *pIVar7;
  ulong uVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1))
                                              + 0x13)) + 0x3af);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
  }
  param_1 = param_1 + -4;
  if (param_1 < 2) {
    pIVar9 = param_3 + 0xa0;
LAB_014c630c:
    pIVar5 = param_3 + 0xa0;
LAB_014c6310:
    pIVar6 = param_3 + 0xa0;
  }
  else {
    pIVar9 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014c630c;
    pIVar5 = (Isolate *)(param_2 + -0x10);
    if (param_1 < 4) goto LAB_014c6310;
    pIVar6 = (Isolate *)(param_2 + -0x18);
    if (param_1 != 4) {
      pIVar7 = (Isolate *)(param_2 + -0x20);
      goto LAB_014c6318;
    }
  }
  pIVar7 = param_3 + 0xa0;
LAB_014c6318:
  pIVar5 = (Isolate *)
           v8::internal::ErrorUtils::MakeGenericError
                     (param_3,puVar4,*(int *)pIVar9 >> 1,pIVar5,pIVar6,pIVar7,2);
  pIVar9 = param_3 + 0x180;
  if (pIVar5 != (Isolate *)0x0) {
    pIVar9 = pIVar5;
  }
  uVar10 = *(undefined8 *)pIVar9;
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

