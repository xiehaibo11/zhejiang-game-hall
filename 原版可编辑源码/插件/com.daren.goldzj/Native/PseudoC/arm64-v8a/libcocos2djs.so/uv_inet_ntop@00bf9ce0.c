
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_inet_ntop(int param_1,undefined1 *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  size_t sVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  char local_38 [46];
  undefined1 auStack_a [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    uVar12 = FUN_00bf9b0c(param_2,param_3,param_4);
    goto LAB_00bf9d24;
  }
  if (param_1 != 10) {
    uVar12 = 0xffffff9f;
    goto LAB_00bf9d24;
  }
  uVar1 = (uint)CONCAT11(param_2[4],param_2[5]);
  uVar7 = CONCAT11(param_2[6],param_2[7]);
  uVar2 = (uint)uVar7;
  uVar5 = CONCAT11(param_2[2],param_2[3]);
  uVar15 = (uint)CONCAT11(param_2[8],param_2[9]);
  uVar6 = CONCAT11(param_2[10],param_2[0xb]);
  uVar8 = CONCAT11(param_2[0xe],param_2[0xf]);
  uVar3 = (uint)CONCAT11(param_2[0xc],param_2[0xd]);
  local_58 = (ulong)CONCAT24(uVar5,(uint)CONCAT11(*param_2,param_2[1]));
  local_50 = (ulong)CONCAT24(uVar7,uVar1);
  local_48 = (ulong)CONCAT24(uVar6,uVar15);
  uVar9 = local_48;
  local_40 = (ulong)CONCAT24(uVar8,uVar3);
  if (CONCAT11(*param_2,param_2[1]) == 0) {
    uVar20 = 2;
    iVar10 = 0;
    if (uVar5 == 0) {
LAB_00bfa0a8:
      iVar19 = iVar10;
      if (uVar1 != 0) goto LAB_00bfa0b4;
      uVar14 = uVar20 + 1;
      if (uVar2 == 0) {
        uVar20 = 0;
        iVar19 = -1;
        goto LAB_00bf9e24;
      }
      uVar20 = 0;
      iVar11 = -1;
LAB_00bfa138:
      if ((iVar11 == -1) || (iVar19 = iVar11, uVar20 < uVar14)) {
        iVar19 = iVar10;
        uVar20 = uVar14;
      }
      goto LAB_00bfa150;
    }
    uVar20 = 1;
    iVar11 = 0;
    iVar19 = 0;
    if (uVar1 != 0) goto LAB_00bfa0b4;
LAB_00bf9e18:
    uVar14 = 1;
    iVar10 = 2;
    iVar19 = iVar11;
    if (uVar2 != 0) goto LAB_00bfa138;
LAB_00bf9e24:
    uVar14 = uVar14 + 1;
    if (uVar15 == 0) goto LAB_00bfa0c4;
LAB_00bf9e2c:
    if ((iVar19 != -1) && (uVar14 <= uVar20)) goto LAB_00bf9e3c;
    if (uVar6 == 0) goto LAB_00bf9e40;
LAB_00bfa178:
    if (uVar3 == 0) {
      uVar15 = 1;
      iVar11 = 6;
      if (uVar8 != 0) goto LAB_00bfa0e0;
      iVar11 = 6;
LAB_00bfa18c:
      uVar20 = uVar15 + 1;
LAB_00bf9e68:
      iVar19 = iVar11;
      if ((iVar10 == -1) || (uVar14 < uVar20)) goto LAB_00bf9e80;
    }
    else {
LAB_00bf9e5c:
      if (uVar8 == 0) {
        uVar20 = 1;
        iVar11 = 7;
        goto LAB_00bf9e68;
      }
    }
    iVar19 = iVar10;
    uVar20 = uVar14;
  }
  else {
    if (uVar5 == 0) {
      uVar20 = 1;
      iVar10 = 1;
      goto LAB_00bfa0a8;
    }
    uVar20 = 0;
    iVar11 = -1;
    iVar19 = iVar11;
    if (uVar1 == 0) goto LAB_00bf9e18;
LAB_00bfa0b4:
    if (uVar2 != 0) {
LAB_00bfa150:
      if (uVar15 == 0) {
        uVar15 = 1;
        iVar11 = 4;
        iVar10 = iVar19;
        uVar14 = uVar20;
        goto joined_r0x00bfa15c;
      }
LAB_00bf9e3c:
      uVar14 = uVar20;
      iVar10 = iVar19;
      if (uVar6 != 0) goto LAB_00bfa178;
LAB_00bf9e40:
      uVar15 = 1;
      iVar11 = 5;
      if (uVar3 == 0) goto LAB_00bfa0d4;
LAB_00bf9e4c:
      if ((iVar10 == -1) || (uVar14 < uVar15)) {
        iVar10 = iVar11;
        uVar14 = uVar15;
      }
      goto LAB_00bf9e5c;
    }
    uVar14 = 1;
    iVar10 = 3;
    if (uVar15 != 0) goto LAB_00bf9e2c;
LAB_00bfa0c4:
    uVar15 = uVar14 + 1;
    iVar11 = iVar10;
    iVar10 = iVar19;
    uVar14 = uVar20;
joined_r0x00bfa15c:
    if (uVar6 != 0) {
      if ((iVar10 == -1) || (uVar14 < uVar15)) {
        iVar10 = iVar11;
        uVar14 = uVar15;
      }
      goto LAB_00bfa178;
    }
    uVar15 = uVar15 + 1;
    if (uVar3 != 0) goto LAB_00bf9e4c;
LAB_00bfa0d4:
    uVar15 = uVar15 + 1;
    if (uVar8 == 0) goto LAB_00bfa18c;
LAB_00bfa0e0:
    if ((iVar10 == -1) || (iVar19 = iVar10, uVar20 = uVar14, uVar14 < uVar15)) {
      iVar19 = iVar11;
      uVar20 = uVar15;
    }
  }
LAB_00bf9e80:
  local_48._4_4_ = (uint)uVar6;
  if ((iVar19 == -1) || (uVar20 < 2)) {
    if (uVar20 == 5) {
      bVar4 = false;
      iVar19 = -1;
LAB_00bfa704:
      iVar10 = sprintf(local_38,"%x",local_58 & 0xffffffff);
      pcVar17 = local_38 + iVar10;
LAB_00bfa2a0:
      if ((iVar19 < 2) && (bVar4)) {
        if (iVar19 != 1) goto LAB_00bfa2e8;
        *pcVar17 = ':';
        pcVar17 = pcVar17 + 1;
LAB_00bfa330:
        if ((3 < iVar19) || (!bVar4)) {
          *pcVar17 = ':';
          iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar7);
          pcVar16 = pcVar17 + 1 + iVar10;
          goto LAB_00bfa378;
        }
        pcVar16 = pcVar17;
        if (iVar19 != 3) goto LAB_00bfa378;
        pcVar16 = pcVar17 + 1;
        *pcVar17 = ':';
LAB_00bfa3c8:
        if (((5 < iVar19) || (!bVar4)) || (iVar19 < 1)) {
          *pcVar16 = ':';
          iVar10 = sprintf(pcVar16 + 1,"%x",(ulong)uVar6);
          pcVar17 = pcVar16 + 1 + iVar10;
          goto LAB_00bfa418;
        }
        pcVar17 = pcVar16;
        if (iVar19 != 5) goto LAB_00bfa418;
        pcVar17 = pcVar16 + 1;
        *pcVar16 = ':';
      }
      else {
        *pcVar17 = ':';
        iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar5);
        pcVar17 = pcVar17 + 1 + iVar10;
LAB_00bfa2e8:
        if ((2 < iVar19) || (!bVar4)) {
          *pcVar17 = ':';
          iVar10 = sprintf(pcVar17 + 1,"%x",local_50 & 0xffffffff);
          pcVar17 = pcVar17 + 1 + iVar10;
          goto LAB_00bfa330;
        }
        if (iVar19 != 2) goto LAB_00bfa330;
        pcVar16 = pcVar17 + 1;
        *pcVar17 = ':';
LAB_00bfa378:
        if (((4 < iVar19) || (!bVar4)) || (iVar19 == -1)) {
          *pcVar16 = ':';
          iVar10 = sprintf(pcVar16 + 1,"%x",uVar9 & 0xffffffff);
          pcVar16 = pcVar16 + 1 + iVar10;
          goto LAB_00bfa3c8;
        }
        if (iVar19 != 4) goto LAB_00bfa3c8;
        pcVar17 = pcVar16 + 1;
        *pcVar16 = ':';
LAB_00bfa418:
        if (((iVar19 < 7) && (bVar4)) && (1 < iVar19)) {
          if (iVar19 == 6) goto LAB_00bfa434;
        }
        else {
          *pcVar17 = ':';
          pcVar17 = pcVar17 + 1;
          if ((iVar19 == 0) && (local_48._4_4_ == 0xffff)) goto LAB_00bfa464;
          iVar10 = sprintf(pcVar17,"%x",local_40 & 0xffffffff);
          pcVar17 = pcVar17 + iVar10;
        }
      }
      if (((iVar19 < 8) && (bVar4)) && (2 < iVar19)) goto LAB_00bfa060;
LAB_00bfa264:
      *pcVar17 = ':';
      iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar8);
      pcVar16 = pcVar17 + 1 + iVar10;
      goto LAB_00bfa068;
    }
    bVar4 = false;
    iVar19 = -1;
    if (uVar20 != 7) goto LAB_00bf9ea4;
LAB_00bfa4d4:
    iVar10 = sprintf(local_38,"%x",local_58 & 0xffffffff);
    pcVar17 = local_38 + iVar10;
LAB_00bfa4f0:
    if ((iVar19 < 2) && (bVar4)) {
      if (iVar19 != 1) goto LAB_00bfa538;
      pcVar16 = pcVar17 + 1;
      *pcVar17 = ':';
LAB_00bfa580:
      if ((3 < iVar19) || (!bVar4)) {
        *pcVar16 = ':';
        iVar10 = sprintf(pcVar16 + 1,"%x",(ulong)uVar2);
        pcVar18 = pcVar16 + 1 + iVar10;
        goto LAB_00bfa5c8;
      }
      pcVar18 = pcVar16;
      if (iVar19 != 3) goto LAB_00bfa5c8;
      pcVar18 = pcVar16 + 1;
      *pcVar16 = ':';
LAB_00bfa610:
      if ((5 < iVar19) || (!bVar4)) {
        *pcVar18 = ':';
        iVar10 = sprintf(pcVar18 + 1,"%x",(ulong)uVar6);
        pcVar17 = pcVar18 + 1 + iVar10;
        goto LAB_00bfa658;
      }
      pcVar17 = pcVar18;
      if (iVar19 != 5) goto LAB_00bfa658;
      pcVar17 = pcVar18 + 1;
      *pcVar18 = ':';
LAB_00bfa6a0:
      if (((7 < iVar19) || (!bVar4)) || (iVar19 < 1)) goto LAB_00bfa264;
      goto LAB_00bfa060;
    }
    *pcVar17 = ':';
    iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar5);
    pcVar17 = pcVar17 + 1 + iVar10;
LAB_00bfa538:
    if ((2 < iVar19) || (!bVar4)) {
      *pcVar17 = ':';
      iVar10 = sprintf(pcVar17 + 1,"%x",uVar1);
      pcVar16 = pcVar17 + 1 + iVar10;
      goto LAB_00bfa580;
    }
    pcVar16 = pcVar17;
    if (iVar19 != 2) goto LAB_00bfa580;
    *pcVar17 = ':';
    pcVar18 = pcVar17 + 1;
LAB_00bfa5c8:
    if ((4 < iVar19) || (!bVar4)) {
      *pcVar18 = ':';
      iVar10 = sprintf(pcVar18 + 1,"%x",uVar9 & 0xffffffff);
      pcVar18 = pcVar18 + 1 + iVar10;
      goto LAB_00bfa610;
    }
    if (iVar19 != 4) goto LAB_00bfa610;
    *pcVar18 = ':';
    pcVar17 = pcVar18 + 1;
LAB_00bfa658:
    if (((iVar19 < 7) && (bVar4)) && (iVar19 != -1)) {
      if (iVar19 != 6) goto LAB_00bfa6a0;
      goto LAB_00bfa434;
    }
    *pcVar17 = ':';
    pcVar17 = pcVar17 + 1;
    if ((iVar19 != 0) || (uVar8 == 1)) {
      iVar10 = sprintf(pcVar17,"%x",uVar3);
      pcVar17 = pcVar17 + iVar10;
      goto LAB_00bfa6a0;
    }
LAB_00bfa464:
    uVar12 = FUN_00bf9b0c(param_2 + 0xc,pcVar17,auStack_a + -(long)pcVar17);
    if ((int)uVar12 != 0) goto LAB_00bf9d24;
    sVar13 = strlen(pcVar17);
    pcVar16 = pcVar17 + sVar13;
LAB_00bfa06c:
    pcVar17 = pcVar16;
    if (uVar20 + iVar19 == 8) {
      pcVar17 = pcVar16 + 1;
      *pcVar16 = ':';
    }
  }
  else {
    bVar4 = true;
    if (uVar20 == 5) {
      if (0 < iVar19) goto LAB_00bfa704;
      pcVar17 = local_38;
      if (iVar19 != 0) goto LAB_00bfa2a0;
      local_38[0] = ':';
      pcVar17 = local_38 + 1;
      goto LAB_00bfa2e8;
    }
    if (uVar20 == 7) {
      if (0 < iVar19) goto LAB_00bfa4d4;
      pcVar17 = local_38;
      if (iVar19 != 0) goto LAB_00bfa4f0;
      local_38[0] = ':';
      pcVar17 = local_38 + 1;
      goto LAB_00bfa538;
    }
LAB_00bf9ea4:
    if (uVar20 == 6) {
      if ((iVar19 < 1) && (bVar4)) {
        pcVar17 = local_38;
        if (iVar19 != 0) goto LAB_00bfa1c8;
        local_38[0] = ':';
        pcVar17 = local_38 + 1;
LAB_00bfa1dc:
        if ((2 < iVar19) || (!bVar4)) {
          *pcVar17 = ':';
          iVar10 = sprintf(pcVar17 + 1,"%x",local_50 & 0xffffffff);
          pcVar16 = pcVar17 + 1 + iVar10;
          goto LAB_00bfa1f0;
        }
        pcVar16 = pcVar17;
        if (iVar19 != 2) goto LAB_00bfa1f0;
        pcVar16 = pcVar17 + 1;
        *pcVar17 = ':';
LAB_00bfa204:
        if ((4 < iVar19) || (!bVar4)) {
          *pcVar16 = ':';
          iVar10 = sprintf(pcVar16 + 1,"%x",uVar9 & 0xffffffff);
          pcVar18 = pcVar16 + 1 + iVar10;
          goto LAB_00bfa218;
        }
        pcVar18 = pcVar16;
        if (iVar19 != 4) goto LAB_00bfa218;
        pcVar17 = pcVar16 + 1;
        *pcVar16 = ':';
LAB_00bfa234:
        if (((iVar19 < 7) && (bVar4)) && (0 < iVar19)) {
          if (iVar19 == 6) goto LAB_00bfa434;
        }
        else {
          *pcVar17 = ':';
          pcVar17 = pcVar17 + 1;
          if (iVar19 == 0) goto LAB_00bfa464;
          iVar10 = sprintf(pcVar17,"%x",local_40 & 0xffffffff);
          pcVar17 = pcVar17 + iVar10;
        }
      }
      else {
        iVar10 = sprintf(local_38,"%x",local_58 & 0xffffffff);
        pcVar17 = local_38 + iVar10;
LAB_00bfa1c8:
        if ((1 < iVar19) || (!bVar4)) {
          *pcVar17 = ':';
          iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar5);
          pcVar17 = pcVar17 + 1 + iVar10;
          goto LAB_00bfa1dc;
        }
        if (iVar19 != 1) goto LAB_00bfa1dc;
        pcVar16 = pcVar17 + 1;
        *pcVar17 = ':';
LAB_00bfa1f0:
        if ((3 < iVar19) || (!bVar4)) {
          *pcVar16 = ':';
          iVar10 = sprintf(pcVar16 + 1,"%x",(ulong)uVar7);
          pcVar16 = pcVar16 + 1 + iVar10;
          goto LAB_00bfa204;
        }
        if (iVar19 != 3) goto LAB_00bfa204;
        pcVar18 = pcVar16 + 1;
        *pcVar16 = ':';
LAB_00bfa218:
        if (((5 < iVar19) || (!bVar4)) || (iVar19 == -1)) {
          *pcVar18 = ':';
          iVar10 = sprintf(pcVar18 + 1,"%x",(ulong)local_48._4_4_);
          pcVar17 = pcVar18 + 1 + iVar10;
          goto LAB_00bfa234;
        }
        pcVar17 = pcVar18;
        if (iVar19 != 5) goto LAB_00bfa234;
        pcVar17 = pcVar18 + 1;
        *pcVar18 = ':';
      }
      if (((7 < iVar19) || (!bVar4)) || (iVar19 < 2)) goto LAB_00bfa264;
    }
    else {
      if (((iVar19 < 1) && (bVar4)) && (0 < (int)(uVar20 + iVar19))) {
        pcVar17 = local_38;
        if (iVar19 == 0) {
          local_38[0] = ':';
          pcVar17 = local_38 + 1;
        }
      }
      else {
        iVar10 = sprintf(local_38,"%x",local_58 & 0xffffffff);
        pcVar17 = local_38 + iVar10;
      }
      if (((iVar19 < 2) && (bVar4)) && (1 < (int)(uVar20 + iVar19))) {
        pcVar16 = pcVar17;
        if (iVar19 == 1) {
          pcVar16 = pcVar17 + 1;
          *pcVar17 = ':';
        }
      }
      else {
        *pcVar17 = ':';
        iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar5);
        pcVar16 = pcVar17 + 1 + iVar10;
      }
      if (((iVar19 < 3) && (bVar4)) && (2 < (int)(uVar20 + iVar19))) {
        pcVar17 = pcVar16;
        if (iVar19 == 2) {
          pcVar17 = pcVar16 + 1;
          *pcVar16 = ':';
        }
      }
      else {
        *pcVar16 = ':';
        iVar10 = sprintf(pcVar16 + 1,"%x",local_50 & 0xffffffff);
        pcVar17 = pcVar16 + 1 + iVar10;
      }
      if (((iVar19 < 4) && (bVar4)) && (3 < (int)(uVar20 + iVar19))) {
        pcVar16 = pcVar17;
        if (iVar19 == 3) {
          pcVar16 = pcVar17 + 1;
          *pcVar17 = ':';
        }
      }
      else {
        *pcVar17 = ':';
        iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar7);
        pcVar16 = pcVar17 + 1 + iVar10;
      }
      if (((iVar19 < 5) && (bVar4)) && (4 < (int)(uVar20 + iVar19))) {
        pcVar17 = pcVar16;
        if (iVar19 == 4) {
          pcVar17 = pcVar16 + 1;
          *pcVar16 = ':';
        }
      }
      else {
        *pcVar16 = ':';
        iVar10 = sprintf(pcVar16 + 1,"%x",uVar9 & 0xffffffff);
        pcVar17 = pcVar16 + 1 + iVar10;
      }
      if (((iVar19 < 6) && (bVar4)) && (5 < (int)(uVar20 + iVar19))) {
        pcVar16 = pcVar17;
        if (iVar19 == 5) {
          pcVar16 = pcVar17 + 1;
          *pcVar17 = ':';
        }
      }
      else {
        *pcVar17 = ':';
        iVar10 = sprintf(pcVar17 + 1,"%x",(ulong)uVar6);
        pcVar16 = pcVar17 + 1 + iVar10;
      }
      if (((iVar19 < 7) && (bVar4)) && (6 < (int)(uVar20 + iVar19))) {
        pcVar17 = pcVar16;
        if (iVar19 == 6) {
          pcVar17 = pcVar16 + 1;
          *pcVar16 = ':';
        }
      }
      else {
        *pcVar16 = ':';
        iVar10 = sprintf(pcVar16 + 1,"%x",local_40 & 0xffffffff);
        pcVar17 = pcVar16 + 1 + iVar10;
      }
      if (((7 < iVar19) || (!bVar4)) || ((int)(uVar20 + iVar19) < 8)) goto LAB_00bfa264;
    }
LAB_00bfa060:
    pcVar16 = pcVar17;
    if (iVar19 == 7) {
LAB_00bfa434:
      pcVar16 = pcVar17 + 1;
      *pcVar17 = ':';
    }
LAB_00bfa068:
    pcVar17 = pcVar16;
    if (bVar4) goto LAB_00bfa06c;
  }
  *pcVar17 = '\0';
  if (param_4 < pcVar17 + (1 - (long)local_38)) {
    uVar12 = 0xffffffe4;
  }
  else {
    strcpy(param_3,local_38);
    uVar12 = 0;
  }
LAB_00bf9d24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

