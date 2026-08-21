
undefined8 FUN_00a1a884(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_3 < 0x80) {
    *(char *)param_2 = (char)param_3;
    return 1;
  }
  uVar2 = FUN_00a203fc(param_1,param_2,param_3);
  if ((int)uVar2 != -1) {
    return uVar2;
  }
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3 == 0x1f9) {
    cVar3 = -0x58;
    sVar6 = 0xbf;
    goto LAB_00a1a960;
  }
  if (param_3 == 0x20ac) {
    cVar3 = -0x5e;
    sVar6 = 0xe3;
    goto LAB_00a1a960;
  }
  if (param_3 == 0x1e3f) {
    cVar3 = -0x58;
    sVar6 = 0xbc;
    goto LAB_00a1a960;
  }
  uVar4 = param_3 - 0x2e80;
  if (uVar4 < 0x50) {
    puVar5 = &DAT_0133a12e;
LAB_00a1a950:
    sVar6 = *(short *)(puVar5 + (ulong)uVar4 * 2);
  }
  else {
    uVar4 = param_3 & 0xfffffff0;
    if (uVar4 == 0x2ff0) {
      uVar4 = param_3 - 0x2ff0;
      puVar5 = &DAT_012fccf4;
      goto LAB_00a1a950;
    }
    if (param_3 == 0x303e) {
      cVar3 = -0x57;
      sVar6 = 0x89;
      goto LAB_00a1a960;
    }
    uVar7 = param_3 - 0x3440;
    if (uVar7 < 0x38) {
      puVar5 = &DAT_0133a1ce;
    }
    else {
      if (param_3 == 0x359e) {
        cVar3 = -2;
        sVar6 = 0x5a;
        goto LAB_00a1a960;
      }
      uVar7 = param_3 - 0x3608;
      if (uVar7 < 0x18) {
        puVar5 = &DAT_0133a23e;
      }
      else {
        if (param_3 == 0x3918) {
          cVar3 = -2;
          sVar6 = 0x60;
          goto LAB_00a1a960;
        }
        if (param_3 == 0x396e) {
          cVar3 = -2;
          sVar6 = 0x5f;
          goto LAB_00a1a960;
        }
        uVar7 = param_3 - 0x39c8;
        if (uVar7 < 0x18) {
          puVar5 = &DAT_0133a26e;
        }
        else {
          if ((int)param_3 < 0x3ce0) {
            if (param_3 == 0x3a73) {
              cVar3 = -2;
              sVar6 = 100;
              goto LAB_00a1a960;
            }
            if (param_3 == 0x3b4e) {
              cVar3 = -2;
              sVar6 = 0x68;
              goto LAB_00a1a960;
            }
            if (param_3 == 0x3c6e) {
              cVar3 = -2;
              sVar6 = 0x69;
              goto LAB_00a1a960;
            }
          }
          else if ((int)param_3 < 0x415f) {
            if (param_3 == 0x3ce0) {
              cVar3 = -2;
              sVar6 = 0x6a;
              goto LAB_00a1a960;
            }
            if (param_3 == 0x4056) {
              cVar3 = -2;
              sVar6 = 0x6f;
              goto LAB_00a1a960;
            }
          }
          else {
            if (param_3 == 0x415f) {
              cVar3 = -2;
              sVar6 = 0x70;
              goto LAB_00a1a960;
            }
            if (param_3 == 0x4337) {
              cVar3 = -2;
              sVar6 = 0x72;
              goto LAB_00a1a960;
            }
          }
          uVar7 = param_3 - 0x43a8;
          if (uVar7 < 0x38) {
            puVar5 = &DAT_0133a29e;
          }
          else {
            if (param_3 == 0x44d6) {
              cVar3 = -2;
              sVar6 = 0x7b;
              goto LAB_00a1a960;
            }
            uVar7 = param_3 - 0x4648;
            if (uVar7 < 0x20) {
              puVar5 = &DAT_0133a30e;
            }
            else {
              if (uVar4 == 0x4720) {
                uVar4 = param_3 - 0x4720;
                puVar5 = &DAT_012fcd14;
                goto LAB_00a1a950;
              }
              uVar7 = param_3 - 0x4778;
              if (uVar7 < 0x18) {
                puVar5 = &DAT_0133a34e;
              }
              else {
                uVar7 = param_3 - 0x4940;
                if (uVar7 < 0x78) {
                  puVar5 = &DAT_0133a37e;
                }
                else {
                  uVar7 = param_3 - 0x4c70;
                  if (0x37 < uVar7) {
                    if (uVar4 == 0x4d10) {
                      uVar4 = param_3 - 0x4d10;
                      puVar5 = &DAT_012fcd34;
                    }
                    else {
                      if (param_3 == 0x4dae) {
                        cVar3 = -2;
                        sVar6 = 0x9f;
                        goto LAB_00a1a960;
                      }
                      if (param_3 - 0x9fb4 < 8) {
                        uVar4 = param_3 - 0x9fb0;
                        puVar5 = &DAT_012fcd54;
                      }
                      else {
                        uVar4 = param_3 - 0xfe10;
                        if (9 < uVar4) {
                          if (0x215d6 < (int)param_3) {
                            if (param_3 == 0x215d7) {
                              cVar3 = -2;
                              sVar6 = 0x6c;
                            }
                            else if (param_3 == 0x2298f) {
                              cVar3 = -2;
                              sVar6 = 0x76;
                            }
                            else {
                              if (param_3 != 0x241fe) goto LAB_00a1a9e0;
                              cVar3 = -2;
                              sVar6 = 0x91;
                            }
                            goto LAB_00a1a960;
                          }
                          if (param_3 == 0x20087) {
                            cVar3 = -2;
                            sVar6 = 0x51;
                            goto LAB_00a1a960;
                          }
                          if (param_3 == 0x20089) {
                            cVar3 = -2;
                            sVar6 = 0x52;
                            goto LAB_00a1a960;
                          }
                          if (param_3 == 0x200cc) {
                            cVar3 = -2;
                            sVar6 = 0x53;
                            goto LAB_00a1a960;
                          }
                          goto LAB_00a1a9e0;
                        }
                        puVar5 = &DAT_012fcd74;
                      }
                    }
                    goto LAB_00a1a950;
                  }
                  puVar5 = &DAT_0133a46e;
                }
              }
            }
          }
        }
      }
    }
    sVar6 = *(short *)(puVar5 + (ulong)uVar7 * 2);
  }
  if (sVar6 == 0) {
LAB_00a1a9e0:
    uVar4 = param_3 - 0xe000;
    if (uVar4 < 0x865) {
      if (param_3 < 0xe766) {
        if (param_3 < 0xe4c6) {
          cVar8 = -0x56;
          if (0x233 < uVar4) {
            cVar8 = -0xe;
          }
          cVar1 = (char)((uVar4 & 0xffff) / 0x5e);
          cVar3 = (char)uVar4 + cVar1 * -0x5e + -0x5f;
          *(char *)param_2 = cVar8 + cVar1;
        }
        else {
          uVar7 = (param_3 + 0x1b3a & 0xffff) / 0x60;
          uVar4 = param_3 + 0x1b3a + uVar7 * -0x60;
          *(char *)param_2 = (char)uVar7 + -0x5f;
          cVar3 = '@';
          if (0x3e < (uVar4 & 0xffff)) {
            cVar3 = 'A';
          }
          cVar3 = cVar3 + (char)uVar4;
        }
        *(char *)((long)param_2 + 1) = cVar3;
        return 2;
      }
      uVar4 = 0;
      uVar7 = 0x1f;
      do {
        uVar9 = uVar7 + uVar4 >> 1;
        uVar10 = uVar9 * 3;
        if (*(ushort *)(&DAT_0133a074 + (ulong)uVar10 * 2) <= param_3) {
          if (param_3 <= *(ushort *)(&DAT_0133a074 + (ulong)(uVar10 + 1) * 2)) {
            uVar4 = (uint)*(ushort *)(&DAT_0133a074 + (ulong)(uVar10 + 2) * 2) +
                    (param_3 - *(ushort *)(&DAT_0133a074 + (ulong)uVar10 * 2));
            *param_2 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
            return 2;
          }
          uVar4 = uVar9 + 1;
          uVar9 = uVar7;
        }
        uVar7 = uVar9;
      } while (uVar4 < uVar9);
    }
    if (param_4 < 4) {
      return 0xfffffffe;
    }
    if (param_3 - 0x80 >> 7 < 0x1ff) {
      if (param_3 == 0xe7c7) {
        param_3 = 0x1d21;
      }
      else {
        uVar4 = 0;
        uVar7 = 0xcd;
        do {
          uVar9 = uVar4 + uVar7;
          uVar10 = uVar9 >> 1;
          if (*(ushort *)(&DAT_0133a4de + (ulong)(uVar9 | 1) * 2) < param_3) {
            if (param_3 < *(ushort *)(&DAT_0133a4de + (ulong)(uVar9 + 2 & 0xfffffffe) * 2))
            goto LAB_00a1ab94;
            uVar4 = (uVar9 >> 1) + 1;
            uVar10 = uVar7;
          }
          uVar7 = uVar10;
        } while (uVar4 < uVar10);
        param_3 = param_3 - *(ushort *)(&DAT_01339ed8 + (ulong)uVar4 * 2);
      }
      *(char *)param_2 = (char)(param_3 / 0x3138) + -0x7f;
      uVar4 = (uint)((ulong)param_3 * 0xcccccccd >> 0x20);
      uVar11 = (ulong)(param_3 >> 2) / 0x13b;
      uVar9 = (uint)(((ulong)param_3 / 0x14) * 0x82082083 >> 0x20);
      *(byte *)((long)param_2 + 3) = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      uVar7 = (uint)(uVar11 * 0xcccccccd >> 0x20);
    }
    else {
LAB_00a1ab94:
      param_3 = param_3 - 0x10000;
      if (param_3 >> 0x14 != 0) {
        return 0xffffffff;
      }
      *(char *)param_2 = (char)(param_3 / 0x3138) + -0x70;
      uVar4 = (uint)((ulong)param_3 * 0xcccccccd >> 0x20);
      uVar11 = (ulong)(param_3 >> 2) / 0x13b & 0xffff;
      uVar9 = (uint)(((ulong)param_3 / 0x14) * 0x82082083 >> 0x20);
      *(byte *)((long)param_2 + 3) = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      uVar7 = (uint)(uVar11 * 0xcccccccd >> 0x20);
    }
    *(char *)(param_2 + 1) = (char)(uVar4 >> 3) + (char)(uVar9 >> 5) * -0x7e + -0x7f;
    *(byte *)((long)param_2 + 1) = (char)uVar11 + (char)(uVar7 >> 3) * -10 | 0x30;
    return 4;
  }
  cVar3 = (char)((ushort)sVar6 >> 8);
LAB_00a1a960:
  *(char *)param_2 = cVar3;
  *(char *)((long)param_2 + 1) = (char)sVar6;
  return 2;
}

