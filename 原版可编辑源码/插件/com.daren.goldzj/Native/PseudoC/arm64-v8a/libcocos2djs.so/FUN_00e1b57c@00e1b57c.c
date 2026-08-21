
void FUN_00e1b57c(undefined8 param_1,long *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte local_7c [4];
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((code *)param_2[5] == (code *)0x0) {
    uVar7 = param_2[1];
    if (param_3 <= uVar7) {
      sVar3 = uVar7 - param_3;
      param_2[2] = param_3;
      if (uVar7 < param_3 || sVar3 == 0) goto LAB_00e1b708;
LAB_00e1b608:
      puVar9 = (ulong *)(param_2 + 1);
      if ((code *)param_2[5] == (code *)0x0) {
        if (0xf < sVar3) {
          sVar3 = 0x10;
        }
        memcpy(&local_68,(void *)(*param_2 + param_3),sVar3);
        param_2[2] = sVar3 + param_3;
      }
      else {
        sVar3 = (*(code *)param_2[5])(param_2,param_3,&local_68,0x10);
        param_2[2] = sVar3 + param_3;
      }
      if (0xf < sVar3) {
        if ((((-1 < (char)local_68) && (-1 < (char)local_64)) && (-1 < (char)local_60)) &&
           (-1 < (char)local_5c)) {
          uVar5 = (long)(int)((uint)local_68 << 0x18) | (ulong)local_67 << 0x10 |
                  (ulong)local_66 << 8 | (ulong)local_65;
          *param_5 = uVar5;
          uVar7 = (long)(int)((uint)local_64 << 0x18) | (ulong)local_63 << 0x10 |
                  (ulong)local_62 << 8 | (ulong)local_61;
          if ((int)uVar7 != 0) {
            uVar8 = (long)(int)((uint)local_60 << 0x18) | (ulong)local_5f << 0x10 |
                    (ulong)local_5e << 8 | (ulong)local_5d;
            lVar2 = (long)(int)((uint)local_5c << 0x18 | (uint)local_5b << 0x10 |
                                (uint)local_5a << 8 | (uint)local_59);
            if ((int)uVar5 < (int)uVar7) {
              if ((long)uVar5 <= (long)(uVar7 - uVar8)) {
LAB_00e1b78c:
                uVar4 = 2;
                if (((long)(0x7fffffffffffffff - uVar8) < (long)uVar5) ||
                   (0x7fffffffffffffff - lVar2 < (long)uVar7)) goto LAB_00e1b70c;
                if (((long)param_3 <= (long)((0x7fffffffffffffff - uVar5) - uVar8)) &&
                   ((long)param_3 <= (long)((0x7fffffffffffffff - uVar7) - lVar2))) {
                  if ((uVar5 + param_3 + uVar8 <= *puVar9) &&
                     (uVar7 = uVar7 + param_3, uVar7 + lVar2 <= *puVar9)) {
                    *param_5 = uVar5 + param_3;
                    if ((code *)param_2[5] == (code *)0x0) {
                      uVar5 = *puVar9;
                      if (uVar7 <= uVar5) goto LAB_00e1b848;
                    }
                    else {
                      lVar2 = (*(code *)param_2[5])(param_2,uVar7,0,0);
                      if (lVar2 == 0) {
                        uVar5 = *puVar9;
LAB_00e1b848:
                        local_69 = local_59 + 1;
                        sVar3 = uVar5 - uVar7;
                        param_2[2] = uVar7;
                        if (uVar7 <= uVar5 && sVar3 != 0) {
                          if ((code *)param_2[5] == (code *)0x0) {
                            if (0xf < sVar3) {
                              sVar3 = 0x10;
                            }
                            memcpy(&local_78,(void *)(*param_2 + uVar7),sVar3);
                            param_2[2] = sVar3 + uVar7;
                          }
                          else {
                            sVar3 = (*(code *)param_2[5])(param_2,uVar7,&local_78,0x10);
                            param_2[2] = sVar3 + uVar7;
                          }
                          if (0xf < sVar3) {
                            if ((local_69 != local_59 ||
                                 (local_6a != local_5a ||
                                 (local_6b != local_5b ||
                                 (local_6c != local_5c ||
                                 (local_6d != local_5d ||
                                 (local_6e != local_5e ||
                                 (local_6f != local_5f ||
                                 (local_70 != local_60 ||
                                 (local_71 != local_61 ||
                                 (local_72 != local_62 ||
                                 (local_73 != local_63 ||
                                 (local_74 != local_64 ||
                                 (local_75 != local_65 ||
                                 (local_76 != local_66 ||
                                 (local_77 != local_67 || local_78 != local_68))))))))))))))) &&
                               (local_69 != 0 ||
                                (local_6a != 0 ||
                                (local_6b != 0 ||
                                (local_6c != 0 ||
                                (local_6d != 0 ||
                                (local_6e != 0 ||
                                (local_6f != 0 ||
                                (local_70 != 0 ||
                                (local_71 != 0 ||
                                (local_72 != 0 ||
                                (local_73 != 0 ||
                                (local_74 != 0 ||
                                (local_75 != 0 ||
                                (local_76 != 0 || (local_77 != 0 || local_78 != 0))))))))))))))))
                            goto LAB_00e1b7f4;
                            uVar8 = param_2[2];
                            uVar5 = uVar8 + 8;
                            if ((code *)param_2[5] == (code *)0x0) {
                              if (uVar5 <= *puVar9) goto LAB_00e1ba90;
LAB_00e1ba98:
                              if (*puVar9 <= uVar8 + 1) goto LAB_00e1b768;
                            }
                            else {
                              lVar2 = (*(code *)param_2[5])(param_2,uVar5,0,0);
                              if (lVar2 == 0) {
LAB_00e1ba90:
                                param_2[2] = uVar5;
                                uVar8 = uVar5;
                                goto LAB_00e1ba98;
                              }
                              uVar8 = param_2[2];
                              if (*puVar9 <= uVar8 + 1) goto LAB_00e1b768;
                            }
                            if ((code *)param_2[5] == (code *)0x0) {
                              pbVar6 = (byte *)(*param_2 + uVar8);
                              if (pbVar6 != (byte *)0x0) goto LAB_00e1bae0;
                              param_2[2] = uVar8 + 2;
LAB_00e1bb30:
                              if (uVar7 <= *puVar9) {
LAB_00e1bb3c:
                                uVar4 = 0;
                                param_2[2] = uVar7;
                                *param_4 = uVar7;
                                if (*(long *)(lVar1 + 0x28) == local_58) {
                                  return;
                                }
                                goto LAB_00e1b77c;
                              }
                            }
                            else {
                              lVar2 = (*(code *)param_2[5])(param_2,uVar8,local_7c,2);
                              if (lVar2 == 2) {
                                uVar8 = param_2[2];
                                pbVar6 = local_7c;
LAB_00e1bae0:
                                uVar5 = (long)(short)((ushort)*pbVar6 << 8) | (ulong)pbVar6[1];
                                param_2[2] = uVar8 + 2;
                                if ((int)uVar5 < 0) goto LAB_00e1b7f4;
                                uVar7 = uVar7 + uVar5;
                                if ((code *)param_2[5] == (code *)0x0) goto LAB_00e1bb30;
                                lVar2 = (*(code *)param_2[5])(param_2,uVar7,0,0);
                                if (lVar2 != 0) goto LAB_00e1b768;
                                goto LAB_00e1bb3c;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00e1b768;
                  }
                }
              }
            }
            else if ((long)uVar7 <= (long)(uVar5 - lVar2)) goto LAB_00e1b78c;
          }
        }
LAB_00e1b7f4:
        uVar4 = 2;
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_00e1b77c;
      }
    }
  }
  else {
    lVar2 = (*(code *)param_2[5])(param_2,param_3,0,0);
    if (lVar2 == 0) {
      sVar3 = param_2[1] - param_3;
      param_2[2] = param_3;
      if (param_3 <= (ulong)param_2[1] && sVar3 != 0) goto LAB_00e1b608;
LAB_00e1b708:
      uVar4 = 0x55;
LAB_00e1b70c:
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_00e1b77c;
    }
  }
LAB_00e1b768:
  uVar4 = 0x55;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00e1b77c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

