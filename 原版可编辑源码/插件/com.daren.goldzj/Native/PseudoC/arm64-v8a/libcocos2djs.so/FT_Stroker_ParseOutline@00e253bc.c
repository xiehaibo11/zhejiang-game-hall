
/* WARNING: Removing unreachable block (ram,0x00e256f4) */

undefined8 FT_Stroker_ParseOutline(undefined8 *param_1,short *param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  byte *pbVar11;
  uint uVar12;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  if (param_2 == (short *)0x0) {
LAB_00e25730:
    uVar6 = 0x14;
  }
  else if (param_1 == (undefined8 *)0x0) {
    uVar6 = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x19) = 0;
    if (0 < *param_2) {
      lVar8 = 0;
      uVar12 = 0;
      do {
        sVar3 = *(short *)(*(long *)(param_2 + 0xc) + lVar8 * 2);
        if (uVar12 < (uint)(int)sVar3) {
          lVar2 = *(long *)(param_2 + 4);
          plVar7 = (long *)(lVar2 + (ulong)uVar12 * 0x10);
          lStack_68 = plVar7[1];
          local_70 = *plVar7;
          plVar1 = (long *)(lVar2 + (long)sVar3 * 0x10);
          pbVar9 = (byte *)(*(long *)(param_2 + 8) + (ulong)uVar12);
          plVar10 = (long *)(lVar2 + (ulong)(uint)(int)sVar3 * 0x10);
          local_80 = *plVar1;
          lStack_78 = plVar1[1];
          if ((*pbVar9 & 3) == 0) {
            if ((*(byte *)(*(long *)(param_2 + 8) + (long)sVar3) & 3) == 1) {
              plVar10 = plVar10 + -2;
            }
            else {
              local_80 = local_70 + local_80;
              if (local_80 < 0) {
                local_80 = local_80 + 1;
              }
              local_80 = local_80 >> 1;
              lStack_78 = lStack_68 + lStack_78;
              if (lStack_78 < 0) {
                lStack_78 = lStack_78 + 1;
              }
              lStack_78 = lStack_78 >> 1;
            }
            plVar7 = plVar7 + -2;
            pbVar9 = pbVar9 + -1;
          }
          else {
            local_80 = local_70;
            lStack_78 = lStack_68;
            if ((*pbVar9 & 3) == 2) goto LAB_00e25730;
          }
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[3] = lStack_78;
          param_1[2] = local_80;
          *(char *)((long)param_1 + 0x29) = param_3;
          bVar4 = *(int *)(param_1 + 0xb) != 0;
          if ((*(int *)(param_1 + 0xb) == 0) && (param_3 != '\0')) {
            bVar4 = *(int *)((long)param_1 + 0x54) == 0;
          }
          *(bool *)(param_1 + 10) = bVar4;
          param_1[8] = lStack_78;
          param_1[7] = local_80;
          *param_1 = 0;
          if (plVar7 < plVar10) {
            uVar6 = 0;
            do {
              pbVar11 = pbVar9 + 1;
              plVar1 = plVar7 + 2;
              if ((*pbVar11 & 3) == 0) {
                lStack_68 = plVar7[3];
                local_70 = *plVar1;
                do {
                  while( true ) {
                    plVar7 = plVar1;
                    if (plVar10 <= plVar7) {
                      uVar6 = FT_Stroker_ConicTo(param_1,&local_70,&local_80);
                      goto LAB_00e2569c;
                    }
                    pbVar11 = pbVar11 + 1;
                    lStack_88 = plVar7[3];
                    local_90 = plVar7[2];
                    if ((*pbVar11 & 3) != 0) break;
                    local_a0 = local_90 + local_70;
                    lStack_98 = lStack_88 + lStack_68;
                    if (local_a0 < 0) {
                      local_a0 = local_a0 + 1;
                    }
                    local_a0 = local_a0 >> 1;
                    if (lStack_98 < 0) {
                      lStack_98 = lStack_98 + 1;
                    }
                    lStack_98 = lStack_98 >> 1;
                    uVar6 = FT_Stroker_ConicTo(param_1,&local_70,&local_a0);
                    if ((int)uVar6 != 0) {
                      iVar5 = 6;
                      goto LAB_00e256dc;
                    }
                    lStack_68 = lStack_88;
                    local_70 = local_90;
                    plVar1 = plVar7 + 2;
                  }
                  if ((*pbVar11 & 3) != 1) {
                    iVar5 = 5;
                    goto LAB_00e256d4;
                  }
                  uVar6 = FT_Stroker_ConicTo(param_1,&local_70,&local_90);
                  iVar5 = 6;
                  if ((int)uVar6 == 0) {
                    iVar5 = 7;
                  }
                  plVar1 = plVar7 + 2;
                } while (iVar5 == 10);
                plVar7 = plVar7 + 2;
                if (iVar5 != 7) {
LAB_00e256d4:
                  if (iVar5 == 0) goto LAB_00e256bc;
LAB_00e256dc:
                  if (iVar5 == 4) goto LAB_00e256bc;
                  if (iVar5 != 5) {
                    return uVar6;
                  }
                  goto LAB_00e25730;
                }
              }
              else if ((*pbVar11 & 3) == 1) {
                lStack_88 = plVar7[3];
                local_90 = *plVar1;
                uVar6 = FT_Stroker_LineTo(param_1,&local_90);
                plVar7 = plVar1;
                if ((int)uVar6 != 0) {
                  return uVar6;
                }
              }
              else {
                if ((plVar10 < plVar7 + 4) || ((pbVar9[2] & 3) != 2)) goto LAB_00e25730;
                lStack_88 = plVar7[3];
                local_90 = *plVar1;
                plVar1 = plVar7 + 6;
                lStack_98 = plVar7[5];
                local_a0 = plVar7[4];
                if (plVar10 < plVar1) {
                  uVar6 = FT_Stroker_CubicTo(param_1,&local_90,&local_a0,&local_80);
                  iVar5 = (int)uVar6;
                  goto joined_r0x00e25710;
                }
                lStack_a8 = plVar7[7];
                local_b0 = *plVar1;
                uVar6 = FT_Stroker_CubicTo(param_1,&local_90,&local_a0,&local_b0);
                if ((int)uVar6 != 0) {
                  return uVar6;
                }
                pbVar11 = pbVar9 + 3;
                plVar7 = plVar1;
              }
              pbVar9 = pbVar11;
            } while (plVar7 < plVar10);
LAB_00e2569c:
            iVar5 = (int)uVar6;
joined_r0x00e25710:
            if (iVar5 != 0) {
              return uVar6;
            }
          }
          if ((*(char *)(param_1 + 5) == '\0') &&
             (uVar6 = FT_Stroker_EndSubPath(param_1), (int)uVar6 != 0)) {
            return uVar6;
          }
        }
        uVar12 = (int)sVar3 + 1;
LAB_00e256bc:
        lVar8 = lVar8 + 1;
      } while (lVar8 < *param_2);
    }
    uVar6 = 0;
  }
  return uVar6;
}

