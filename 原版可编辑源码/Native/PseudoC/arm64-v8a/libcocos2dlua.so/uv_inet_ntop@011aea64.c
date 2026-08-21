
/* WARNING: Removing unreachable block (ram,0x011af040) */
/* WARNING: Removing unreachable block (ram,0x011aefa8) */
/* WARNING: Removing unreachable block (ram,0x011aef44) */
/* WARNING: Removing unreachable block (ram,0x011aeff4) */

void uv_inet_ntop(int param_1,byte *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  uint local_b8;
  char acStack_a8 [16];
  char local_98 [45];
  undefined1 uStack_6b;
  undefined1 auStack_6a [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 != 10) {
    if (param_1 == 2) {
      iVar5 = snprintf(acStack_a8,0x10,"%u.%u.%u.%u",(ulong)*param_2,(ulong)param_2[1],
                       (ulong)param_2[2],(ulong)param_2[3]);
      uVar7 = 0xffffffe4;
      if ((0 < iVar5) && ((char *)(long)iVar5 < param_4)) {
        strncpy(param_3,acStack_a8,(size_t)param_4);
        uVar7 = 0;
        param_3[(long)(param_4 + -1)] = '\0';
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
        goto LAB_011af338;
      }
    }
    else {
      uVar7 = 0xffffff9f;
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_011af338;
  }
  bVar4 = CONCAT11(*param_2,param_2[1]) == 0;
  uVar1 = (uint)CONCAT11(param_2[2],param_2[3]);
  uVar2 = (uint)CONCAT11(param_2[4],param_2[5]);
  uVar13 = (uint)!bVar4;
  if (uVar1 == 0) {
    uVar12 = 0;
    uVar15 = 1;
    if (bVar4) {
      uVar15 = 2;
    }
    uVar10 = 0xffffffff;
    uVar19 = (uint)CONCAT11(param_2[6],param_2[7]);
    bVar4 = uVar13 == 0xffffffff;
    uVar9 = uVar15;
    uVar14 = uVar13;
    if (uVar2 == 0) goto LAB_011aecf0;
LAB_011aeb94:
    if (!bVar4) {
      uVar9 = uVar13;
      uVar13 = uVar15;
      if (uVar10 != 0xffffffff && uVar15 <= uVar12) {
        uVar9 = uVar10;
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
      uVar13 = 0xffffffff;
      uVar10 = uVar9;
    }
    uVar9 = (uint)CONCAT11(param_2[10],param_2[0xb]);
    uVar14 = (uint)CONCAT11(param_2[8],param_2[9]);
    bVar4 = uVar13 == 0xffffffff;
    if (uVar19 != 0) goto LAB_011aebcc;
LAB_011aed10:
    uVar18 = 3;
    uVar16 = uVar12;
    uVar12 = 1;
    uVar11 = uVar10;
    if (!bVar4) {
      uVar18 = uVar13;
      uVar12 = uVar15 + 1;
    }
joined_r0x011aed20:
    uVar15 = uVar12;
    uVar13 = uVar18;
    if (uVar14 != 0) goto LAB_011aebf8;
LAB_011aed24:
    uVar12 = 1;
    if (uVar13 != 0xffffffff) {
      uVar12 = uVar15 + 1;
    }
    uVar18 = 4;
    if (uVar13 != 0xffffffff) {
      uVar18 = uVar13;
    }
    uVar13 = (uint)CONCAT11(param_2[0xe],param_2[0xf]);
    local_b8 = (uint)CONCAT11(param_2[0xc],param_2[0xd]);
    bVar4 = uVar18 == 0xffffffff;
    if (uVar9 == 0) goto LAB_011aed48;
LAB_011aec34:
    if (bVar4) {
      uVar10 = 0xffffffff;
      uVar17 = uVar16;
      uVar15 = uVar11;
      goto joined_r0x011aed58;
    }
    uVar15 = uVar18;
    uVar17 = uVar12;
    if (uVar11 != 0xffffffff && uVar12 <= uVar16) {
      uVar15 = uVar11;
      uVar17 = uVar16;
    }
    uVar10 = 0xffffffff;
    uVar11 = uVar10;
    if (local_b8 != 0) goto LAB_011aec60;
LAB_011aed5c:
    uVar10 = 6;
    uVar18 = 1;
    if (uVar11 != 0xffffffff) {
      uVar10 = uVar11;
      uVar18 = uVar12 + 1;
    }
    uVar12 = uVar18;
    bVar4 = uVar10 == 0xffffffff;
    if (uVar13 == 0) goto LAB_011aed7c;
LAB_011aec98:
    uVar11 = uVar12;
    uVar18 = uVar17;
    uVar16 = uVar10;
    uVar12 = uVar15;
    if (!bVar4) goto LAB_011aed8c;
  }
  else {
    uVar15 = (uint)bVar4;
    uVar10 = -uVar13;
    uVar13 = 0xffffffff;
    uVar19 = (uint)CONCAT11(param_2[6],param_2[7]);
    bVar4 = true;
    uVar9 = uVar15;
    uVar12 = uVar15;
    uVar14 = uVar13;
    if (uVar2 != 0) goto LAB_011aeb94;
LAB_011aecf0:
    uVar15 = 1;
    if (!bVar4) {
      uVar15 = uVar9 + 1;
    }
    uVar13 = 2;
    if (!bVar4) {
      uVar13 = uVar14;
    }
    uVar9 = (uint)CONCAT11(param_2[10],param_2[0xb]);
    uVar14 = (uint)CONCAT11(param_2[8],param_2[9]);
    bVar4 = uVar13 == 0xffffffff;
    if (uVar19 == 0) goto LAB_011aed10;
LAB_011aebcc:
    if (bVar4) {
      uVar18 = 0xffffffff;
      uVar16 = uVar12;
      uVar12 = uVar15;
      uVar11 = uVar10;
      goto joined_r0x011aed20;
    }
    uVar11 = uVar13;
    uVar16 = uVar15;
    if (uVar10 != 0xffffffff && uVar15 <= uVar12) {
      uVar11 = uVar10;
      uVar16 = uVar12;
    }
    uVar18 = 0xffffffff;
    uVar13 = uVar18;
    if (uVar14 == 0) goto LAB_011aed24;
LAB_011aebf8:
    if (uVar18 != 0xffffffff) {
      uVar13 = uVar18;
      uVar12 = uVar15;
      if (uVar11 != 0xffffffff && uVar15 <= uVar16) {
        uVar13 = uVar11;
        uVar12 = uVar16;
      }
      uVar16 = uVar12;
      uVar18 = 0xffffffff;
      uVar11 = uVar13;
    }
    uVar13 = (uint)CONCAT11(param_2[0xe],param_2[0xf]);
    local_b8 = (uint)CONCAT11(param_2[0xc],param_2[0xd]);
    bVar4 = uVar18 == 0xffffffff;
    uVar12 = uVar15;
    if (uVar9 != 0) goto LAB_011aec34;
LAB_011aed48:
    uVar15 = 1;
    if (!bVar4) {
      uVar15 = uVar12 + 1;
    }
    uVar10 = 5;
    uVar12 = uVar15;
    uVar17 = uVar16;
    uVar15 = uVar11;
    if (!bVar4) {
      uVar10 = uVar18;
    }
joined_r0x011aed58:
    uVar11 = uVar10;
    if (local_b8 == 0) goto LAB_011aed5c;
LAB_011aec60:
    if (uVar10 != 0xffffffff) {
      uVar11 = uVar10;
      uVar10 = uVar12;
      if (uVar15 != 0xffffffff && uVar12 <= uVar17) {
        uVar11 = uVar15;
        uVar10 = uVar17;
      }
      uVar17 = uVar10;
      uVar10 = 0xffffffff;
      uVar15 = uVar11;
    }
    bVar4 = uVar10 == 0xffffffff;
    if (uVar13 != 0) goto LAB_011aec98;
LAB_011aed7c:
    uVar11 = 1;
    uVar16 = 7;
    if (!bVar4) {
      uVar11 = uVar12 + 1;
      uVar16 = uVar10;
    }
LAB_011aed8c:
    uVar18 = uVar11;
    uVar12 = uVar16;
    if (uVar15 != 0xffffffff && uVar11 <= uVar17) {
      uVar18 = uVar17;
      uVar12 = uVar15;
    }
  }
  if (uVar12 != 0xffffffff && uVar18 < 2) {
    uVar12 = 0xffffffff;
  }
  if (uVar12 == 0xffffffff) {
    iVar5 = sprintf(local_98,"%x");
    pcVar21 = local_98 + (long)iVar5 + 1;
    local_98[iVar5] = ':';
    iVar5 = sprintf(pcVar21,"%x",(ulong)uVar1);
    pcVar21 = pcVar21 + iVar5;
    pcVar20 = pcVar21 + 1;
    *pcVar21 = ':';
    iVar5 = sprintf(pcVar20,"%x",(ulong)uVar2);
    pcVar20 = pcVar20 + iVar5;
    pcVar21 = pcVar20 + 1;
    *pcVar20 = ':';
    iVar5 = sprintf(pcVar21,"%x",(ulong)uVar19);
    pcVar21 = pcVar21 + iVar5;
    pcVar20 = pcVar21 + 1;
    *pcVar21 = ':';
    iVar5 = sprintf(pcVar20,"%x",(ulong)uVar14);
    pcVar20 = pcVar20 + iVar5;
    pcVar21 = pcVar20 + 1;
    *pcVar20 = ':';
    iVar5 = sprintf(pcVar21,"%x",(ulong)uVar9);
    pcVar21 = pcVar21 + iVar5;
    pcVar20 = pcVar21 + 1;
    *pcVar21 = ':';
    iVar5 = sprintf(pcVar20,"%x",(ulong)local_b8);
    pcVar20 = pcVar20 + iVar5;
    *pcVar20 = ':';
    iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar13);
    pcVar21 = pcVar20 + 1 + iVar5;
LAB_011af2ec:
    *pcVar21 = '\0';
    if (pcVar21 + (1 - (long)local_98) <= param_4) {
      strcpy(param_3,local_98);
      uVar7 = 0;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_011af338;
    }
  }
  else {
    iVar5 = uVar12 + uVar18;
    if (uVar12 != 0) {
      iVar6 = sprintf(local_98,"%x");
      pcVar21 = local_98 + (long)iVar6 + 1;
      local_98[iVar6] = ':';
      if ((1 < (int)uVar12) || (iVar5 < 2)) {
        iVar6 = sprintf(pcVar21,"%x",(ulong)uVar1);
        pcVar21 = pcVar21 + iVar6;
      }
      if (((int)uVar12 < 3) && (2 < iVar5)) {
        pcVar20 = pcVar21;
        if (uVar12 != 2) goto LAB_011aef80;
        pcVar20 = pcVar21 + 1;
        *pcVar21 = ':';
LAB_011aef88:
        if (iVar5 < 4) goto LAB_011aefac;
        pcVar21 = pcVar20;
        if (uVar12 != 3) goto LAB_011aefcc;
        pcVar21 = pcVar20 + 1;
        *pcVar20 = ':';
LAB_011aefd4:
        if (iVar5 < 5) goto LAB_011aeff8;
        pcVar20 = pcVar21;
        if (uVar12 != 4) goto LAB_011af018;
        pcVar20 = pcVar21 + 1;
        *pcVar21 = ':';
LAB_011af020:
        if (iVar5 < 6) goto LAB_011af044;
        pcVar21 = pcVar20;
        if (uVar12 != 5) goto LAB_011af064;
        pcVar21 = pcVar20 + 1;
        *pcVar20 = ':';
LAB_011af06c:
        if (iVar5 < 7) goto LAB_011af0b0;
        pcVar20 = pcVar21;
        if (uVar12 == 6) {
          pcVar20 = pcVar21 + 1;
          *pcVar21 = ':';
        }
      }
      else {
        *pcVar21 = ':';
        iVar6 = sprintf(pcVar21 + 1,"%x",(ulong)uVar2);
        pcVar20 = pcVar21 + 1 + iVar6;
LAB_011aef80:
        if ((int)uVar12 < 4) goto LAB_011aef88;
LAB_011aefac:
        *pcVar20 = ':';
        iVar6 = sprintf(pcVar20 + 1,"%x",(ulong)uVar19);
        pcVar21 = pcVar20 + 1 + iVar6;
LAB_011aefcc:
        if ((int)uVar12 < 5) goto LAB_011aefd4;
LAB_011aeff8:
        *pcVar21 = ':';
        iVar6 = sprintf(pcVar21 + 1,"%x",(ulong)uVar14);
        pcVar20 = pcVar21 + 1 + iVar6;
LAB_011af018:
        if ((int)uVar12 < 6) goto LAB_011af020;
LAB_011af044:
        *pcVar20 = ':';
        iVar6 = sprintf(pcVar20 + 1,"%x",(ulong)uVar9);
        pcVar21 = pcVar20 + 1 + iVar6;
LAB_011af064:
        if ((int)uVar12 < 7) goto LAB_011af06c;
LAB_011af0b0:
        *pcVar21 = ':';
        iVar6 = sprintf(pcVar21 + 1,"%x",(ulong)local_b8);
        pcVar20 = pcVar21 + 1 + iVar6;
      }
      if (7 < iVar5) {
        pcVar22 = pcVar20;
        if (uVar12 == 7) {
          pcVar22 = pcVar20 + 1;
          *pcVar20 = ':';
        }
LAB_011af09c:
        pcVar21 = pcVar22;
        if (iVar5 == 8) {
          pcVar21 = pcVar22 + 1;
          *pcVar22 = ':';
        }
        goto LAB_011af2ec;
      }
LAB_011af2c8:
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar13);
      pcVar21 = pcVar20 + 1 + iVar5;
      goto LAB_011af2ec;
    }
    if (iVar5 < 1) {
      iVar5 = sprintf(local_98,"%x");
      pcVar20 = local_98 + iVar5;
LAB_011af0f8:
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar1);
      pcVar20 = pcVar20 + 1 + iVar5;
LAB_011af118:
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar2);
      pcVar20 = pcVar20 + 1 + iVar5;
LAB_011af138:
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar19);
      pcVar20 = pcVar20 + 1 + iVar5;
LAB_011af158:
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar20 + 1,"%x",(ulong)uVar14);
      pcVar20 = pcVar20 + 1 + iVar5;
LAB_011af178:
      pcVar21 = pcVar20 + 1;
      *pcVar20 = ':';
      iVar5 = sprintf(pcVar21,"%x",(ulong)uVar9);
      pcVar22 = pcVar21 + iVar5 + 1;
      pcVar21[iVar5] = ':';
      if (uVar18 != 7) goto LAB_011af1a8;
LAB_011af2a0:
      if (uVar13 == 1) goto LAB_011af2ac;
    }
    else {
      pcVar20 = (char *)((ulong)local_98 | 1);
      local_98[0] = ':';
      if (iVar5 == 1) goto LAB_011af0f8;
      if (iVar5 < 3) goto LAB_011af118;
      if (iVar5 == 3) goto LAB_011af138;
      if (iVar5 < 5) goto LAB_011af158;
      if (iVar5 == 5) goto LAB_011af178;
      if (6 < iVar5) {
        pcVar22 = pcVar20;
        if (iVar5 != 7) goto LAB_011af09c;
        goto LAB_011af2c8;
      }
      pcVar22 = pcVar20 + 1;
      *pcVar20 = ':';
      if (uVar18 == 7) goto LAB_011af2a0;
LAB_011af1a8:
      if ((uVar18 != 6) && ((uVar18 != 5 || (uVar9 != 0xffff)))) {
LAB_011af2ac:
        iVar5 = sprintf(pcVar22,"%x",(ulong)local_b8);
        pcVar20 = pcVar22 + iVar5;
        goto LAB_011af2c8;
      }
    }
    iVar5 = snprintf(acStack_a8,0x10,"%u.%u.%u.%u",(ulong)param_2[0xc],(ulong)param_2[0xd],
                     (ulong)param_2[0xe],(ulong)param_2[0xf]);
    if ((0 < iVar5) && ((undefined1 *)(long)iVar5 < auStack_6a + -(long)pcVar22)) {
      strncpy(pcVar22,acStack_a8,(size_t)(auStack_6a + -(long)pcVar22));
      uStack_6b = 0;
      sVar8 = strlen(pcVar22);
      pcVar21 = pcVar22 + sVar8;
      goto LAB_011af2ec;
    }
  }
  uVar7 = 0xffffffe4;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_011af338:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

