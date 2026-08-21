
/* v8::internal::RegExpUtils::GetLastIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>) */

void v8::internal::RegExpUtils::GetLastIndex(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  
  iVar2 = *(int *)(*param_2 - 1);
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x243);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar3;
  }
  if (iVar2 == *(int *)(uVar4 + 0x1b)) {
    uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    return;
  }
  Object::GetProperty(param_1,param_2,param_1 + 0x7b0);
  return;
}

