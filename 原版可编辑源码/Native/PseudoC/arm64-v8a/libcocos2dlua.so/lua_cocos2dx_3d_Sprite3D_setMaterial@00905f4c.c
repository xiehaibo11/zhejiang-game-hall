
/* lua_cocos2dx_3d_Sprite3D_setMaterial(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_setMaterial(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Sprite3D *this;
  ulong uVar4;
  Material *pMVar5;
  undefined4 uVar6;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Material",0), (uVar4 & 1) != 0)) {
      pMVar5 = (Material *)tolua_tousertype(param_1,2,0);
      cocos2d::Sprite3D::setMaterial(this,pMVar5);
LAB_00906060:
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00906098;
    }
  }
  else if (((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.Material",0), (uVar4 & 1) != 0)))) {
    pMVar5 = (Material *)tolua_tousertype(param_1,2,0);
    uVar4 = luaval_to_int32(param_1,3,&local_4c,"cc.Sprite3D:setMaterial");
    if ((uVar4 & 1) != 0) {
      cocos2d::Sprite3D::setMaterial(this,pMVar5,local_4c);
      goto LAB_00906060;
    }
  }
                    /* try { // try from 0090607c to 00a060c7 has its CatchHandler @ 0090607c
                       catch() { ... } // from try @ 0090607c with catch @ 0090607c
                       catch() { ... } // from try @ 009060cc with catch @ 0090607c */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Sprite3D:setMaterial",iVar2 + -1,1);
  uVar6 = 0;
LAB_00906098:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

