
undefined8 FUN_008bd0f4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.GLNode",0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isusertype(param_1,2,"cc.GLProgram",0,auStack_48), iVar2 == 0)
      ) || (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
    pcVar5 = "#ferror in function \'setShaderProgram\'.";
    puVar6 = auStack_48;
  }
  else {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    uVar4 = tolua_tousertype(param_1,2,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x308))(plVar3,uVar4);
      goto LAB_008bd1bc;
    }
    pcVar5 = "invalid \'self\' in function \'setShaderProgram\'";
    puVar6 = (undefined1 *)0x0;
  }
  tolua_error(param_1,pcVar5,puVar6);
LAB_008bd1bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

