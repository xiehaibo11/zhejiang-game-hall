
int FUN_009f8208(undefined8 param_1)

{
  ulong *puVar1;
  uint *puVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong *puVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  char cVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 local_b8 [16];
  long local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_88 [3];
  undefined2 uStack_6b;
  undefined1 local_69;
  long local_68;
  
                    /* catch() { ... } // from try @ 009f81c8 with catch @ 009f8228 */
  uVar3 = tpidr_el0;
  local_68 = *(long *)(uVar3 + 0x28);
  puVar10 = (ulong *)lua_touserdata(param_1,1);
                    /* try { // try from 009f8244 to 00af82c3 has its CatchHandler @ 009f8244
                       catch() { ... } // from try @ 009f8244 with catch @ 009f8244
                       catch() { ... } // from try @ 009f82d4 with catch @ 009f8244 */
  if ((puVar10 != (ulong *)0x0) && (iVar7 = lua_getmetatable(param_1,1), iVar7 != 0)) {
    lua_getfield(param_1,0xffffd8f0,"pb.Slice");
    iVar7 = lua_rawequal(param_1,0xfffffffe,0xffffffff);
    lua_settop(param_1,0xfffffffd);
    if (iVar7 != 0) {
      pcVar11 = (char *)luaL_checklstring(param_1,2,0);
      auVar21._8_8_ = local_b8._8_8_;
      auVar21._0_8_ = local_b8._0_8_;
      goto LAB_009f8334;
    }
  }
  pcVar11 = (char *)luaL_checklstring(param_1,2,0);
                    /* try { // try from 009f82c4 to 00af82d3 has its CatchHandler @ 009f8364 */
  auVar21 = FUN_009f9e20(param_1,1);
  local_a8 = auVar21._0_8_;
  if (local_a8 == 0) {
                    /* try { // try from 009f82d4 to 00af837f has its CatchHandler @ 009f8244 */
    uVar8 = lua_type(param_1,1);
    uVar14 = lua_typename(param_1,uVar8);
    lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar14);
    uVar14 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar14);
  }
  puVar10 = (ulong *)local_b8;
LAB_009f8334:
  local_b8 = auVar21;
  iVar7 = lua_gettop(param_1);
  cVar19 = *pcVar11;
  if (cVar19 == '\0') {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
                    /* catch() { ... } // from try @ 009f82c4 with catch @ 009f8364 */
    do {
      while( true ) {
        if (1 < (int)cVar19 - 0x2aU) break;
        uVar18 = puVar10[1] - puVar10[2];
        FUN_009fa638(param_1,2 < iVar7,1,"format argument exceed");
        if (cVar19 == '*') {
          lVar12 = luaL_checkinteger(param_1,3);
          if (lVar12 < 0) {
            if ((ulong)-lVar12 <= uVar18) {
              lVar12 = uVar18 + lVar12 + 1;
              goto joined_r0x009f8390;
            }
          }
          else if (lVar12 != 0) goto LAB_009f8394;
LAB_009f84d4:
          lVar12 = 1;
        }
        else {
          uVar16 = *puVar10;
          uVar13 = puVar10[2];
          lVar12 = luaL_checkinteger(param_1,3);
          lVar12 = lVar12 + ((long)(((ulong)(uint)((int)uVar16 - (int)uVar13) << 0x20) + 0x100000000
                                   ) >> 0x20);
joined_r0x009f8390:
          if (lVar12 == 0) goto LAB_009f84d4;
        }
LAB_009f8394:
        if ((long)uVar18 < lVar12) {
          lVar12 = uVar18 + 1;
        }
        *puVar10 = (puVar10[2] + lVar12) - 1;
        pcVar11 = pcVar11 + 1;
        cVar19 = *pcVar11;
        if (cVar19 == '\0') goto LAB_009f8920;
      }
      if (cVar19 == 0x40) {
        lua_pushinteger(param_1,(long)(((ulong)(uint)((int)*puVar10 - (int)puVar10[2]) << 0x20) +
                                      0x100000000) >> 0x20);
      }
      else {
        if (puVar10[1] <= *puVar10) {
          lua_pushnil(param_1);
          iVar17 = iVar17 + 1;
          break;
        }
        luaL_checkstack(param_1,1,"too many values");
        cVar19 = *pcVar11;
        lVar12 = FUN_009f9a54(param_1);
        if ((int)cVar19 - 99U < 0x14) {
          bVar4 = *(byte *)(lVar12 + 0x484) >> 3;
          uVar9 = bVar4 & 3;
          uVar18 = (ulong)uVar9;
          puVar15 = (undefined2 *)&local_69;
          switch((int)cVar19) {
          case 99:
            FUN_009fa638(param_1,2 < iVar7,1,"format argument exceed");
            uVar13 = luaL_checkinteger(param_1,3);
            local_a0 = uVar13;
            uVar16 = *puVar10;
            uVar18 = uVar16;
            if (puVar10[1] - uVar16 < uVar13) {
LAB_009f86dc:
              luaL_error(param_1,&DAT_012f5ca1,((int)uVar18 - (int)puVar10[2]) + 1);
              uVar16 = uVar13;
            }
            else {
              local_a0 = uVar16;
              uVar18 = uVar16 + uVar13;
              local_98 = uVar18;
              *puVar10 = uVar18;
              bVar6 = uVar13 == 0;
              uVar13 = uVar16;
              if (bVar6) goto LAB_009f86dc;
            }
            lua_pushlstring(param_1,uVar16,uVar18 - uVar16);
            goto LAB_009f88fc;
          case 100:
            puVar2 = (uint *)*puVar10;
            if ((uint *)puVar10[1] < puVar2 + 1) {
              luaL_error(param_1,&DAT_012f5c3a,((int)puVar2 - (int)puVar10[2]) + 1);
              uVar18 = extraout_x8_00;
            }
            else {
              uVar5 = *puVar2;
              *puVar10 = (ulong)(puVar2 + 1);
              uVar18 = (ulong)uVar5;
              local_a0 = CONCAT44(local_a0._4_4_,uVar5);
              if (((bVar4 & 3) != 0) && ((int)uVar5 < 0)) {
                if (uVar9 == 2) {
                  local_69 = 0;
                  puVar15 = &uStack_6b;
                  do {
                    uVar16 = uVar18 & 0xf;
                    uVar18 = uVar18 >> 4;
                    *(char *)((long)puVar15 + 1) = "0123456789ABCDEF"[uVar16];
                    puVar15 = (undefined2 *)((long)puVar15 + -1);
                  } while (uVar18 != 0);
                  *puVar15 = 0x7830;
                }
                else {
                    /* try { // try from 009f8754 to 00af87cb has its CatchHandler @ 009f8754
                       catch() { ... } // from try @ 009f8754 with catch @ 009f8754
                       catch() { ... } // from try @ 009f87dc with catch @ 009f8754 */
                  if (uVar9 == 1) {
                    local_69 = 0;
                    do {
                      bVar6 = 9 < uVar18;
                      puVar15 = (undefined2 *)((long)puVar15 + -1);
                      *(undefined *)puVar15 = (&DAT_012f5a37)[uVar18 % 10];
                      uVar18 = uVar18 / 10;
                    } while (bVar6);
                  }
                }
                goto LAB_009f88ec;
              }
            }
            uVar18 = uVar18 & 0xffffffff;
            break;
          default:
            goto switchD_009f847c_caseD_65;
          case 0x71:
            puVar1 = (ulong *)*puVar10;
            if (puVar10[1] < puVar1 + 1) {
              luaL_error(param_1,"invalid fixed64 value at offset %d",
                         ((int)puVar1 - (int)puVar10[2]) + 1);
              uVar18 = extraout_x8;
            }
            else {
              uVar18 = *puVar1;
              *puVar10 = (ulong)(puVar1 + 1);
              local_a0 = uVar18;
              if (((bVar4 & 3) != 0) && (uVar18 + 0x80000000 >> 0x20 != 0)) {
                uVar16 = -uVar18;
                if (-1 < (long)uVar18) {
                  uVar16 = uVar18;
                }
                puVar15 = &uStack_6b;
                if (uVar9 == 2) {
                  do {
                    uVar18 = uVar16 & 0xf;
                    uVar16 = uVar16 >> 4;
                    *(char *)((long)puVar15 + 1) = "0123456789ABCDEF"[uVar18];
                    puVar15 = (undefined2 *)((long)puVar15 + -1);
                  } while (uVar16 != 0);
                  goto LAB_009f88a4;
                }
                puVar15 = (undefined2 *)&local_69;
                if (uVar9 == 1) {
                  local_69 = 0;
                  do {
                    bVar6 = 9 < uVar16;
                    puVar15 = (undefined2 *)((long)puVar15 + -1);
                    *(undefined *)puVar15 = (&DAT_012f5a37)[uVar16 % 10];
                    uVar16 = uVar16 / 10;
                  } while (bVar6);
                }
                goto joined_r0x009f88ac;
              }
            }
            break;
          case 0x73:
            uVar16 = *puVar10;
            lVar12 = FUN_009fb4dc(puVar10,local_88);
            if ((lVar12 == 0) || (uVar18 = *puVar10, puVar10[1] - uVar18 < local_88[0])) {
              *puVar10 = uVar16;
              uVar13 = uVar16;
              uVar20 = uVar3;
LAB_009f85bc:
              luaL_error(param_1,"invalid bytes value at offset %d",
                         ((int)uVar13 - (int)puVar10[2]) + 1);
              uVar13 = uVar20;
            }
            else {
              uVar13 = uVar18 + local_88[0];
              local_a0 = uVar18;
              local_98 = uVar13;
              *puVar10 = uVar13;
              uVar20 = uVar13;
              if (uVar13 == uVar16) goto LAB_009f85bc;
            }
            lua_pushlstring(param_1,uVar18,uVar13 - uVar18);
            goto LAB_009f88fc;
          case 0x76:
            lVar12 = FUN_009fb4dc(puVar10,&local_a0);
            uVar18 = local_a0;
            if (lVar12 == 0) {
              luaL_error(param_1,"invalid varint value at offset %d",
                         ((int)*puVar10 - (int)puVar10[2]) + 1);
              uVar18 = local_a0;
            }
            local_a0 = uVar18;
            if (((bVar4 & 3) != 0) && (uVar18 + 0x80000000 >> 0x20 != 0)) {
              uVar16 = -uVar18;
              if (-1 < (long)uVar18) {
                uVar16 = uVar18;
              }
                    /* try { // try from 009f87cc to 00af87db has its CatchHandler @ 009f8864 */
              puVar15 = &uStack_6b;
              if (uVar9 == 2) {
                do {
                  uVar18 = uVar16 & 0xf;
                    /* catch() { ... } // from try @ 009f87cc with catch @ 009f8864 */
                  uVar16 = uVar16 >> 4;
                  *(char *)((long)puVar15 + 1) = "0123456789ABCDEF"[uVar18];
                  puVar15 = (undefined2 *)((long)puVar15 + -1);
                } while (uVar16 != 0);
LAB_009f88a4:
                local_69 = 0;
                *puVar15 = 0x7830;
              }
              else {
                    /* try { // try from 009f87dc to 00af887f has its CatchHandler @ 009f8754 */
                puVar15 = (undefined2 *)&local_69;
                if (uVar9 == 1) {
                  local_69 = 0;
                  do {
                    bVar6 = 9 < uVar16;
                    puVar15 = (undefined2 *)((long)puVar15 + -1);
                    *(undefined *)puVar15 = (&DAT_012f5a37)[uVar16 % 10];
                    uVar16 = uVar16 / 10;
                  } while (bVar6);
                }
              }
joined_r0x009f88ac:
              if ((long)local_a0 < 0) {
                *(undefined1 *)((long)puVar15 + -1) = 0x2d;
                puVar15 = (undefined2 *)((long)puVar15 + -1);
              }
LAB_009f88ec:
              *(undefined1 *)((long)puVar15 + -1) = 0x23;
              lua_pushstring(param_1);
              goto LAB_009f88fc;
            }
          }
          lua_pushnumber((double)(long)uVar18,param_1);
        }
        else {
switchD_009f847c_caseD_65:
          uVar9 = FUN_009fa908(pcVar11);
          FUN_009fa638(param_1,~uVar9 >> 0x1f,1,"invalid formater: \'%c\'",(long)*pcVar11);
          uVar14 = FUN_009f9a54(param_1);
          FUN_009fb6ac(param_1,uVar14,uVar9,puVar10);
        }
      }
LAB_009f88fc:
      iVar17 = iVar17 + 1;
      pcVar11 = pcVar11 + 1;
      cVar19 = *pcVar11;
    } while (cVar19 != '\0');
  }
LAB_009f8920:
  if (*(long *)(uVar3 + 0x28) == local_68) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

