
/* lua_cocos2dx_LabelAtlas_constructor(lua_State*) */

bool lua_cocos2dx_LabelAtlas_constructor(lua_State *param_1)

{
  int iVar1;
  AtlasNode *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x410);
    cocos2d::AtlasNode::AtlasNode(this);
    *(undefined ***)this = &PTR__LabelAtlas_016fe328;
    *(undefined ***)(this + 0x2f8) = &PTR__LabelAtlas_016fe8a0;
    *(undefined ***)(this + 1000) = &PTR__LabelAtlas_016fe8e0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x3f0),"");
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.LabelAtlas");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelAtlas:LabelAtlas",iVar1,0);
  }
  return iVar1 == 0;
}

