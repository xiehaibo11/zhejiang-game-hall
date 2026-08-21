
/* lua_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv(lua_State*) */

undefined4 lua_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgram *this;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  uint local_60;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_5c,"cc.GLProgram:setUniformLocationWithMatrix4fv");
    uVar4 = luaval_to_uint32(param_1,4,&local_60,"cc.GLProgram:setUniformLocationWithMatrix4fv");
    uVar8 = local_60;
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      pcVar6 = "Parse params error in the lua_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv";
    }
    else {
      pfVar5 = operator_new__((ulong)local_60 << 8,(nothrow_t *)&std::nothrow);
      if (pfVar5 != (float *)0x0) {
        if ((uVar8 & 0xfffffff) != 0) {
          uVar3 = 0;
          do {
            uVar4 = uVar3 + 1;
            dVar9 = (double)tolua_tofieldnumber(0,param_1,3,uVar4 & 0xffffffff);
            pfVar5[uVar3] = (float)dVar9;
            uVar3 = uVar4;
            uVar8 = local_60;
          } while (uVar4 < local_60 << 4);
        }
        cocos2d::GLProgram::setUniformLocationWithMatrix4fv(this,local_5c,pfVar5,uVar8);
        operator_delete__(pfVar5);
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_008a688c;
      }
      pcVar6 = 
      "Allocate matrixArry in the lua_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv failed!";
    }
    luaL_error(param_1,pcVar6);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgram:setUniformLocationWithMatrix4fv",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_008a688c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

