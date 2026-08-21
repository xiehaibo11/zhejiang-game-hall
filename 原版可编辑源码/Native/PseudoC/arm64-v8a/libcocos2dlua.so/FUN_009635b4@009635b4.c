
undefined8 FUN_009635b4(long param_1)

{
  int iVar1;
  EditBox *this;
  
  if (param_1 != 0) {
    this = (EditBox *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      cocos2d::ui::EditBox::unregisterScriptEditBoxHandler(this);
    }
    else {
      luaL_error(param_1,
                 "%s function of EditBox  has wrong number of arguments: %d, was expecting %d\n",
                 &DAT_012d4b12,iVar1 + -1,0);
    }
  }
  return 0;
}

