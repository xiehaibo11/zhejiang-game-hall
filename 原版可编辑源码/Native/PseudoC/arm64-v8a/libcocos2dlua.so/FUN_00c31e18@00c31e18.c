
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c31e18(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_248 [576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar6 = **(ulong **)(param_1 + 0x20), (int)((long)uVar6 >> 0x2f) == -7)) {
    lVar8 = 1;
    uVar1 = FUN_00c29cf0(param_1,3);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    iVar7 = 1;
    iVar3 = (int)((ulong)puVar5[1] >> 0x20);
    uVar6 = uVar6 & 0x7fffffffffff;
  }
  else {
    uVar1 = FUN_00c29cf0(param_1,2);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    lVar8 = 0;
    iVar7 = 0;
    iVar3 = (int)((ulong)*puVar5 >> 0x20);
    uVar6 = param_1;
  }
  if (iVar3 >> 0xf == -9) {
    *(undefined8 **)(param_1 + 0x28) = puVar5 + lVar8 + 1;
    uVar4 = lua_getlocal(param_1,0,uVar1);
    lua_pushstring(param_1,uVar4);
    uVar4 = 1;
  }
  else {
    uVar2 = FUN_00c29cf0(param_1,iVar7 + 1);
    iVar3 = lua_getstack(uVar6,uVar2,auStack_248);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,iVar7 + 1,0x46b);
    }
    lVar8 = lua_getlocal(uVar6,auStack_248,uVar1);
    if (lVar8 == 0) {
      uVar4 = 1;
      *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
    }
    else {
      lua_xmove(uVar6,param_1,1);
      lua_pushstring(param_1,lVar8);
      lua_pushvalue(param_1,0xfffffffe);
      uVar4 = 2;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

