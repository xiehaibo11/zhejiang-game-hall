
/* lua_cocos2dx_studio_Bone_changeDisplayWithIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_changeDisplayWithIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Bone *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccs.Bone:changeDisplayWithIndex");
    uVar4 = luaval_to_boolean(param_1,3,local_50,"ccs.Bone:changeDisplayWithIndex");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocostudio::Bone::changeDisplayWithIndex(this,local_4c,local_50[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00932e20;
    }
    tolua_error(param_1,0x12cb596,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cb576,
               iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00932e20:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

