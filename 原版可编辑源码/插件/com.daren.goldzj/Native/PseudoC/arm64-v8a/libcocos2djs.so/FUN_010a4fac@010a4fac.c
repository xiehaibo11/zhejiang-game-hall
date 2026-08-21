
undefined8
FUN_010a4fac(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  pIVar6 = *(Isolate **)param_3;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar7);
    uVar7 = *puVar4;
  }
  uVar3 = ((*(int *)(uVar7 + 3) >> 1) +
          (*(int *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 3) >> 1)) - 2;
  if (uVar3 == 0) {
    return 1;
  }
  uVar8 = 0;
  iVar9 = 8;
  do {
    iVar1 = *(int *)(uVar7 + 3) >> 1;
    if (uVar8 < iVar1 - 2) {
      uVar2 = *(uint *)(uVar7 + (long)iVar9 + 7);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(pIVar6 + 0xa8))) {
LAB_010a50bc:
        uVar5 = FUN_010a6554(pIVar6,uVar7,uVar8);
        uVar7 = v8::internal::KeyAccumulator::AddKey(param_3,uVar5,param_4);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
    }
    else if ((((ulong)(pIVar6 + *(uint *)((uVar7 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(uVar7 + 0xb)) +
                                          (long)(iVar9 + iVar1 * -4) + 7)) & 1) == 0) ||
            ((int)(pIVar6 + *(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) +
                                      (long)(iVar9 + iVar1 * -4) + 7)) != *(int *)(pIVar6 + 0xa8)))
    goto LAB_010a50bc;
    if ((ulong)uVar3 - 1 == uVar8) {
      return 1;
    }
    uVar7 = *puVar4;
    uVar8 = uVar8 + 1;
    iVar9 = iVar9 + 4;
  } while( true );
}

