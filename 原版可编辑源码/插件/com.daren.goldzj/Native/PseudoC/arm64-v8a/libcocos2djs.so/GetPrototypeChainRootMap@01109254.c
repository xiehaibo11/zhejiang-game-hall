
/* v8::internal::Object::GetPrototypeChainRootMap(v8::internal::Isolate*) const */

ulong __thiscall v8::internal::Object::GetPrototypeChainRootMap(Object *this,Isolate *param_1)

{
  ulong uVar1;
  ulong local_18;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(
                                                  param_1 + 0x2bc8) - 1)) + 0x13)) + 0x1ef)) + 0x1b)
    ;
  }
  else {
    local_18 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1);
    uVar1 = Map::GetPrototypeChainRootMap((Map *)&local_18,param_1);
  }
  return uVar1;
}

