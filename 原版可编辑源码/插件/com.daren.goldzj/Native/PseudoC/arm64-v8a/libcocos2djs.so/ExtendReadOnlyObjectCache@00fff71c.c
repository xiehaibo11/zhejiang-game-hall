
/* v8::internal::ReadOnlyHeap::ExtendReadOnlyObjectCache() */

long __thiscall v8::internal::ReadOnlyHeap::ExtendReadOnlyObjectCache(ReadOnlyHeap *this)

{
  long lVar1;
  undefined8 local_8;
  
  local_8 = 0;
  if (*(undefined8 **)(this + 0x18) < *(undefined8 **)(this + 0x20)) {
    **(undefined8 **)(this + 0x18) = 0;
    lVar1 = *(long *)(this + 0x18) + 8;
    *(long *)(this + 0x18) = lVar1;
  }
  else {
    std::__ndk1::vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>>::
    __push_back_slow_path<v8::internal::Object>
              ((vector<v8::internal::Object,std::__ndk1::allocator<v8::internal::Object>> *)
               (this + 0x10),(Object *)&local_8);
    lVar1 = *(long *)(this + 0x18);
  }
  return lVar1 + -8;
}

