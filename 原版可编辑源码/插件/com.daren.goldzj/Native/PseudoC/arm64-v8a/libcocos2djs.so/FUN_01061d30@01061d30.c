
void FUN_01061d30(ulong param_1,ulong param_2,long param_3,long param_4,int param_5)

{
  ulong *puVar1;
  Isolate *pIVar2;
  
  if (param_3 != 0) {
    pIVar2 = (Isolate *)(param_1 & 0xffffffff00000000);
    if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = param_1;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),param_1);
    }
    *(ulong **)(param_3 + (long)param_5 * 8) = puVar1;
  }
  if (param_4 != 0) {
    pIVar2 = (Isolate *)(param_1 & 0xffffffff00000000);
    if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = param_2;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),param_2);
    }
    *(ulong **)(param_4 + (long)param_5 * 8) = puVar1;
  }
  return;
}

