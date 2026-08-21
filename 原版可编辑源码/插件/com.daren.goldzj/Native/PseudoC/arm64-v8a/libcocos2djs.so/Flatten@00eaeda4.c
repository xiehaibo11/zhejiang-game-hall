
/* v8::internal::String::Flatten(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   v8::internal::AllocationType) */

ulong * v8::internal::String::Flatten(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  uVar3 = uVar4 & 0xffffffff00000000;
  if ((*(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) &&
     ((*(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) & 7) == 1)) {
    if (((*(ushort *)((uVar3 | *(uint *)(uVar4 - 1)) + 7) & 7) == 1) &&
       (*(int *)((uVar3 | *(uint *)(uVar4 + 0xf)) + 7) != 0)) {
      puVar2 = (ulong *)SlowFlatten(param_1);
      return puVar2;
    }
    uVar3 = uVar3 | *(uint *)(uVar4 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)pIVar1;
      if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = param_2 + 1;
      *param_2 = uVar3;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
  }
  uVar3 = *param_2;
  uVar4 = uVar3 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) < 0x40) &&
     ((*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) & 7) == 5)) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)pIVar1;
      if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = param_2 + 1;
      *param_2 = uVar3;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
  }
  return param_2;
}

