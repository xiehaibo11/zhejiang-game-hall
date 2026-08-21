
/* v8::internal::AddressToTraceMap::Clear() */

void __thiscall v8::internal::AddressToTraceMap::Clear(AddressToTraceMap *this)

{
  AddressToTraceMap *pAVar1;
  
  pAVar1 = this + 8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::AddressToTraceMap::RangeStack>>>
             *)this,*(__tree_node **)pAVar1);
  *(AddressToTraceMap **)this = pAVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pAVar1 = 0;
  return;
}

