
/* WARNING: Removing unreachable block (ram,0x008469a8) */
/* WARNING: Removing unreachable block (ram,0x008469b8) */
/* lua_cocos2dx_MotionStreak_initWithFade(lua_State*) */

void lua_cocos2dx_MotionStreak_initWithFade(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  MotionStreak *this;
  ulong uVar5;
  Texture2D *pTVar6;
  undefined8 uVar7;
  int iVar8;
  double local_80;
  undefined8 local_78;
  void *local_70;
  Color3B aCStack_68 [8];
  double local_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (MotionStreak *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    uVar5 = luaval_to_number(param_1,2,&local_80,"cc.MotionStreak:initWithFade");
    if ((((uVar5 & 1) != 0) &&
        (uVar5 = luaval_to_number(param_1,3,&dStack_50,"cc.MotionStreak:initWithFade"),
        (uVar5 & 1) != 0)) &&
       (uVar5 = luaval_to_number(param_1,4,&local_58,"cc.MotionStreak:initWithFade"),
       (uVar5 & 1) != 0)) {
      cocos2d::Color3B::Color3B((Color3B *)&local_60);
      uVar5 = luaval_to_color3b(param_1,5,(Color3B *)&local_60,"cc.MotionStreak:initWithFade");
      if (((param_1 == (lua_State *)0x0) || ((uVar5 & 1) == 0)) ||
         ((iVar3 = lua_gettop(param_1), iVar3 < 6 ||
          (uVar5 = luaval_is_usertype(param_1,6,"cc.Texture2D",0), (uVar5 & 1) == 0))))
      goto LAB_008468bc;
      pTVar6 = (Texture2D *)tolua_tousertype(param_1,6,0);
      uVar4 = cocos2d::MotionStreak::initWithFade
                        (this,(float)local_80,(float)dStack_50,(float)local_58,(Color3B *)&local_60,
                         pTVar6);
      tolua_pushboolean(param_1,uVar4 & 1);
LAB_00846a24:
      uVar7 = 1;
      goto LAB_008469fc;
    }
LAB_008468bc:
    uVar5 = luaval_to_number(param_1,2,&dStack_50,"cc.MotionStreak:initWithFade");
    if (((uVar5 & 1) != 0) &&
       (uVar5 = luaval_to_number(param_1,3,&local_58,"cc.MotionStreak:initWithFade"),
       (uVar5 & 1) != 0)) {
      uVar5 = luaval_to_number(param_1,4,&local_60,"cc.MotionStreak:initWithFade");
      iVar3 = 4;
      if ((uVar5 & 1) != 0) {
        cocos2d::Color3B::Color3B(aCStack_68);
        uVar5 = luaval_to_color3b(param_1,5,aCStack_68,"cc.MotionStreak:initWithFade");
        if ((uVar5 & 1) == 0) goto LAB_008469d8;
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0.0;
        uVar5 = luaval_to_std_string
                          (param_1,6,(basic_string *)&local_80,"cc.MotionStreak:initWithFade");
        if ((uVar5 & 1) == 0) {
          iVar8 = 4;
          iVar3 = 4;
        }
        else {
          uVar4 = cocos2d::MotionStreak::initWithFade
                            (this,(float)dStack_50,(float)local_58,(float)local_60,aCStack_68,
                             (basic_string *)&local_80);
          tolua_pushboolean(param_1,uVar4 & 1);
          iVar8 = 1;
          iVar3 = 1;
        }
        if (((ulong)local_80 & 1) != 0) {
          operator_delete(local_70);
          iVar3 = iVar8;
        }
      }
      if (iVar3 != 4) goto LAB_00846a24;
    }
  }
LAB_008469d8:
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.MotionStreak:initWithFade",iVar2 + -1,5);
  uVar7 = 0;
LAB_008469fc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

