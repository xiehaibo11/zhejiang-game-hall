
undefined8 FUN_008fb2b8(undefined8 param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  char *__s;
  size_t sVar1;
  
                    /* try { // try from 008fb2c0 to 009fb2f7 has its CatchHandler @ 008fb36c */
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         tolua_tousertype(param_1,1,0);
  __s = (char *)lua_tolstring(param_1,2,0);
  sVar1 = strlen(__s);
                    /* try { // try from 008fb2f8 to 009fb31f has its CatchHandler @ 008fb270 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this,__s,sVar1);
  return 0;
}

