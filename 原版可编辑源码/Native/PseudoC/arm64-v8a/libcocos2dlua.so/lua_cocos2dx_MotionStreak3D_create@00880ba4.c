
/* WARNING: Removing unreachable block (ram,0x00880dd4) */
/* WARNING: Removing unreachable block (ram,0x00880de4) */
/* lua_cocos2dx_MotionStreak3D_create(lua_State*) */

void lua_cocos2dx_MotionStreak3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Texture2D *pTVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  double local_70;
  undefined8 local_68;
  void *local_60;
  Color3B aCStack_58 [8];
  double local_50;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 5) {
    uVar4 = luaval_to_number(param_1,2,&local_70,"cc.MotionStreak3D:create");
    if ((((uVar4 & 1) != 0) &&
        (uVar4 = luaval_to_number(param_1,3,&dStack_40,"cc.MotionStreak3D:create"), (uVar4 & 1) != 0
        )) && (uVar4 = luaval_to_number(param_1,4,&local_48,"cc.MotionStreak3D:create"),
              (uVar4 & 1) != 0)) {
      cocos2d::Color3B::Color3B((Color3B *)&local_50);
      uVar4 = luaval_to_color3b(param_1,5,(Color3B *)&local_50,"cc.MotionStreak3D:create");
      if (((param_1 == (lua_State *)0x0) || ((uVar4 & 1) == 0)) ||
         ((iVar3 = lua_gettop(param_1), iVar3 < 6 ||
          (uVar4 = luaval_is_usertype(param_1,6,"cc.Texture2D",0), (uVar4 & 1) == 0))))
      goto LAB_00880ce4;
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,6,0);
      pvVar6 = (void *)cocos2d::MotionStreak3D::create
                                 ((float)local_70,(float)dStack_40,(float)local_48,
                                  (Color3B *)&local_50,pTVar5);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.MotionStreak3D");
      }
LAB_00880e78:
      uVar7 = 1;
      goto LAB_00880e28;
    }
LAB_00880ce4:
    uVar4 = luaval_to_number(param_1,2,&dStack_40,"cc.MotionStreak3D:create");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_number(param_1,3,&local_48,"cc.MotionStreak3D:create"), (uVar4 & 1) != 0))
    {
      uVar4 = luaval_to_number(param_1,4,&local_50,"cc.MotionStreak3D:create");
      iVar3 = 4;
      if ((uVar4 & 1) != 0) {
        cocos2d::Color3B::Color3B(aCStack_58);
        uVar4 = luaval_to_color3b(param_1,5,aCStack_58,"cc.MotionStreak3D:create");
        if ((uVar4 & 1) == 0) goto LAB_00880e04;
        local_68 = 0;
        local_60 = (void *)0x0;
        local_70 = 0.0;
        uVar4 = luaval_to_std_string(param_1,6,(basic_string *)&local_70,"cc.MotionStreak3D:create")
        ;
        if ((uVar4 & 1) == 0) {
          iVar8 = 4;
          iVar3 = 4;
        }
        else {
          pvVar6 = (void *)cocos2d::MotionStreak3D::create
                                     ((float)dStack_40,(float)local_48,(float)local_50,aCStack_58,
                                      (basic_string *)&local_70);
          if (pvVar6 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                       "cc.MotionStreak3D");
          }
          iVar8 = 1;
          iVar3 = 1;
        }
        if (((ulong)local_70 & 1) != 0) {
          operator_delete(local_60);
          iVar3 = iVar8;
        }
      }
      if (iVar3 != 4) goto LAB_00880e78;
    }
  }
LAB_00880e04:
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.MotionStreak3D:create",iVar2 + -1,5);
  uVar7 = 0;
LAB_00880e28:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

