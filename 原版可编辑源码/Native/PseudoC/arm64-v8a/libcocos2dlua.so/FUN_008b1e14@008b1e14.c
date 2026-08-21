
undefined8 FUN_008b1e14(long param_1)

{
  long lVar1;
  int iVar2;
  Texture2D *this;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    this = (Texture2D *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 4) {
      dVar3 = (double)tolua_tonumber(0,param_1,2);
      dVar4 = (double)tolua_tonumber(0,param_1,3);
      dVar5 = (double)tolua_tonumber(0,param_1,4);
      dVar6 = (double)tolua_tonumber(0,param_1,5);
      iStack_4c = (int)dVar6;
      local_58 = (int)dVar3;
      iStack_54 = (int)dVar4;
      local_50 = (int)dVar5;
      cocos2d::Texture2D::setTexParameters(this,(_TexParams *)&local_58);
    }
    else {
      luaL_error(param_1,
                 "\'setTexParameters\' function of Texture2D wrong number of arguments: %d, was expecting %d\n"
                 ,iVar2 + -1,4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

