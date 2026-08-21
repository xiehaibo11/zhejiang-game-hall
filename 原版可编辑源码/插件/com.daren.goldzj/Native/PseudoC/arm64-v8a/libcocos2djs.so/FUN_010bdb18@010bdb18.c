
undefined8 FUN_010bdb18(undefined8 param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong extraout_x1;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  ulong uVar3;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  this = *(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8);
  uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
    FUN_010be788();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  FUN_010be788();
  if ((*(uint *)((extraout_x1 & 0xffffffff00000000 | (ulong)*(uint *)(extraout_x1 + 0xb)) + 0x1b) >>
       2 & 1) == 0) {
    return *(undefined8 *)(extraout_x1 + 0x1f);
  }
  return 0;
}

