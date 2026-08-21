
/* v8::internal::Heap::AddNearHeapLimitCallback(unsigned long (*)(void*, unsigned long, unsigned
   long), void*) */

void __thiscall
v8::internal::Heap::AddNearHeapLimitCallback
          (Heap *this,_func_ulong_void_ptr_ulong_ulong *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  _func_ulong_void_ptr_ulong_ulong *p_Var3;
  _func_ulong_void_ptr_ulong_ulong *local_20;
  void *pvStack_18;
  
  puVar2 = *(undefined8 **)(this + 200);
  puVar1 = *(undefined8 **)(this + 0xd0);
  if (99 < (ulong)((long)puVar1 - (long)puVar2 >> 4)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","near_heap_limit_callbacks_.size() < kMaxCallbacks");
  }
  do {
    if (puVar2 == puVar1) {
      if (puVar1 < *(undefined8 **)(this + 0xd8)) {
        puVar1[1] = param_2;
        *puVar1 = param_1;
        *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x10;
      }
      else {
        local_20 = param_1;
        pvStack_18 = param_2;
        std::__ndk1::
        vector<std::__ndk1::pair<unsigned_long(*)(void*,unsigned_long,unsigned_long),void*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long(*)(void*,unsigned_long,unsigned_long),void*>>>
        ::
        __push_back_slow_path<std::__ndk1::pair<unsigned_long(*)(void*,unsigned_long,unsigned_long),void*>>
                  ((vector<std::__ndk1::pair<unsigned_long(*)(void*,unsigned_long,unsigned_long),void*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long(*)(void*,unsigned_long,unsigned_long),void*>>>
                    *)(this + 200),(pair *)&local_20);
      }
      return;
    }
    p_Var3 = (_func_ulong_void_ptr_ulong_ulong *)*puVar2;
    puVar2 = puVar2 + 2;
  } while (p_Var3 != param_1);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","callback_data.first != callback");
}

