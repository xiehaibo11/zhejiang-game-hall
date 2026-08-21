
/* lua_cocos2dx_physics3d_Physics3DRigidBody_constructor(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DRigidBody_constructor(lua_State *param_1)

{
  int iVar1;
  Physics3DRigidBody *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0xa0);
    cocos2d::Physics3DRigidBody::Physics3DRigidBody(this);
                    /* try { // try from 009bbd48 to 00abbd4f has its CatchHandler @ 009bbdc8 */
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 009bbd50 to 00abbdeb has its CatchHandler @ 009bbcc0 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Physics3DRigidBody");
  }
  else {
                    /* try { // try from 009bbd18 to 00abbd1f has its CatchHandler @ 009bbdd8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:Physics3DRigidBody",iVar1,0);
  }
  return iVar1 == 0;
}

