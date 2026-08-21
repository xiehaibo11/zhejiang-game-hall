
/* v8::internal::compiler::ZoneStats::StatsScope::~StatsScope() */

void __thiscall v8::internal::compiler::ZoneStats::StatsScope::~StatsScope(StatsScope *this)

{
  *(long *)(*(long *)this + 0x20) = *(long *)(*(long *)this + 0x20) + -8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>,std::__ndk1::__map_value_compare<v8::internal::Zone*,std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>,std::__ndk1::less<v8::internal::Zone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>,std::__ndk1::__map_value_compare<v8::internal::Zone*,std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>,std::__ndk1::less<v8::internal::Zone*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::Zone*,unsigned_long>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}

