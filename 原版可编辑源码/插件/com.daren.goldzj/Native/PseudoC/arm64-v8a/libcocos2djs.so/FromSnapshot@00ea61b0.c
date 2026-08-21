
/* v8::ObjectTemplate::FromSnapshot(v8::Isolate*, unsigned long) */

ulong * v8::ObjectTemplate::FromSnapshot(Isolate *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0xf88);
  if ((((int)param_2 < *(int *)(uVar3 + 3) >> 1) &&
      (uVar1 = *(uint *)(uVar3 + (long)((int)param_2 << 2) + 7), (uVar1 & 1) != 0)) &&
     (uVar4 = uVar3 & 0xffffffff00000000 | (ulong)uVar1,
     *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x4f)) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  return puVar2;
}

