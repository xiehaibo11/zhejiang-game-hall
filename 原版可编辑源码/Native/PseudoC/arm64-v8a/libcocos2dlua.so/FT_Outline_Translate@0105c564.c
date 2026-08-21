
void FT_Outline_Translate(long param_1,long param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 != 0) {
    sVar2 = *(short *)(param_1 + 2);
    uVar3 = (int)sVar2 - 1;
    if (0 < sVar2) {
      plVar5 = *(long **)(param_1 + 8);
      if ((ulong)uVar3 + 1 < 4) {
        uVar7 = 0;
      }
      else {
        uVar1 = (int)sVar2 & 3;
        lVar8 = ((ulong)uVar3 + 1) - (ulong)uVar1;
        if (lVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if (((~uVar3 & 0xffff) != 0) && (uVar3 >> 0x10 == 0)) {
            lVar4 = lVar8 * 2;
            uVar7 = (uint)lVar8;
            plVar6 = plVar5 + 4;
            do {
              lVar8 = lVar8 + -4;
              plVar6[-4] = plVar6[-4] + param_2;
              plVar6[-3] = plVar6[-3] + param_3;
              plVar6[-2] = plVar6[-2] + param_2;
              plVar6[-1] = plVar6[-1] + param_3;
              *plVar6 = *plVar6 + param_2;
              plVar6[1] = plVar6[1] + param_3;
              plVar6[2] = plVar6[2] + param_2;
              plVar6[3] = plVar6[3] + param_3;
              plVar6 = plVar6 + 8;
            } while (lVar8 != 0);
                    /* catch() { ... } // from try @ 0105c4bc with catch @ 0105c5f4 */
            plVar5 = plVar5 + lVar4;
            if (uVar1 == 0) {
              return;
            }
          }
        }
      }
      do {
        uVar7 = uVar7 + 1;
        *plVar5 = *plVar5 + param_2;
        plVar5[1] = plVar5[1] + param_3;
        plVar5 = plVar5 + 2;
      } while ((int)(uVar7 & 0xffff) < (int)sVar2);
    }
  }
  return;
}

