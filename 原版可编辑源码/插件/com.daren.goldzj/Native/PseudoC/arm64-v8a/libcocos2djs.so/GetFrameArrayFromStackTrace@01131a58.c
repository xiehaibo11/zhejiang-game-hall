
/* v8::internal::GetFrameArrayFromStackTrace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FixedArray>) */

void v8::internal::GetFrameArrayFromStackTrace(Factory *param_1,ulong *param_2)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (*(uint *)(uVar3 + 3) < 2) {
    Factory::NewFrameArray(param_1,0);
    return;
  }
  pFVar1 = param_1 + 0x95a0;
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    uVar3 = *puVar2;
  }
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  return;
}

