
/* lua_cocos2dx_Texture2D_initWithImage(lua_State*) */

void lua_cocos2dx_Texture2D_initWithImage(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  Texture2D *this;
  ulong uVar5;
  undefined8 uVar6;
  Image *pIVar7;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Image",0), (uVar5 & 1) != 0)) {
      pIVar7 = (Image *)tolua_tousertype(param_1,2,0);
      uVar4 = cocos2d::Texture2D::initWithImage(this,pIVar7);
LAB_007e2098:
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar6 = 1;
      goto LAB_007e20d0;
    }
  }
  else if (((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar5 = luaval_is_usertype(param_1,2,"cc.Image",0), (uVar5 & 1) != 0)))) {
    uVar6 = tolua_tousertype(param_1,2,0);
    uVar5 = luaval_to_int32(param_1,3,&local_4c,"cc.Texture2D:initWithImage");
    if ((uVar5 & 1) != 0) {
      uVar4 = cocos2d::Texture2D::initWithImage(this,uVar6,local_4c);
      goto LAB_007e2098;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Texture2D:initWithImage",iVar2 + -1,1);
  uVar6 = 0;
LAB_007e20d0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

