
void FUN_0089c1e4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [16];
  float local_50 [3];
  float fStack_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,0x129ccb1,0,auStack_60);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_60), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_60), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_60), iVar2 == 0)) {
    iVar2 = tolua_isusertable(param_1,1,0x129ccb1,0,local_50 + 2);
    if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,local_50 + 2), iVar2 == 0)) {
      tolua_error(param_1,"#ferror in function \'new\'.",local_50 + 2);
      uVar3 = 0;
      goto LAB_0089c300;
    }
    pfVar4 = local_50;
    local_50[0] = 0.0;
    local_50[1] = 0.0;
  }
  else {
    dVar5 = (double)tolua_tonumber(0,param_1,2);
    dVar6 = (double)tolua_tonumber(0,param_1,3);
    fStack_44 = (float)dVar6;
    pfVar4 = local_50 + 2;
    local_50[2] = (float)dVar5;
  }
  vec2_to_luaval(param_1,(Vec2 *)pfVar4);
  uVar3 = 1;
LAB_0089c300:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

