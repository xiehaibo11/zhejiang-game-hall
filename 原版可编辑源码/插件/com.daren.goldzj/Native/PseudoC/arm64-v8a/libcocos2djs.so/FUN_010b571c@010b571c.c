
undefined8
FUN_010b571c(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
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
       0) && (lVar3 = *(long *)(uVar4 + 0x1f), lVar3 != 0)) {
    lVar5 = 0;
    while( true ) {
      pIVar1 = (Isolate *)(uVar4 & 0xffffffff00000000);
      uVar4 = (long)*(short *)(*(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f) + lVar5 * 2)
              << 1;
      if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar4);
      }
      uVar4 = v8::internal::KeyAccumulator::AddKey(param_3,puVar2,param_4);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (lVar3 + -1 == lVar5) break;
      uVar4 = *param_2;
      lVar5 = lVar5 + 1;
    }
  }
  return 1;
}

