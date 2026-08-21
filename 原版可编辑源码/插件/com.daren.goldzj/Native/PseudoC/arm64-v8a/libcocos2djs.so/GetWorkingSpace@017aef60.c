
/* v8::internal::compiler::StateValuesCache::GetWorkingSpace(unsigned long) */

long __thiscall
v8::internal::compiler::StateValuesCache::GetWorkingSpace(StateValuesCache *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
  *this_00;
  
  this_00 = (vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
             *)(this + 0x20);
  lVar2 = *(long *)this_00;
  uVar3 = *(long *)(this + 0x28) - lVar2 >> 6;
  if (uVar3 <= param_1) {
    uVar1 = param_1 + 1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        *(ulong *)(this + 0x28) = lVar2 + uVar1 * 0x40;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
      ::__append(this_00,uVar1 - uVar3);
      lVar2 = *(long *)this_00;
    }
  }
  return lVar2 + param_1 * 0x40;
}

