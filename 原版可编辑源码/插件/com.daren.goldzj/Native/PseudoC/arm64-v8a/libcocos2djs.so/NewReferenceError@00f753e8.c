
/* v8::internal::Factory::NewReferenceError(v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::Factory::NewReferenceError
          (Factory *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x39b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(this + 0x95a0);
    if (puVar1 == *(ulong **)(this + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  NewError(this,puVar1,param_2,param_3,param_4,param_5);
  return;
}

