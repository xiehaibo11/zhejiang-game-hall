
void FUN_008c8d4c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *this;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"ScriptHandlerMgr",0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isusertype(param_1,2,&DAT_012769c7,0,auStack_48), iVar2 == 0))
     || (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    pcVar5 = "#ferror in function \'removeObjectAllHandlers\'.";
    puVar6 = auStack_48;
  }
  else {
    this = (ScriptHandlerMgr *)tolua_tousertype(param_1,1,0);
    if (this != (ScriptHandlerMgr *)0x0) {
      pvVar3 = (void *)tolua_tousertype(param_1,2,0);
      cocos2d::ScriptHandlerMgr::removeObjectAllHandlers(this,pvVar3);
      uVar4 = 1;
      goto LAB_008c8e14;
    }
    pcVar5 = 
    "invalid \'scriptHanlderMgr\' in function \'tolua_Cocos2d_ScriptHandlerMgr_removeObjectAllHandlers00\'\n"
    ;
    puVar6 = (undefined1 *)0x0;
  }
  tolua_error(param_1,pcVar5,puVar6);
  uVar4 = 0;
LAB_008c8e14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

