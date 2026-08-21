
/* cocos2d::LuaStack::pushLuaValueDict(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::LuaValue,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::LuaValue> > >
   const&) */

void __thiscall cocos2d::LuaStack::pushLuaValueDict(LuaStack *this,map *param_1)

{
  bool bVar1;
  map *pmVar2;
  long lVar3;
  map *pmVar4;
  
  lua_createtable(*(undefined8 *)(this + 0x28),0,0);
  pmVar4 = *(map **)param_1;
  while (pmVar4 != param_1 + 8) {
    if (((byte)pmVar4[0x20] & 1) == 0) {
      pmVar2 = pmVar4 + 0x21;
    }
    else {
      pmVar2 = *(map **)(pmVar4 + 0x30);
    }
    lua_pushstring(*(undefined8 *)(this + 0x28),pmVar2);
    (**(code **)(*(long *)this + 0xa0))(this,pmVar4 + 0x38);
    lua_rawset(*(undefined8 *)(this + 0x28),0xfffffffd);
    pmVar2 = *(map **)(pmVar4 + 8);
    if (*(map **)(pmVar4 + 8) == (map *)0x0) {
      pmVar2 = pmVar4 + 0x10;
      bVar1 = *(map **)*(map **)pmVar2 != pmVar4;
      pmVar4 = *(map **)pmVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pmVar2;
          pmVar2 = (map *)(lVar3 + 0x10);
          pmVar4 = *(map **)pmVar2;
        } while (*(long *)pmVar4 != lVar3);
      }
    }
    else {
      do {
        pmVar4 = pmVar2;
        pmVar2 = *(map **)pmVar4;
      } while (*(map **)pmVar4 != (map *)0x0);
    }
  }
  return;
}

