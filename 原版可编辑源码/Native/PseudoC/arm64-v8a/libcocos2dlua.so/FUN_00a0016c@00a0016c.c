
void FUN_00a0016c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_88;
  uint local_84;
  ulong local_80;
  ulong uStack_78;
  long local_68;
  
                    /* try { // try from 00a00184 to 00b0019f has its CatchHandler @ 00a00238 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a001a0 to 00b001d3 has its CatchHandler @ 00a000f4 */
  uVar10 = param_1[3];
  uVar15 = *param_1;
  lVar5 = FUN_009fd24c(uVar10,&local_88);
  uVar14 = local_88;
  do {
    if (lVar5 == 0) {
                    /* try { // try from 00a00600 to 00b0065f has its CatchHandler @ 00a0040c */
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00a004a4 with catch @ 00a00614
                       catch() { ... } // from try @ 00a005e0 with catch @ 00a00614 */
                    /* catch() { ... } // from try @ 00a00478 with catch @ 00a00618 */
                    /* catch() { ... } // from try @ 00a00468 with catch @ 00a0061c */
                    /* catch() { ... } // from try @ 00a00504 with catch @ 00a00620
                       catch() { ... } // from try @ 00a005f8 with catch @ 00a00620 */
                    /* catch() { ... } // from try @ 00a0044c with catch @ 00a00624
                       catch() { ... } // from try @ 00a0055c with catch @ 00a00624 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_88 = uVar14;
                    /* try { // try from 00a001d4 to 00b001e7 has its CatchHandler @ 00a0023c */
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
LAB_00a0027c:
      FUN_009fd480(uVar10,uVar14);
    }
    else {
      uVar1 = uVar14 >> 3;
      if (uVar1 == 0) {
        if (-1 < *(int *)(param_2 + 0x20)) goto LAB_00a0027c;
        plVar7 = *(long **)(param_2 + 0x28);
      }
      else {
                    /* try { // try from 00a001e8 to 00b00277 has its CatchHandler @ 00a000f4 */
        uVar8 = (ulong)uVar1 * 0x9e3779b1;
        uVar6 = *(long *)(param_2 + 0x10) - 1;
        uVar9 = uVar6 & uVar8;
        if ((uVar6 & uVar8) == 0) {
          uVar9 = 1;
        }
        for (plVar7 = (long *)(*(long *)(param_2 + 0x28) +
                              uVar9 * ((ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff));
            plVar7[1] != (ulong)uVar1; plVar7 = (long *)((long)plVar7 + *plVar7)) {
          if (*plVar7 == 0) goto LAB_00a0027c;
        }
      }
      if ((plVar7 == (long *)0x0) ||
         (puVar11 = (undefined8 *)plVar7[2], puVar11 == (undefined8 *)0x0)) goto LAB_00a0027c;
                    /* catch() { ... } // from try @ 00a00184 with catch @ 00a00238 */
                    /* catch() { ... } // from try @ 00a00148 with catch @ 00a0023c
                       catch() { ... } // from try @ 00a001d4 with catch @ 00a0023c */
      if ((puVar11[1] == 0) || ((*(byte *)(puVar11[1] + 0x73) >> 5 & 1) == 0)) {
        if ((*(byte *)((long)puVar11 + 0x1f) >> 5 & 1) == 0) {
          lua_pushstring(uVar15,*puVar11);
          FUN_00a00dec(param_1,puVar11,uVar14);
          lua_rawset(uVar15,0xfffffffd);
                    /* try { // try from 00a00278 to 00b002e3 has its CatchHandler @ 00a00278
                       catch() { ... } // from try @ 00a00278 with catch @ 00a00278
                       catch() { ... } // from try @ 00a002f8 with catch @ 00a00278 */
        }
        else {
          uVar12 = *param_1;
          FUN_00a012b0(param_1,puVar11);
          if (((uVar14 & 7) == 2) && ((*(uint *)((long)puVar11 + 0x1c) >> 0x1e & 1) != 0)) {
            iVar3 = lua_objlen(uVar12,0xffffffff);
            uVar13 = param_1[3];
                    /* try { // try from 00a002e4 to 00b002f7 has its CatchHandler @ 00a00368 */
            FUN_009fbfa0(uVar12,uVar13,&local_80);
            if (local_80 < uStack_78) {
              do {
                    /* try { // try from 00a002f8 to 00b00397 has its CatchHandler @ 00a00278 */
                iVar3 = iVar3 + 1;
                param_1[3] = &local_80;
                FUN_00a00dec(param_1,puVar11,uVar14);
                param_1[3] = uVar13;
                lua_rawseti(uVar12,0xfffffffe,iVar3);
              } while (local_80 < uStack_78);
            }
          }
          else {
                    /* try { // try from 00a00468 to 00b00477 has its CatchHandler @ 00a0061c */
            FUN_00a00dec(param_1,puVar11,uVar14);
            iVar3 = lua_objlen(uVar12,0xfffffffe);
                    /* try { // try from 00a00478 to 00b00483 has its CatchHandler @ 00a00618 */
            lua_rawseti(uVar12,0xfffffffe,iVar3 + 1);
          }
          lua_settop(uVar12,0xfffffffe);
        }
      }
      else {
        uVar12 = *param_1;
        uVar13 = param_1[3];
        iVar3 = lua_gettop(uVar12);
        FUN_00a012b0(param_1,puVar11);
                    /* catch() { ... } // from try @ 00a002e4 with catch @ 00a00368 */
        FUN_009fbfa0(uVar12,uVar13,&local_80);
        if (puVar11[1] != 0) {
          lua_pushnil(uVar12);
          lua_pushnil(uVar12);
          lVar5 = FUN_009fd24c(&local_80,&local_84);
          if (lVar5 == 0) {
            uVar14 = 0;
LAB_00a004b8:
            lVar5 = puVar11[1];
                    /* try { // try from 00a004c8 to 00b004fb has its CatchHandler @ 00a00634 */
            if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
LAB_00a00514:
              lVar5 = 0;
            }
            else {
              uVar1 = (int)*(long *)(lVar5 + 0x10) - 1;
              uVar9 = (ulong)uVar1 & 0x9e3779b1;
              if ((uVar1 & 0x9e3779b1) == 0) {
                uVar9 = 1;
              }
              for (plVar7 = (long *)(*(long *)(lVar5 + 0x28) +
                                    uVar9 * ((ulong)*(uint *)(lVar5 + 0x20) & 0x7fffffff));
                  plVar7[1] != 1; plVar7 = (long *)((long)plVar7 + *plVar7)) {
                if (*plVar7 == 0) goto LAB_00a00514;
                    /* try { // try from 00a00504 to 00b0052f has its CatchHandler @ 00a00620 */
              }
              if (plVar7 == (long *)0x0) goto LAB_00a00514;
              lVar5 = plVar7[2];
            }
            iVar4 = FUN_00a00634(uVar12,param_1[1],lVar5,1);
            if (iVar4 != 0) {
                    /* try { // try from 00a00530 to 00b0055b has its CatchHandler @ 00a0040c */
              lua_replace(uVar12,iVar3 + 2);
              uVar14 = uVar14 | 1;
            }
          }
          else {
            uVar14 = 0;
            do {
              uVar1 = local_84 >> 3;
              if (uVar1 - 1 < 2) {
                param_1[3] = &local_80;
                lVar5 = puVar11[1];
                uVar14 = uVar1 | uVar14;
                if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
LAB_00a003b0:
                  lVar5 = 0;
                }
                else {
                    /* try { // try from 00a0040c to 00b0044b has its CatchHandler @ 00a0040c
                       catch() { ... } // from try @ 00a0040c with catch @ 00a0040c
                       catch() { ... } // from try @ 00a00530 with catch @ 00a0040c
                       catch() { ... } // from try @ 00a00600 with catch @ 00a0040c */
                  uVar8 = (ulong)uVar1 * 0x9e3779b1;
                  uVar6 = *(long *)(lVar5 + 0x10) - 1;
                  uVar9 = uVar6 & uVar8;
                  if ((uVar6 & uVar8) == 0) {
                    uVar9 = 1;
                  }
                  for (plVar7 = (long *)(*(long *)(lVar5 + 0x28) +
                                        uVar9 * ((ulong)*(uint *)(lVar5 + 0x20) & 0x7fffffff));
                      plVar7[1] != (ulong)uVar1; plVar7 = (long *)((long)plVar7 + *plVar7)) {
                    if (*plVar7 == 0) goto LAB_00a003b0;
                    /* try { // try from 00a0044c to 00b00463 has its CatchHandler @ 00a00624 */
                  }
                  if (plVar7 == (long *)0x0) goto LAB_00a003b0;
                  lVar5 = plVar7[2];
                }
                FUN_00a00dec(param_1,lVar5);
                param_1[3] = uVar13;
                lua_replace(uVar12,iVar3 + 1 + uVar1);
              }
              lVar5 = FUN_009fd24c(&local_80,&local_84);
            } while (lVar5 != 0);
                    /* try { // try from 00a004a4 to 00b004b7 has its CatchHandler @ 00a00614 */
            if ((uVar14 & 1) == 0) goto LAB_00a004b8;
          }
          if ((uVar14 >> 1 & 1) == 0) {
            lVar5 = puVar11[1];
            if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
LAB_00a005a8:
              lVar5 = 0;
            }
            else {
                    /* try { // try from 00a0055c to 00b0056f has its CatchHandler @ 00a00624 */
              uVar6 = *(long *)(lVar5 + 0x10) - 1;
              uVar9 = uVar6 & 0x13c6ef362;
              if ((uVar6 & 0x13c6ef362) == 0) {
                uVar9 = 1;
              }
                    /* try { // try from 00a00580 to 00b00593 has its CatchHandler @ 00a00634 */
              for (plVar7 = (long *)(*(long *)(lVar5 + 0x28) +
                                    uVar9 * ((ulong)*(uint *)(lVar5 + 0x20) & 0x7fffffff));
                  plVar7[1] != 2; plVar7 = (long *)((long)plVar7 + *plVar7)) {
                if (*plVar7 == 0) goto LAB_00a005a8;
              }
              if (plVar7 == (long *)0x0) goto LAB_00a005a8;
              lVar5 = plVar7[2];
            }
            iVar4 = FUN_00a00634(uVar12,param_1[1],lVar5,1);
            if (iVar4 != 0) {
              lua_replace(uVar12,iVar3 + 3);
              uVar14 = uVar14 | 2;
            }
          }
          if (uVar14 == 3) {
                    /* try { // try from 00a005e0 to 00b005e7 has its CatchHandler @ 00a00614 */
            lua_rawset();
          }
          else {
            lua_settop(uVar12,0xfffffffd);
          }
                    /* try { // try from 00a005f8 to 00b005ff has its CatchHandler @ 00a00620 */
          lua_settop(uVar12,0xfffffffe);
        }
      }
    }
    lVar5 = FUN_009fd24c(uVar10,&local_88);
    uVar14 = local_88;
  } while( true );
}

