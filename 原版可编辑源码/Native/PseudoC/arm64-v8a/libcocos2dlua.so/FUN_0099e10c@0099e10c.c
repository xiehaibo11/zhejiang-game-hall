
undefined8 FUN_0099e10c(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Ref *this;
  __Dictionary *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      this = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (this != (Ref *)0x0) {
        cocos2d::Ref::Ref(this);
        *(undefined ***)(this + 0x28) = &PTR__LUA_TableViewDelegate_0169e358;
        *(undefined ***)this = &PTR__LUA_TableViewDelegate_0169e308;
        this_00 = (__Dictionary *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
        if (this_00 == (__Dictionary *)0x0) {
          this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
          if (this_00 == (__Dictionary *)0x0) goto LAB_0099e234;
          cocos2d::__Dictionary::__Dictionary(this_00);
          (**(code **)(*plVar3 + 0x300))(plVar3,this_00);
          cocos2d::Ref::release((Ref *)this_00);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"TableViewDelegate");
        cocos2d::__Dictionary::setObject(this_00,this,(basic_string *)local_60);
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        plVar3[0x9b] = (long)(this + 0x28);
        cocos2d::Ref::release(this);
      }
    }
    else {
      luaL_error(param_1,
                 "\'setDelegate\' function of TableView wrong number of arguments: %d, was expecting %d\n"
                 ,iVar2 + -1,0);
    }
  }
LAB_0099e234:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

