
/* void v8::internal::MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)0>() */

void __thiscall
v8::internal::MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)0>
          (MemoryChunk *this)

{
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  *this_00;
  
  this_00 = *(__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
              **)(this + 0x88);
  if (this_00 !=
      (__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
       *)0x0) {
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(this_00,*(__tree_node **)(this_00 + 8));
    operator_delete(this_00);
    *(undefined8 *)(this + 0x88) = 0;
  }
  return;
}

