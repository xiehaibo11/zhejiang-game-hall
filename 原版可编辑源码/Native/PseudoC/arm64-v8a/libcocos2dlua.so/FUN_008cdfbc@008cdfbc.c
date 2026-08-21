
undefined8 FUN_008cdfbc(undefined8 param_1)

{
  int iVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  char *__s;
  size_t sVar2;
  
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    __s = (char *)tolua_tostring(param_1,2,0);
    sVar2 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,__s,sVar2);
  }
  return 0;
}

