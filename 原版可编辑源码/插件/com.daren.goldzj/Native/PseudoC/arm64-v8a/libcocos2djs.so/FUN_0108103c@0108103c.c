
void FUN_0108103c(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  pIVar1 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(*param_2 + 7);
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
  FUN_01083c90(param_2,puVar2,param_3,param_4,0);
  return;
}

