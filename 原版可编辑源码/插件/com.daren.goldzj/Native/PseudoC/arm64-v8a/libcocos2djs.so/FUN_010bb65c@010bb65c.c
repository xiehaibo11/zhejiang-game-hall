
undefined8
FUN_010bb65c(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup
              (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar5);
  }
  uVar5 = *param_2;
  if (((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0x1b) >> 2 & 1) ==
       0) && (lVar4 = *(long *)(uVar5 + 0x1f), lVar4 != 0)) {
    lVar6 = 0;
    while( true ) {
      uVar3 = v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                        ((Factory *)(uVar5 & 0xffffffff00000000),
                         (double)*(float *)(*(long *)(uVar5 + 0x27) + (ulong)*(uint *)(uVar5 + 0x2f)
                                           + lVar6 * 4));
      uVar5 = v8::internal::KeyAccumulator::AddKey(param_3,uVar3,param_4);
      if ((uVar5 & 1) == 0) break;
      if (lVar4 + -1 == lVar6) goto LAB_010bb740;
      uVar5 = *param_2;
      lVar6 = lVar6 + 1;
    }
    uVar3 = 0;
  }
  else {
LAB_010bb740:
    uVar3 = 1;
  }
  return uVar3;
}

