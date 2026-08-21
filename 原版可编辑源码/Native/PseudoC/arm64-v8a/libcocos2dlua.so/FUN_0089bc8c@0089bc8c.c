
undefined8 FUN_0089bc8c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_98 [16];
  Mat4 local_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_istable(param_1,1,0,auStack_98);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_98), iVar2 == 0)) {
LAB_0089bd8c:
    tolua_error(param_1,"#ferror in function \'kmGLLoadMatrix\'.",auStack_98);
  }
  else {
    cocos2d::Mat4::Mat4(local_88);
    lVar3 = lua_objlen(param_1,1);
    lVar4 = 0;
    while (lVar3 != lVar4) {
      lua_pushnumber((double)(int)(lVar4 + 1),param_1);
      lua_gettable(param_1,1);
      iVar2 = tolua_isnumber(param_1,0xffffffff,0,auStack_98);
      if (iVar2 == 0) {
        lua_settop(param_1,0xfffffffe);
        cocos2d::Mat4::~Mat4(local_88);
        goto LAB_0089bd8c;
      }
      dVar5 = (double)tolua_tonumber(0,param_1,0xffffffff);
      *(float *)(local_88 + lVar4 * 4) = (float)dVar5;
      lua_settop(param_1,0xfffffffe);
      lVar4 = lVar4 + 1;
    }
    cocos2d::kmGLLoadMatrix(local_88);
    cocos2d::Mat4::~Mat4(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

