
/* v8::internal::Map::TryUpdate(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>) */

ulong * v8::internal::Map::TryUpdate(Isolate *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if ((*(uint *)(*param_2 + 0xb) >> 0x18 & 1) != 0) {
    uVar1 = TryUpdateSlow();
    if ((int)uVar1 == 0) {
      param_2 = (ulong *)0x0;
    }
    else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)(param_1 + 0x95a0);
      if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_2 + 1;
      *param_2 = uVar1;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    }
  }
  return param_2;
}

