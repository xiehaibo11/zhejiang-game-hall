
int FUN_010a29f8(undefined8 param_1,ulong *param_2,long param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
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
    FUN_010a41c0();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  FUN_010a41c0();
  return *(int *)(param_3 + 3) >> 1;
}

