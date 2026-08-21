
/* v8::internal::Space::AddAllocationObserver(v8::internal::AllocationObserver*) */

void __thiscall v8::internal::Space::AddAllocationObserver(Space *this,AllocationObserver *param_1)

{
  AllocationObserver *local_8;
  
  local_8 = param_1;
  if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
    std::__ndk1::
    vector<v8::internal::AllocationObserver*,std::__ndk1::allocator<v8::internal::AllocationObserver*>>
    ::__push_back_slow_path<v8::internal::AllocationObserver*const&>
              ((vector<v8::internal::AllocationObserver*,std::__ndk1::allocator<v8::internal::AllocationObserver*>>
                *)(this + 8),&local_8);
  }
  else {
    **(undefined8 **)(this + 0x10) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}

