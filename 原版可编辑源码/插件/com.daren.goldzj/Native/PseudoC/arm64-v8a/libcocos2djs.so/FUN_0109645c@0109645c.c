
undefined8
FUN_0109645c(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  int *piVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  
  pIVar7 = *(Isolate **)param_3;
  pIVar1 = pIVar7 + 0x95a0;
  uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  uVar6 = *param_2;
  piVar2 = (int *)(uVar6 + 0xb);
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x423) {
    piVar2 = (int *)(uVar8 + 3);
  }
  iVar3 = *piVar2;
  if (iVar3 >> 1 != 0) {
    lVar9 = 0;
    while( true ) {
      if ((((ulong)(pIVar7 + *(uint *)(uVar8 + 7 + (long)(int)lVar9)) & 1) == 0) ||
         ((int)(pIVar7 + *(uint *)(uVar8 + 7 + (long)(int)lVar9)) != *(int *)(pIVar7 + 0xa8))) {
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)((long)(int)lVar9 + uVar8 + 7);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar8;
        }
        else {
          puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
        }
        uVar8 = v8::internal::KeyAccumulator::AddKey(param_3,puVar5,param_4);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      }
      if ((ulong)(uint)(iVar3 >> 1) * 4 + -4 == lVar9) break;
      uVar8 = *puVar4;
      lVar9 = lVar9 + 4;
    }
  }
  return 1;
}

