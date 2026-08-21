
/* v8::internal::PreparseDataBuilder::AddChild(v8::internal::PreparseDataBuilder*) */

void __thiscall
v8::internal::PreparseDataBuilder::AddChild(PreparseDataBuilder *this,PreparseDataBuilder *param_1)

{
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  PreparseDataBuilder *local_8;
  
  this_00 = *(vector<void*,std::__ndk1::allocator<void*>> **)(this + 0x20);
  if (*(undefined8 **)(this_00 + 8) < *(undefined8 **)(this_00 + 0x10)) {
    **(undefined8 **)(this_00 + 8) = param_1;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  else {
    local_8 = param_1;
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (this_00,&local_8);
  }
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  return;
}

