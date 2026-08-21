
void FUN_0103f150(long param_1,int param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = **(ulong **)(param_1 + 8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(**(ulong **)(param_1 + 8) + 7)) +
                            (long)(param_2 << 2) + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_3 + 0x95a0);
    if (puVar1 == *(ulong **)(param_3 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar2);
  }
  return;
}

