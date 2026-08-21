
/* v8::internal::AssemblerBase::AddCodeTarget(v8::internal::Handle<v8::internal::Code>) */

ulong __thiscall v8::internal::AssemblerBase::AddCodeTarget(AssemblerBase *this,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long local_8;
  
  plVar1 = *(long **)(this + 0x50);
  uVar2 = (ulong)((long)plVar1 - *(long *)(this + 0x48)) >> 3;
  if (((int)uVar2 < 1 || param_2 == 0) || (plVar1[-1] != param_2)) {
    if (*(long **)(this + 0x58) == plVar1) {
      local_8 = param_2;
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::Code>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Code>>>
      ::__push_back_slow_path<v8::internal::Handle<v8::internal::Code>const&>
                ((vector<v8::internal::Handle<v8::internal::Code>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Code>>>
                  *)(this + 0x48),(Handle *)&local_8);
    }
    else {
      *plVar1 = param_2;
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
    }
  }
  else {
    uVar2 = (ulong)((int)uVar2 - 1);
  }
  return uVar2 & 0xffffffff;
}

