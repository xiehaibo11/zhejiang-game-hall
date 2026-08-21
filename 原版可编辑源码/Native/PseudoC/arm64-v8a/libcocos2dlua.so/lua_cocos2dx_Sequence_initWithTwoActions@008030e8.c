
/* lua_cocos2dx_Sequence_initWithTwoActions(lua_State*) */

undefined8 lua_cocos2dx_Sequence_initWithTwoActions(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  Sequence *this;
  ulong uVar4;
  FiniteTimeAction *pFVar5;
  FiniteTimeAction *unaff_x21;
  
  this = (Sequence *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar4 = luaval_is_usertype(param_1,2,"cc.FiniteTimeAction",0), (uVar4 & 1) == 0)) {
        bVar1 = false;
      }
      else {
        unaff_x21 = (FiniteTimeAction *)tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) &&
          (uVar4 = luaval_is_usertype(param_1,3,"cc.FiniteTimeAction",0), (uVar4 & 1) != 0)) &&
         (pFVar5 = (FiniteTimeAction *)tolua_tousertype(param_1,3,0), bVar1)) {
        uVar3 = cocos2d::Sequence::initWithTwoActions(this,unaff_x21,pFVar5);
        tolua_pushboolean(param_1,uVar3 & 1);
        return 1;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Sequence_initWithTwoActions\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sequence:initWithTwoActions",iVar2 + -1,2);
  }
  return 0;
}

