
/* LuaJavaBridge::callJavaStaticMethod(lua_State*) */

int LuaJavaBridge::callJavaStaticMethod(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  jvalue *pjVar13;
  undefined8 uVar14;
  ulong uVar15;
  jvalue *pjVar16;
  ulong uVar17;
  ulong uVar18;
  CallInfo aCStack_128 [4];
  int local_124;
  long local_d0;
  long lStack_c8;
  long *local_a0;
  JniMethodInfo_ aJStack_88 [24];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar6 = lua_isstring(param_1,0xfffffffc);
  if ((((iVar6 == 0) || (iVar6 = lua_isstring(param_1,0xfffffffd), iVar6 == 0)) ||
      (iVar6 = lua_type(param_1,0xfffffffe), iVar6 != 5)) ||
     (iVar6 = lua_isstring(param_1,0xffffffff), iVar6 == 0)) {
    lua_pushboolean(param_1,0);
    uVar14 = 0xfffffffffffffffe;
  }
  else {
    __android_log_print(3,"luajc","%s","LuaJavaBridge::callJavaStaticMethod(lua_State *L)");
    pcVar9 = (char *)lua_tolstring(param_1,0xfffffffc,0);
    pcVar10 = (char *)lua_tolstring(param_1,0xfffffffd,0);
    pcVar11 = (char *)lua_tolstring(param_1,0xffffffff,0);
    __android_log_print(3,"luajc","%s",pcVar9);
    __android_log_print(3,"luajc","%s",pcVar10);
    __android_log_print(3,"luajc","%s",pcVar11);
    uVar12 = cocos2d::JniHelper::getStaticMethodInfo(aJStack_88,pcVar9,pcVar10,pcVar11);
    if ((uVar12 & 1) != 0) {
      CallInfo::CallInfo(aCStack_128,pcVar9,pcVar10,pcVar11);
      lua_settop(param_1,0xfffffffe);
      uVar12 = 0xfffffffffffffff8;
      iVar6 = 1;
      uVar17 = 0;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 - 1;
        lua_rawgeti(param_1,uVar17 & 0xffffffff,iVar6);
        iVar7 = lua_type(param_1,0xffffffff);
        uVar12 = uVar12 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar7 != 0);
      lua_settop(param_1,0xfffffffe);
      __android_log_print(3,"luajc","%d",~(uint)uVar17);
      if ((uint)uVar17 == 0xffffffff) {
        uVar12 = CallInfo::execute(aCStack_128);
        if ((uVar12 & 1) == 0) goto LAB_007c70dc;
LAB_007c708c:
        __android_log_print(3,"luajc",
                            "LuaJavaBridge::callJavaStaticMethod(\"%s\", \"%s\", args, \"%s\") SUCCESS"
                            ,pcVar9,pcVar10,pcVar11);
        lua_pushboolean(param_1,1);
        iVar6 = CallInfo::pushReturnValue(aCStack_128,param_1);
        iVar6 = iVar6 + 1;
      }
      else {
        pjVar13 = operator_new__(uVar12);
        uVar12 = 0;
        uVar15 = uVar17;
        pjVar16 = pjVar13;
        do {
          plVar4 = local_a0;
          if ((ulong)(lStack_c8 - local_d0 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar6 = *(int *)(local_d0 + uVar12 * 4);
          uVar1 = uVar15 + 1;
          if (iVar6 == 3) {
            iVar6 = lua_toboolean(param_1,uVar1 & 0xffffffff);
            *pjVar16 = (jvalue)(iVar6 != 0);
          }
          else if (iVar6 == 2) {
            dVar3 = (double)lua_tonumber(param_1,uVar1 & 0xffffffff);
            *(float *)pjVar16 = (float)dVar3;
          }
          else if (iVar6 == 1) {
            iVar6 = lua_type(param_1,uVar1 & 0xffffffff);
            if (iVar6 == 6) {
              uVar8 = retainLuaFunction(param_1,(int)uVar1,(int *)0x0);
              *(undefined4 *)pjVar16 = uVar8;
            }
            else {
              dVar3 = (double)lua_tonumber(param_1,uVar1 & 0xffffffff);
              *(int *)pjVar16 = (int)dVar3;
            }
          }
          else {
            uVar14 = lua_tolstring(param_1,uVar1 & 0xffffffff,0);
            uVar14 = (**(code **)(*plVar4 + 0x538))(plVar4,uVar14);
            *(undefined8 *)pjVar16 = uVar14;
          }
          uVar12 = uVar12 + 1;
          pjVar16 = pjVar16 + 8;
          bVar5 = uVar18 != 0xffffffffffffffff;
          uVar18 = uVar18 + 1;
          uVar15 = uVar15 + 1;
        } while (bVar5);
        lua_settop(param_1,uVar17 & 0xffffffff);
        uVar12 = CallInfo::executeWithArgs(aCStack_128,pjVar13);
        operator_delete__(pjVar13);
        if ((uVar12 & 1) != 0) goto LAB_007c708c;
LAB_007c70dc:
        __android_log_print(3,"luajc",
                            "LuaJavaBridge::callJavaStaticMethod(\"%s\", \"%s\", args, \"%s\") EXECUTE FAILURE, ERROR CODE: %d"
                            ,pcVar9,pcVar10,pcVar11,local_124);
        lua_pushboolean(param_1,0);
        lua_pushinteger(param_1,(long)local_124);
        iVar6 = 2;
      }
      CallInfo::~CallInfo(aCStack_128);
      goto LAB_007c6f08;
    }
    __android_log_print(3,"luajc",
                        "LuaJavaBridge::callJavaStaticMethod(\"%s\", \"%s\", args, \"%s\") EXECUTE FAILURE, LUAJ_ERR_METHOD_NOT_FOUND"
                        ,pcVar9,pcVar10,pcVar11);
    lua_pushboolean(param_1,0);
    uVar14 = 0xfffffffffffffffd;
  }
  lua_pushinteger(param_1,uVar14);
  iVar6 = 2;
LAB_007c6f08:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

