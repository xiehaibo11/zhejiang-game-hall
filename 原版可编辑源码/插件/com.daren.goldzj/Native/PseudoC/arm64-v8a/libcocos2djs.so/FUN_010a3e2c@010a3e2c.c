
undefined8 FUN_010a3e2c(ulong *param_1,KeyAccumulator *param_2,undefined4 param_3)

{
  int iVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  pIVar3 = *(Isolate **)param_2;
  uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
    uVar4 = *puVar2;
  }
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
    lVar7 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    lVar5 = 0x1400000000;
    lVar6 = 0x1000000000;
    while( true ) {
      lVar7 = lVar7 + -1;
      iVar1 = *(int *)(uVar4 + 7 + (lVar6 >> 0x20));
      if (((iVar1 != *(int *)(pIVar3 + 0xa8)) && (iVar1 != *(int *)(pIVar3 + 0xa0))) &&
         (uVar4 = v8::internal::KeyAccumulator::AddKey
                            (param_2,uVar4 & 0xffffffff00000000 |
                                     (ulong)*(uint *)(uVar4 + 7 + (lVar5 >> 0x20)),param_3),
         (uVar4 & 1) == 0)) {
        return 0;
      }
      if (lVar7 == 0) break;
      uVar4 = *puVar2;
      lVar5 = lVar5 + 0xc00000000;
      lVar6 = lVar6 + 0xc00000000;
    }
  }
  return 1;
}

