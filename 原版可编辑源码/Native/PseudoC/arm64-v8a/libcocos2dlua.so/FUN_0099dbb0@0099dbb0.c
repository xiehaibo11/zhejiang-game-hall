
undefined8 FUN_0099dbb0(long param_1)

{
  int iVar1;
  long *plVar2;
  Ref *this;
  
  if (param_1 != 0) {
    plVar2 = (long *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      this = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (this != (Ref *)0x0) {
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        cocos2d::Ref::Ref(this);
        *(undefined ***)this = &PTR__LuaScrollViewDelegate_0169e260;
        *(undefined ***)(this + 0x28) = &PTR__LuaScrollViewDelegate_0169e290;
        (**(code **)(*plVar2 + 0x300))(plVar2,this);
        plVar2[0x65] = (long)(this + 0x28);
        cocos2d::Ref::release(this);
      }
    }
    else {
      luaL_error(param_1,
                 "\'setDelegate\' function of ScrollView wrong number of arguments: %d, was expecting %d\n"
                 ,iVar1 + -1,0);
    }
  }
  return 0;
}

