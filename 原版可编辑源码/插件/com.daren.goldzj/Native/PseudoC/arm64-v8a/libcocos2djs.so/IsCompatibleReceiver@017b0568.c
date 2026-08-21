
/* v8::internal::CallOptimization::IsCompatibleReceiver(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::JSObject>) const */

undefined8 __thiscall
v8::internal::CallOptimization::IsCompatibleReceiver
          (CallOptimization *this,ulong *param_2,long param_3)

{
  CanonicalHandleScope *this_00;
  ulong *puVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(param_3 + 4) << 0x20 | 0x95b8);
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    pIVar2 = (Isolate *)((ulong)*(uint *)(param_3 + 4) << 0x20);
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar4);
  }
  uVar3 = IsCompatibleReceiverMap(this,puVar1,param_3);
  return uVar3;
}

