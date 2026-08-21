
/* lua_cocos2dx_ShatteredTiles3D_initWithDuration(lua_State*) */

void lua_cocos2dx_ShatteredTiles3D_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ShatteredTiles3D *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool local_70 [4];
  int local_6c;
  Size aSStack_68 [8];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (ShatteredTiles3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    cocos2d::Size::Size(aSStack_68);
    uVar4 = luaval_to_number(param_1,2,&local_60,"cc.ShatteredTiles3D:initWithDuration");
    uVar5 = luaval_to_size(param_1,3,aSStack_68,"cc.ShatteredTiles3D:initWithDuration");
    uVar6 = luaval_to_int32(param_1,4,&local_6c,"cc.ShatteredTiles3D:initWithDuration");
    uVar7 = luaval_to_boolean(param_1,5,local_70,"cc.ShatteredTiles3D:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      uVar3 = cocos2d::ShatteredTiles3D::initWithDuration
                        (this,(float)local_60,aSStack_68,local_6c,local_70[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar8 = 1;
      goto LAB_0082f7c0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ShatteredTiles3D_initWithDuration\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ShatteredTiles3D:initWithDuration",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_0082f7c0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

