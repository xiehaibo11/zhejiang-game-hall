
/* WARNING: Type propagation algorithm not settling */

void FUN_00a00dec(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  int *piVar20;
  ulong local_70;
  undefined1 auStack_68 [29];
  undefined2 uStack_4b;
  undefined1 local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar18 = *param_1;
  uVar11 = *(uint *)(param_2 + 0x1c);
  piVar20 = (int *)param_1[3];
  if ((uVar11 >> 0x1e & 1) == 0) {
    uVar13 = (ulong)(uVar11 >> 0x18) & 0x1f;
    lVar10 = uVar13 - 1;
    if ((uint)lVar10 < 0x12) {
      uVar16 = *(uint *)(&DAT_012f8764 + lVar10 * 4);
    }
    else {
      uVar16 = 6;
    }
    param_3 = param_3 & 7;
    if (uVar16 == param_3) goto LAB_00a00f6c;
    iVar19 = (int)uVar13 + -1;
    pcVar14 = "bytes";
    pcVar6 = "32bit";
    pcVar7 = "64bit";
    switch(iVar19) {
    case 0:
    case 5:
    case 0xf:
      break;
    case 1:
      goto switchD_00a00ea0_caseD_1;
    case 2:
    case 3:
    case 4:
    case 7:
    case 0xc:
    case 0xd:
    case 0x10:
    case 0x11:
      pcVar7 = "varint";
      break;
    case 6:
      goto switchD_00a00ea0_caseD_6;
    case 8:
      goto switchD_00a00ea0_caseD_8;
    default:
      pcVar7 = "<unknown>";
      break;
    case 10:
      goto switchD_00a00ea0_caseD_a;
    case 0xb:
      goto switchD_00a00ea0_caseD_b;
    case 0xe:
      goto switchD_00a00ea0_caseD_e;
    }
    pcVar6 = pcVar7;
    pcVar7 = "double";
    pcVar14 = pcVar6;
    switch(iVar19) {
    case 1:
switchD_00a00ea0_caseD_1:
      pcVar7 = "float";
    case 0:
      pcVar8 = pcVar7;
      pcVar14 = pcVar6;
      break;
    case 2:
      pcVar7 = "int64";
      pcVar8 = pcVar7;
      break;
    case 3:
      pcVar7 = "uint64";
      pcVar8 = pcVar7;
      break;
    case 4:
      pcVar7 = "int32";
      pcVar8 = pcVar7;
      break;
    case 5:
      pcVar7 = "fixed64";
      pcVar8 = pcVar7;
      break;
    case 6:
switchD_00a00ea0_caseD_6:
      pcVar7 = "fixed32";
      pcVar8 = "fixed32";
      pcVar14 = pcVar6;
      break;
    case 7:
      pcVar7 = "bool";
      pcVar8 = pcVar7;
      break;
    case 8:
switchD_00a00ea0_caseD_8:
      pcVar7 = "string";
      pcVar8 = pcVar7;
      break;
    case 9:
      pcVar7 = "group";
      pcVar8 = pcVar7;
      break;
    case 10:
switchD_00a00ea0_caseD_a:
      pcVar7 = "message";
      pcVar8 = pcVar7;
      break;
    case 0xb:
switchD_00a00ea0_caseD_b:
      pcVar7 = "bytes";
      pcVar8 = pcVar7;
      break;
    case 0xc:
      pcVar7 = "uint32";
      pcVar8 = pcVar7;
      break;
    case 0xd:
      pcVar7 = "enum";
      pcVar8 = pcVar7;
      break;
    case 0xe:
switchD_00a00ea0_caseD_e:
      pcVar7 = "sfixed32";
      pcVar8 = pcVar7;
      pcVar14 = pcVar6;
      break;
    case 0xf:
      pcVar7 = "sfixed64";
      pcVar8 = pcVar7;
      break;
    case 0x10:
      pcVar7 = "sint32";
      pcVar8 = pcVar7;
      break;
    case 0x11:
      pcVar7 = "sint64";
      pcVar8 = "sint64";
      break;
    default:
      pcVar7 = "<unknown>";
      pcVar8 = pcVar7;
    }
    if (param_3 < 6) {
      puVar9 = *(undefined **)(&DAT_016a1e50 + (ulong)param_3 * 8);
    }
    else {
      puVar9 = &DAT_012f5b1a;
      pcVar8 = pcVar7;
    }
    luaL_error(uVar18,"type mismatch at offset %d, %s expected for type %s, got %s",
               (*piVar20 - piVar20[4]) + 1,pcVar14,pcVar8,puVar9);
    uVar11 = *(uint *)(param_2 + 0x1c);
  }
LAB_00a00f6c:
  uVar11 = uVar11 >> 0x18 & 0x1f;
  if (uVar11 == 0xb) {
    FUN_009fbfa0(uVar18,piVar20,auStack_68);
    if ((*(long *)(param_2 + 8) == 0) || (*(int *)(*(long *)(param_2 + 8) + 0x70) < 0)) {
      lua_pushnil(uVar18);
    }
    else {
      FUN_009ffe90(uVar18,param_1[1]);
      param_1[3] = auStack_68;
      FUN_00a0016c(param_1,*(undefined8 *)(param_2 + 8));
      param_1[3] = piVar20;
    }
    goto LAB_00a01130;
  }
  if (uVar11 != 0xe) {
    FUN_009fb6ac(uVar18,param_1[1],uVar11,piVar20);
    goto LAB_00a01130;
  }
  lVar10 = FUN_009fb4dc(piVar20,&local_70);
  if (lVar10 == 0) {
    luaL_error(uVar18,"invalid varint value at offset %d",(*piVar20 - piVar20[4]) + 1);
  }
  lVar10 = FUN_009f9a54(uVar18);
  iVar19 = (int)local_70;
  if ((((*(byte *)(lVar10 + 0x484) & 1) == 0) && (lVar10 = *(long *)(param_2 + 8), lVar10 != 0)) &&
     (*(long *)(lVar10 + 0x10) != 0)) {
    if (iVar19 == 0) {
      if (-1 < *(int *)(lVar10 + 0x20)) goto LAB_00a01090;
      plVar12 = *(long **)(lVar10 + 0x28);
    }
    else {
      uVar15 = *(long *)(lVar10 + 0x10) - 1;
      uVar17 = (long)iVar19 * 0x9e3779b1;
      uVar13 = uVar15 & uVar17;
      if ((uVar15 & uVar17) == 0) {
        uVar13 = 1;
      }
      for (plVar12 = (long *)(*(long *)(lVar10 + 0x28) +
                             uVar13 * ((ulong)*(uint *)(lVar10 + 0x20) & 0x7fffffff));
          plVar12[1] != (long)iVar19; plVar12 = (long *)((long)plVar12 + *plVar12)) {
        if (*plVar12 == 0) goto LAB_00a01090;
      }
    }
    if ((plVar12 == (long *)0x0) || ((undefined8 *)plVar12[2] == (undefined8 *)0x0))
    goto LAB_00a01090;
    puVar5 = *(undefined1 **)plVar12[2];
  }
  else {
LAB_00a01090:
    lVar10 = FUN_009f9a54(uVar18);
    if ((local_70 == (long)iVar19) || (bVar2 = *(byte *)(lVar10 + 0x484) >> 3 & 3, bVar2 == 0)) {
      lua_pushnumber((double)(long)local_70,uVar18);
      goto LAB_00a01130;
    }
    uVar13 = -local_70;
    if (-1 < (long)local_70) {
      uVar13 = local_70;
    }
    if (bVar2 == 2) {
      puVar4 = &uStack_4b;
      local_49 = 0;
      do {
        uVar15 = uVar13 & 0xf;
        uVar13 = uVar13 >> 4;
        *(char *)((long)puVar4 + 1) = "0123456789ABCDEF"[uVar15];
        puVar4 = (undefined2 *)((long)puVar4 + -1);
      } while (uVar13 != 0);
      *puVar4 = 0x7830;
    }
    else {
      puVar4 = (undefined2 *)&local_49;
      if (bVar2 == 1) {
        local_49 = 0;
        do {
          bVar3 = 9 < uVar13;
          puVar4 = (undefined2 *)((long)puVar4 + -1);
          *(undefined *)puVar4 = (&DAT_012f5a37)[uVar13 % 10];
          uVar13 = uVar13 / 10;
        } while (bVar3);
      }
    }
    if ((long)local_70 < 0) {
      puVar4 = (undefined2 *)((long)puVar4 + -1);
      *(undefined1 *)puVar4 = 0x2d;
    }
    puVar5 = (undefined1 *)((long)puVar4 + -1);
    *puVar5 = 0x23;
  }
  lua_pushstring(uVar18,puVar5);
LAB_00a01130:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

