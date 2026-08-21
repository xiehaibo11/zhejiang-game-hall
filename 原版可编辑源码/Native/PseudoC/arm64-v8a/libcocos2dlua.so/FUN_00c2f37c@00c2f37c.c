
undefined8 FUN_00c2f37c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x20) < puVar4) {
    puVar2 = (undefined8 *)FUN_00c2eea0();
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x298) + 0x30);
  }
  if ((*(uint *)(puVar2 + 1) & 3) != 0) {
    if ((*(uint *)(puVar2 + 1) & 3) != 1) {
      *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
      *puVar4 = 0xffffffffffffffff;
      lua_pushlstring(param_1,"cannot close standard file",0x1a);
      return 2;
    }
    iVar1 = pclose((FILE *)*puVar2);
    *puVar2 = 0;
    uVar3 = luaL_fileresult(param_1,iVar1 != -1,0);
    return uVar3;
  }
  iVar1 = fclose((FILE *)*puVar2);
  *puVar2 = 0;
  uVar3 = luaL_fileresult(param_1,iVar1 == 0,0);
  return uVar3;
}

