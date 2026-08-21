
/* lua_dragonbones_Armature_setFlipX(lua_State*) */

undefined4 lua_dragonbones_Armature_setFlipX(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Armature *this;
  ulong uVar3;
  undefined4 uVar4;
  Armature local_54 [4];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Armature *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_54,"db.Armature:setFlipX");
    if ((uVar3 & 1) != 0) {
      this[0x5c] = local_54[0];
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
      dragonBones::Armature::invalidUpdate(this,(basic_string *)local_50,false);
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00954c28;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_dragonbones_Armature_setFlipX\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.Armature:setFlipX",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00954c28:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

