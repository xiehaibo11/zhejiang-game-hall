
undefined8 FUN_00a017b0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  lua_pushstring(param_1,*param_3);
  lua_pushinteger(param_1,(long)*(int *)(param_3 + 3));
  ppuVar3 = (undefined **)param_3[1];
  if (ppuVar3 == (undefined **)0x0) {
    lVar4 = ((ulong)*(byte *)((long)param_3 + 0x1f) & 0x1f) - 1;
    if ((uint)lVar4 < 0x12) {
      ppuVar3 = &PTR_s_double_014a84ad_5_016a1e80 + lVar4;
      goto LAB_00a0180c;
    }
    puVar1 = &DAT_012f5b1a;
  }
  else {
LAB_00a0180c:
    puVar1 = *ppuVar3;
  }
  lua_pushstring(param_1,puVar1);
  lua_pushstring(param_1,param_3[2]);
  if ((*(uint *)((long)param_3 + 0x1c) >> 0x1e & 1) == 0) {
    pcVar2 = "optional";
    if ((*(uint *)((long)param_3 + 0x1c) & 0x20000000) != 0) {
      pcVar2 = "repeated";
    }
  }
  else {
    pcVar2 = "packed";
  }
  lua_pushstring(param_1,pcVar2);
  uVar5 = (ulong)*(uint *)((long)param_3 + 0x1c) & 0xffffff;
  if ((int)uVar5 == 0) {
    return 5;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x50) != 0)) {
    uVar6 = *(long *)(param_2 + 0x50) - 1;
    uVar8 = uVar6 & uVar5 * 0x9e3779b1;
    if ((uVar6 & uVar5 * 0x9e3779b1) == 0) {
      uVar8 = 1;
    }
    for (plVar7 = (long *)(*(long *)(param_2 + 0x68) +
                          uVar8 * ((ulong)*(uint *)(param_2 + 0x60) & 0x7fffffff));
        plVar7[1] != uVar5; plVar7 = (long *)((long)plVar7 + *plVar7)) {
      if (*plVar7 == 0) goto LAB_00a018e0;
    }
    if (plVar7 != (long *)0x0) {
      lVar4 = plVar7[2];
      goto LAB_00a018e4;
    }
  }
LAB_00a018e0:
  lVar4 = 0;
LAB_00a018e4:
  lua_pushstring(param_1,lVar4);
  lua_pushinteger(param_1,((ulong)*(uint *)((long)param_3 + 0x1c) & 0xffffff) - 1);
  return 7;
}

