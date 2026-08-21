
/* v8::internal::Builtin_MakeRangeError(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_MakeRangeError(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  ulong uVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_014c5988(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1))
                                              + 0x13)) + 0x397);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
  }
  iVar4 = param_1 + -4;
  if (iVar4 < 2) {
    pIVar10 = param_3 + 0xa0;
LAB_014c58f0:
    pIVar6 = param_3 + 0xa0;
LAB_014c58f4:
    pIVar7 = param_3 + 0xa0;
  }
  else {
    pIVar10 = (Isolate *)(param_2 + -1);
    if (iVar4 == 2) goto LAB_014c58f0;
    pIVar6 = (Isolate *)(param_2 + -2);
    if (iVar4 < 4) goto LAB_014c58f4;
    pIVar7 = (Isolate *)(param_2 + -3);
    if (iVar4 != 4) {
      pIVar8 = (Isolate *)(param_2 + -4);
      goto LAB_014c58fc;
    }
  }
  pIVar8 = param_3 + 0xa0;
LAB_014c58fc:
  pIVar6 = (Isolate *)
           ErrorUtils::MakeGenericError(param_3,puVar5,*(int *)pIVar10 >> 1,pIVar6,pIVar7,pIVar8,2);
  pIVar10 = param_3 + 0x180;
  if (pIVar6 != (Isolate *)0x0) {
    pIVar10 = pIVar6;
  }
  uVar11 = *(undefined8 *)pIVar10;
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

