
/* lua_dragonbones_Slot_replaceDisplayData(lua_State*) */

undefined4 lua_dragonbones_Slot_replaceDisplayData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slot *this;
  ulong uVar3;
  DisplayData *pDVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Slot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"db.DisplayData",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"db.Slot:replaceDisplayData");
    }
    else {
      pDVar4 = (DisplayData *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"db.Slot:replaceDisplayData");
      if ((uVar3 & 1) != 0) {
        dragonBones::Slot::replaceDisplayData(this,pDVar4,local_3c);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_009579a8;
      }
    }
    tolua_error(param_1,&DAT_012d2eef,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d2ed4,
               iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_009579a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

