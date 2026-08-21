
/* lua_dragonbones_Armature_getBone(lua_State*) */

undefined4 lua_dragonbones_Armature_getBone(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Armature *this;
  ulong uVar3;
  Bone *pBVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"db.Armature:getBone");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_Armature_getBone\'",0);
      uVar6 = 0;
    }
    else {
      pBVar4 = (Bone *)dragonBones::Armature::getBone(this,(basic_string *)&local_50);
      if (pBVar4 == (Bone *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        pcVar5 = getLuaTypeName<dragonBones::Bone>(pBVar4,"db.Bone");
        tolua_pushusertype(param_1,pBVar4,pcVar5);
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d2309,
               iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

