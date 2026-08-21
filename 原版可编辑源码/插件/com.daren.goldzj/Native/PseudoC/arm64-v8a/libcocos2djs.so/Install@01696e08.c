
/* v8::internal::compiler::PrototypePropertyDependency::Install(v8::internal::MaybeObjectHandle
   const&) const */

void __thiscall
v8::internal::compiler::PrototypePropertyDependency::Install
          (PrototypePropertyDependency *this,MaybeObjectHandle *param_1)

{
  JSFunctionRef *this_00;
  ulong *puVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  this_00 = (JSFunctionRef *)(this + 8);
  puVar1 = (ulong *)JSFunctionRef::object(this_00);
  uVar4 = *puVar1 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar1 + 0x1b);
  pIVar2 = (Isolate *)ObjectRef::isolate((ObjectRef *)this_00);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
  }
  uVar3 = ObjectRef::isolate((ObjectRef *)this_00);
  DependentCode::InstallDependency(uVar3,param_1,puVar1,4);
  return;
}

