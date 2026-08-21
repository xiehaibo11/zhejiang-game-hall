
undefined8 FUN_008b1b70(long param_1)

{
  int iVar1;
  int iVar2;
  GLProgram *this;
  int iVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar1 = iVar2 + -1;
  if ((iVar2 < 7) && (1 < iVar1)) {
    dVar4 = (double)tolua_tonumber(0,param_1,2);
    iVar3 = (int)dVar4;
    dVar4 = (double)tolua_tonumber(0,param_1,3);
    fVar6 = (float)dVar4;
    if (iVar1 == 2) {
      cocos2d::GLProgram::setUniformLocationWith1f(this,iVar3,fVar6);
      return 0;
    }
    dVar4 = (double)tolua_tonumber(0,param_1,4);
    fVar7 = (float)dVar4;
    if (iVar1 == 3) {
      cocos2d::GLProgram::setUniformLocationWith2f(this,iVar3,fVar6,fVar7);
      return 0;
    }
    dVar4 = (double)tolua_tonumber(0,param_1,5);
    if (iVar2 == 6) {
      dVar5 = (double)tolua_tonumber(0,param_1,6);
      cocos2d::GLProgram::setUniformLocationWith4f(this,iVar3,fVar6,fVar7,(float)dVar4,(float)dVar5)
      ;
      return 0;
    }
    if (iVar2 == 5) {
      cocos2d::GLProgram::setUniformLocationWith3f(this,iVar3,fVar6,fVar7,(float)dVar4);
      return 0;
    }
  }
  luaL_error(param_1," %s has wrong number of arguments: %d, was expecting %d\n",
             "cc.GLProgram:setUniformLocationF32",iVar1,2);
  return 0;
}

