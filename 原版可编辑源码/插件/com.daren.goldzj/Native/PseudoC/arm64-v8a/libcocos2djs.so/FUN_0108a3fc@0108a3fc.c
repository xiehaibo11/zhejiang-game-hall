
void FUN_0108a3fc(undefined8 param_1,ulong *param_2,undefined4 param_3)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar3);
  }
  FUN_0108ba88(pIVar2,param_2,param_3,puVar1);
  return;
}

