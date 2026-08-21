
undefined8 FUN_00a01330(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  plVar3 = (long *)FUN_009f9a54();
  uVar4 = lua_tolstring(param_1,2,0);
  plVar5 = (long *)FUN_009fc1e8(plVar3,uVar4);
  if (plVar5 == (long *)0x0) {
    iVar2 = lua_type(param_1,2);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (0 < iVar2) {
      return 0;
    }
    lVar7 = *plVar3;
    plVar5 = (long *)0x0;
    goto LAB_00a01400;
  }
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    lVar8 = *plVar5;
    if (lVar8 != 0) {
      uVar10 = lVar7 - 1U & lVar8 * 0x9e3779b1;
      if ((lVar7 - 1U & lVar8 * 0x9e3779b1) == 0) {
        uVar10 = 1;
      }
      for (plVar5 = (long *)(plVar3[3] + uVar10 * ((ulong)*(uint *)(plVar3 + 2) & 0x7fffffff));
          plVar5[1] != lVar8; plVar5 = (long *)((long)plVar5 + *plVar5)) {
        if (*plVar5 == 0) goto LAB_00a013fc;
      }
      goto LAB_00a01400;
    }
    if ((int)plVar3[2] < 0) {
      plVar5 = (long *)plVar3[3];
      goto LAB_00a01400;
    }
  }
LAB_00a013fc:
  plVar5 = (long *)0x0;
LAB_00a01400:
  uVar10 = (ulong)*(uint *)(plVar3 + 2) & 0x7fffffff;
  do {
    if (plVar5 == (long *)0x0) {
      uVar9 = 0;
      if (-1 < (int)*(uint *)(plVar3 + 2)) goto LAB_00a01418;
      plVar5 = (long *)plVar3[3];
      puVar11 = (undefined8 *)plVar5[2];
    }
    else {
      uVar9 = (long)plVar5 - plVar3[3];
LAB_00a01418:
      do {
        uVar1 = uVar9 + uVar10;
        if (lVar7 * uVar10 <= uVar1) {
          return 0;
        }
        lVar8 = plVar3[3] + uVar10 + uVar9;
        uVar9 = uVar1;
      } while (*(long *)(lVar8 + 8) == 0);
      plVar5 = (long *)(plVar3[3] + uVar1);
      puVar11 = (undefined8 *)plVar5[2];
    }
    if ((puVar11 != (undefined8 *)0x0) && (-1 < *(int *)(puVar11 + 0xe))) {
      lua_pushstring(param_1,*puVar11);
      lua_pushstring(param_1,puVar11[1]);
      if ((*(uint *)(puVar11 + 0xe) >> 0x1d & 1) == 0) {
        pcVar6 = "message";
        if ((*(uint *)(puVar11 + 0xe) & 0x10000000) != 0) {
          pcVar6 = "enum";
        }
      }
      else {
        pcVar6 = "map";
      }
      lua_pushstring(param_1,pcVar6);
      return 3;
    }
  } while( true );
}

