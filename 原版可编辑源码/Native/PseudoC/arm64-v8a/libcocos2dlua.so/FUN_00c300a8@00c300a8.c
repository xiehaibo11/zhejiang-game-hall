
undefined8 FUN_00c300a8(long param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *__s1;
  tm *__tp;
  size_t sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  double dVar12;
  long local_40;
  tm tStack_38;
  
  __s1 = (char *)luaL_optlstring(param_1,1,&DAT_01410560,0);
  iVar4 = lua_type(param_1,2);
  if (iVar4 < 1) {
    local_40 = time((time_t *)0x0);
  }
  else {
    dVar12 = (double)luaL_checknumber(param_1,2);
    local_40 = (long)dVar12;
  }
  if (*__s1 == '!') {
    __tp = gmtime_r(&local_40,&tStack_38);
    __s1 = __s1 + 1;
  }
  else {
    __tp = localtime_r(&local_40,&tStack_38);
  }
  if (__tp != (tm *)0x0) {
    iVar4 = strcmp(__s1,"*t");
    if (iVar4 == 0) {
      lua_createtable(param_1,0,9);
      lua_pushinteger(param_1,(long)__tp->tm_sec);
      lua_setfield(param_1,0xfffffffe,&DAT_01411f10);
      lua_pushinteger(param_1,(long)__tp->tm_min);
      lua_setfield(param_1,0xfffffffe,&DAT_01411f18);
      lua_pushinteger(param_1,(long)__tp->tm_hour);
      lua_setfield(param_1,0xfffffffe,&DAT_01411f20);
      lua_pushinteger(param_1,(long)__tp->tm_mday);
      lua_setfield(param_1,0xfffffffe,&DAT_01411f28);
      lua_pushinteger(param_1,(long)(__tp->tm_mon + 1));
      lua_setfield(param_1,0xfffffffe,"month");
      lua_pushinteger(param_1,(long)(__tp->tm_year + 0x76c));
      lua_setfield(param_1,0xfffffffe,&DAT_01411f38);
      lua_pushinteger(param_1,(long)(__tp->tm_wday + 1));
      lua_setfield(param_1,0xfffffffe,&DAT_01411f50);
      lua_pushinteger(param_1,(long)(__tp->tm_yday + 1));
      lua_setfield(param_1,0xfffffffe,&DAT_01411f58);
      if (-1 < __tp->tm_isdst) {
        lua_pushboolean(param_1);
        lua_setfield(param_1,0xfffffffe,"isdst");
        return 1;
      }
    }
    else {
      cVar3 = *__s1;
      if (cVar3 == '\0') {
        puVar10 = *(ulong **)(param_1 + 0x28);
        *(ulong **)(param_1 + 0x28) = puVar10 + 1;
        *puVar10 = *(long *)(param_1 + 0x10) + 0xa8U | 0xfffd800000000000;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x10);
        uVar9 = 0;
        pcVar8 = __s1;
        do {
          bVar2 = cVar3 != '%';
          pcVar8 = pcVar8 + 1;
          cVar3 = *pcVar8;
          iVar4 = 0x1e;
          if (bVar2) {
            iVar4 = 1;
          }
          uVar9 = uVar9 + iVar4;
        } while (cVar3 != '\0');
        *(long *)(lVar11 + 0xa0) = param_1;
        while( true ) {
          pcVar8 = *(char **)(lVar11 + 0x98);
          uVar1 = (int)*(undefined8 *)(lVar11 + 0x90) - (int)pcVar8;
          if (uVar1 < uVar9) {
            pcVar8 = (char *)FUN_00c1a418(lVar11 + 0x88,uVar9);
            sVar5 = strftime(pcVar8,(ulong)(uint)((int)*(undefined8 *)(lVar11 + 0x90) -
                                                 (int)*(undefined8 *)(lVar11 + 0x98)),__s1,__tp);
          }
          else {
            sVar5 = strftime(pcVar8,(ulong)uVar1,__s1,__tp);
          }
          if (sVar5 != 0) break;
          uVar9 = uVar9 + (uVar9 | 1);
        }
        puVar10 = *(ulong **)(param_1 + 0x28);
        *(ulong **)(param_1 + 0x28) = puVar10 + 1;
        uVar6 = FUN_00bfba1c(param_1,pcVar8);
        *puVar10 = uVar6 | 0xfffd800000000000;
        if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
            *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
          FUN_00c19f80(param_1);
        }
      }
    }
    return 1;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar7 + 1;
  *puVar7 = 0xffffffffffffffff;
  return 1;
}

