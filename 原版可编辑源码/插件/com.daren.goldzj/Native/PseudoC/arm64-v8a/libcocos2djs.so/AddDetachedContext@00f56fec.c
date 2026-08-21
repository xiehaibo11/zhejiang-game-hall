
/* v8::internal::Isolate::AddDetachedContext(v8::internal::Handle<v8::internal::Context>) */

void __thiscall v8::internal::Isolate::AddDetachedContext(Isolate *this,undefined8 param_2)

{
  Isolate *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  
  pIVar1 = this + 0x95a0;
  puVar2 = *(undefined8 **)pIVar1;
  puVar3 = *(undefined8 **)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  local_50[0] = 1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_48 = puVar2;
    if (puVar3 == puVar2) {
      local_48 = (undefined8 *)HandleScope::Extend(this);
    }
    *(undefined8 **)pIVar1 = local_48 + 1;
    *local_48 = 0;
  }
  else {
    local_48 = (undefined8 *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),0);
  }
  local_60 = 0;
  uStack_58 = param_2;
  puVar4 = (undefined8 *)WeakArrayList::AddToEnd(this,this + 0xf68,local_50,&local_60);
  *(undefined8 *)(this + 0xf68) = *puVar4;
  *(undefined8 **)pIVar1 = puVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(undefined8 **)(this + 0x95a8) != puVar3) {
    *(undefined8 **)(this + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(this);
  }
  return;
}

