
int FUN_010a88ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *extraout_x1;
  CanonicalHandleScope *this;
  CanonicalHandleScope *extraout_x8;
  ulong uVar3;
  
  FUN_010a9c20();
  FUN_010a9c34();
  FUN_010a9c48();
  FUN_010a9c5c();
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
    FUN_010a9c70();
    this = extraout_x8;
  }
  v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  FUN_010a9c70();
  return (*(int *)(param_3 + 3) >> 1) +
         (*(int *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 3) >> 1) + -2;
}

