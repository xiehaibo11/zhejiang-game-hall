
void FUN_009f8dd0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *__filename;
  FILE *__stream;
  void *__ptr;
  size_t sVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  long local_460 [2];
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f9a54();
  __filename = (char *)luaL_checklstring(param_1,1,0);
  __stream = fopen(__filename,"rb");
  if (__stream == (FILE *)0x0) {
    piVar5 = (int *)__errno();
    iVar2 = *piVar5;
    lua_pushnil(param_1);
    pcVar6 = strerror(iVar2);
    lua_pushfstring(param_1,"%s: %s",__filename,pcVar6);
    lua_pushinteger(param_1,(long)iVar2);
    uVar3 = 3;
  }
  else {
    local_460[1] = 0x400;
    local_460[0] = 0;
    local_450 = auStack_448;
    do {
      __ptr = (void *)FUN_009f9d60(local_460,0x400);
      if (__ptr == (void *)0x0) {
        fclose(__stream);
        uVar3 = luaL_error(param_1,"out of memory");
        goto LAB_009f8f58;
      }
      sVar4 = fread(__ptr,1,0x400,__stream);
      local_460[0] = local_460[0] + sVar4;
    } while (sVar4 == 0x400);
    fclose(__stream);
    local_478 = local_450;
    local_470 = local_450 + local_460[0];
    local_468 = local_450;
    iVar2 = FUN_009fcc5c(uVar3,&local_478);
    if (local_450 != auStack_448) {
      free(local_450);
    }
    local_460[1] = 0x400;
    local_460[0] = 0;
    local_450 = auStack_448;
    lua_pushboolean(param_1,iVar2 == 0);
    lua_pushinteger(param_1,(long)(((ulong)(uint)((int)local_478 - (int)local_468) << 0x20) +
                                  0x100000000) >> 0x20);
    uVar3 = 2;
  }
LAB_009f8f58:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

