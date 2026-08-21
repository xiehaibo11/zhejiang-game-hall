
/* lua_cocos2dx_Touch_setTouchInfo(lua_State*) */

undefined4 lua_cocos2dx_Touch_setTouchInfo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar4 = luaval_to_int32(param_1,2,(int *)&local_58,"cc.Touch:setTouchInfo");
    if ((((uVar4 & 1) != 0) &&
        (uVar4 = luaval_to_number(param_1,3,&dStack_48,"cc.Touch:setTouchInfo"), (uVar4 & 1) != 0))
       && (uVar4 = luaval_to_number(param_1,4,&local_50,"cc.Touch:setTouchInfo"), (uVar4 & 1) != 0))
    {
      *(int *)(lVar3 + 0x24) = (int)local_58;
      *(undefined8 *)(lVar3 + 0x3c) = *(undefined8 *)(lVar3 + 0x34);
      *(float *)(lVar3 + 0x34) = (float)dStack_48;
      *(float *)(lVar3 + 0x38) = (float)local_50;
      *(undefined4 *)(lVar3 + 0x44) = 0;
      *(undefined4 *)(lVar3 + 0x48) = 0;
      if (*(char *)(lVar3 + 0x28) == '\0') {
        *(undefined1 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar3 + 0x34);
        *(undefined8 *)(lVar3 + 0x3c) = *(undefined8 *)(lVar3 + 0x34);
      }
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007e4860;
    }
  }
  else if ((((iVar2 == 6) &&
            (uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Touch:setTouchInfo"), (uVar4 & 1) != 0)
            ) && ((uVar4 = luaval_to_number(param_1,3,&dStack_48,"cc.Touch:setTouchInfo"),
                  (uVar4 & 1) != 0 &&
                  ((uVar4 = luaval_to_number(param_1,4,&local_50,"cc.Touch:setTouchInfo"),
                   (uVar4 & 1) != 0 &&
                   (uVar4 = luaval_to_number(param_1,5,(double *)&local_58,"cc.Touch:setTouchInfo"),
                   (uVar4 & 1) != 0)))))) &&
          (uVar4 = luaval_to_number(param_1,6,&local_60,"cc.Touch:setTouchInfo"), (uVar4 & 1) != 0))
  {
    *(int *)(lVar3 + 0x24) = local_3c;
    *(undefined8 *)(lVar3 + 0x3c) = *(undefined8 *)(lVar3 + 0x34);
    *(float *)(lVar3 + 0x34) = (float)dStack_48;
    *(float *)(lVar3 + 0x38) = (float)local_50;
    *(float *)(lVar3 + 0x44) = (float)(double)CONCAT44(local_58._4_4_,(int)local_58);
    *(float *)(lVar3 + 0x48) = (float)local_60;
    if (*(char *)(lVar3 + 0x28) == '\0') {
      *(undefined1 *)(lVar3 + 0x28) = 1;
      *(undefined8 *)(lVar3 + 0x2c) = *(undefined8 *)(lVar3 + 0x34);
      *(undefined8 *)(lVar3 + 0x3c) = *(undefined8 *)(lVar3 + 0x34);
    }
    lua_settop(param_1,1);
    uVar5 = 1;
    goto LAB_007e4860;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Touch:setTouchInfo",iVar2 + -1,3);
  uVar5 = 0;
LAB_007e4860:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

