
undefined8
FUN_010a8388(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  pIVar6 = *(Isolate **)param_3;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar7);
    uVar7 = *puVar2;
  }
  uVar1 = ((*(int *)(uVar7 + 3) >> 1) +
          (*(int *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 3) >> 1)) - 2;
  if (uVar1 == 0) {
    return 1;
  }
  uVar8 = 0;
  iVar9 = 8;
  lVar10 = 0x1000000000;
  do {
    uVar5 = (ulong)((*(int *)(uVar7 + 3) >> 1) - 2);
    if (uVar8 < uVar5) {
      uVar4 = *(uint *)(uVar7 + (long)iVar9 + 7);
      if ((uVar4 & 1) == 0) goto LAB_010a849c;
LAB_010a8490:
      if (uVar4 != *(uint *)(pIVar6 + 0xa8)) goto LAB_010a849c;
    }
    else {
      uVar4 = *(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) +
                        ((long)(lVar10 + uVar5 * -0xc00000000) >> 0x20) + 7);
      if ((uVar4 & 1) != 0) goto LAB_010a8490;
LAB_010a849c:
      uVar3 = FUN_010a9710(pIVar6,uVar7,uVar8);
      uVar7 = v8::internal::KeyAccumulator::AddKey(param_3,uVar3,param_4);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    if ((ulong)uVar1 - 1 == uVar8) {
      return 1;
    }
    uVar7 = *puVar2;
    uVar8 = uVar8 + 1;
    iVar9 = iVar9 + 4;
    lVar10 = lVar10 + 0xc00000000;
  } while( true );
}

