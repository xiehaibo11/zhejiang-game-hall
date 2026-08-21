
/* lua_cocos2dx_physics3d_Physics3D6DofConstraint_constructor(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3D6DofConstraint_constructor(lua_State *param_1)

{
  int iVar1;
  Physics3DConstraint *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x50);
    cocos2d::Physics3DConstraint::Physics3DConstraint(this);
    *(undefined4 *)(this + 0x40) = 5;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ed10;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Physics3D6DofConstraint");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12eebf9,iVar1,0
              );
  }
  return iVar1 == 0;
}

