
undefined8 FUN_010b1980(void)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *extraout_x1;
  ulong extraout_x1_00;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  ulong uVar3;
  
  FUN_010b2bec();
  FUN_010b2c00();
  FUN_010b2c14();
  FUN_010b2c28();
  pIVar1 = (Isolate *)(*extraout_x1 & 0xffffffff00000000);
  this = *(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8);
  uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(*extraout_x1 + 7);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
    FUN_010b2c3c();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  FUN_010b2c3c();
  if ((*(uint *)((extraout_x1_00 & 0xffffffff00000000 | (ulong)*(uint *)(extraout_x1_00 + 0xb)) +
                0x1b) >> 2 & 1) == 0) {
    return *(undefined8 *)(extraout_x1_00 + 0x1f);
  }
  return 0;
}

