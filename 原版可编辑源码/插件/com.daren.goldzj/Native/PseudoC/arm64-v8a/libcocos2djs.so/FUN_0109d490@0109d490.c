
void FUN_0109d490(undefined8 param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar2 |
          (ulong)*(uint *)(((ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7)) + (long)(param_3 << 2) +
                          7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup
              (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar3);
  }
  return;
}

