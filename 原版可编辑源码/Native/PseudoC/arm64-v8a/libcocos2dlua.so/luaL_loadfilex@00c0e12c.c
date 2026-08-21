
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_loadfilex(long param_1,char *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  FILE *local_410 [129];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (char *)0x0) {
    local_410[0] = (FILE *)&__sF;
    uVar1 = lua_loadx(param_1,FUN_00c0e004,local_410,&DAT_01410808,param_3);
    iVar2 = ferror(local_410[0]);
    if (iVar2 != 0) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      lua_pushfstring(param_1,"cannot read %s: %s","stdin",pcVar5);
      uVar1 = 6;
    }
  }
  else {
    local_410[0] = fopen(param_2,"rb");
    if (local_410[0] == (FILE *)0x0) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      lua_pushfstring(param_1,"cannot open %s: %s",param_2,pcVar5);
      uVar1 = 6;
    }
    else {
      lVar3 = lua_pushfstring(param_1,&DAT_01410800,param_2);
      uVar1 = lua_loadx(param_1,FUN_00c0e004,local_410,lVar3,param_3);
      iVar2 = ferror(local_410[0]);
      if (iVar2 == 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar3 + -8;
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -8);
        fclose(local_410[0]);
      }
      else {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x10;
        piVar4 = (int *)__errno();
        pcVar5 = strerror(*piVar4);
        lua_pushfstring(param_1,"cannot read %s: %s",lVar3 + 1,pcVar5);
        fclose(local_410[0]);
        uVar1 = 6;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

