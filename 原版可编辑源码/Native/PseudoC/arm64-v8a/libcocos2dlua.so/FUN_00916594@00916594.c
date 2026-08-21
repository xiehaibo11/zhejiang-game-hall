
undefined8 FUN_00916594(void)

{
  byte *pbVar1;
  char in_NG;
  char in_OV;
  undefined1 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 *unaff_x22;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x23;
  long unaff_x24;
  byte bVar9;
  long unaff_x29;
  long in_stack_00000008;
  byte *in_stack_00000018;
  
  if (in_NG == in_OV) {
    lVar5 = 0;
    puVar2 = unaff_x22;
    do {
      puVar7 = puVar2 + 1;
      lVar5 = FUN_00916eac(*puVar2,&stack0x00000014,lVar5);
      puVar2 = puVar7;
    } while (puVar7 < unaff_x22 + unaff_x24);
  }
  else {
    lVar5 = 0;
  }
  puVar2 = (undefined1 *)luaL_optlstring();
  if (puVar2 == (undefined1 *)0x0) {
    if (lVar5 != 0) {
      pbVar6 = &stack0x00000014;
      pbVar1 = &stack0x00000430;
      do {
        bVar9 = *pbVar6;
        if ((&DAT_01781e95)[bVar9] == '\0') {
          pbVar4 = in_stack_00000018;
          if (pbVar1 <= in_stack_00000018) {
            luaL_prepbuffer(&stack0x00000018);
            bVar9 = *pbVar6;
            pbVar4 = in_stack_00000018;
          }
          in_stack_00000018 = pbVar4 + 1;
          *pbVar4 = bVar9;
        }
        else {
          pbVar4 = in_stack_00000018;
          if (pbVar1 <= in_stack_00000018) {
            luaL_prepbuffer(&stack0x00000018);
            pbVar4 = in_stack_00000018;
          }
          in_stack_00000018 = pbVar4 + 1;
          *pbVar4 = 0x3d;
          if (pbVar1 <= in_stack_00000018) {
            luaL_prepbuffer(&stack0x00000018);
          }
          pbVar4 = in_stack_00000018 + 1;
          *in_stack_00000018 = "0123456789ABCDEF"[bVar9 >> 4];
          if (pbVar1 <= pbVar4) {
            in_stack_00000018 = pbVar4;
            luaL_prepbuffer(&stack0x00000018);
            pbVar4 = in_stack_00000018;
          }
          in_stack_00000018 = pbVar4 + 1;
          *pbVar4 = "0123456789ABCDEF"[(ulong)bVar9 & 0xf];
        }
        lVar5 = lVar5 + -1;
        pbVar6 = pbVar6 + 1;
      } while (lVar5 != 0);
      luaL_addstring(&stack0x00000018,&DAT_012c5901);
    }
    luaL_pushresult(&stack0x00000018);
    pcVar3 = (char *)lua_tolstring();
    if (*pcVar3 == '\0') {
      lua_pushnil();
    }
    lua_pushnil();
  }
  else {
    if (0 < in_stack_00000008) {
      puVar7 = puVar2;
      do {
        puVar8 = puVar7 + 1;
        lVar5 = FUN_00916eac(*puVar7,&stack0x00000014,lVar5);
        puVar7 = puVar8;
      } while (puVar8 < puVar2 + in_stack_00000008);
    }
    luaL_pushresult(&stack0x00000018);
    lua_pushlstring();
  }
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

