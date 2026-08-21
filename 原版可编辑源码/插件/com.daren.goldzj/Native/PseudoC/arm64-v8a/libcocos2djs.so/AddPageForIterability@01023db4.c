
/* v8::internal::Sweeper::AddPageForIterability(v8::internal::Page*) */

void __thiscall v8::internal::Sweeper::AddPageForIterability(Sweeper *this,Page *param_1)

{
  Page *local_18;
  
  local_18 = param_1;
  if (*(undefined8 **)(this + 0x118) == *(undefined8 **)(this + 0x120)) {
    std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
    __push_back_slow_path<v8::internal::Page*const&>
              ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
               (this + 0x110),&local_18);
  }
  else {
    **(undefined8 **)(this + 0x118) = param_1;
    *(long *)(this + 0x118) = *(long *)(this + 0x118) + 8;
  }
  *(undefined8 *)(local_18 + 0xa8) = 1;
  return;
}

