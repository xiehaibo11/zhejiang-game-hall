
long * FUN_009fe644(long *param_1,char *param_2)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 009fe544 with catch @ 009fe644 */
  if (param_2 == (char *)0x0) {
LAB_009fe6e8:
    plVar9 = (long *)0x0;
  }
  else {
    if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
LAB_009fe6bc:
      plVar8 = (long *)FUN_009feb68(param_1,param_2);
      if (plVar8 == (long *)0x0) goto LAB_009fe6e8;
    }
    else {
      uVar3 = *param_1 - 1;
      uVar7 = uVar3 & (long)param_2 * 0x9e3779b1;
      if ((uVar3 & (long)param_2 * 0x9e3779b1) == 0) {
        uVar7 = 1;
      }
      for (plVar8 = (long *)(param_1[3] + uVar7 * ((ulong)*(uint *)(param_1 + 2) & 0x7fffffff));
          (char *)plVar8[1] != param_2; plVar8 = (long *)((long)plVar8 + *plVar8)) {
        if (*plVar8 == 0) goto LAB_009fe6bc;
      }
      if (plVar8 == (long *)0x0) goto LAB_009fe6bc;
    }
    plVar9 = (long *)plVar8[2];
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)param_1[8];
      if (plVar9 == (long *)0x0) {
        uVar7 = param_1[9];
        plVar9 = malloc(0x1000);
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = 0xff8 / uVar7;
        }
        lVar4 = (uVar3 - 1) * uVar7;
        if (lVar4 != 0) {
          plVar6 = (long *)0;
          do {
            plVar1 = (long *)((long)plVar9 + lVar4);
            lVar4 = lVar4 - uVar7;
            *plVar1 = (long)plVar6;
            plVar6 = plVar1;
          } while (lVar4 != 0);
          param_1[8] = (long)plVar1;
        }
        plVar9[0x1ff] = param_1[7];
        param_1[7] = (long)plVar9;
      }
      else {
        param_1[8] = *plVar9;
      }
      plVar9[9] = 0;
      plVar9[8] = 0;
      plVar9[0xb] = 0;
      plVar9[10] = 0;
      plVar9[5] = 0;
      plVar9[4] = 0;
      plVar9[7] = 0;
      plVar9[6] = 0;
      *(undefined4 *)(plVar9 + 8) = 0x18;
      *(undefined4 *)(plVar9 + 4) = 0x18;
      plVar9[0xe] = 0;
      plVar9[0xd] = 0;
      plVar9[0xc] = 0;
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9[3] = 0;
      plVar9[2] = 0;
      *(undefined4 *)(plVar9 + 0xc) = 0x20;
      *plVar9 = (long)param_2;
      sVar2 = strlen(param_2);
      pcVar5 = param_2 + sVar2;
      do {
        if (pcVar5 <= param_2) {
          if (*pcVar5 != '.') goto LAB_009fe7cc;
          break;
        }
        pcVar5 = pcVar5 + -1;
      } while (*pcVar5 != '.');
      pcVar5 = pcVar5 + 1;
LAB_009fe7cc:
      plVar9[1] = (long)pcVar5;
      plVar8[2] = (long)plVar9;
    }
    else {
      *(uint *)(plVar9 + 0xe) = *(uint *)(plVar9 + 0xe) & 0x7fffffff;
    }
  }
  return plVar9;
}

