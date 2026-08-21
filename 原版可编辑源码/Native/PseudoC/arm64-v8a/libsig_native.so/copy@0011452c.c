
/* WARNING: Removing unreachable block (ram,0x00114c50) */
/* WARNING: Removing unreachable block (ram,0x0011497c) */
/* std::__ndk1::char_traits<char>::copy(char*, char const*, unsigned long) */

char * std::__ndk1::char_traits<char>::copy(char *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  char *local_a0;
  char *local_80;
  char local_71;
  char *local_70;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar1 = 0x99a7c78e;
  if (param_3 != 0) {
    uVar1 = 0xf6f76d74;
  }
  uVar5 = 0x5274588f;
joined_r0x00114630:
  do {
    if (0x1e124355 < (int)uVar5) goto LAB_001146a0;
    while (uVar5 == 0x8228e61c) {
      iVar3 = -0x1bbb5e84;
LAB_00114a00:
      iVar7 = iVar3;
      iVar3 = iVar7;
      if (iVar7 < -0x6b60fa5) {
        if (iVar7 < -0x1bbb5e84) {
          if (iVar7 != -0x735be896) {
            if (iVar7 == -0x702f117b) {
              bVar4 = ((x_118 + -1) * x_118 & 1U) == 0;
              iVar3 = 0x4439abcb;
              if ((y_119 >= 10 || !bVar4) && y_119 < 10 == bVar4) {
                iVar3 = -0xc555be0;
              }
            }
            else if (iVar7 == -0x2781ff9f) {
              iVar3 = -0x735be896;
            }
            goto LAB_00114a00;
          }
        }
        else {
          iVar3 = -0x15a1f046;
          if (iVar7 == -0x1bbb5e84) goto LAB_00114a00;
          if (iVar7 != -0x15a1f046) {
            iVar3 = iVar7;
            if (iVar7 == -0xc555be0) {
              iVar3 = -0x702f117b;
            }
            goto LAB_00114a00;
          }
        }
        memcpy(param_1,param_2,param_3);
        iVar3 = 0x33aab160;
        goto LAB_00114a00;
      }
      if (iVar7 < 0x4439abcb) {
        if (iVar7 == -0x6b60fa5) {
          iVar3 = -0x15a1f046;
          if (local_71 == '\0') {
            iVar3 = -0x735be896;
          }
        }
        else if (iVar7 == 0xd2b4470) {
          uVar5 = (x_118 + -1) * x_118 & 1;
          iVar3 = 0x5078fa15;
          if (9 < y_119 == uVar5 && (9 < y_119 | uVar5) == 1) {
            iVar3 = 0x4776fa97;
          }
        }
        else if ((iVar7 == 0x33aab160) &&
                (uVar5 = (x_118 + -1) * x_118, iVar3 = -0x702f117b, local_70 = param_1,
                y_119 < 10 == ((uVar5 & 1) == 0) && ((uint)(9 < y_119) | uVar5 & 1) == 1)) {
          iVar3 = -0xc555be0;
        }
        goto LAB_00114a00;
      }
      iVar3 = 0x5078fa15;
      if (iVar7 == 0x4776fa97) goto LAB_00114a00;
      if (iVar7 == 0x5078fa15) {
        local_71 = '\x01';
        bVar4 = ((x_118 + -1) * x_118 & 1U) == 0;
        iVar3 = -0x6b60fa5;
        if ((y_119 >= 10 || !bVar4) && y_119 < 10 == bVar4) {
          iVar3 = 0x4776fa97;
        }
        goto LAB_00114a00;
      }
      iVar3 = iVar7;
      if (iVar7 != 0x4439abcb) goto LAB_00114a00;
      local_80 = local_70;
      uVar5 = (x_86 + -1) * x_86;
      bVar4 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
      uVar5 = 0x1e124356;
      if ((y_87 >= 10 || !bVar4) && y_87 < 10 == bVar4) {
        uVar5 = 0x2fe376de;
      }
      if (0x1e124355 < uVar5) {
LAB_001146a0:
        if (uVar5 == 0x1e124356) {
          local_a0 = local_80;
          uVar5 = 0x99a7c78e;
        }
        else {
          if (uVar5 != 0x2fe376de) {
            if (uVar5 == 0x5274588f) {
              uVar5 = uVar1;
              local_a0 = param_1;
            }
            goto joined_r0x00114630;
          }
          iVar3 = -0x1bbb5e84;
LAB_00114750:
          iVar7 = iVar3;
          iVar3 = iVar7;
          if (iVar7 < -0x6b60fa5) {
            if (iVar7 < -0x1bbb5e84) {
              if (iVar7 != -0x735be896) {
                if (iVar7 == -0x702f117b) {
                  uVar5 = (x_118 + -1) * x_118 & 1;
                  iVar3 = 0x4439abcb;
                  if (9 < y_119 == uVar5 && (9 < y_119 | uVar5) == 1) {
                    iVar3 = -0xc555be0;
                  }
                }
                else if (iVar7 == -0x2781ff9f) {
                  iVar3 = -0x735be896;
                }
                goto LAB_00114750;
              }
            }
            else {
              iVar3 = -0x15a1f046;
              if (iVar7 == -0x1bbb5e84) goto LAB_00114750;
              if (iVar7 != -0x15a1f046) {
                iVar3 = iVar7;
                if (iVar7 == -0xc555be0) {
                  iVar3 = -0x702f117b;
                }
                goto LAB_00114750;
              }
            }
            memcpy(param_1,param_2,param_3);
            iVar3 = 0x33aab160;
            goto LAB_00114750;
          }
          if (iVar7 < 0x4439abcb) {
            if (iVar7 == -0x6b60fa5) {
              iVar3 = -0x15a1f046;
              if (local_71 == '\0') {
                iVar3 = -0x735be896;
              }
            }
            else if (iVar7 == 0xd2b4470) {
              uVar5 = (x_118 + -1) * x_118 & 1;
              iVar3 = 0x5078fa15;
              if (9 < y_119 == uVar5 && (9 < y_119 | uVar5) == 1) {
                iVar3 = 0x4776fa97;
              }
            }
            else if ((iVar7 == 0x33aab160) &&
                    (bVar4 = ((x_118 + -1) * x_118 & 1U) == 0, iVar3 = -0x702f117b,
                    local_70 = param_1, (y_119 >= 10 || !bVar4) && y_119 < 10 == bVar4)) {
              iVar3 = -0xc555be0;
            }
            goto LAB_00114750;
          }
          iVar3 = 0x5078fa15;
          if (iVar7 == 0x4776fa97) goto LAB_00114750;
          if (iVar7 == 0x5078fa15) {
            local_71 = '\x01';
            bVar4 = ((x_118 + -1) * x_118 & 1U) == 0;
            iVar3 = -0x6b60fa5;
            if ((y_119 >= 10 || !bVar4) && y_119 < 10 == bVar4) {
              iVar3 = 0x4776fa97;
            }
            goto LAB_00114750;
          }
          iVar3 = iVar7;
          if (iVar7 != 0x4439abcb) goto LAB_00114750;
          uVar5 = 0x8228e61c;
        }
      }
    }
    if (uVar5 == 0x99a7c78e) {
      if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_a0;
    }
    if ((uVar5 == 0xf6f76d74) &&
       (bVar4 = (~((x_86 + -1) * x_86) | 0xfffffffeU) == 0xffffffff, uVar5 = 0x8228e61c,
       (y_87 >= 10 || !bVar4) && y_87 < 10 == bVar4)) {
      uVar5 = 0x2fe376de;
    }
  } while( true );
}

