
undefined4 FUN_00e6ea9c(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  size_t __n;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  short *psVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_4280 [264];
  uint local_4178;
  int local_4174;
  int local_4170;
  int local_416c;
  undefined4 local_4160;
  undefined8 *local_4158;
  undefined8 *local_4150;
  long lStack_4148;
  undefined8 local_4140;
  undefined8 local_4128;
  undefined8 uStack_4120;
  undefined8 local_4118;
  undefined8 uStack_4110;
  undefined8 local_4108;
  long local_4100;
  int local_40f8;
  code *local_40f0;
  undefined8 local_40e8;
  int local_40e0 [32];
  undefined8 auStack_4060 [2046];
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  
  local_4158 = auStack_4060;
  if (param_1 == 0) {
    return 6;
  }
  uVar8 = *(uint *)(param_2 + 2);
  if ((uVar8 & 1) == 0) {
    return 0x13;
  }
  psVar12 = (short *)param_2[1];
  if (psVar12 == (short *)0x0) {
    return 0x14;
  }
  if (psVar12[1] == 0) {
    return 0;
  }
  if ((long)*psVar12 < 1) {
    return 0;
  }
  if (*(long *)(psVar12 + 0xc) == 0) {
    return 0x14;
  }
  if (*(long *)(psVar12 + 4) == 0) {
    return 0x14;
  }
  if (*(short *)(*(long *)(psVar12 + 0xc) + (long)*psVar12 * 2 + -2) + 1 != (int)psVar12[1]) {
    return 0x14;
  }
  piVar10 = (int *)*param_2;
  uStack_4120 = *(undefined8 *)(psVar12 + 4);
  local_4128 = *(undefined8 *)psVar12;
  uStack_4110 = *(undefined8 *)(psVar12 + 0xc);
  local_4118 = *(undefined8 *)(psVar12 + 8);
  local_4108 = *(undefined8 *)(psVar12 + 0x10);
  if ((uVar8 >> 1 & 1) == 0) {
    if (piVar10 == (int *)0x0) {
      return 6;
    }
    if (piVar10[1] == 0) {
      return 0;
    }
    if (*piVar10 == 0) {
      return 0;
    }
    local_4100 = *(long *)(piVar10 + 4);
    if (local_4100 == 0) {
      return 6;
    }
    local_40f8 = piVar10[2];
    local_40f0 = (code *)0x0;
    local_40e8 = 0;
    if (-1 < local_40f8) {
      local_4100 = local_4100 + (ulong)(uint)(local_40f8 * (*piVar10 + -1));
    }
  }
  else {
    local_40f0 = (code *)param_2[3];
    if (local_40f0 == (code *)0x0) {
      return 0;
    }
    local_40e8 = param_2[7];
    if ((~uVar8 & 6) == 0) {
      local_4178 = *(uint *)(param_2 + 8);
      local_4170 = *(int *)(param_2 + 9);
      iVar13 = (int)param_2[0xb];
      local_4174 = (int)param_2[10];
      goto LAB_00e6ebcc;
    }
  }
  iVar13 = *piVar10;
  local_4174 = piVar10[1];
  local_4170 = 0;
  local_4178 = 0;
LAB_00e6ebcc:
  if (iVar13 <= local_4170) {
    return 0;
  }
  if (local_4174 <= (int)local_4178) {
    return 0;
  }
  uVar14 = (ulong)(iVar13 - local_4170);
  if (0x55 < (uint)(iVar13 - local_4170)) {
    uVar11 = (uVar14 + 0x54) / 0x55;
    lVar16 = uVar14 + uVar11;
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = (lVar16 - 1U) / uVar11;
    }
  }
  uVar11 = (uVar14 * 8 + 0x17) / 0x18;
  local_4150 = auStack_4060 + uVar11 * 3;
  lStack_4148 = 0x2aa - uVar11;
  uVar15 = 0;
LAB_00e6ec7c:
  local_40e0[1] = local_4170;
  iVar1 = local_4170 + (int)uVar14;
  lVar16 = 0;
  iVar17 = iVar1;
  if (iVar13 <= iVar1) {
    iVar17 = iVar13;
  }
  local_40e0[0] = iVar17;
  local_416c = iVar17;
  do {
    iVar18 = local_40e0[lVar16 + 1];
    memset(local_4158,0,uVar14 * 8);
    local_4140 = 0;
    local_4160 = 1;
    local_4170 = iVar18;
    local_416c = iVar17;
    iVar5 = FUN_00e6f148(auStack_4280,uVar15);
    if (iVar5 == 0x40) {
      iVar17 = iVar17 - iVar18 >> 1;
      if (iVar17 == 0) {
        return 1;
      }
      local_40e0[lVar16 + 1] = iVar17 + iVar18;
      local_40e0[lVar16 + 2] = iVar18;
      lVar16 = lVar16 + 1;
    }
    else {
      if (iVar5 != 0) {
        return 1;
      }
      if (local_4170 < local_416c) {
        piVar10 = (int *)*local_4158;
        iVar17 = local_4170;
        do {
          if (piVar10 == (int *)0x0) {
switchD_00e6ef5c_caseD_0:
            if (local_416c <= iVar17 + 1) break;
          }
          else {
            uVar11 = (ulong)local_4178;
            bVar4 = false;
            iVar18 = 0;
            do {
              if (bVar4) {
                iVar9 = (int)uVar11;
                iVar5 = *piVar10 - iVar9;
                if (iVar5 == 0 || *piVar10 < iVar9) goto switchD_00e6ee68_caseD_0;
                uVar8 = iVar18 >> 9 ^ iVar18 >> 0x1f;
                if (((byte)local_4108 >> 1 & 1) == 0) {
                  if (0xfe < (int)uVar8) {
                    uVar8 = 0xff;
                  }
                  if (local_40f0 != (code *)0x0) goto LAB_00e6ed70;
LAB_00e6ee3c:
                  puVar7 = (undefined1 *)
                           ((local_4100 - (long)local_40f8 * (long)iVar17) + (long)iVar9);
                  uVar3 = (undefined1)uVar8;
                  puVar6 = puVar7;
                  switch(iVar5) {
                  case 0:
                    break;
                  case 7:
                    puVar6 = puVar7 + 1;
                    *puVar7 = uVar3;
                  case 6:
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar3;
                  case 5:
                    puVar6 = puVar7 + 1;
                    *puVar7 = uVar3;
                  case 4:
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar3;
                  case 3:
                    puVar6 = puVar7 + 1;
                    *puVar7 = uVar3;
                  case 2:
                    puVar7 = puVar6 + 1;
                    *puVar6 = uVar3;
                  case 1:
                    *puVar7 = uVar3;
                    break;
                  default:
                    memset(puVar7,uVar8,(long)iVar5);
                    iVar18 = iVar18 + piVar10[1] * 0x200;
                    iVar5 = iVar18 - piVar10[2];
                    uVar3 = local_6c;
                    goto joined_r0x00e6ed38;
                  }
                  goto switchD_00e6ee68_caseD_0;
                }
                uVar2 = uVar8 & 0x1ff;
                uVar8 = uVar2 ^ 0x1ff;
                if (uVar2 < 0x100) {
                  uVar8 = uVar2;
                }
                if (local_40f0 == (code *)0x0) goto LAB_00e6ee3c;
LAB_00e6ed70:
                local_6c = (undefined1)uVar8;
                local_70 = (undefined2)uVar11;
                local_6e = (undefined2)iVar5;
                (*local_40f0)(iVar17,1,&local_70,local_40e8);
                iVar18 = iVar18 + piVar10[1] * 0x200;
                iVar5 = iVar18 - piVar10[2];
                uVar3 = local_6c;
              }
              else {
switchD_00e6ee68_caseD_0:
                iVar18 = iVar18 + piVar10[1] * 0x200;
                iVar5 = iVar18 - piVar10[2];
                uVar3 = local_6c;
              }
joined_r0x00e6ed38:
              local_6c = uVar3;
              if (iVar5 != 0) {
                iVar9 = *piVar10;
                if ((int)local_4178 <= iVar9) {
                  uVar8 = iVar5 >> 9 ^ iVar5 >> 0x1f;
                  if (((byte)local_4108 >> 1 & 1) == 0) {
                    if (0xfe < (int)uVar8) {
                      uVar8 = 0xff;
                    }
                    local_6c = (undefined1)uVar8;
                  }
                  else {
                    uVar8 = uVar8 & 0x1ff;
                    uVar2 = uVar8 ^ 0x1ff;
                    if (uVar8 < 0x100) {
                      uVar2 = uVar8;
                    }
                    local_6c = (undefined1)uVar2;
                  }
                  if (local_40f0 == (code *)0x0) {
                    *(undefined1 *)((local_4100 - (long)local_40f8 * (long)iVar17) + (long)iVar9) =
                         local_6c;
                    local_6c = uVar3;
                  }
                  else {
                    local_70 = (undefined2)iVar9;
                    local_6e = 1;
                    (*local_40f0)(iVar17,1,&local_70,local_40e8);
                  }
                }
              }
              iVar5 = *piVar10;
              piVar10 = *(int **)(piVar10 + 4);
              bVar4 = iVar18 != 0;
              uVar11 = (long)iVar5 + 1;
            } while (piVar10 != (int *)0x0);
            if (iVar18 == 0) goto switchD_00e6ef5c_caseD_0;
            __n = (long)local_4174 - (long)(int)uVar11;
            uVar8 = iVar18 >> 9 ^ iVar18 >> 0x1f;
            if (((byte)local_4108 >> 1 & 1) == 0) {
              if (0xfe < (int)uVar8) {
                uVar8 = 0xff;
              }
              if (local_40f0 != (code *)0x0) goto LAB_00e6eedc;
LAB_00e6ef28:
              puVar7 = (undefined1 *)((local_4100 - (long)local_40f8 * (long)iVar17) + uVar11);
              uVar3 = (undefined1)uVar8;
              puVar6 = puVar7;
              switch(__n & 0xffffffff) {
              case 0:
                goto switchD_00e6ef5c_caseD_0;
              case 1:
                goto switchD_00e6ef5c_caseD_1;
              case 2:
                goto switchD_00e6ef5c_caseD_2;
              case 3:
                goto switchD_00e6ef5c_caseD_3;
              case 4:
                goto switchD_00e6ef5c_caseD_4;
              case 5:
                goto switchD_00e6ef5c_caseD_5;
              case 7:
                puVar6 = puVar7 + 1;
                *puVar7 = uVar3;
              case 6:
                puVar7 = puVar6 + 1;
                *puVar6 = uVar3;
                goto switchD_00e6ef5c_caseD_5;
              default:
                memset(puVar7,uVar8,__n);
                if (iVar17 + 1 < local_416c) goto LAB_00e6ef94;
              }
              break;
            }
            uVar2 = uVar8 & 0x1ff;
            uVar8 = uVar2 ^ 0x1ff;
            if (uVar2 < 0x100) {
              uVar8 = uVar2;
            }
            if (local_40f0 == (code *)0x0) goto LAB_00e6ef28;
LAB_00e6eedc:
            local_6e = (undefined2)__n;
            local_6c = (undefined1)uVar8;
            local_70 = (undefined2)uVar11;
            (*local_40f0)(iVar17,1,&local_70,local_40e8);
            if (local_416c <= iVar17 + 1) break;
          }
LAB_00e6ef94:
          iVar17 = iVar17 + 1;
          piVar10 = (int *)local_4158[iVar17 - local_4170];
        } while( true );
      }
      lVar16 = lVar16 + -1;
    }
    if (lVar16 < 0) goto LAB_00e6efe4;
    iVar17 = local_40e0[lVar16];
    uVar15 = 1;
  } while( true );
switchD_00e6ef5c_caseD_5:
  puVar6 = puVar7 + 1;
  *puVar7 = uVar3;
switchD_00e6ef5c_caseD_4:
  puVar7 = puVar6 + 1;
  *puVar6 = uVar3;
switchD_00e6ef5c_caseD_3:
  puVar6 = puVar7 + 1;
  *puVar7 = uVar3;
switchD_00e6ef5c_caseD_2:
  puVar7 = puVar6 + 1;
  *puVar6 = uVar3;
switchD_00e6ef5c_caseD_1:
  *puVar7 = uVar3;
  goto switchD_00e6ef5c_caseD_0;
LAB_00e6efe4:
  uVar15 = 1;
  local_4170 = iVar1;
  if (iVar13 <= iVar1) {
    return 0;
  }
  goto LAB_00e6ec7c;
}

