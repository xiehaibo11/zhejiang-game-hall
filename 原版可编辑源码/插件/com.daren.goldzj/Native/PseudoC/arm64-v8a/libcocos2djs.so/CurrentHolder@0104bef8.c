
/* v8::internal::JsonStringifier::CurrentHolder(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall
v8::internal::JsonStringifier::CurrentHolder
          (JsonStringifier *this,undefined8 param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (*(long *)(this + 0x58) == *(long *)(this + 0x60)) {
    pIVar1 = *(Isolate **)this;
    uVar3 = *(ulong *)(pIVar1 + 0x2bc8) & 0xffffffff00000000;
    uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(pIVar1 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 499);
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
    puVar2 = (ulong *)Factory::NewJSObject((Factory *)pIVar1,puVar2,0);
    JSObject::AddProperty(*(long *)this,puVar2,*(long *)this + 200,param_3,0);
  }
  else {
    pIVar1 = *(Isolate **)this;
    uVar3 = **(ulong **)(*(long *)(this + 0x60) + -8);
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
  }
  return puVar2;
}

