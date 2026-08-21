
undefined8 FUN_008f88b8(undefined8 param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  
  iVar1 = lua_type(param_1,2);
  if (iVar1 == 0) {
    __s = "";
    sVar2 = 0;
  }
  else {
    __s = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
    sVar2 = strlen(__s);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &fairygui::HtmlObject::buttonResource,__s,sVar2);
  return 0;
}

