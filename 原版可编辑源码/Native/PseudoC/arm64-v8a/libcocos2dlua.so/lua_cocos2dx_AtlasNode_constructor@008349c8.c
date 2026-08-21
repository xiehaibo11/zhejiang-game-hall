
/* lua_cocos2dx_AtlasNode_constructor(lua_State*) */

bool lua_cocos2dx_AtlasNode_constructor(lua_State *param_1)

{
  int iVar1;
  AtlasNode *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x3f0);
    cocos2d::AtlasNode::AtlasNode(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.AtlasNode");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AtlasNode:AtlasNode",iVar1,0);
  }
  return iVar1 == 0;
}

