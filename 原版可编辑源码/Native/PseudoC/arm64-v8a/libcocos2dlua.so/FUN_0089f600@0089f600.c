
undefined8 FUN_0089f600(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  LabelBMFont *this;
  LabelBMFont *this_00;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    this = operator_new(0x330,(nothrow_t *)&std::nothrow);
    if (this == (LabelBMFont *)0x0) {
      this_00 = (LabelBMFont *)0x0;
    }
    else {
      cocos2d::LabelBMFont::LabelBMFont(this);
      this_00 = this;
    }
    cocos2d::Ref::autorelease((Ref *)this_00);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this_00 + 0xc),(int *)(this_00 + 0x10),this,"cc.LabelBMFont");
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelBMFont:new",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

