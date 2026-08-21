
void png_formatted_warning(undefined8 param_1,char *param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  char local_e8 [192];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
    do {
      if (param_3[uVar3] == '\0') break;
      uVar4 = uVar3 + 1;
      local_e8[uVar3] = param_3[uVar3];
      uVar3 = uVar4;
    } while (uVar4 < 0xbf);
  }
  else {
    uVar4 = 0;
    do {
      cVar6 = *param_3;
      uVar3 = uVar4;
      pcVar8 = param_3;
      if (cVar6 == '@') {
        cVar6 = param_3[1];
        if (cVar6 == '\0') {
          cVar6 = '@';
          goto LAB_00d65f4c;
        }
        pcVar5 = param_2;
        lVar7 = 0;
        do {
          lVar1 = lVar7 + 1;
          pcVar5 = pcVar5 + 0x20;
          if (lVar7 == 9) break;
          pcVar8 = &DAT_018a95bd + lVar7;
          lVar7 = lVar1;
        } while (*pcVar8 != cVar6);
        pcVar8 = param_3 + 1;
        if (7 < (int)lVar1 + -1) goto LAB_00d65f4c;
        if (uVar4 < 0xbf) {
          lVar7 = 0;
          do {
            cVar6 = pcVar5[lVar7 + -0x20];
            if ((pcVar5 <= pcVar5 + lVar7 + -0x20) || (cVar6 == '\0')) {
              uVar3 = uVar4 + lVar7;
              break;
            }
            local_e8[lVar7 + uVar4] = cVar6;
            lVar7 = lVar7 + 1;
            uVar3 = uVar4 + lVar7;
          } while (uVar3 < 0xbf);
        }
        param_3 = param_3 + 2;
      }
      else {
        if (cVar6 == '\0') break;
LAB_00d65f4c:
        local_e8[uVar4] = cVar6;
        uVar3 = uVar4 + 1;
        param_3 = pcVar8 + 1;
      }
      uVar4 = uVar3;
    } while (uVar3 < 0xbf);
  }
  local_e8[uVar3] = '\0';
  png_warning(param_1,local_e8);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

