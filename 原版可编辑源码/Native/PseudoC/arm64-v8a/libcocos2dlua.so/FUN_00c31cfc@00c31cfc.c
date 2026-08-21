
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c31cfc(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_248 [576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar4 = **(ulong **)(param_1 + 0x20), (int)((long)uVar4 >> 0x2f) == -7)) {
    uVar4 = uVar4 & 0x7fffffffffff;
    uVar6 = 2;
    iVar5 = 1;
  }
  else {
    uVar6 = 1;
    iVar5 = 0;
    uVar4 = param_1;
  }
  uVar1 = FUN_00c29cf0(param_1,uVar6);
  iVar2 = lua_getstack(uVar4,uVar1,auStack_248);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)FUN_00c29a84(param_1,iVar5 + 3);
    uVar6 = *puVar3;
    puVar3 = *(undefined8 **)(uVar4 + 0x28);
    *(undefined8 **)(uVar4 + 0x28) = puVar3 + 1;
    *puVar3 = uVar6;
    uVar1 = FUN_00c29cf0(param_1,iVar5 + 2);
    uVar6 = lua_setlocal(uVar4,auStack_248,uVar1);
    lua_pushstring(param_1,uVar6);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,uVar6,0x46b);
}

