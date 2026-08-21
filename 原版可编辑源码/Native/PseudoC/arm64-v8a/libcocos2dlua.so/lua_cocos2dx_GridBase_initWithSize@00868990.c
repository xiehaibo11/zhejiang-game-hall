
/* lua_cocos2dx_GridBase_initWithSize(lua_State*) */

void lua_cocos2dx_GridBase_initWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GridBase *this;
  ulong uVar5;
  ulong uVar6;
  Texture2D *pTVar7;
  undefined8 uVar8;
  bool local_64 [4];
  Size aSStack_60 [16];
  Size local_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GridBase *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    cocos2d::Size::Size(aSStack_60);
    uVar5 = luaval_to_size(param_1,2,aSStack_60,"cc.GridBase:initWithSize");
    if ((uVar5 & 1) != 0) {
      uVar4 = cocos2d::GridBase::initWithSize(this,aSStack_60);
LAB_00868bf4:
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar8 = 1;
      goto LAB_00868c2c;
    }
    break;
  case 3:
    cocos2d::Size::Size(local_50);
    uVar5 = luaval_to_size(param_1,2,local_50,"cc.GridBase:initWithSize");
    if ((uVar5 & 1) != 0) {
      cocos2d::Rect::Rect((Rect *)aSStack_60);
      uVar5 = luaval_to_rect(param_1,3,aSStack_60,"cc.GridBase:initWithSize");
      if ((uVar5 & 1) != 0) {
        uVar4 = cocos2d::GridBase::initWithSize(this,local_50,aSStack_60);
        goto LAB_00868bf4;
      }
    }
    break;
  case 4:
    cocos2d::Size::Size(aSStack_60);
    uVar5 = luaval_to_size(param_1,2,aSStack_60,"cc.GridBase:initWithSize");
    if (((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
       ((iVar3 = lua_gettop(param_1), 2 < iVar3 &&
        (((uVar6 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar6 & 1) != 0 &&
          (pTVar7 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)) &&
         (uVar5 = luaval_to_boolean(param_1,4,(bool *)local_50,"cc.GridBase:initWithSize"),
         (uVar5 & 1) != 0)))))) {
      uVar4 = cocos2d::GridBase::initWithSize(this,aSStack_60,pTVar7,(bool)local_50[0]);
      goto LAB_00868bf4;
    }
    break;
  case 5:
    cocos2d::Size::Size(local_50);
    uVar5 = luaval_to_size(param_1,2,local_50,"cc.GridBase:initWithSize");
    if ((((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       (((uVar6 = luaval_is_usertype(param_1,3,"cc.Texture2D",0), (uVar6 & 1) != 0 &&
         (pTVar7 = (Texture2D *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)) &&
        (uVar5 = luaval_to_boolean(param_1,4,local_64,"cc.GridBase:initWithSize"), (uVar5 & 1) != 0)
        ))) {
      cocos2d::Rect::Rect((Rect *)aSStack_60);
      uVar5 = luaval_to_rect(param_1,5,aSStack_60,"cc.GridBase:initWithSize");
      if ((uVar5 & 1) != 0) {
        uVar4 = cocos2d::GridBase::initWithSize(this,local_50,pTVar7,local_64[0],aSStack_60);
        goto LAB_00868bf4;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GridBase:initWithSize",iVar2 + -1,4);
  uVar8 = 0;
LAB_00868c2c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

