
void FUN_009ffe90(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_3 == 0) {
    lua_createtable(param_1,0);
    return;
  }
  bVar3 = *(byte *)(param_2 + 0x484) >> 1 & 3;
  lua_createtable(param_1,0,0);
  if (((bVar3 == 0) && ((*(uint *)(param_3 + 0x70) >> 0x1e & 1) != 0)) || (bVar3 == 1)) {
    puVar9 = (undefined8 *)0x0;
LAB_00a00000:
    if (puVar9 == (undefined8 *)0x0) goto LAB_00a00064;
LAB_00a00004:
    lVar5 = *(long *)(param_3 + 0x10);
    if (lVar5 != 0) {
      iVar4 = *(int *)(puVar9 + 3);
      if (iVar4 == 0) {
        if (*(int *)(param_3 + 0x20) < 0) {
          plVar7 = *(long **)(param_3 + 0x28);
          goto LAB_00a0006c;
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
          if (plVar7[1] == (long)iVar4) goto LAB_00a0006c;
          if (*plVar7 == 0) break;
          plVar7 = (long *)((long)plVar7 + *plVar7);
        }
      }
    }
    do {
      plVar7 = (long *)0x0;
LAB_00a0006c:
      uVar8 = (ulong)*(uint *)(param_3 + 0x20) & 0x7fffffff;
LAB_00a00078:
      do {
        if (plVar7 == (long *)0x0) {
          uVar6 = 0;
          if ((int)*(uint *)(param_3 + 0x20) < 0) {
            plVar7 = *(long **)(param_3 + 0x28);
            puVar9 = (undefined8 *)plVar7[2];
            if (puVar9 != (undefined8 *)0x0) break;
            goto LAB_00a00078;
          }
        }
        else {
          uVar6 = (long)plVar7 - *(long *)(param_3 + 0x28);
        }
        do {
          uVar1 = uVar6 + uVar8;
          if (lVar5 * uVar8 <= uVar1) {
            return;
          }
          lVar2 = *(long *)(param_3 + 0x28) + uVar8 + uVar6;
          uVar6 = uVar1;
        } while (*(long *)(lVar2 + 8) == 0);
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + uVar1);
        puVar9 = (undefined8 *)plVar7[2];
      } while (puVar9 == (undefined8 *)0x0);
                    /* try { // try from 00a000f4 to 00b00147 has its CatchHandler @ 00a000f4
                       catch() { ... } // from try @ 00a000f4 with catch @ 00a000f4
                       catch() { ... } // from try @ 00a001a0 with catch @ 00a000f4
                       catch() { ... } // from try @ 00a001e8 with catch @ 00a000f4 */
      if (((*(uint *)((long)puVar9 + 0x1c) & 0xffffff) != 0) ||
         (iVar4 = FUN_00a00634(param_1,param_2,puVar9,*(uint *)(param_3 + 0x70) >> 0x1e & 1),
         iVar4 == 0)) goto LAB_00a00000;
      lua_setfield(param_1,0xfffffffe,*puVar9);
      if (puVar9 != (undefined8 *)0x0) goto LAB_00a00004;
LAB_00a00064:
      lVar5 = *(long *)(param_3 + 0x10);
    } while( true );
  }
  if (bVar3 != 2) {
    return;
  }
  puVar9 = (undefined8 *)0x0;
LAB_009ffef4:
  if (puVar9 == (undefined8 *)0x0) goto LAB_009fff58;
LAB_009ffef8:
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 != 0) {
    iVar4 = *(int *)(puVar9 + 3);
    if (iVar4 == 0) {
      if (*(int *)(param_3 + 0x20) < 0) {
        plVar7 = *(long **)(param_3 + 0x28);
        goto LAB_009fff60;
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
        if (plVar7[1] == (long)iVar4) goto LAB_009fff60;
        if (*plVar7 == 0) break;
        plVar7 = (long *)((long)plVar7 + *plVar7);
      }
    }
  }
  do {
    plVar7 = (long *)0x0;
LAB_009fff60:
    uVar8 = (ulong)*(uint *)(param_3 + 0x20) & 0x7fffffff;
LAB_009fff6c:
    do {
      if (plVar7 == (long *)0x0) {
        uVar6 = 0;
        if ((int)*(uint *)(param_3 + 0x20) < 0) {
          plVar7 = *(long **)(param_3 + 0x28);
          puVar9 = (undefined8 *)plVar7[2];
          if (puVar9 != (undefined8 *)0x0) break;
          goto LAB_009fff6c;
        }
      }
      else {
        uVar6 = (long)plVar7 - *(long *)(param_3 + 0x28);
      }
      do {
        uVar1 = uVar6 + uVar8;
        if (lVar5 * uVar8 <= uVar1) {
                    /* try { // try from 00a00148 to 00b0017b has its CatchHandler @ 00a0023c */
          FUN_00a00bb4(param_1,param_2,param_3);
          lua_setmetatable(param_1,0xfffffffe);
          return;
        }
        lVar2 = *(long *)(param_3 + 0x28) + uVar8 + uVar6;
        uVar6 = uVar1;
      } while (*(long *)(lVar2 + 8) == 0);
      plVar7 = (long *)(*(long *)(param_3 + 0x28) + uVar1);
      puVar9 = (undefined8 *)plVar7[2];
    } while (puVar9 == (undefined8 *)0x0);
    if ((*(byte *)((long)puVar9 + 0x1f) >> 5 & 1) == 0) goto LAB_009ffef4;
    lua_createtable(param_1,0,0);
    lua_setfield(param_1,0xfffffffe,*puVar9);
    if (puVar9 != (undefined8 *)0x0) goto LAB_009ffef8;
LAB_009fff58:
    lVar5 = *(long *)(param_3 + 0x10);
  } while( true );
}

