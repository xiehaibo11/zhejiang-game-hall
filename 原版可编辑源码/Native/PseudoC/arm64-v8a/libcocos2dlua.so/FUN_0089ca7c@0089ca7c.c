
void FUN_0089ca7c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Size *pSVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [16];
  Size aSStack_50 [8];
  Size aSStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,"CCSize",0,auStack_60);
  if ((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_60), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,auStack_60), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,auStack_60), iVar2 == 0)) {
    iVar2 = tolua_isusertable(param_1,1,"CCSize",0,aSStack_48);
    if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,aSStack_48), iVar2 == 0)) {
      tolua_error(param_1,"#ferror in function \'new\'.",aSStack_48);
      uVar3 = 0;
      goto LAB_0089cba4;
    }
    cocos2d::Size::Size(aSStack_50);
    pSVar4 = aSStack_50;
  }
  else {
    dVar5 = (double)tolua_tonumber(0,param_1,2);
    dVar6 = (double)tolua_tonumber(0,param_1,3);
    cocos2d::Size::Size(aSStack_48,(float)dVar5,(float)dVar6);
    pSVar4 = aSStack_48;
  }
  size_to_luaval(param_1,pSVar4);
  uVar3 = 1;
LAB_0089cba4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

