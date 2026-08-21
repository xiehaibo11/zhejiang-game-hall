
/* v8::internal::KeyAccumulator::CollectAccessCheckInterceptorKeys(v8::internal::Handle<v8::internal::AccessCheckInfo>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::JSObject>) */

undefined8 __thiscall
v8::internal::KeyAccumulator::CollectAccessCheckInterceptorKeys
          (KeyAccumulator *this,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (this[0x29] == (KeyAccumulator)0x0) {
    pIVar2 = *(Isolate **)this;
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
    }
    cVar1 = FUN_010e2a38(param_3,param_4,puVar3,this,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  pIVar2 = *(Isolate **)this;
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  cVar1 = FUN_010e2a38(param_3,param_4,puVar3,this,1);
  uVar4 = 0;
  if (cVar1 != '\0') {
    uVar4 = 0x101;
  }
  return uVar4;
}

