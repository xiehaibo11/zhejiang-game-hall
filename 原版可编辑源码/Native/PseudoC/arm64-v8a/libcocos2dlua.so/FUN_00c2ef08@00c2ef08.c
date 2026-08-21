
undefined8 FUN_00c2ef08(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar2 + 10) = 1;
  *(undefined8 *)(uVar2 + 0x20) =
       *(undefined8 *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  pFVar3 = tmpfile();
  *puVar1 = pFVar3;
  if (pFVar3 != (FILE *)0x0) {
    return 1;
  }
  uVar4 = luaL_fileresult(param_1,0,0);
  return uVar4;
}

