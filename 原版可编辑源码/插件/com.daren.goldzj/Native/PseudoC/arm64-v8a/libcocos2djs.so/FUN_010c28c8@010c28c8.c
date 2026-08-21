
undefined8
FUN_010c28c8(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup
              (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar4);
  }
  uVar4 = *param_2;
  if (((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 & 1) ==
       0) && (lVar5 = *(long *)(uVar4 + 0x1f), lVar5 != 0)) {
    uVar3 = v8::internal::BigInt::FromInt64
                      ((Isolate *)(uVar4 & 0xffffffff00000000),
                       *(long *)(*(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f)));
    uVar4 = v8::internal::KeyAccumulator::AddKey(param_3,uVar3,param_4);
    if ((uVar4 & 1) != 0) {
      lVar6 = 1;
      do {
        if (lVar5 == lVar6) goto LAB_010c29cc;
        uVar4 = *param_2;
        uVar3 = v8::internal::BigInt::FromInt64
                          ((Isolate *)(uVar4 & 0xffffffff00000000),
                           *(long *)(*(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f) +
                                    lVar6 * 8));
        uVar4 = v8::internal::KeyAccumulator::AddKey(param_3,uVar3,param_4);
        lVar6 = lVar6 + 1;
      } while ((uVar4 & 1) != 0);
    }
    uVar3 = 0;
  }
  else {
LAB_010c29cc:
    uVar3 = 1;
  }
  return uVar3;
}

