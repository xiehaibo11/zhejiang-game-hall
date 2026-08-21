
/* v8::internal::compiler::SourceIdAssigner::GetIdFor(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

ulong __thiscall
v8::internal::compiler::SourceIdAssigner::GetIdFor(SourceIdAssigner *this,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  uint local_2c;
  long *local_28;
  
  plVar1 = *(long **)(this + 8);
  uVar2 = (long)plVar1 - *(long *)this;
  local_28 = param_2;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)this + uVar4 * 8);
      local_2c = (uint)uVar4;
      if ((plVar3 == param_2) ||
         (((param_2 != (long *)0x0 && (plVar3 != (long *)0x0)) && (*plVar3 == *param_2)))) {
        if (*(uint **)(this + 0x20) < *(uint **)(this + 0x28)) {
          **(uint **)(this + 0x20) = local_2c;
          *(long *)(this + 0x20) = *(long *)(this + 0x20) + 4;
          return uVar4;
        }
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                  ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x18),(int *)&local_2c);
        return uVar4;
      }
      uVar4 = (ulong)(local_2c + 1);
    } while (uVar4 < (ulong)((long)uVar2 >> 3));
  }
  local_2c = (uint)(uVar2 >> 3);
  if (*(long **)(this + 0x10) == plVar1) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::SharedFunctionInfo>const&>
              ((vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                *)this,(Handle *)&local_28);
  }
  else {
    *plVar1 = (long)param_2;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  if (*(uint **)(this + 0x20) == *(uint **)(this + 0x28)) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x18),(int *)&local_2c);
  }
  else {
    **(uint **)(this + 0x20) = local_2c;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 4;
  }
  return (ulong)local_2c;
}

