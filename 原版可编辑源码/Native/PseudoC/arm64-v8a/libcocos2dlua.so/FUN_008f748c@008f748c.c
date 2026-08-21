
undefined8 FUN_008f748c(undefined8 param_1)

{
  char *__s;
  size_t sVar1;
  
  __s = (char *)lua_tolstring(param_1,2,0);
  sVar1 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &fairygui::UIConfig::horizontalScrollBar,__s,sVar1);
  return 0;
}

