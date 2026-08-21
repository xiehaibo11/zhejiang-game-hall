
/* v8::internal::Factory::NewCodeDataContainer(int, v8::internal::AllocationType) */

void v8::internal::Factory::NewCodeDataContainer(Isolate *param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = New((Factory *)param_1,param_1 + 0x1d8);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    uVar1 = *puVar2;
  }
  *(undefined4 *)(uVar1 + 3) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(*puVar2 + 7) = param_2;
  return;
}

