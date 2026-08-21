
undefined8 FUN_0108c4d4(ulong *param_1,KeyAccumulator *param_2,undefined4 param_3)

{
  long lVar1;
  Isolate *pIVar2;
  int *piVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  long lVar10;
  
  pIVar8 = *(Isolate **)param_2;
  pIVar2 = pIVar8 + 0x95a0;
  uVar9 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar9);
    uVar9 = *puVar5;
  }
  uVar7 = *param_1;
  piVar3 = (int *)(uVar7 + 0xb);
  if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x423) {
    piVar3 = (int *)(uVar9 + 3);
  }
  iVar4 = *piVar3;
  if (iVar4 >> 1 != 0) {
    lVar10 = 0;
    while( true ) {
      lVar1 = (long)(int)lVar10 + 7;
      if ((((ulong)(pIVar8 + *(uint *)(lVar1 + uVar9)) & 1) == 0) ||
         ((int)(pIVar8 + *(uint *)(lVar1 + uVar9)) != *(int *)(pIVar8 + 0xa8))) {
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + lVar1);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar2;
          if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
          }
          *(ulong **)pIVar2 = puVar6 + 1;
          *puVar6 = uVar9;
        }
        else {
          puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar9);
        }
        uVar9 = v8::internal::KeyAccumulator::AddKey(param_2,puVar6,param_3);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
      }
      if ((ulong)(uint)(iVar4 >> 1) * 4 + -4 == lVar10) break;
      uVar9 = *puVar5;
      lVar10 = lVar10 + 4;
    }
  }
  return 1;
}

