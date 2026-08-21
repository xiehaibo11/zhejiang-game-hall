
void FUN_0089c5bc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Rect *pRVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [16];
  Rect aRStack_68 [16];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,"CCRect",0,auStack_78);
  if (((((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_78), iVar2 == 0)) ||
       (iVar2 = tolua_isnumber(param_1,3,0,auStack_78), iVar2 == 0)) ||
      ((iVar2 = tolua_isnumber(param_1,4,0,auStack_78), iVar2 == 0 ||
       (iVar2 = tolua_isnumber(param_1,5,0,auStack_78), iVar2 == 0)))) ||
     (iVar2 = tolua_isnoobj(param_1,6,auStack_78), iVar2 == 0)) {
    iVar2 = tolua_isusertable(param_1,1,"CCRect",0,aRStack_58);
    if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,aRStack_58), iVar2 == 0)) {
      tolua_error(param_1,"#ferror in function \'new\'.",aRStack_58);
      uVar3 = 0;
      goto LAB_0089c748;
    }
    cocos2d::Rect::Rect(aRStack_68);
    pRVar4 = aRStack_68;
  }
  else {
    dVar5 = (double)tolua_tonumber(0,param_1,2);
    dVar6 = (double)tolua_tonumber(0,param_1,3);
    dVar7 = (double)tolua_tonumber(0,param_1,4);
    dVar8 = (double)tolua_tonumber(0,param_1,5);
    cocos2d::Rect::Rect(aRStack_58,(float)dVar5,(float)dVar6,(float)dVar7,(float)dVar8);
    pRVar4 = aRStack_58;
  }
  rect_to_luaval(param_1,pRVar4);
  uVar3 = 1;
LAB_0089c748:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

