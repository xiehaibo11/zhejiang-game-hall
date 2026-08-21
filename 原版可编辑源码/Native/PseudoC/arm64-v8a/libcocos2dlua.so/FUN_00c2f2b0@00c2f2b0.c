
undefined8 FUN_00c2f2b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *__modes;
  
  lVar1 = FUN_00c29ac0(param_1,1);
  lVar2 = FUN_00c29b44(param_1,2);
  if (lVar2 == 0) {
    __modes = "r";
  }
  else {
    __modes = (char *)(lVar2 + 0x18);
  }
  puVar3 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar6 + 10) = 1;
  *(undefined8 *)(uVar6 + 0x20) =
       *(undefined8 *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  pFVar4 = fopen((char *)(lVar1 + 0x18),__modes);
  *puVar3 = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    return 1;
  }
  uVar5 = luaL_fileresult(param_1,0,(char *)(lVar1 + 0x18));
  return uVar5;
}

