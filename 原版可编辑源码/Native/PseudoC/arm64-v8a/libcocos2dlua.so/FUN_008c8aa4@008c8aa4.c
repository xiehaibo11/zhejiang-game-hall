
void FUN_008c8aa4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar4;
  undefined8 uVar5;
  char *pcVar6;
  tolua_Error *ptVar7;
  double dVar8;
  tolua_Error atStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"ScriptHandlerMgr",0,atStack_58);
  if ((((iVar2 == 0) || (iVar2 = tolua_isusertype(param_1,2,&DAT_012769c7,0,atStack_58), iVar2 == 0)
       ) || (iVar2 = toluafix_isfunction(param_1,3,"LUA_FUNCTION",0,atStack_58), iVar2 == 0)) ||
     ((iVar2 = tolua_isnumber(param_1,4,0,atStack_58), iVar2 == 0 ||
      (iVar2 = tolua_isnoobj(param_1,5,atStack_58), iVar2 == 0)))) {
    pcVar6 = "#ferror in function \'registerScriptHandler\'.";
    ptVar7 = atStack_58;
  }
  else {
    pSVar4 = (ScriptHandlerMgr *)tolua_tousertype(param_1,1,0);
    if (pSVar4 != (ScriptHandlerMgr *)0x0) {
      uVar3 = toluafix_ref_function(param_1,3,0);
      dVar8 = (double)tolua_tonumber(0,param_1,4);
      uVar5 = tolua_tousertype(param_1,2,0);
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar5,uVar3,(int)dVar8);
      uVar5 = 1;
      goto LAB_008c8bd8;
    }
    pcVar6 = 
    "invalid \'scriptHanlderMgr\' in function \'tolua_Cocos2d_ScriptHandlerMgr_registerScriptHandler00\'\n"
    ;
    ptVar7 = (tolua_Error *)0x0;
  }
  tolua_error(param_1,pcVar6,ptVar7);
  uVar5 = 0;
LAB_008c8bd8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

