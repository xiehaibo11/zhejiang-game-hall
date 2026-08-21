
/* v8::internal::JSReceiver::GetFunctionRealm(v8::internal::Handle<v8::internal::JSReceiver>) */

ulong * v8::internal::JSReceiver::GetFunctionRealm(ulong *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong local_28 [5];
  
  while( true ) {
    local_28[0] = *param_1;
    pIVar1 = (Isolate *)(local_28[0] & 0xffffffff00000000);
    uVar3 = (ulong)pIVar1 | 7;
    if (*(short *)(uVar3 + *(uint *)(local_28[0] - 1)) == 0xa9) {
      puVar2 = (ulong *)JSProxy::GetFunctionRealm(param_1);
      return puVar2;
    }
    if (*(short *)(uVar3 + *(uint *)(local_28[0] - 1)) == 0x439) break;
    if (*(short *)(uVar3 + *(uint *)(local_28[0] - 1)) != 0x438) {
      puVar2 = (ulong *)GetCreationContext((JSReceiver *)local_28);
      return puVar2;
    }
    uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(local_28[0] + 0xb);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_1 = *(ulong **)(pIVar1 + 0x95a0);
      if (param_1 == *(ulong **)(pIVar1 + 0x95a8)) {
        param_1 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = param_1 + 1;
      *param_1 = uVar3;
    }
    else {
      param_1 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
  }
  uVar3 = (ulong)pIVar1 |
          (ulong)*(uint *)(((ulong)pIVar1 |
                           (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(local_28[0] + 0xf)) -
                                           1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
  }
  return puVar2;
}

