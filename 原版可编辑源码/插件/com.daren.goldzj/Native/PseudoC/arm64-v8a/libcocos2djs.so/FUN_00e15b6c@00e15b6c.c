
uint FUN_00e15b6c(long *param_1,uint *param_2,long param_3,long *param_4,char param_5)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  short sVar13;
  long lVar14;
  short *psVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 local_78;
  long local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (-1 < param_3 && param_4 == (long *)0x0) {
    return 6;
  }
  if (((byte)*param_2 >> 1 & 1) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(long *)(param_2 + 8) != 0;
  }
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  local_68 = (undefined8 *)0x0;
  lVar18 = *param_1;
  puVar8 = (undefined8 *)(**(code **)(lVar18 + 8))(lVar18,0x50);
  if (puVar8 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
    lVar18 = 0;
    uVar7 = 0x40;
    lVar9 = local_70;
    if (local_68 == (undefined8 *)0x0) goto joined_r0x00e15ca0;
LAB_00e15c78:
    puVar8 = local_68;
    lVar14 = local_68[7];
    if ((code *)local_68[6] != (code *)0x0) {
      (*(code *)local_68[6])(local_68);
    }
    lVar9 = local_70;
    if (bVar4 == false) {
      pcVar12 = *(code **)(lVar14 + 0x10);
LAB_00e15c98:
      (*pcVar12)(lVar14,puVar8);
      lVar9 = local_70;
    }
  }
  else {
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[7] = lVar18;
    uVar7 = *param_2;
    if ((uVar7 & 1) != 0) {
      uVar21 = *(undefined8 *)(param_2 + 4);
      uVar11 = *(undefined8 *)(param_2 + 2);
      puVar8[2] = 0;
      puVar8[8] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[1] = uVar21;
      *puVar8 = uVar11;
LAB_00e15cbc:
      puVar8[7] = lVar18;
      lVar18 = *param_1;
      local_68 = puVar8;
      if (((*param_2 >> 3 & 1) == 0) ||
         (puVar19 = *(undefined8 **)(param_2 + 10), puVar19 == (undefined8 *)0x0)) {
        if (*(uint *)((long)param_1 + 0x14) != 0) {
          plVar10 = param_1 + 3;
          plVar1 = plVar10 + *(uint *)((long)param_1 + 0x14);
          puVar20 = (undefined8 *)0x0;
          uVar5 = 0xb;
          if (param_5 == '\0') {
            do {
              puVar19 = (undefined8 *)*plVar10;
              if ((*(byte *)*puVar19 & 1) != 0) {
                if (((byte)*param_2 >> 4 & 1) == 0) {
                  uVar7 = 0;
                  uVar11 = 0;
                }
                else {
                  uVar7 = param_2[0xc];
                  uVar11 = *(undefined8 *)(param_2 + 0xe);
                }
                uVar5 = FUN_00e1ee44(puVar19,&local_68,bVar4,param_3,uVar7,uVar11,&local_70);
                if (uVar5 == 0) goto LAB_00e1605c;
                puVar20 = puVar19;
                puVar8 = local_68;
                if ((uVar5 & 0xff) != 2) break;
              }
              plVar10 = plVar10 + 1;
              puVar19 = puVar20;
              puVar8 = local_68;
            } while (plVar10 < plVar1);
          }
          else {
            do {
              puVar19 = (undefined8 *)*plVar10;
              if ((*(byte *)*puVar19 & 1) != 0) {
                if (((byte)*param_2 >> 4 & 1) == 0) {
                  uVar7 = 0;
                  uVar11 = 0;
                }
                else {
                  uVar7 = param_2[0xc];
                  uVar11 = *(undefined8 *)(param_2 + 0xe);
                }
                uVar5 = FUN_00e1ee44(puVar19,&local_68,bVar4,param_3,uVar7,uVar11,&local_70);
                if (uVar5 == 0) goto LAB_00e1605c;
                iVar6 = strcmp(*(char **)(*(long *)*plVar10 + 0x10),"truetype");
                puVar8 = local_68;
                uVar7 = uVar5 & 0xff;
                if ((uVar7 == 0x8e) && (iVar6 == 0)) {
                  if (((code *)local_68[5] != (code *)0x0) &&
                     (lVar9 = (*(code *)local_68[5])(local_68,0,0,0), lVar9 != 0))
                  goto LAB_00e15f24;
                  puVar8[2] = 0;
                  uVar5 = FUN_00e1f19c(param_1,puVar8,param_3,param_4);
                  if (uVar5 == 0) {
                    lVar18 = puVar8[7];
                    if ((code *)puVar8[6] != (code *)0x0) {
                      (*(code *)puVar8[6])(puVar8);
                    }
                    goto joined_r0x00e16138;
                  }
                  uVar7 = uVar5 & 0xff;
                }
                puVar20 = puVar19;
                puVar8 = local_68;
                if (uVar7 != 2) break;
              }
              plVar10 = plVar10 + 1;
              puVar19 = puVar20;
              puVar8 = local_68;
            } while (plVar10 < plVar1);
          }
          goto joined_r0x00e15ec8;
        }
        puVar19 = (undefined8 *)0x0;
        uVar7 = 0xb;
        goto joined_r0x00e15fb0;
      }
      if ((*(byte *)*puVar19 & 1) != 0) {
        if ((*param_2 >> 4 & 1) == 0) {
          uVar7 = 0;
          uVar11 = 0;
        }
        else {
          uVar7 = param_2[0xc];
          uVar11 = *(undefined8 *)(param_2 + 0xe);
        }
        uVar7 = FUN_00e1ee44(puVar19,&local_68,bVar4,param_3,uVar7,uVar11,&local_70);
        if (uVar7 == 0) {
LAB_00e1605c:
          plVar10 = (long *)(**(code **)(lVar18 + 8))(lVar18,0x18);
          lVar9 = local_70;
          if (plVar10 != (long *)0x0) {
            plVar10[2] = local_70;
            lVar18 = *(long *)(local_70 + 0xb0);
            lVar14 = *(long *)(lVar18 + 0x28);
            *plVar10 = lVar14;
            plVar10[1] = 0;
            plVar1 = (long *)(lVar18 + 0x20);
            if (lVar14 != 0) {
              plVar1 = (long *)(lVar14 + 8);
            }
            *plVar1 = (long)plVar10;
            *(long **)(lVar18 + 0x28) = plVar10;
            if (param_3 < 0) {
LAB_00e1616c:
              uVar7 = (uint)*(ulong *)(lVar9 + 0x10);
              if ((*(ulong *)(lVar9 + 0x10) & 1) != 0) {
                sVar13 = *(short *)(lVar9 + 0x8e);
                if (sVar13 < 0) {
                  sVar13 = -sVar13;
                  *(short *)(lVar9 + 0x8e) = sVar13;
                }
                if ((uVar7 >> 5 & 1) == 0) {
                  *(short *)(lVar9 + 0x92) = sVar13;
                }
              }
              if (((uVar7 >> 1 & 1) != 0) && (iVar6 = *(int *)(lVar9 + 0x38), 0 < iVar6)) {
                psVar15 = *(short **)(lVar9 + 0x40);
                lVar18 = 0;
LAB_00e161a4:
                do {
                  sVar13 = *psVar15;
                  if (sVar13 < 0) {
                    sVar13 = -sVar13;
                    *psVar15 = sVar13;
                    uVar16 = *(ulong *)(psVar15 + 8);
                    if ((long)uVar16 < 0) goto LAB_00e161f0;
LAB_00e161b4:
                    uVar17 = *(ulong *)(psVar15 + 0xc);
                    if (-1 < (long)uVar17) goto LAB_00e161bc;
LAB_00e16200:
                    *(ulong *)(psVar15 + 0xc) = -uVar17;
                    uVar16 = uVar16 | -uVar17;
                  }
                  else {
                    uVar16 = *(ulong *)(psVar15 + 8);
                    if (-1 < (long)uVar16) goto LAB_00e161b4;
LAB_00e161f0:
                    uVar16 = -uVar16;
                    *(ulong *)(psVar15 + 8) = uVar16;
                    uVar17 = *(ulong *)(psVar15 + 0xc);
                    if ((long)uVar17 < 0) goto LAB_00e16200;
LAB_00e161bc:
                    uVar16 = uVar16 | uVar17;
                  }
                  if ((-1 < (long)uVar16) && (-1 < sVar13)) {
                    lVar18 = lVar18 + 1;
                    psVar15 = psVar15 + 0x10;
                    if (iVar6 <= lVar18) break;
                    goto LAB_00e161a4;
                  }
                  psVar15[0] = 0;
                  psVar15[1] = 0;
                  psVar15[8] = 0;
                  psVar15[9] = 0;
                  psVar15[10] = 0;
                  psVar15[0xb] = 0;
                  psVar15[0xc] = 0;
                  psVar15[0xd] = 0;
                  psVar15[0xe] = 0;
                  psVar15[0xf] = 0;
                  psVar15[4] = 0;
                  psVar15[5] = 0;
                  psVar15[6] = 0;
                  psVar15[7] = 0;
                  lVar18 = lVar18 + 1;
                  psVar15 = psVar15 + 0x10;
                } while (lVar18 < iVar6);
              }
              puVar8 = *(undefined8 **)(lVar9 + 0xf0);
              *puVar8 = 0x10000;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0x10000;
              puVar8[4] = 0;
              puVar8[5] = 0;
              *(undefined4 *)(puVar8 + 0xf) = 1;
              *(undefined1 *)(puVar8 + 0xe) = 0xff;
              if (param_4 != (long *)0x0) {
                *param_4 = lVar9;
                return 0;
              }
              lVar18 = *(long *)(lVar9 + 0xb0);
              if (lVar18 != 0) {
                *(undefined4 *)(puVar8 + 0xf) = 0;
                plVar10 = *(long **)(lVar18 + 0x20);
                if (plVar10 != (long *)0x0) {
                  lVar14 = *(long *)(lVar18 + 0x10);
                  do {
                    if (plVar10[2] == lVar9) {
                      lVar2 = *plVar10;
                      plVar10 = (long *)plVar10[1];
                      puVar8 = (undefined8 *)(lVar18 + 0x20);
                      if (lVar2 != 0) {
                        puVar8 = (undefined8 *)(lVar2 + 8);
                      }
                      *puVar8 = plVar10;
                      plVar1 = (long *)(lVar18 + 0x28);
                      if (plVar10 != (long *)0x0) {
                        plVar1 = plVar10;
                      }
                      *plVar1 = lVar2;
                      (**(code **)(lVar14 + 0x10))(lVar14);
                      FUN_00e166c8(lVar14,lVar9,lVar18);
                      return 0;
                    }
                    plVar10 = (long *)plVar10[1];
                  } while (plVar10 != (long *)0x0);
                  return 0;
                }
              }
              return 0;
            }
            uVar7 = FUN_00e153f4(local_70,0);
            if ((uVar7 == 0) && (uVar7 = FT_New_Size(lVar9,&local_78), uVar7 == 0)) {
              *(undefined8 *)(lVar9 + 0xa0) = local_78;
              goto LAB_00e1616c;
            }
            if (lVar9 == 0) {
              return uVar7;
            }
            puVar19 = *(undefined8 **)(lVar9 + 0xb0);
            if (puVar19 == (undefined8 *)0x0) {
              return uVar7;
            }
            iVar6 = *(int *)(*(long *)(lVar9 + 0xf0) + 0x78) + -1;
            *(int *)(*(long *)(lVar9 + 0xf0) + 0x78) = iVar6;
            if (0 < iVar6) {
              return uVar7;
            }
            plVar10 = (long *)puVar19[4];
            if (plVar10 == (long *)0x0) {
              return uVar7;
            }
            lVar18 = puVar19[2];
            while (plVar10[2] != lVar9) {
              plVar10 = (long *)plVar10[1];
              if (plVar10 == (long *)0x0) {
                return uVar7;
              }
            }
            lVar14 = *plVar10;
            plVar10 = (long *)plVar10[1];
            puVar8 = puVar19 + 4;
            if (lVar14 != 0) {
              puVar8 = (undefined8 *)(lVar14 + 8);
            }
            *puVar8 = plVar10;
            plVar1 = puVar19 + 5;
            if (plVar10 != (long *)0x0) {
              plVar1 = plVar10;
            }
            *plVar1 = lVar14;
            (**(code **)(lVar18 + 0x10))(lVar18);
            goto LAB_00e15fc4;
          }
          uVar7 = 0x40;
        }
        else {
          lVar9 = local_70;
          if (local_68 != (undefined8 *)0x0) goto LAB_00e16038;
        }
        goto joined_r0x00e15ca0;
      }
      uVar7 = 0x20;
      lVar9 = local_70;
      if (puVar8 == (undefined8 *)0x0) goto joined_r0x00e15ca0;
LAB_00e16038:
      puVar8 = local_68;
      lVar14 = local_68[7];
      if ((code *)local_68[6] != (code *)0x0) {
        (*(code *)local_68[6])(local_68);
      }
      lVar9 = local_70;
      if (bVar4 != false) goto joined_r0x00e15ca0;
      pcVar12 = *(code **)(lVar14 + 0x10);
      goto LAB_00e15c98;
    }
    if ((uVar7 >> 2 & 1) != 0) {
      uVar5 = FUN_00e85014(puVar8,*(undefined8 *)(param_2 + 6));
      puVar8[4] = *(undefined8 *)(param_2 + 6);
      if (uVar5 != 0) goto LAB_00e15ea4;
      goto LAB_00e15cbc;
    }
    if (((uVar7 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
      (**(code **)(lVar18 + 0x10))(lVar18,puVar8);
      puVar8 = *(undefined8 **)(param_2 + 8);
      goto LAB_00e15cbc;
    }
    uVar5 = 6;
LAB_00e15ea4:
    (**(code **)(lVar18 + 0x10))(lVar18,puVar8);
    lVar18 = 0;
    local_68 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
    puVar8 = local_68;
joined_r0x00e15ec8:
    uVar3 = uVar5 & 0xff;
    local_68 = puVar8;
    if (((uVar3 == 2) || (uVar3 == 0x55)) || (uVar7 = uVar5, uVar3 == 0x51)) {
      if (param_5 != '\0') {
LAB_00e15f24:
        uVar5 = FUN_00e1f918(param_1,puVar8,param_3,param_4);
        if ((uVar5 & 0xff) == 2) {
          uVar5 = FUN_00e1fab4(param_1,puVar8,0,param_3,param_4);
        }
        if ((((uVar5 & 0xff) == 0x55) || ((uVar5 & 0xff) == 2)) && (((byte)*param_2 >> 2 & 1) != 0))
        {
          uVar5 = FUN_00e2036c(param_1,puVar8,param_3,param_4,param_2);
        }
        if (uVar5 == 0) {
          if (puVar8 == (undefined8 *)0x0) {
            return 0;
          }
          lVar18 = puVar8[7];
          if ((code *)puVar8[6] != (code *)0x0) {
            (*(code *)puVar8[6])(puVar8);
          }
joined_r0x00e16138:
          if (bVar4 != false) {
            return 0;
          }
          (**(code **)(lVar18 + 0x10))(lVar18,puVar8);
          return 0;
        }
      }
      uVar7 = uVar5 & 0xff;
      if ((uVar5 & 0xff) != 2) {
        uVar7 = uVar5;
      }
    }
joined_r0x00e15fb0:
    lVar9 = local_70;
    if (local_68 != (undefined8 *)0x0) goto LAB_00e15c78;
  }
joined_r0x00e15ca0:
  local_70 = lVar9;
  if (lVar9 == 0) {
    return uVar7;
  }
LAB_00e15fc4:
  FUN_00e166c8(lVar18,lVar9,puVar19);
  return uVar7;
}

