
/* v8::internal::Factory::NewFunctionFromSharedFunctionInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::AllocationType) */

undefined8 __thiscall
v8::internal::Factory::NewFunctionFromSharedFunctionInfo
          (Factory *this,long *param_2,ulong *param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *param_3 & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)(((ulong)(*(uint *)(*param_2 + 0x1b) >> 0xd) & 0x7c) +
                            (uVar3 | *(uint *)((uVar3 | *(uint *)(*param_3 - 1)) + 0x13)) + 0x2ab);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(this + 0x95a0);
    if (puVar1 == *(ulong **)(this + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  uVar2 = NewFunction(this,puVar1,param_2,param_3,param_4);
  Compiler::PostInstantiation();
  return uVar2;
}

