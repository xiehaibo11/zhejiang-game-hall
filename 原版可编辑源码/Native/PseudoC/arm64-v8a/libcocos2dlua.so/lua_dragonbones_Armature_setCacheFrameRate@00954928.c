
/* lua_dragonbones_Armature_setCacheFrameRate(lua_State*) */

undefined4 lua_dragonbones_Armature_setCacheFrameRate(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Armature *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"db.Armature:setCacheFrameRate");
    if ((uVar3 & 1) != 0) {
      dragonBones::Armature::setCacheFrameRate(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009549e4;
    }
    tolua_error(param_1,&DAT_012d2555,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:setCacheFrameRate",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009549e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

