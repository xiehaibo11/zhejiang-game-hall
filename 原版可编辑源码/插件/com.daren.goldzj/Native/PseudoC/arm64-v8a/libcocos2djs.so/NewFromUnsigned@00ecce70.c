
/* v8::Integer::NewFromUnsigned(v8::Isolate*, unsigned int) */

void v8::Integer::NewFromUnsigned(Isolate *param_1,uint param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  double dVar3;
  
  if ((int)param_2 < 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x2c60);
    *(undefined4 *)(param_1 + 0x2c60) = 5;
    dVar3 = (double)param_2;
  }
  else {
    if (param_2 >> 0x1e == 0) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        internal::CanonicalHandleScope::Lookup
                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)param_2 << 1);
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = (ulong)param_2 << 1;
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x2c60);
    dVar3 = (double)(int)param_2;
    *(undefined4 *)(param_1 + 0x2c60) = 5;
  }
  internal::Factory::NewNumber<(v8::internal::AllocationType)0>((Factory *)param_1,dVar3);
  *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  return;
}

