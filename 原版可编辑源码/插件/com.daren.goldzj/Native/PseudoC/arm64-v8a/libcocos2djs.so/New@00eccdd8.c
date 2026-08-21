
/* v8::Integer::New(v8::Isolate*, int) */

void v8::Integer::New(Isolate *param_1,int param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if ((long)param_2 + 0x40000000U >> 0x1f == 0) {
    uVar3 = (long)param_2 << 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x2c60);
    *(undefined4 *)(param_1 + 0x2c60) = 5;
    internal::Factory::NewNumber<(v8::internal::AllocationType)0>
              ((Factory *)param_1,(double)param_2);
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  }
  return;
}

