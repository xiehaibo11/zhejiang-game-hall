
void FUN_010a5610(void)

{
  Isolate *pIVar1;
  ulong *puVar2;
  CanonicalHandleScope *this;
  ulong *extraout_x1;
  ulong uVar3;
  
  FUN_010a6d2c();
  FUN_010a6d40();
  FUN_010a6d54();
  FUN_010a6d68();
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
    uVar3 = *puVar2;
  }
  this = *(CanonicalHandleScope **)((ulong)*(uint *)((long)extraout_x1 + 4) << 0x20 | 0x95b8);
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
  if (this == (CanonicalHandleScope *)0x0) {
    pIVar1 = (Isolate *)((ulong)*(uint *)((long)extraout_x1 + 4) << 0x20);
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  }
  FUN_0108cd68(extraout_x1,puVar2);
  return;
}

