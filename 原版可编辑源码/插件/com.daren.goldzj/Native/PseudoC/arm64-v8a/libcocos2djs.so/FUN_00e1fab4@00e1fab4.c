
/* WARNING: Type propagation algorithm not settling */

int FUN_00e1fab4(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined2 *__s;
  int *__s_00;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long local_b0;
  ulong local_a8;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  
  lVar15 = *param_1;
  iVar5 = FUN_00e1b57c();
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_00e1bda4(param_1,param_2,uStack_70,local_78,0x504f5354,1,&local_80,&local_88);
  if (iVar5 != 0) {
    iVar5 = FUN_00e1bda4(param_1,param_2,uStack_70,local_78,0x73666e74,0,&local_80,&local_88);
    if (iVar5 != 0) {
      return iVar5;
    }
    lVar16 = 0;
    if (local_88 != 0) {
      lVar16 = param_4 / local_88;
    }
    uVar10 = param_4 - lVar16 * local_88;
    uVar10 = uVar10 ^ (long)uVar10 >> 0x3f;
    if (local_88 <= (long)uVar10) {
      iVar5 = 1;
      goto joined_r0x00e20180;
    }
    lVar16 = *param_1;
    uVar17 = *(ulong *)(local_80 + uVar10 * 8);
    if ((code *)param_2[5] == (code *)0x0) {
      if ((uVar17 <= (ulong)param_2[1]) && (param_2[2] = uVar17, uVar17 + 3 < (ulong)param_2[1]))
      goto LAB_00e1fd7c;
    }
    else {
      lVar6 = (*(code *)param_2[5])(param_2,uVar17,0,0);
      if ((lVar6 == 0) && (param_2[2] = uVar17, uVar17 + 3 < (ulong)param_2[1])) {
LAB_00e1fd7c:
        if ((code *)param_2[5] == (code *)0x0) {
          pbVar13 = (byte *)(*param_2 + uVar17);
          uVar11 = uVar17;
          if (pbVar13 == (byte *)0x0) {
            param_2[2] = uVar17 + 4;
            iVar5 = 1;
            goto joined_r0x00e20180;
          }
        }
        else {
          lVar6 = (*(code *)param_2[5])(param_2,uVar17,local_64,4);
          if (lVar6 != 4) goto LAB_00e2014c;
          pbVar13 = local_64;
          uVar11 = param_2[2];
        }
        bVar3 = *pbVar13;
        uVar14 = (ulong)bVar3 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                 (ulong)pbVar13[3];
        param_2[2] = uVar11 + 4;
        if (uVar14 == 0) {
          iVar5 = 1;
          goto joined_r0x00e20180;
        }
        if ((ulong)bVar3 != 0) {
          iVar5 = 9;
          goto joined_r0x00e20180;
        }
        iVar5 = FUN_00e1f19c(param_1,param_2,uVar10,param_5);
        if (iVar5 == 0) {
          iVar5 = 0;
          goto joined_r0x00e20180;
        }
        uVar17 = uVar17 + 4;
        if ((code *)param_2[5] == (code *)0x0) {
          if (uVar17 <= (ulong)param_2[1]) goto LAB_00e2020c;
        }
        else {
          lVar6 = (*(code *)param_2[5])(param_2,uVar17,0,0);
          if (lVar6 == 0) {
LAB_00e2020c:
            param_2[2] = uVar17;
            __s_00 = (int *)(**(code **)(lVar16 + 8))(lVar16,uVar14);
            if (__s_00 == (int *)0x0) {
              iVar5 = 0x40;
            }
            else {
              memset(__s_00,0,uVar14);
              uVar10 = param_2[2];
              uVar17 = param_2[1] - uVar10;
              if (uVar10 <= (ulong)param_2[1] && uVar17 != 0) {
                if ((code *)param_2[5] == (code *)0x0) {
                  sVar8 = uVar14;
                  if (uVar17 <= uVar14) {
                    sVar8 = uVar17;
                  }
                  memcpy(__s_00,(void *)(*param_2 + uVar10),sVar8);
                  param_2[2] = sVar8 + uVar10;
                }
                else {
                  sVar8 = (*(code *)param_2[5])(param_2,uVar10,__s_00,uVar14);
                  param_2[2] = sVar8 + uVar10;
                }
                if (uVar14 <= sVar8) {
                  pcVar9 = "truetype";
                  if ((4 < uVar14) && (pcVar9 = "cff", *__s_00 != 0x4f54544f)) {
                    pcVar9 = "truetype";
                  }
                  iVar5 = FUN_00e1f768(param_1,__s_00,uVar14,0,pcVar9,param_5);
                  goto joined_r0x00e20180;
                }
              }
              (**(code **)(lVar16 + 0x10))(lVar16,__s_00);
              iVar5 = 0x55;
            }
            goto joined_r0x00e20180;
          }
        }
      }
    }
LAB_00e2014c:
    iVar5 = 0x55;
joined_r0x00e20180:
    if (local_80 != 0) {
      (**(code **)(lVar15 + 0x10))(lVar15,local_80);
    }
    if (iVar5 != 0) {
      return iVar5;
    }
    *(long *)*param_5 = local_88;
    return 0;
  }
  if (param_4 + 1U < 2) {
    if (local_88 < 1) {
      iVar5 = 10;
      goto joined_r0x00e1fd4c;
    }
    lVar6 = *param_1;
    lVar16 = 0;
    uVar10 = 0;
    do {
      uVar17 = *(ulong *)(local_80 + lVar16 * 8);
      if ((code *)param_2[5] == (code *)0x0) {
        if ((uVar17 <= (ulong)param_2[1]) && (param_2[2] = uVar17, uVar17 + 3 < (ulong)param_2[1]))
        goto LAB_00e1fc48;
LAB_00e1fd54:
        iVar5 = 0x55;
        goto LAB_00e201d8;
      }
      lVar7 = (*(code *)param_2[5])(param_2,uVar17,0,0);
      if ((lVar7 != 0) || (param_2[2] = uVar17, (ulong)param_2[1] <= uVar17 + 3)) goto LAB_00e1fd54;
LAB_00e1fc48:
      if ((code *)param_2[5] == (code *)0x0) {
        pbVar13 = (byte *)(*param_2 + uVar17);
        if (pbVar13 != (byte *)0x0) goto LAB_00e1fca4;
        param_2[2] = uVar17 + 4;
        uVar11 = 0;
        if (0xffffff < uVar10 + 6) goto LAB_00e1fd10;
      }
      else {
        lVar7 = (*(code *)param_2[5])(param_2,uVar17,local_64,4);
        if (lVar7 != 4) goto LAB_00e1fd54;
        uVar17 = param_2[2];
        pbVar13 = local_64;
LAB_00e1fca4:
        bVar3 = *pbVar13;
        uVar11 = (ulong)bVar3 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                 (ulong)pbVar13[3];
        param_2[2] = uVar17 + 4;
        if (((ulong)bVar3 != 0) || (0xffffff - uVar11 < uVar10 + 6)) {
LAB_00e1fd10:
          iVar5 = 9;
          goto LAB_00e201d8;
        }
      }
      lVar16 = lVar16 + 1;
      uVar10 = uVar10 + 6 + uVar11;
    } while (lVar16 < local_88);
    uVar17 = uVar10 + 2;
    if (uVar17 < 6) {
      iVar5 = 10;
    }
    else if ((long)uVar17 < 1) {
      iVar5 = 6;
    }
    else {
      __s = (undefined2 *)(**(code **)(lVar6 + 8))(lVar6,uVar17);
      if (__s != (undefined2 *)0x0) {
        memset(__s,0,uVar17);
        *__s = 0x180;
        *(undefined4 *)(__s + 1) = 0;
        if (local_88 < 1) {
          local_b0 = 2;
          local_a8._0_4_ = 0;
          uVar11 = 6;
        }
        else {
          lVar16 = 0;
          bVar3 = 1;
          uVar11 = 6;
          local_b0 = 2;
          local_a8 = 0;
          do {
            uVar14 = *(ulong *)(local_80 + lVar16 * 8);
            if ((code *)param_2[5] == (code *)0x0) {
              uVar12 = param_2[1];
              if ((uVar12 < uVar14) || (param_2[2] = uVar14, uVar12 <= uVar14 + 3))
              goto LAB_00e201c0;
            }
            else {
              lVar7 = (*(code *)param_2[5])(param_2,uVar14,0,0);
              if (lVar7 != 0) goto LAB_00e201c0;
              uVar12 = param_2[1];
              param_2[2] = uVar14;
              if (uVar12 <= uVar14 + 3) goto LAB_00e201c0;
            }
            if ((code *)param_2[5] == (code *)0x0) {
              pbVar13 = (byte *)(*param_2 + uVar14);
              if (pbVar13 != (byte *)0x0) goto LAB_00e1feb8;
              uVar18 = 0;
              lVar7 = uVar14 + 4;
              param_2[2] = lVar7;
              if (uVar12 <= uVar14 + 5) goto LAB_00e201c0;
            }
            else {
              lVar7 = (*(code *)param_2[5])(param_2,uVar14,local_64,4);
              if (lVar7 != 4) goto LAB_00e201c0;
              uVar14 = param_2[2];
              pbVar13 = local_64;
LAB_00e1feb8:
              bVar2 = *pbVar13;
              uVar18 = (ulong)bVar2 << 0x18 | (ulong)pbVar13[1] << 0x10 | (ulong)pbVar13[2] << 8 |
                       (ulong)pbVar13[3];
              lVar7 = uVar14 + 4;
              param_2[2] = lVar7;
              if (((char)bVar2 < '\0') || ((ulong)param_2[1] <= uVar14 + 5)) goto LAB_00e201c0;
            }
            if ((code *)param_2[5] == (code *)0x0) {
              if ((byte *)(*param_2 + lVar7) != (byte *)0x0) {
                bVar2 = *(byte *)(*param_2 + lVar7);
                param_2[2] = lVar7 + 2;
                goto joined_r0x00e1ff4c;
              }
              param_2[2] = lVar7 + 2;
            }
            else {
              lVar7 = (*(code *)param_2[5])(param_2,lVar7,local_64,2);
              if (lVar7 != 2) goto LAB_00e201c0;
              param_2[2] = param_2[2] + 2;
              bVar2 = local_64[0];
joined_r0x00e1ff4c:
              if (bVar2 != 0) {
                uVar14 = uVar18 - 2;
                if (uVar18 < 2 || uVar14 == 0) {
                  uVar14 = 0;
                }
                if (bVar3 == bVar2) {
                  local_a8 = uVar14 + local_a8;
                  uVar12 = uVar11;
                }
                else {
                  if (uVar17 < local_b0 + 3U) goto LAB_00e201c0;
                  puVar1 = (undefined1 *)((long)__s + local_b0);
                  *puVar1 = (char)local_a8;
                  puVar1[1] = (char)(local_a8 >> 8);
                  puVar1[2] = (char)(local_a8 >> 0x10);
                  *(char *)((long)__s + local_b0 + 3U) = (char)(local_a8 >> 0x18);
                  if (bVar2 == 5) break;
                  if (uVar17 < uVar11 + 6) goto LAB_00e201c0;
                  local_b0 = uVar11 + 2;
                  *(undefined1 *)((long)__s + uVar11) = 0x80;
                  ((undefined1 *)((long)__s + uVar11))[1] = bVar2;
                  *(undefined4 *)((long)__s + local_b0) = 0;
                  uVar12 = uVar11 + 6;
                  local_a8 = uVar14;
                  bVar3 = bVar2;
                }
                if ((uVar10 < uVar12) || (uVar11 = uVar12 + uVar14, uVar10 < uVar11))
                goto LAB_00e201c0;
                uVar18 = param_2[2];
                uVar4 = param_2[1] - uVar18;
                if ((ulong)param_2[1] < uVar18 || uVar4 == 0) goto LAB_00e201c0;
                if ((code *)param_2[5] == (code *)0x0) {
                  sVar8 = uVar14;
                  if (uVar4 <= uVar14) {
                    sVar8 = uVar4;
                  }
                  memcpy((void *)((long)__s + uVar12),(void *)(*param_2 + uVar18),sVar8);
                }
                else {
                  sVar8 = (*(code *)param_2[5])(param_2,uVar18,(void *)((long)__s + uVar12),uVar14);
                }
                param_2[2] = sVar8 + uVar18;
                if (sVar8 < uVar14) goto LAB_00e201c0;
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < local_88);
        }
        if (uVar11 + 2 <= uVar17) {
          *(undefined2 *)((long)__s + uVar11) = 0x380;
          if (local_b0 + 3U <= uVar17) {
            puVar1 = (undefined1 *)((long)__s + local_b0);
            *puVar1 = (char)(undefined4)local_a8;
            puVar1[1] = (char)((uint)(undefined4)local_a8 >> 8);
            puVar1[2] = (char)((uint)(undefined4)local_a8 >> 0x10);
            *(char *)((long)__s + local_b0 + 3U) = (char)((uint)(undefined4)local_a8 >> 0x18);
            iVar5 = FUN_00e1f768(param_1,__s,uVar11 + 2,0,"type1",param_5);
            goto joined_r0x00e1fd4c;
          }
        }
LAB_00e201c0:
        (**(code **)(lVar6 + 0x10))(lVar6,__s);
        goto LAB_00e201d0;
      }
      iVar5 = 0x40;
    }
  }
  else {
LAB_00e201d0:
    iVar5 = 1;
joined_r0x00e1fd4c:
    if (local_80 == 0) goto LAB_00e201e8;
  }
LAB_00e201d8:
  (**(code **)(lVar15 + 0x10))(lVar15,local_80);
LAB_00e201e8:
  if (iVar5 == 0) {
    *(undefined8 *)*param_5 = 1;
  }
  return iVar5;
}

