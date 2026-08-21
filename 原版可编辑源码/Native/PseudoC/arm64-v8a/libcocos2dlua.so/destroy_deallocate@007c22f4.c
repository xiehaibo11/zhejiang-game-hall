
/* std::__ndk1::__function::__func<char* (*)(char*, unsigned long, unsigned long*),
   std::__ndk1::allocator<char* (*)(char*, unsigned long, unsigned long*)>, char* (char*, unsigned
   long, unsigned long*)>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
::destroy_deallocate
          (__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
           *this)

{
  operator_delete(this);
  return;
}

