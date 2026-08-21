
undefined8 FUN_009f9344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  uVar1 = FUN_009f9a54();
  uVar2 = luaL_checklstring(param_1,1,0);
  puVar3 = (undefined8 *)FUN_009fc1e8(uVar1,uVar2);
  uVar1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 0xe) < 0) {
      uVar1 = 0;
    }
    else {
      lua_pushstring(param_1,*puVar3);
      lua_pushstring(param_1,puVar3[1]);
      if ((*(uint *)(puVar3 + 0xe) >> 0x1d & 1) == 0) {
        pcVar4 = "message";
        if ((*(uint *)(puVar3 + 0xe) & 0x10000000) != 0) {
          pcVar4 = "enum";
        }
      }
      else {
        pcVar4 = "map";
      }
      lua_pushstring(param_1,pcVar4);
      uVar1 = 3;
    }
  }
  return uVar1;
}

