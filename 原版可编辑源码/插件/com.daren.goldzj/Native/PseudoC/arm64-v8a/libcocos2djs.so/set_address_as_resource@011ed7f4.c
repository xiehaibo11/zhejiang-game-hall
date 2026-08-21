
/* v8::internal::ExternalString::set_address_as_resource(unsigned long) */

void __thiscall
v8::internal::ExternalString::set_address_as_resource(ExternalString *this,ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *(ulong *)(*(long *)this + 0xb) = param_1;
  uVar2 = *(ulong *)this;
  if ((*(byte *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) >> 4 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
    *(undefined8 *)(uVar2 + 0x13) = uVar1;
  }
  return;
}

