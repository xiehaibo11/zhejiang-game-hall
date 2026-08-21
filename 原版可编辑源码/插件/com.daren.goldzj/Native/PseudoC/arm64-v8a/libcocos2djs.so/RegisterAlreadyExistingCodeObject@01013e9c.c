
/* v8::internal::CodeObjectRegistry::RegisterAlreadyExistingCodeObject(unsigned long) */

void __thiscall
v8::internal::CodeObjectRegistry::RegisterAlreadyExistingCodeObject
          (CodeObjectRegistry *this,ulong param_1)

{
  ulong local_18;
  
  if (*(ulong **)(this + 8) == *(ulong **)(this + 0x10)) {
    local_18 = param_1;
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)this,&local_18);
  }
  else {
    **(ulong **)(this + 8) = param_1;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  return;
}

