
void FUN_00a00bb4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_2 + 0x480) == -2) {
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    uVar3 = luaL_ref(param_1,0xffffd8f0);
    *(undefined4 *)(param_2 + 0x480) = uVar3;
  }
  else {
    lua_rawgeti(param_1,0xffffd8f0);
  }
  lua_pushlightuserdata(param_1,param_3);
  lua_rawget(param_1,0xfffffffe);
  iVar4 = lua_type(param_1,0xffffffff);
  if (iVar4 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    if (param_3 != 0) {
      puVar9 = (undefined8 *)0x0;
LAB_00a00c74:
      if (puVar9 == (undefined8 *)0x0) goto LAB_00a00cd8;
LAB_00a00c78:
      lVar5 = *(long *)(param_3 + 0x10);
      if (lVar5 != 0) {
        iVar4 = *(int *)(puVar9 + 3);
        if (iVar4 == 0) {
          if (*(int *)(param_3 + 0x20) < 0) {
            plVar7 = *(long **)(param_3 + 0x28);
            goto LAB_00a00ce0;
          }
        }
        else {
          uVar6 = (long)iVar4 * 0x9e3779b1;
          uVar8 = lVar5 - 1U & uVar6;
          if ((lVar5 - 1U & uVar6) == 0) {
            uVar8 = 1;
          }
          plVar7 = (long *)(*(long *)(param_3 + 0x28) +
                           uVar8 * ((ulong)*(uint *)(param_3 + 0x20) & 0x7fffffff));
          while( true ) {
            if (plVar7[1] == (long)iVar4) goto LAB_00a00ce0;
            if (*plVar7 == 0) break;
            plVar7 = (long *)((long)plVar7 + *plVar7);
          }
        }
      }
      do {
        plVar7 = (long *)0x0;
LAB_00a00ce0:
        uVar8 = (ulong)*(uint *)(param_3 + 0x20) & 0x7fffffff;
        do {
          while (plVar7 != (long *)0x0) {
            uVar6 = (long)plVar7 - *(long *)(param_3 + 0x28);
LAB_00a00cf8:
            do {
              uVar1 = uVar6 + uVar8;
              if (lVar5 * uVar8 <= uVar1) goto LAB_00a00d80;
              lVar2 = *(long *)(param_3 + 0x28) + uVar8 + uVar6;
              uVar6 = uVar1;
            } while (*(long *)(lVar2 + 8) == 0);
            plVar7 = (long *)(*(long *)(param_3 + 0x28) + uVar1);
            puVar9 = (undefined8 *)plVar7[2];
            if (puVar9 != (undefined8 *)0x0) goto LAB_00a00d44;
          }
          uVar6 = 0;
          if (-1 < (int)*(uint *)(param_3 + 0x20)) goto LAB_00a00cf8;
          plVar7 = *(long **)(param_3 + 0x28);
          puVar9 = (undefined8 *)plVar7[2];
        } while (puVar9 == (undefined8 *)0x0);
LAB_00a00d44:
        if (((*(byte *)((long)puVar9 + 0x1f) >> 5 & 1) != 0) ||
           (iVar4 = FUN_00a00634(param_1,param_2,puVar9,*(uint *)(param_3 + 0x70) >> 0x1e & 1),
           iVar4 == 0)) goto LAB_00a00c74;
        lua_setfield(param_1,0xfffffffe,*puVar9);
        if (puVar9 != (undefined8 *)0x0) goto LAB_00a00c78;
LAB_00a00cd8:
        lVar5 = *(long *)(param_3 + 0x10);
      } while( true );
    }
LAB_00a00d80:
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffe,"__index");
    lua_pushvalue(param_1,0xffffffff);
    lua_pushlightuserdata(param_1,param_3);
    lua_insert(param_1,0xfffffffe);
    lua_rawset(param_1,0xfffffffc);
  }
  lua_remove(param_1,0xfffffffe);
  return;
}

