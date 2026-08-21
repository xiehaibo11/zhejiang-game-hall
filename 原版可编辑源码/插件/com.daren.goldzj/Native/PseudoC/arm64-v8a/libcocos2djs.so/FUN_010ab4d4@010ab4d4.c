
void FUN_010ab4d4(void)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *extraout_x1;
  ulong uVar3;
  
  FUN_010ac1bc();
  FUN_010ac1d0();
  FUN_010ac1e4();
  pIVar1 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar3);
  }
  FUN_0108cd68(extraout_x1,puVar2);
  return;
}

