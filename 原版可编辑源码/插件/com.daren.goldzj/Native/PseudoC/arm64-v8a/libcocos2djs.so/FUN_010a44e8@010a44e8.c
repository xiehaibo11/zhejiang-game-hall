
undefined8 FUN_010a44e8(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  ulong uVar4;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  this = *(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8);
  uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
    FUN_010a6724();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar4);
  FUN_010a6724();
  if ((*(byte *)(param_4 + 0x24) >> 5 & 1) == 0) {
    uVar3 = FUN_010a6738(extraout_x1,param_3,param_4);
    return uVar3;
  }
  return 1;
}

