
/* v8::internal::JSProxy::GetFunctionRealm(v8::internal::Handle<v8::internal::JSProxy>) */

undefined8 v8::internal::JSProxy::GetFunctionRealm(ulong *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  
  uVar4 = *param_1;
  pIVar5 = (Isolate *)(uVar4 & 0xffffffff00000000);
  if (*(ushort *)
       (((ulong)pIVar5 | 7) + (ulong)*(uint *)(((ulong)pIVar5 | (ulong)*(uint *)(uVar4 + 0xb)) - 1))
      < 0xa9) {
    puVar1 = (undefined8 *)Factory::NewTypeError((Factory *)pIVar5,0x90,0,0,0);
    Isolate::Throw(pIVar5,*puVar1,0);
    return 0;
  }
  uVar4 = (ulong)pIVar5 | (ulong)*(uint *)(uVar4 + 7);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
  }
  uVar3 = JSReceiver::GetFunctionRealm();
  return uVar3;
}

