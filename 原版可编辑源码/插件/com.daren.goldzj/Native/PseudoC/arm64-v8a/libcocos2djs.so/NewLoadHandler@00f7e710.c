
/* v8::internal::Factory::NewLoadHandler(int, v8::internal::AllocationType) */

void v8::internal::Factory::NewLoadHandler(Isolate *param_1,int param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_2 - 1U < 3) {
    uVar1 = New((Factory *)param_1,param_1 + (ulong)(param_2 - 1U) * 8 + 0xde0);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

