
void FUN_010a6244(undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  CanonicalHandleScope *this;
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  undefined8 local_48;
  
  uVar3 = *param_3;
  this = *(CanonicalHandleScope **)((ulong)*(uint *)(param_2 + 4) << 0x20 | 0x95b8);
  local_48 = param_4;
  if (this == (CanonicalHandleScope *)0x0) {
    pIVar2 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar3);
  }
  FUN_010a6df4(param_2,puVar1,&local_48);
  FUN_010a6fa8(param_2,param_3,local_48,param_5,param_6);
  return;
}

