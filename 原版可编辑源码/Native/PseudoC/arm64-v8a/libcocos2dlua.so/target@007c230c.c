
/* std::__ndk1::__function::__func<char* (*)(char*, unsigned long, unsigned long*),
   std::__ndk1::allocator<char* (*)(char*, unsigned long, unsigned long*)>, char* (char*, unsigned
   long, unsigned long*)>::target(std::type_info const&) const */

__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
* __thiscall
std::__ndk1::__function::
__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
::target(__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
         *this,type_info *param_1)

{
  __func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
  *p_Var1;
  
  p_Var1 = this + 8;
  if (*(char **)(param_1 + 8) != "PFPcS_mPmE") {
    p_Var1 = (__func<char*(*)(char*,unsigned_long,unsigned_long*),std::__ndk1::allocator<char*(*)(char*,unsigned_long,unsigned_long*)>,char*(char*,unsigned_long,unsigned_long*)>
              *)0x0;
  }
  return p_Var1;
}

