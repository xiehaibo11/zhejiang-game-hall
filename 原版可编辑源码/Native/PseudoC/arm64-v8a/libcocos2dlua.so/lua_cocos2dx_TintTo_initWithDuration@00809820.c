
/* lua_cocos2dx_TintTo_initWithDuration(lua_State*) */

void lua_cocos2dx_TintTo_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TintTo *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uchar local_6c [4];
  uchar local_68 [4];
  uchar local_64 [4];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (TintTo *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    uVar4 = luaval_to_number(param_1,2,&local_60,"cc.TintTo:initWithDuration");
    uVar5 = luaval_to_uint16(param_1,3,(ushort *)local_64,"cc.TintTo:initWithDuration");
    uVar6 = luaval_to_uint16(param_1,4,(ushort *)local_68,"cc.TintTo:initWithDuration");
    uVar7 = luaval_to_uint16(param_1,5,(ushort *)local_6c,"cc.TintTo:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) {
      uVar3 = cocos2d::TintTo::initWithDuration
                        (this,(float)local_60,local_64[0],local_68[0],local_6c[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar8 = 1;
      goto LAB_0080994c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TintTo_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TintTo:initWithDuration",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_0080994c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

