
undefined8
FUN_0113ec64(int *param_1,ulong param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            undefined4 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  uint local_68;
  uint uStack_64;
  
  if (param_8 == (undefined8 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_8 + 2);
  }
  if (param_1 == (int *)0x0) {
    return 7;
  }
  if (param_2 < 0xc) {
    return 7;
  }
  piVar19 = param_1;
  uVar15 = param_2;
  if (param_2 < 0xc) {
    uVar17 = 0;
LAB_0113ed08:
    bVar6 = uVar17 != 0;
    if (uVar15 < 8) {
      return 7;
    }
  }
  else {
    if (*param_1 == 0x46464952) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113eec4 with catch @ 0113ee70
                        */
      if (param_1[2] != 0x50424557) {
        return 3;
      }
      if (0xffffffea < param_1[1] - 0xcU) {
        return 3;
      }
      uVar17 = (ulong)(uint)param_1[1];
      if ((iVar8 != 0) && (param_2 - 8 < uVar17)) {
        return 7;
      }
      piVar19 = param_1 + 3;
      uVar15 = param_2 - 0xc;
      goto LAB_0113ed08;
    }
    bVar6 = false;
    uVar17 = 0;
  }
  if (*piVar19 == 0x58385056) {
    if (piVar19[1] != 10) {
      return 3;
    }
    bVar5 = uVar15 < 0x12;
    uVar15 = uVar15 - 0x12;
    if (bVar5) {
      return 7;
    }
    uVar9 = *(uint3 *)(piVar19 + 3) + 1;
    uVar12 = *(uint3 *)((long)piVar19 + 0xf) + 1;
    if ((ulong)uVar9 * (ulong)uVar12 >> 0x20 != 0) {
      return 3;
    }
    if (!bVar6) {
      return 3;
    }
    pbVar1 = (byte *)(piVar19 + 2);
    uVar7 = (uint)*pbVar1;
    piVar19 = (int *)((long)piVar19 + 0x12);
    bVar5 = true;
    uVar10 = *pbVar1 >> 1 & 1;
    uVar11 = uVar7 & 1;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    uVar7 = 0;
    bVar5 = false;
    uVar12 = 0;
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar7 >> 4 & 1;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar10;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (((bVar5) && (param_8 == (undefined8 *)0x0)) && ((uVar7 & 3) != 0)) {
    piVar20 = (int *)0x0;
    goto joined_r0x0113edc0;
  }
  local_68 = uVar12;
  uStack_64 = uVar9;
  if (uVar15 < 4) {
LAB_0113edb0:
    piVar3 = (int *)0x0;
  }
  else {
                    /* try { // try from 0113eebc to 0123eec3 has its CatchHandler @ 0113f038 */
                    /* try { // try from 0113eec4 to 0123f03b has its CatchHandler @ 0113ee70 */
    if (((bool)(bVar6 & bVar5)) || ((!bVar6 && !bVar5 && (*piVar19 == 0x48504c41)))) {
      if (uVar15 < 8) goto LAB_0113edb0;
      if (uVar17 == 0) {
        uVar18 = 0;
        piVar20 = (int *)0x0;
        do {
          uVar7 = piVar19[1];
          if (0xfffffff6 < uVar7) {
            return 3;
          }
          if ((*piVar19 == 0x20385056) || (*piVar19 == 0x4c385056)) goto LAB_0113eedc;
          uVar14 = (ulong)(uVar7 + 9 & 0xfffffffe);
          bVar6 = uVar15 < uVar14;
          uVar15 = uVar15 - uVar14;
          piVar3 = piVar20;
          if (bVar6) break;
          piVar3 = piVar19 + 2;
          uVar16 = (ulong)uVar7;
          if (*piVar19 != 0x48504c41) {
            piVar3 = piVar20;
            uVar16 = uVar18;
          }
          uVar18 = uVar16;
          piVar19 = (int *)((long)piVar19 + uVar14);
          piVar20 = piVar3;
        } while (7 < uVar15);
      }
      else {
        uVar18 = 0;
        uVar14 = 0x16;
        piVar20 = (int *)0x0;
        do {
          uVar7 = piVar19[1];
          if (0xfffffff6 < uVar7) {
            return 3;
          }
          uVar2 = uVar7 + 9 & 0xfffffffe;
          uVar14 = (ulong)(uVar2 + (int)uVar14);
          if (uVar17 < uVar14) {
            return 3;
          }
          if ((*piVar19 == 0x20385056) || (*piVar19 == 0x4c385056)) goto LAB_0113eedc;
          uVar16 = (ulong)uVar2;
          bVar6 = uVar15 < uVar16;
          uVar15 = uVar15 - uVar16;
          piVar3 = piVar20;
          if (bVar6) break;
          piVar3 = piVar19 + 2;
          uVar4 = (ulong)uVar7;
          if (*piVar19 != 0x48504c41) {
            piVar3 = piVar20;
            uVar4 = uVar18;
          }
          uVar18 = uVar4;
          piVar19 = (int *)((long)piVar19 + uVar16);
          piVar20 = piVar3;
        } while (7 < uVar15);
      }
    }
    else {
      uVar18 = 0;
      piVar20 = (int *)0x0;
LAB_0113eedc:
      uVar7 = (uint)(*piVar19 == 0x4c385056);
      uVar14 = uVar15 - 8;
      piVar3 = piVar20;
      if (7 < uVar15) {
        if ((*piVar19 == 0x4c385056) || (*piVar19 == 0x20385056)) {
          uVar15 = (ulong)(uint)piVar19[1];
          if ((0xb < uVar17) && (uVar17 - 0xc < uVar15)) {
            return 3;
          }
                    /* try { // try from 0113f088 to 0123f08f has its CatchHandler @ 0113f204 */
          if ((iVar8 != 0) && (uVar14 < uVar15)) goto joined_r0x0113edb8;
                    /* try { // try from 0113f090 to 0123f207 has its CatchHandler @ 0113f03c */
          piVar19 = piVar19 + 2;
        }
        else {
          uVar7 = VP8LCheckSignature(piVar19,uVar15);
          uVar14 = uVar15;
        }
        if (0xfffffff6 < uVar15) {
          return 3;
        }
        if ((param_7 != (undefined4 *)0x0) && (uVar10 == 0 && uVar11 == 0)) {
          uVar13 = 1;
          if (uVar7 != 0) {
            uVar13 = 2;
          }
          *param_7 = uVar13;
        }
        if (uVar7 == 0) {
          if (9 < uVar14) {
            iVar8 = VP8GetInfo(piVar19,uVar14,uVar15 & 0xffffffff,&uStack_64,&local_68);
            goto joined_r0x0113f150;
          }
        }
        else if (4 < uVar14) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113eebc with catch @ 0113f038
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113f090 with catch @ 0113f03c
                        */
          iVar8 = VP8LGetInfo(piVar19,uVar14,&uStack_64,&local_68,param_5);
joined_r0x0113f150:
          if (iVar8 == 0) {
            return 3;
          }
          if (bVar5) {
            if (uVar9 != uStack_64) {
              return 3;
            }
            if (uVar12 != local_68) {
              return 3;
            }
          }
          uVar12 = local_68;
          uVar9 = uStack_64;
          if (param_8 != (undefined8 *)0x0) {
            *param_8 = param_1;
            param_8[1] = param_2;
            param_8[4] = piVar20;
            param_8[5] = uVar18;
            param_8[6] = uVar15;
            *(uint *)(param_8 + 8) = uVar7;
            *(undefined4 *)((long)param_8 + 0x44) = 0;
            param_8[2] = 0;
            param_8[3] = (long)piVar19 - (long)param_1;
            param_8[7] = uVar17;
          }
          goto joined_r0x0113edc0;
        }
      }
    }
  }
joined_r0x0113edb8:
  if (param_8 != (undefined8 *)0x0) {
    return 7;
  }
  piVar20 = piVar3;
  uVar12 = local_68;
  uVar9 = uStack_64;
  if (!bVar5) {
    return 7;
  }
joined_r0x0113edc0:
  if (param_5 != (uint *)0x0) {
    *param_5 = *param_5 | (uint)(piVar20 != (int *)0x0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar9;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  *param_4 = uVar12;
  return 0;
}

