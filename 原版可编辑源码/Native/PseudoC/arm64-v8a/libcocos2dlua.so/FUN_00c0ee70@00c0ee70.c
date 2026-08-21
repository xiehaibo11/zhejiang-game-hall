
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0ee70(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  char acStack_239 [9];
  long *local_230;
  long *local_228;
  long *local_220;
  long local_218;
  int local_210;
  int local_20c;
  undefined1 auStack_208 [3];
  undefined1 auStack_205 [2];
  undefined1 auStack_203 [2];
  undefined1 auStack_201 [2];
  undefined1 auStack_1ff [2];
  undefined1 uStack_1fd;
  undefined1 auStack_1fc [16];
  long alStack_1ec [28];
  long local_108 [30];
  long lStack_12;
  long local_8;
  char *pcVar9;
  
  local_218 = param_1;
  plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  local_228 = local_108;
  local_8 = ___stack_chk_guard;
  local_230 = local_108;
  local_220 = plVar12;
  local_20c = 1;
  local_210 = 0;
  if (param_3 != 0) {
    uVar10 = *(uint *)(param_3 + 0x10);
    if (local_108 < auStack_208 + (ulong)uVar10 + 1) {
      local_20c = 0;
    }
    else {
      local_210 = 1;
      local_230 = (long *)((long)local_108 - (ulong)uVar10);
      uVar6 = uVar10 - 1;
      if (uVar10 != 0) {
        do {
          uVar5 = (ulong)uVar6;
          uVar6 = uVar6 - 1;
          *(char *)((long)local_230 + uVar5) = *(char *)(param_3 + uVar5 + 0x18);
          plVar12 = local_220;
        } while (uVar6 != 0xffffffff);
      }
    }
  }
  puVar7 = (uint *)(*plVar12 + (ulong)param_2 * 0x18);
  bVar4 = false;
  uVar10 = 0;
LAB_00c0ef5c:
  plVar1 = local_228;
  plVar12 = local_230;
  uVar6 = *puVar7;
  uVar13 = puVar7[1];
  uVar2 = (ushort)uVar6;
  switch(uVar6 >> 0x1c) {
  case 0:
    goto switchD_00c0ef7c_caseD_0;
  case 1:
    if ((uVar6 >> 0x17 & 1) == 0) {
      pcVar8 = "struct";
    }
    else {
      pcVar8 = "union";
    }
    FUN_00c0e510(&local_230,puVar7,uVar10,pcVar8);
    goto LAB_00c0f0b0;
  case 2:
    if ((uVar6 >> 0x17 & 1) == 0) {
      FUN_00c0e418(&local_230,uVar10 | uVar6);
      if (uVar13 == 4) {
        if (local_230 < auStack_201 + 1) {
          local_20c = 0;
        }
        else {
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          *(char *)((long)local_230 + -1) = '2';
          *(char *)((long)local_230 + -2) = '3';
          *(char *)((long)local_230 + -3) = 'r';
          *(char *)((long)local_230 + -5) = 'p';
          *(char *)((long)local_230 + -4) = 't';
          *(char *)((long)local_230 + -6) = '_';
          *(char *)((long)local_230 + -7) = '_';
          local_230 = (long *)((long)local_230 + -7);
        }
      }
      plVar12 = local_230;
      if (local_230 <= auStack_208) goto LAB_00c0f3b0;
      local_230 = (long *)((long)local_230 + -1);
      *(char *)((long)plVar12 + -1) = '*';
    }
    else if (auStack_208 < local_230) {
      local_230 = (long *)((long)local_230 + -1);
      *(char *)((long)plVar12 + -1) = '&';
    }
    else {
LAB_00c0f3b0:
      local_20c = 0;
    }
    local_210 = 1;
    bVar4 = true;
    uVar10 = 0;
    break;
  case 3:
    if ((uVar6 & 0xfc000000) != 0x30000000) {
      if ((uVar6 >> 0x1a & 1) != 0) {
        if (uVar13 == 8) {
          if (local_230 < auStack_203 + 1) {
            local_20c = 0;
          }
          else {
            if (local_210 != 0) {
              local_230 = (long *)((long)local_230 + -1);
              *(char *)local_230 = ' ';
            }
            local_210 = 1;
            *(char *)((long)local_230 + -1) = 't';
            *(char *)((long)local_230 + -2) = 'a';
            *(char *)((long)local_230 + -3) = 'o';
            *(char *)((long)local_230 + -4) = 'l';
            local_230 = (long *)((long)local_230 + -5);
            *(char *)local_230 = 'f';
          }
        }
        if (local_230 < auStack_201 + 1) goto LAB_00c0f558;
        if (local_210 != 0) {
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = ' ';
        }
        local_210 = 1;
        *(char *)((long)local_230 + -1) = 'x';
        *(char *)((long)local_230 + -2) = 'e';
        *(char *)((long)local_230 + -3) = 'l';
        *(char *)((long)local_230 + -4) = 'p';
        *(char *)((long)local_230 + -5) = 'm';
        *(char *)((long)local_230 + -6) = 'o';
        local_230 = (long *)((long)local_230 + -7);
        *(char *)local_230 = 'c';
        goto LAB_00c0f0b0;
      }
      if (local_230 < auStack_205 + 1) {
        local_20c = 0;
      }
      else {
        if (local_210 != 0) {
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = ' ';
        }
        local_210 = 1;
        *(char *)((long)local_230 + -1) = ')';
        *(char *)((long)local_230 + -2) = ')';
        *(char *)((long)local_230 + -3) = ')';
        local_230 = (long *)((long)local_230 + -3);
      }
      if (local_230 < (ulong)((long)auStack_1ff + 2U)) {
        local_20c = 0;
        if (local_230 < alStack_1ec) {
LAB_00c0f340:
          local_20c = 0;
          puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
          goto LAB_00c0ef5c;
        }
        if (local_210 != 0) {
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = ' ';
        }
      }
      else {
        do {
          uVar6 = uVar13 / 10;
          cVar3 = (char)uVar13;
          uVar13 = uVar13 / 10;
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = (cVar3 - ((char)uVar6 * '\b' + (char)(uVar6 << 1))) + '0';
        } while (uVar13 != 0);
        local_210 = 0;
        if (local_230 < alStack_1ec) goto LAB_00c0f340;
      }
      local_210 = 1;
      uVar5 = 0x1a;
      do {
        uVar6 = (int)uVar5 - 1;
        *(char *)((long)local_230 + -0x1b + uVar5) = "__attribute__((vector_size("[uVar5];
        uVar5 = (ulong)uVar6;
      } while (uVar6 != 0xffffffff);
      local_230 = (long *)((long)local_230 + -0x1b);
      puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
      goto LAB_00c0ef5c;
    }
    local_210 = 1;
    if (bVar4) {
      if (auStack_208 < local_230) {
        local_230 = (long *)((long)local_230 + -1);
        *(char *)((long)plVar12 + -1) = '(';
      }
      else {
        local_20c = 0;
      }
      if (local_228 < &local_8) {
        local_228 = (long *)((long)local_228 + 1);
        *(char *)plVar1 = ')';
        goto LAB_00c0f3f4;
      }
LAB_00c0f7d4:
      local_20c = 0;
    }
    else {
LAB_00c0f3f4:
      plVar12 = local_228;
      if (&local_8 <= local_228) goto LAB_00c0f7d4;
      local_228 = (long *)((long)local_228 + 1);
      *(char *)plVar12 = '[';
    }
    plVar12 = local_228;
    if (uVar13 == 0xffffffff) {
      if ((uVar6 >> 0x14 & 1) != 0) {
        if (&local_8 <= local_228) goto LAB_00c0f534;
        local_228 = (long *)((long)local_228 + 1);
        *(char *)plVar12 = '?';
      }
    }
    else {
      uVar11 = 0;
      uVar6 = *(uint *)(*local_220 + (ulong)(ushort)*puVar7 * 0x18 + 4);
      if ((uVar6 != 0) && (uVar11 = 0, uVar6 != 0)) {
        uVar11 = uVar13 / uVar6;
      }
      pcVar8 = acStack_239 + 2;
      if (&lStack_12 < local_228) {
        local_20c = 0;
      }
      else {
        do {
          uVar6 = uVar11 / 10;
          cVar3 = (char)uVar11;
          uVar11 = uVar11 / 10;
          *pcVar8 = (cVar3 - ((char)uVar6 * '\b' + (char)(uVar6 << 1))) + '0';
          pcVar9 = pcVar8;
          pcVar8 = pcVar8 + -1;
        } while (uVar11 != 0);
        do {
          pcVar8 = pcVar9 + 1;
          plVar12 = (long *)((long)local_228 + 1);
          *(char *)local_228 = *pcVar9;
          pcVar9 = pcVar8;
          local_228 = plVar12;
        } while (pcVar8 < acStack_239 + 3);
      }
    }
    plVar12 = local_228;
    if (&local_8 <= local_228) goto LAB_00c0f534;
    local_228 = (long *)((long)local_228 + 1);
    bVar4 = false;
    *(char *)plVar12 = ']';
    break;
  case 4:
    if (local_230 < auStack_205 + 2) goto LAB_00c0f370;
    if (local_210 != 0) {
      local_230 = (long *)((long)local_230 + -1);
      *(char *)local_230 = ' ';
    }
    local_210 = 1;
    *(char *)((long)local_230 + -1) = 'd';
    *(char *)((long)local_230 + -2) = 'i';
    *(char *)((long)local_230 + -3) = 'o';
    *(char *)((long)local_230 + -4) = 'v';
    local_230 = (long *)((long)local_230 + -4);
    goto LAB_00c0f158;
  case 5:
    if (param_2 != 0x15) {
      FUN_00c0e510(&local_230,puVar7,uVar10,&DAT_01410c70);
      goto LAB_00c0f0b0;
    }
    if (auStack_203 + 1 <= local_230) {
      if (local_210 != 0) {
        local_230 = (long *)((long)local_230 + -1);
        *(char *)local_230 = ' ';
      }
      local_210 = 1;
      *(char *)((long)local_230 + -1) = 'e';
      *(char *)((long)local_230 + -2) = 'p';
      *(char *)((long)local_230 + -3) = 'y';
      *(char *)((long)local_230 + -4) = 't';
      local_230 = (long *)((long)local_230 + -5);
      *(char *)local_230 = 'c';
      goto LAB_00c0f0b0;
    }
LAB_00c0f558:
    local_20c = 0;
    goto LAB_00c0f55c;
  case 6:
    local_210 = 1;
    if (bVar4) {
      if (auStack_208 < local_230) {
        local_230 = (long *)((long)local_230 + -1);
        *(char *)((long)plVar12 + -1) = '(';
      }
      else {
        local_20c = 0;
      }
      if (&local_8 <= local_228) goto LAB_00c0f534;
      local_228 = (long *)((long)local_228 + 1);
      *(char *)plVar1 = ')';
    }
    plVar12 = local_228;
    if (local_228 < &local_8) {
      plVar1 = (long *)((long)local_228 + 1);
      local_228 = plVar1;
      *(char *)plVar12 = '(';
      if (plVar1 < &local_8) {
        local_228 = (long *)((long)plVar12 + 2);
        *(char *)plVar1 = ')';
        bVar4 = false;
        puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
        goto LAB_00c0ef5c;
      }
    }
LAB_00c0f534:
    local_210 = 1;
    local_20c = 0;
    bVar4 = false;
    puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
    goto LAB_00c0ef5c;
  case 8:
    goto switchD_00c0ef7c_caseD_8;
  }
  puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
  goto LAB_00c0ef5c;
switchD_00c0ef7c_caseD_8:
  uVar13 = uVar10 | uVar13;
  if ((uVar6 >> 0x10 & 0xff) != 1) {
    uVar13 = uVar10;
  }
  puVar7 = (uint *)(*local_220 + (ulong)uVar2 * 0x18);
  uVar10 = uVar13;
  goto LAB_00c0ef5c;
switchD_00c0ef7c_caseD_0:
  if ((uVar6 >> 0x1b & 1) == 0) {
    if ((uVar6 >> 0x1a & 1) == 0) {
      if (uVar13 == 1) {
        if ((uVar6 >> 0x17 & 1) == 0) {
          if ((ulong)((long)auStack_1ff + 3U) <= local_230) {
            if (local_210 != 0) {
              local_230 = (long *)((long)local_230 + -1);
              *(char *)local_230 = ' ';
            }
            local_210 = 1;
            *(char *)((long)local_230 + -1) = 'r';
            *(char *)((long)local_230 + -2) = 'a';
            *(char *)((long)local_230 + -3) = 'h';
            *(char *)((long)local_230 + -4) = 'c';
            *(char *)((long)local_230 + -5) = ' ';
            *(char *)((long)local_230 + -6) = 'd';
            *(char *)((long)local_230 + -7) = 'e';
            *(char *)(local_230 + -1) = 'n';
            *(char *)((long)local_230 + -9) = 'g';
            *(char *)((long)local_230 + -10) = 'i';
            local_230 = (long *)((long)local_230 + -0xb);
            *(char *)local_230 = 's';
            goto LAB_00c0f158;
          }
        }
        else if (auStack_205 + 2 <= local_230) {
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          local_210 = 1;
          *(char *)((long)local_230 + -1) = 'r';
          *(char *)((long)local_230 + -2) = 'a';
          *(char *)((long)local_230 + -3) = 'h';
          local_230 = (long *)((long)local_230 + -4);
          *(char *)local_230 = 'c';
          goto LAB_00c0f158;
        }
      }
      else if (uVar13 < 8) {
        if (uVar13 == 4) {
          if (local_230 < auStack_205 + 1) goto LAB_00c0f8ec;
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          local_210 = 1;
          *(char *)((long)local_230 + -1) = 't';
          *(char *)((long)local_230 + -2) = 'n';
          local_230 = (long *)((long)local_230 + -3);
          *(char *)local_230 = 'i';
        }
        else if (local_230 < auStack_203 + 1) {
LAB_00c0f8ec:
          local_20c = 0;
        }
        else {
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          local_210 = 1;
          *(char *)((long)local_230 + -1) = 't';
          *(char *)((long)local_230 + -2) = 'r';
          *(char *)((long)local_230 + -3) = 'o';
          *(char *)((long)local_230 + -4) = 'h';
          local_230 = (long *)((long)local_230 + -5);
          *(char *)local_230 = 's';
        }
        if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00c0f158;
        if (auStack_1ff <= local_230) {
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          local_210 = 1;
          *(char *)((long)local_230 + -3) = 'n';
          *(char *)((long)local_230 + -7) = 'n';
          *(char *)((long)local_230 + -2) = 'e';
          *(char *)((long)local_230 + -4) = 'g';
          *(char *)((long)local_230 + -5) = 'i';
          *(char *)((long)local_230 + -1) = 'd';
          *(char *)((long)local_230 + -6) = 's';
          *(char *)(local_230 + -1) = 'u';
          local_230 = local_230 + -1;
          goto LAB_00c0f158;
        }
      }
      else {
        if (local_230 < auStack_205) {
          local_20c = 0;
        }
        else {
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
          local_210 = 1;
          *(char *)((long)local_230 + -1) = 't';
          *(char *)((long)local_230 + -2) = '_';
          local_230 = (long *)((long)local_230 + -2);
        }
        if (local_230 < (ulong)((long)auStack_1ff + 2U)) {
          local_20c = 0;
          if (local_230 < auStack_205 + 1) goto LAB_00c0fa44;
          if (local_210 != 0) {
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = ' ';
          }
LAB_00c0f784:
          local_210 = 1;
          *(char *)((long)local_230 + -1) = 't';
          *(char *)((long)local_230 + -2) = 'n';
          local_230 = (long *)((long)local_230 + -3);
          *(char *)local_230 = 'i';
        }
        else {
          uVar13 = uVar13 << 3;
          do {
            uVar11 = uVar13 / 10;
            cVar3 = (char)uVar13;
            uVar13 = uVar13 / 10;
            local_230 = (long *)((long)local_230 + -1);
            *(char *)local_230 = (cVar3 - ((char)uVar11 * '\b' + (char)(uVar11 << 1))) + '0';
          } while (uVar13 != 0);
          local_210 = 0;
          if (auStack_205 + 1 <= local_230) goto LAB_00c0f784;
LAB_00c0fa44:
          local_20c = 0;
        }
        if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00c0f158;
        if (auStack_208 < local_230) {
          *(char *)((long)local_230 + -1) = 'u';
          local_230 = (long *)((long)local_230 + -1);
          goto LAB_00c0f158;
        }
      }
    }
    else if (uVar13 == 8) {
      if (auStack_203 + 2 <= local_230) {
        if (local_210 != 0) {
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = ' ';
        }
        local_210 = 1;
        *(char *)((long)local_230 + -1) = 'e';
        *(char *)((long)local_230 + -2) = 'l';
        *(char *)((long)local_230 + -3) = 'b';
        *(char *)((long)local_230 + -4) = 'u';
        *(char *)((long)local_230 + -5) = 'o';
        *(char *)((long)local_230 + -6) = 'd';
        local_230 = (long *)((long)local_230 + -6);
        goto LAB_00c0f158;
      }
    }
    else if (uVar13 == 4) {
      if (auStack_203 + 1 <= local_230) {
        if (local_210 != 0) {
          local_230 = (long *)((long)local_230 + -1);
          *(char *)local_230 = ' ';
        }
        local_210 = 1;
        *(char *)((long)local_230 + -1) = 't';
        *(char *)((long)local_230 + -2) = 'a';
        *(char *)((long)local_230 + -3) = 'o';
        *(char *)((long)local_230 + -4) = 'l';
        *(char *)((long)local_230 + -5) = 'f';
        local_230 = (long *)((long)local_230 + -5);
        goto LAB_00c0f158;
      }
    }
    else if ((ulong)((long)auStack_1ff + 3U) <= local_230) {
      if (local_210 != 0) {
        local_230 = (long *)((long)local_230 + -1);
        *(char *)local_230 = ' ';
      }
      local_210 = 1;
      *(char *)((long)local_230 + -5) = 'o';
      *(char *)((long)local_230 + -10) = 'o';
      *(char *)((long)local_230 + -1) = 'e';
      *(char *)((long)local_230 + -3) = 'b';
      *(char *)((long)local_230 + -4) = 'u';
      *(char *)((long)local_230 + -6) = 'd';
      *(char *)((long)local_230 + -7) = ' ';
      *(char *)((long)local_230 + -2) = 'l';
      *(char *)(local_230 + -1) = 'g';
      *(char *)((long)local_230 + -9) = 'n';
      *(char *)((long)local_230 + -0xb) = 'l';
      local_230 = (long *)((long)local_230 + -0xb);
      goto LAB_00c0f158;
    }
  }
  else if (auStack_205 + 2 <= local_230) {
    if (local_210 != 0) {
      local_230 = (long *)((long)local_230 + -1);
      *(char *)local_230 = ' ';
    }
    local_210 = 1;
    *(char *)((long)local_230 + -1) = 'l';
    *(char *)((long)local_230 + -2) = 'o';
    *(char *)((long)local_230 + -3) = 'o';
    local_230 = (long *)((long)local_230 + -4);
    *(char *)local_230 = 'b';
    goto LAB_00c0f158;
  }
LAB_00c0f370:
  local_20c = 0;
LAB_00c0f158:
  FUN_00c0e418(&local_230,uVar6 | uVar10);
LAB_00c0f0b0:
  if (local_20c == 0) {
LAB_00c0f55c:
    FUN_00bfba1c(param_1,&DAT_0140fd20,1);
  }
  else {
    FUN_00bfba1c(param_1,local_230,(long)local_228 - (long)local_230);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

