
void FUN_009d2a70(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char acStack_13c [256];
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  iVar2 = gethostname(acStack_13c,0x100);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    puVar4 = (undefined4 *)__errno();
    uVar3 = socket_strerror(*puVar4);
    lua_pushstring(param_1,uVar3);
    uVar3 = 2;
  }
  else {
    lua_pushstring(param_1,acStack_13c);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

