
bool FUN_008b6f68(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  GLProgramState *this;
  bool bVar9;
  void *local_88;
  int local_80;
  bool local_7c [4];
  uint local_78;
  int iStack_74;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 6) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,
                       "cc.GLProgramState:setVertexAttribPointer");
    uVar4 = luaval_to_int32(param_1,3,&iStack_74,"cc.GLProgramState:setVertexAttribPointer");
    uVar5 = luaval_to_uint32(param_1,4,&local_78,"cc.GLProgramState:setVertexAttribPointer");
    uVar6 = luaval_to_boolean(param_1,5,local_7c,"cc.GLProgramState:setVertexAttribPointer");
    uVar7 = luaval_to_int32(param_1,6,&local_80,"cc.GLProgramState:setVertexAttribPointer");
    uVar8 = luaval_to_long(param_1,7,(long *)&local_88,"cc.GLProgramState:setVertexAttribPointer");
    bVar9 = (uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0;
    if (bVar9) {
      cocos2d::GLProgramState::setVertexAttribPointer
                (this,(basic_string *)&local_70,iStack_74,local_78,local_7c[0],local_80,local_88);
      lua_settop(param_1,1);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgramState:setVertexAttribPointer",iVar2 + -1,6);
    bVar9 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}

