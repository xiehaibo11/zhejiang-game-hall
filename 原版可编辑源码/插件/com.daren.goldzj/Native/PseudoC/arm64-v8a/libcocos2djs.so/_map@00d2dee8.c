
/* std::__ndk1::map<unsigned long, unsigned int, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const, unsigned int> > >::~map() */

void __thiscall
std::__ndk1::
map<unsigned_long,unsigned_int,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,unsigned_int>>>
::~map(map<unsigned_long,unsigned_int,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,unsigned_int>>>
       *this)

{
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}

