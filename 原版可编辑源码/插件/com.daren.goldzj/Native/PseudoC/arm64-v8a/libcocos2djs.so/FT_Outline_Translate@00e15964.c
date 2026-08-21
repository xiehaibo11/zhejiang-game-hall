
void FT_Outline_Translate(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (param_1 != 0) {
    sVar3 = *(short *)(param_1 + 2);
    uVar4 = (int)sVar3 - 1;
    if (0 < sVar3) {
      plVar6 = *(long **)(param_1 + 8);
      uVar1 = (ulong)uVar4 + 1;
      if (uVar1 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (((~uVar4 & 0xffff) != 0) && (uVar4 >> 0x10 == 0)) {
          uVar2 = (int)sVar3 & 3;
          uVar5 = uVar1 - uVar2;
          plVar7 = plVar6 + 4;
          plVar6 = plVar6 + uVar5 * 2;
          lVar8 = ((ulong)uVar4 + 1) - (ulong)uVar2;
          do {
            lVar8 = lVar8 + -4;
            plVar7[-4] = plVar7[-4] + param_2;
            plVar7[-3] = plVar7[-3] + param_3;
            plVar7[-2] = plVar7[-2] + param_2;
            plVar7[-1] = plVar7[-1] + param_3;
            *plVar7 = *plVar7 + param_2;
            plVar7[1] = plVar7[1] + param_3;
            plVar7[2] = plVar7[2] + param_2;
            plVar7[3] = plVar7[3] + param_3;
            plVar7 = plVar7 + 8;
          } while (lVar8 != 0);
          if (uVar2 == 0) {
            return;
          }
        }
      }
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar4;
        *plVar6 = *plVar6 + param_2;
        plVar6[1] = plVar6[1] + param_3;
        plVar6 = plVar6 + 2;
      } while ((int)(uVar4 & 0xffff) < (int)sVar3);
    }
  }
  return;
}

